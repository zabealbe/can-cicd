import os
from lib import utils
import sanitized_config as c
from generators.gen import Generator
from generators.py_gen.py_gen import Generator as GeneratorPY
from generators.c_gen.c_gen import Generator as GeneratorC

"""
This dictionary is used by the generators to call a specific action when one of these types is encountered
"""
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
            output_file = file_schema["output_file"]
            
            if True:
                # Run for python
                py_gen = GeneratorPY(file_schema, types, c.ENDIANNESS, "generators/py_gen/skeleton.py")
                a = py_gen.generate_all()
    
                output_path = f"{os.path.dirname(schema_path)}/py"
                utils.create_subtree(output_path)
                with open(f"{output_path}/{output_file}.py", "w") as f:
                    f.write(a)
    
            if True:
                # Run for c
                output_path = f"{os.path.dirname(schema_path)}/c"
                utils.create_subtree(output_path)
                
                c_gen = GeneratorC(file_schema, types, c.ENDIANNESS, "generators/c_gen/skeleton.h", "generators/c_gen/skeleton.c")
                c_gen.generate(output_path, output_file)


if __name__ == "__main__":
    compile_schema()
