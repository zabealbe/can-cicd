import pathlib
import random
import sys

from ..lib import utils
from .. import sanitized_config as c
from datetime import datetime

random.seed(datetime.now())

WRITE_BUFFER = """
{struct_name} {variable_name} = {struct_data};
uint8_t* {buffer_name} = (uint8_t*)malloc(sizeof({struct_name}));
serialize_{struct_name}(&{variable_name}, {buffer_name}, sizeof({struct_name}));
printf("{struct_name} {field_types}\\nSerialized\\n\\t{format_string}\\n",{parameters});
"""
READ_BUFFER = """
{struct_name}* {variable_name} = ({struct_name}*)malloc(sizeof({struct_name}));
deserialize_{struct_name}({buffer_name}, sizeof({struct_name}), {variable_name});
printf("Deserialized\\n\\t{format_string}\\n",{parameters});
"""
COMPARE_BUFFER = """
assert(memcmp(&{original_struct}, {deserialized_struct}, sizeof({struct_name})) == 0);
puts("SUCCESS!\\n");
"""

COMPILE_AND_RUN = """
cd {output_dir}
gcc -std=c11 -pedantic -o {output_file} {input_file} {headers} -lm && \\
chmod +x {output_file} && \\
./{output_file}
"""


def generate_data():
    pass


def find_structs(header_file):
    structs = []
    
    inside_struct = False
    struct = ""
    for line in header_file.split("\n"):
        if "typedef struct" in line:
            inside_struct = True
            continue

        if inside_struct:
            if "}" in line:
                struct_name = line.replace("} ", "").replace(";", "")
                struct_field_types = [x.strip().split(" ")[0].strip() for x in struct.split(";") if x]
                struct_field_names = [x.strip().split(" ")[1].strip() for x in struct.split(";") if x]
                
                structs.append((struct_name, struct_field_types, struct_field_names))
                # Clean
                inside_struct = False
                struct = ""
            else:
                struct += line
    return structs


def generate_format_string(field_types):
    format_string = ""
    for value in field_types:
        # Float32
        if "float32" == value:
            format_string += "%lf "
        # Float64
        elif "float64" == value:
            format_string += "%lf "
        # Ints
        elif "uint" in value:
            format_string += "%llu "
        elif "int" in value:
            format_string += "%lld "
        # Enum, Bool
        else:
            format_string += "%lld "
    return format_string.strip()


def generate_read_struct(struct_instance_name, field_names, field_types, is_pointer):
    if is_pointer:
        select = "->"
    else:
        select = "."
    
    read_struct = ""
    for field_name, field_type in zip(field_names, field_types):
        if field_type in ["uint8_t", "uint16_t", "uint32_t", "uint64_t"]:
            cast = "(long long unsigned int)"
        elif field_type in ["int8_t", "int16_t", "int32_t", "int64_t"]:
            cast = "(long long int)"
        elif field_type in ["float32", "float64"]:
            cast = "(double)"
        else:
            cast = "(long long int)"
        read_struct += f"{cast}{struct_instance_name}{select}{field_name}, "
    return read_struct[:-2]  # Remove last comma


def generate_struct_values(field_types):
    values = []
    for value in field_types:
        # Unsigned
        if "uint8_t" == value:
            values.append(random.randint(0, 2**8-1))
        elif "uint16_t" == value:
            values.append(random.randint(0, 2**16-1))
        elif "uint32_t" == value:
            values.append(random.randint(0, 2**32-1))
        elif "uint64_t" == value:
            values.append(random.randint(0, 2**64-1))
        # Signed
        elif "int8_t" == value:
            values.append(random.randint(-(2**4-1), 2**4-1))
        elif "int16_t" == value:
            values.append(random.randint(-(2**8-1), 2**8-1))
        elif "int32_t" == value:
            values.append(random.randint(-(2**16-1), 2**32-1))
        elif "int64_t" == value:
            values.append(random.randint(-(2**32-1), 2**32-1))
        # Float
        elif "float32" == value:
            values.append(2/(1+random.randint(0, 2**23-1))*2**random.randint(-126, 127))  # float32
        elif "float64" == value:
            values.append(2/(1+random.randint(0, 2**23-1))*2**random.randint(-126, 127))  # float32
        # Bool
        elif "bool" == value:
            values.append(random.randint(0, 1))
        # Enum
        else:
            values.append(random.randint(0, 2**4-1))
    return values


def read_args(argv):
    # TODO: standardize
    if len(argv) != 3 or argv[1] in ["--help", "-h"]:
        raise ValueError("Usage: python3 main.py <naked_generator_output_dir> <output_path>")

    naked_generator_output_dir = pathlib.Path(argv[1])
    output_dir = pathlib.Path(argv[2])

    if not naked_generator_output_dir.exists() or not naked_generator_output_dir.is_dir():
        raise ValueError(f"Path {naked_generator_output_dir} does not exist or it is not a directory")

    if output_dir.is_file():
        raise ValueError(f"Path {output_dir} is a file")

    return naked_generator_output_dir, output_dir


def main():
    # TODO: use template
    #with open("tests/skeleton.c", "r") as f:
    #    skeleton_c = f.read()

    naked_generator_output_dir, output_dir = read_args(sys.argv)

    paths = utils.parse_network_multipath(f"{naked_generator_output_dir}/[network]")
    for network_name, network_path in paths.items():
        includes = ""

        headers_dir = network_path / "c"
        source_paths = ""

        for header_name in headers_dir.iterdir():
            if header_name.suffix != ".h":
                continue
            include_path = header_name.name.replace(".h", ".c")

            source_paths += include_path + " "
            includes += f"#include \"{include_path}\"\n"

        output_dir = naked_generator_output_dir / network_name / "c"
        output_file_name = "test.c"
        utils.create_subtree(output_dir)

        print(f"====== RUNNING C TESTS FOR {network_name}  ======")
        stdout, stderr, err_code = utils.run_command(COMPILE_AND_RUN.format(
            input_file=output_file_name,
            output_dir=output_dir.absolute(),
            output_file="test",
            headers=source_paths),
            verbose=True
        )

        print(stdout.strip())
        print(stderr, file=sys.stderr)
        if err_code:
            exit(err_code)
        print(f"DONE\n\n")


if __name__ == "__main__":
    main()
