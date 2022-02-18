import os
from .lib import utils
from .schema import Schema
from . import sanitized_config as c
from .generators.py_gen import py_gen
from .generators.c_gen import c_gen
from .generators.js_gen import js_gen


def compile_schema(schema_path):
    # Load schema
    schema = Schema(schema_path, pack_structs=False)

    file_name = os.path.basename(schema_path).lower()
    output_path = os.path.dirname(schema_path)

    if True:  # Generate python
        output_path_py = os.path.join(output_path, "py")
        py_gen.generate(schema, os.path.join(output_path, "py"), file_name)
        print(f"Compiled schema {schema_path} for Python into {output_path_py}")

    if True:  # Generate c
        output_path_c = os.path.join(output_path, "c")
        c_gen.generate(schema, output_path_c, file_name)
        print(f"Compiled schema {schema_path} for C into {output_path_c}")

    if True:  # Generate js
        output_path_js = os.path.join(output_path, "js")
        js_gen.generate(schema, output_path_js, file_name)
        print(f"Compiled schema {schema_path} for JavaScript into {output_path_js}")

    print("")

def main():
    paths = utils.parse_network_multipath(c.SCHEMA_LOCATION)

    print("====== Schemas compilation ======")
    for _, schema_path in paths.items():
        compile_schema(schema_path)


if __name__ == "__main__":
    main()
