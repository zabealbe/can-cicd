import os
from lib import utils
from schema import Schema
import sanitized_config as c
from generators.py_gen import py_gen
from generators.c_gen import c_gen
from generators.js_gen import js_gen

def compile_schema():
    paths = utils.parse_network_multipath(c.SCHEMA_LOCATION)
    
    print("====== Schemas compilation ======")
    for network_name, schema_path in paths.items():
        schema = Schema(schema_path, pack_structs=False)
        output_file = network_name
        
        if True:
            # Run for python
            output_path = f"{os.path.dirname(schema_path)}/py"
            
            py_gen.generate(schema, output_path, output_file)

            print(f"Compiled schema in Python for {network_name} to {output_path}")

        if True:
            # Run for c
            output_path = f"{os.path.dirname(schema_path)}/c"

            c_gen.generate(schema, network_name, output_path, output_file)

            print(f"Compiled schema in C for {network_name} to {output_path}")

        if True:
            # Run for js
            output_path = f"{os.path.dirname(schema_path)}/js"

            js_gen.generate(schema, output_path, output_file)

            print(f"Compiled schema in C for {network_name} to {output_path}")
            
        print()


if __name__ == "__main__":
    compile_schema()
