import os
from lib import utils
import sanitized_config as c
from generators.gen import Generator
from generators.py_gen.py_gen import Generator as GeneratorPY
from generators.c_gen.c_gen import Generator as GeneratorC

"""
This dictionary is used by the generators to call a specific action when one of these types is encountered
"""
types = {  # "type": ("bytes_size", "align to n bytes", "parsing_function")  
    "padding": (1, 1, Generator.add_padding),

    "bool": (1, 1, Generator.add_bool),
    
    "uint8": (1, 1, Generator.add_uint8),
    "uint16": (2, 2, Generator.add_uint16),
    "uint32": (4, 4, Generator.add_uint32),
    "uint64": (8, 8, Generator.add_uint64),

    "int8": (1, 1, Generator.add_int8),
    "int16": (2, 2, Generator.add_int16),
    "int32": (4, 4, Generator.add_int32),
    "int64": (8, 8, Generator.add_int64),

    "float32": (4, 4, Generator.add_float32),
    "float64": (8, 8, Generator.add_float64),

    "enum": (1, 1, Generator.add_enum)
}


def compile_schema():
    paths = utils.parse_network_multipath(c.SCHEMA_LOCATION)
    
    print("====== Schemas compilation ======")
    for network_name, schema_path in paths.items():
        schema = utils.load_json(schema_path)
        output_file = network_name
        
        if True:
            # Run for python
            py_gen = GeneratorPY(schema, types, c.ENDIANNESS, "generators/py_gen/skeleton.py")
            a = py_gen.generate_all()

            output_path = f"{os.path.dirname(schema_path)}/py"
            output_file_path = f"{output_path}/{output_file}.py"
            utils.create_subtree(output_path)
            with open(output_file_path, "w") as f:
                f.write(a)
            print(f"Compiled schema in Python for {network_name} to {output_path}")            
            
        if True:
            # Run for c
            output_path = f"{os.path.dirname(schema_path)}/c"
            utils.create_subtree(output_path)
            
            c_gen = GeneratorC(schema, types, c.ENDIANNESS, "generators/c_gen/skeleton.h", "generators/c_gen/skeleton.c")
            c_gen.generate(output_path, output_file)
            
            print(f"Compiled schema in C for {network_name} to {output_path}")
            
        print()


if __name__ == "__main__":
    compile_schema()
