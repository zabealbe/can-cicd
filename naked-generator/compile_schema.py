import os
from lib import utils
from config import config as c
from generators.gen import Generator
from generators.py_gen.py_gen import Generator as GeneratorPY
from generators.c_gen.c_gen import Generator as GeneratorC

types = {  # "type": ("bytes_size", "parsing_function")
    "bool": (1, Generator.add_bool),

    "uint8": (1, Generator.add_uint8),
    "uint16": (2, Generator.add_uint16),
    "uint32": (4, Generator.add_uint32),
    "uint64": (8, Generator.add_uint64),

    "int8": (1, Generator.add_int8),
    "int16": (2, Generator.add_int16),
    "int32": (4, Generator.add_int32),
    "int64": (8, Generator.add_int64),

    "float32": (4, Generator.add_float32),
    "float64": (8, Generator.add_float64),

    "enum": (1, Generator.add_enum),
}


def compile_schema():
    paths = utils.parse_network_multipath(c.SCHEMA_LOCATION)
    
    for network_name, schema_path in paths.items():
        schema = utils.load_json(schema_path)
        for file_schema in schema:
            if True:
                # Run for python
                py_gen = GeneratorPY(file_schema, types, c.ENDIANNESS, "generators/py_gen/skeleton.py")
                a = py_gen.generate_all()
    
                output_file = f"{os.path.dirname(schema_path)}/py/naked.py"
                utils.create_subtree(output_file)
                with open(output_file, "w") as f:
                    f.write(a)
    
            if True:
                # Run for c
                c_gen = GeneratorC(file_schema, types, c.ENDIANNESS, "generators/c_gen/skeleton.h", "generators/c_gen/skeleton.c")

                output_file = f"{os.path.dirname(schema_path)}/c/naked.h"
                utils.create_subtree(output_file)
                with open(output_file, "w") as f:
                    f.write(c_gen.generate_h())

                output_file = f"{os.path.dirname(schema_path)}/c/naked.c"
                with open(output_file, "w") as f:
                    f.write(c_gen.generate_c())
            break


if __name__ == "__main__":
    compile_schema()
