import random
import sys

from lib.utils import *
import sanitized_config as c
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
puts("Success!\\n\\n");
"""

COMPILE_AND_RUN = """
CURR_DIR=$(pwd)
cd {output_dir}
gcc -std=gnu11 -pedantic $CURR_DIR/{input_file} -o {output_file} {headers} -lm && \\
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
                struct.split(";")

                struct_name = line.replace("} ", "").replace(";", "")
                struct_field_types = [x.split(" ")[0].strip() for x in struct.split(";") if x]
                struct_field_names = [x.split(" ")[1].strip() for x in struct.split(";") if x]
                
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
            format_string += "%f "
        # Float64
        elif "float64" == value:
            format_string += "%d "
        # Enum, Bool, Ints
        else:
            format_string += "%d "
    return format_string.strip()


def generate_read_struct(struct_instance_name, field_names, is_pointer):
    if is_pointer:
        select = "->"
    else:
        select = "."
    
    read_struct = ""
    for field_name in field_names:
        read_struct += f"{struct_instance_name}{select}{field_name}, "
    
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


def main():
    with open("tests/skeleton.c", "r") as f:
        skeleton_c = f.read()
        
    paths = parse_network_multipath(f"{c.OUTPUT_DIR}/[network]")
    for network_name, network_path in paths.items():
        print(f"====== GENERATING C TESTS FOR {network_name}  ======")
        code = ""
        includes = ""

        headers_dir = f"{network_path}/c"
        source_paths = ""

        for header_name in [x for x in os.listdir(headers_dir) if ".h" in x]:
            header_path = f"{headers_dir}/{header_name}"
            include_path = f"../c/{header_name}"
            
            source_paths += include_path.replace(".h", ".c") + " "
            includes += f"#include \"{include_path}\"\n"
                        
            with open(header_path, "r") as h:
                header = h.read()
              
            for struct_name, struct_field_types, struct_field_names in find_structs(header):
                struct_data = generate_struct_values(struct_field_types)
                struct_data = ",".join([str(x) for x in struct_data])
                
                code_t = WRITE_BUFFER.format(
                    struct_name=struct_name,
                    variable_name=struct_name.lower() + "_s",
                    buffer_name=f"buffer_{struct_name.lower()}",
                    struct_data="{" + struct_data + "}",
                    format_string=generate_format_string(struct_field_types),
                    parameters=generate_read_struct(struct_name.lower() + "_s", struct_field_names, False),
                    field_types=struct_field_types
                )
                code_t += READ_BUFFER.format(
                    struct_name=struct_name,
                    buffer_name=f"buffer_{struct_name.lower()}",
                    variable_name=struct_name.lower() + "_d",
                    format_string=generate_format_string(struct_field_types),
                    parameters=generate_read_struct(struct_name.lower() + "_d", struct_field_names, True)
                )
                code_t += COMPARE_BUFFER.format(
                    original_struct=struct_name.lower() + "_s",
                    deserialized_struct=struct_name.lower() + "_d",
                    struct_name=struct_name
                )

                for code_line in code_t.split("\n"):
                    code += f"\t{code_line}\n"            
        
        output_dir = f"{c.OUTPUT_DIR}/{network_name}/tests"
        output_file_path = f"{output_dir}/test_all.c"
        create_subtree(output_dir)
        with open(output_file_path, "w") as output_file:
            output_file.write(skeleton_c.format(includes=includes, code=code.strip()))

        print(f"====== RUNNING C TESTS FOR {network_name}  ======")
        stdout, stderr, err_code = run_command(COMPILE_AND_RUN.format(
            input_file=output_file_path,
            output_dir=output_dir,
            output_file="test_all",
            headers=source_paths))

        print(stdout)
        print(stderr, file=sys.stderr)
        if err_code:
            exit(err_code)
                

if __name__ == "__main__":
    main()
