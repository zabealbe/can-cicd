import os
from lib import utils
from schema import Schema
import sanitized_config as c
from generators.gen import Generator
from generators.py_gen.py_gen import Generator as GeneratorPY
from generators.c_gen.c_gen import Generator as GeneratorC

def compile_schema():
    paths = utils.parse_network_multipath(c.SCHEMA_LOCATION)
    
    print("====== Schemas compilation ======")
    for network_name, schema_path in paths.items():
        schema = Schema(schema_path)
        output_file = network_name
        
        if False:
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
            
            c_gen = GeneratorC(
                schema, 
                c.ENDIANNESS, 
                "generators/c_gen/skeleton.h.j2", 
                "generators/c_gen/skeleton.c.j2",
                prefix=network_name
            )
            c_gen.generate(output_path, output_file)
            
            print(f"Compiled schema in C for {network_name} to {output_path}")
            
        print()


if __name__ == "__main__":
    compile_schema()
