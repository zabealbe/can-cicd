import pathlib

from .lib import utils
from .schema import Schema
from . import sanitized_config as c
from .generators.py_gen import py_gen
from .generators.c_gen import c_gen
from .generators.js_gen import js_gen


def compile_schema(schema_path: pathlib.Path):
    # Load schema
    schema = Schema(schema_path, pack_structs=False)

    file_name = schema_path.name.lower()
    output_path = schema_path.parent

    if True:  # Generate python
        output_path_py = output_path / "py"
        py_gen.generate(schema, output_path_py, file_name)
        print(f"Compiled schema {schema_path} for Python into {output_path_py}")

    if True:  # Generate c
        output_path_c = output_path / "c"
        c_gen.generate(schema, output_path_c, file_name)
        print(f"Compiled schema {schema_path} for C into {output_path_c}")

    if True:  # Generate js
        output_path_js = output_path / "js"
        js_gen.generate(schema, output_path_js, file_name)
        print(f"Compiled schema {schema_path} for JavaScript into {output_path_js}")

    print("")

# def main():
#    paths = utils.parse_network_multipath(c.SCHEMA_LOCATION)

#    print("====== Schemas compilation ======")
#    for _, schema_path in paths.items():
#        compile_schema(schema_path)


# if __name__ == "__main__":
#    main()
