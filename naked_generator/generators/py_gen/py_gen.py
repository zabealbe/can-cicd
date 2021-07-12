import os
import copy
import schema as s
import jinja2 as j2
from lib import utils
import sanitized_config as c

__TEST_TEMPLATE_PY = os.path.dirname(__file__) + "/template.py.j2"


def generate(schema, output_path: str, filename: str):
    structs, enums, bitsets = __parse_schema(schema)

    utils.create_subtree(output_path)
    print(output_path)
    with open(f"{output_path}/{filename}.py", "w") as f:
        f.write(__generate_py(structs, enums, bitsets))


def __generate_py(structs, enums, bitsets):
    endianness_tag = "<" if c.IS_LITTLE_ENDIAN else ">"
    with open(__TEST_TEMPLATE_PY, "r") as f:
        skeleton_py = f.read()

    code = j2.Template(skeleton_py).render(
        structs=structs,
        enums=enums,
        bitsets=bitsets,
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
    bitsets = []
    for type_name, custom_type in schema.get_types().items():
        if isinstance(custom_type, s.Enum):
            enums.append(custom_type)

        if isinstance(custom_type, s.BitSet):
            bitsets.append(custom_type)
            
    return structs, enums, bitsets


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
        size = item_type.size_bytes
        if isinstance(item_type, s.Bool):
            format += "b"
        elif isinstance(item_type, s.Number) or isinstance(item_type, s.Enum) or isinstance(item_type, s.BitSet):
            if item_type.precision >= 1:
                if item_type.range[0] >= 0:
                    if size <= 1:
                        format += "b"
                    elif size <= 2:
                        format += "h"
                    elif size <= 4:
                        format += "i"
                    elif size <= 8:
                        format += "q"
                else:
                    if size <= 1:
                        format += "B"
                    elif size <= 2:
                        format += "H"
                    elif size <= 4:
                        format += "I"
                    elif size <= 8:
                        format += "Q"
            else:
                if size >= 4:
                    format += "d"
                else:
                    format += "f"
        elif isinstance(item_type, s.Padding):
            format += "c"
        else:
            # TODO: handle better
            raise NotImplementedError("Can't convert {item_type} to format for python's pack unpack functions")
    return format
