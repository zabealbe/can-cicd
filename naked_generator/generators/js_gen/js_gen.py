import os
import copy
from ... import schema as s
import jinja2 as j2
from ...lib import utils
from ... import sanitized_config as c

__TEST_TEMPLATE_JS = os.path.dirname(__file__) + "/template.js.j2"


def generate(schema, output_path: str, filename: str):
    structs, enums, bitsets = __parse_schema(schema)

    utils.create_subtree(output_path)
    with open(f"{output_path}/{filename}.js", "w") as f:
        f.write(__generate_js(structs, enums, bitsets))


def __generate_js(structs, enums, bitsets):
    endianness_tag = "<" if c.IS_LITTLE_ENDIAN else ">"
    with open(__TEST_TEMPLATE_JS, "r") as f:
        skeleton_py = f.read()

    code = j2.Template(skeleton_py).render(
        zip=zip,
        structs=structs,
        enums=enums,
        bitsets=bitsets,
        format_string=__to_schema,
        endianness_tag=endianness_tag,
        fill_padding=__fill_padding,
        js_type_name=__js_type_name,
        ranges=__ranges
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

def __ranges(struct):
    ranges = [(0, 0)]
    for field_name, field_type in struct.fields.items():
        ranges.append((ranges[-1][1], ranges[-1][1]+field_type.size_bytes))
    
    return ranges[1:]

def __js_type_name(item_type):
    if isinstance(item_type, s.Bool):
        return "Bool"

    elif isinstance(item_type, s.Number):
        size = item_type.size_bytes
        if item_type.precision >= 1:  # Integer
            if item_type.range[0] >= 0:  # Unsigned
                if size == 1:
                    return "Uint8"
                elif size == 2:
                    return "Uint16"
                elif size == 4:
                    return "Uint32"
                elif size == 16:
                    return "Uint64"
            else:  # Signed
                if size == 1:
                    return "Int8"
                elif size == 2:
                    return "Int16"
                elif size == 4:
                    return "Int32"
                elif size == 16:
                    return "Int64"
        else:  # Float
            if size == 4:
                return "Float32"
            else:
                return "Float64"

    elif isinstance(item_type, s.Enum):
        return "Int8"

    elif isinstance(item_type, s.BitSet):
        return "Int8"

    elif isinstance(item_type, s.Padding):
        return "UInt8"
