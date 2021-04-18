import os
import copy
import schema as s
import jinja2 as j2
from lib import utils
import sanitized_config as c

__TEST_TEMPLATE_PY = os.path.dirname(__file__) + "/template.py.j2"


def generate(schema, output_path: str, filename: str):
    structs, enums = __parse_schema(schema)

    utils.create_subtree(output_path)
    print(output_path)
    with open(f"{output_path}/{filename}.py", "w") as f:
        f.write(__generate_py(structs, enums))


def __generate_py(structs, enums):
    endianness_tag = "<" if c.IS_LITTLE_ENDIAN else ">"
    with open(__TEST_TEMPLATE_PY, "r") as f:
        skeleton_py = f.read()

    code = j2.Template(skeleton_py).render(
        structs=structs,
        enums=enums,
        format_string=__to_schema,
        endianness_tag=endianness_tag,
        fill_padding=__fill_padding
    )

    return code


"""
    Utility functions used for template rendering
"""

def __parse_schema(schema):
    """
    Parses generic schema to a more Python friendly one

    The actions performed on the schema are the following:
    - Renaming structs and enums to camel case

    Args:
        schema:

    Returns:
        The structs and other custom types distilled from the schema
    """
    structs = []
    for struct in schema.structs:
        new_struct = copy.deepcopy(struct)
        new_struct.name = utils.to_camel_case(struct.name, "_")
        structs.append(new_struct)

    enums = []
    for type_name, custom_type in schema.get_types().items():
        if isinstance(custom_type, s.Enum):
            enums.append(custom_type)

    return structs, enums


def __fill_padding(items):
    new_items = []
    for item in items:
        if "padding" in item:
            new_items.append("0x00")
        else:
            new_items.append(item)
    return new_items


def __to_schema(items):
    format = ""
    for item_name, item_type in items.items():
        if item_type == "bool":
            format += "?"
            
        elif item_type == "int8":
            format += "b"
        elif item_type == "int16":
            format += "h"
        elif item_type == "int32":
            format += "i"
        elif item_type == "int64":
            format += "q"

        elif item_type == "uint8":
            format += "B"
        elif item_type == "uint16":
            format += "H"
        elif item_type == "uint32":
            format += "I"
        elif item_type == "uint64":
            format += "Q"

        elif item_type == "float32":
            format += "f"
        elif item_type == "float64":
            format += "d"

        elif item_type == "padding":
            format += "c"
        
        else:
            format += "b"
    return format
