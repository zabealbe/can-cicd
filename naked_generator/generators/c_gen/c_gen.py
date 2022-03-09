import os
import copy
import random as rd
from ... import schema as s
import jinja2 as j2
from ...lib import utils
from ... import sanitized_config as c

rd.seed(441285359149401)

__TEMPLATE_C = os.path.dirname(__file__) + "/template.c.j2"
__TEMPLATE_H = os.path.dirname(__file__) + "/template.h.j2"
__TEST_TEMPLATE_C = os.path.dirname(__file__) + "/test_template.c.j2"


def generate(schema, output_path: str, filename: str):
    """
    Generates the source files in the specified output path
    
    Args:
        schema:
        output_path:
        filename:
    """
    structs, enums, bitsets = __parse_schema(copy.copy(schema), prefix=filename)

    utils.create_subtree(output_path)

    with open(f"{output_path}/{filename}.h", "w") as f:
        f.write(__generate_h(structs, enums, bitsets, filename))

    with open(f"{output_path}/{filename}.c", "w") as f:
        f.write(__generate_c(structs, enums, bitsets, filename))

    with open(f"{output_path}/test.c", "w") as f:
        f.write(__generate_test_c(structs, enums, bitsets, filename))


def __generate_h(structs, enums, bitsets, filename):
    """
    Generates C header file
    """
    endianness_tag = "LITTLE_ENDIAN" if c.IS_LITTLE_ENDIAN else "BIG_ENDIAN"
    with open(__TEMPLATE_H, "r") as f:
        template_h = f.read()

    code = j2.Template(template_h).render(
        structs=structs,
        enums=enums,
        bitsets=bitsets,
        endianness_tag=endianness_tag,
        filename=filename,
        zip=zip,

        c_types=__c_types,
        parameters=__parameters
    )

    return code


def __generate_c(structs, enums, bitsets, filename):
    """
    Generates C source file
    """
    with open(__TEMPLATE_C, "r") as f:
        template_c = f.read()

    code = j2.Template(template_c).render(
        structs=structs,
        enums=enums,
        bitsets=bitsets,
        filename=filename,

        parameters=__parameters,
        fill_padding=__fill_padding,
    )

    return code


def __generate_test_c(structs, enums, bitsets, filename):
    """
    Generates C source file for tests
    """
    with open(__TEST_TEMPLATE_C, "r") as f:
        test_template_c = f.read()

    code = j2.Template(test_template_c).render(
        structs=structs,
        enums=enums,
        bitsets=bitsets,
        filename=filename,

        read_struct=__read_struct,
        format_string=__format_string,
        random_values=__random_values,
        fields=__fields
    )

    return code


"""
    Utility functions used for template rendering
"""


def __parse_schema(schema, prefix):
    """
    Parses generic schema to a more C friendly one
    
    The actions performed on the schema are the following:
    - Prefixing structs and enums' name to avoid conflicts with other libraries
    
    Args:
        schema:
        prefix:
        
    Returns:
        The structs and other custom types distilled from the schema
    """
    bitsets = []
    enums = []
    for type_name, custom_type in schema.get_types().items():
        if isinstance(custom_type, s.Enum):
            custom_type.name = f"{prefix}_{custom_type.name}"
            enums.append(custom_type)

        if isinstance(custom_type, s.BitSet):
            custom_type.name = f"{prefix}_{custom_type.name}"
            bitsets.append(custom_type)

    # Adding fields used for rendering
    structs = []
    for struct in schema.structs:
        struct.name = f"{prefix}_{struct.name}"
        structs.append(struct)

    return structs, enums, bitsets


def __fill_padding(struct):
    new_items = []
    for item_name, item_type in struct.fields.items():
        if isinstance(item_type, s.Padding):
            new_items.append("0x00")
        elif isinstance(item_type, s.BitSet):
            new_items.append("{" + ", ".join([f"{item_name}[{i}]" for i in range(0, item_type.size_bytes)]) + "}")
        else:
            new_items.append(item_name)
    return new_items


def __fields(struct):
    return [field_name for field_name, field_type in struct.fields.items() if not isinstance(field_type, s.Padding)]


def __parameters(struct):
    return [f"{field_c_type} {field_name}"
            for (field_name, field_type), field_c_type
            in zip(struct.fields.items(), __c_types(struct))
            if not isinstance(field_type, s.Padding)]  # skip unused fields such as padding bytes


def __random_values(struct):
    values = []
    for field_name, field_type in struct.fields.items():
        if isinstance(field_type, s.Enum):
            values.append(str(rd.randrange(*field_type.range)))
        elif isinstance(field_type, s.BitSet):
            values.append(
                "{" + ", ".join([str(rd.randrange(0, 2 ** 8)) for _ in range(0, field_type.size_bytes)]) + "}")
        elif isinstance(field_type, s.Padding):
            values.append("0")
        else:
            f = 1 / field_type.precision
            values.append(str(rd.randrange(
                field_type.range[0] * f,
                field_type.range[1] * f,
                field_type.precision * f) / f))
    return values


def __c_types(struct):
    return [__c_type_name(field_type) for field_name, field_type in struct.fields.items()]


def __c_type_name(item_type):
    if isinstance(item_type, s.Bool):
        return "bool"

    elif isinstance(item_type, s.Number):
        size = item_type.size_bytes
        number_type = ""
        if item_type.precision >= 1:
            if item_type.range[0] >= 0:
                number_type += "u"
            if size <= 1:
                number_type += "int8"
            elif size <= 2:
                number_type += "int16"
            elif size <= 4:
                number_type += "int32"
            elif size <= 8:
                number_type += "int64"
            return number_type + "_t"
        else:
            if size > 4:
                return "double"  # TODO
            else:
                return "float"

    elif isinstance(item_type, s.Enum):
        return item_type.name

    elif isinstance(item_type, s.BitSet):
        return item_type.name

    elif isinstance(item_type, s.Padding):
        return "uint8_t"


def __format_string(struct):
    format_string = ""
    for field_c_type, (field_name, field_type) in zip(__c_types(struct), struct.fields.items()):
        if isinstance(field_type, s.Padding):
            continue
        elif isinstance(field_type, s.Number):
            # Float32
            if "float32" == field_c_type:
                format_string += "%lf "
            # Float64
            elif "float64" == field_c_type:
                format_string += "%lf "
            # Ints
            elif "uint" in field_c_type:
                format_string += "%llu "
            elif "int" in field_c_type:
                format_string += "%lld "
        elif isinstance(field_type, s.Bool):
            format_string += "%lld "
        elif isinstance(field_type, s.Enum):
            format_string += "%lld "
        elif isinstance(field_type, s.BitSet):
            format_string += ".".join(["%hhx"] * field_type.size_bytes) + " "

    return format_string.strip()


def __read_struct(struct, instance_name="{instance_name}", selector="{selector}", cast=True):
    read_fields = []
    struct_fields = {k: v for k,v in struct.fields.items() if not isinstance(v,s.Padding)}
    for (field_name, field_type), cast in zip(struct_fields.items(), __printf_cast(struct)):    
        if isinstance(field_type, s.Padding):
            continue
        if isinstance(field_type, s.BitSet):
            for i in range(0, field_type.size_bytes):
                read_fields.append(f"{cast}{instance_name}{selector}{field_name}[{i}]")
        else:
            read_fields.append(f"{cast}{instance_name}{selector}{field_name}")
    return ", ".join(read_fields)


def __printf_cast(struct):
    cast_fields = []
    for item_type in struct.fields.values():
        if hasattr(item_type, "range"):
            if item_type.range[0] < 0:
                cast_fields.append("(long long int)")
            else:
                cast_fields.append("(long long unsigned int)")
        elif isinstance(item_type, s.BitSet):  # TODO: support for bitsets longer than 1 byte
            cast_fields.append("(char)")
        elif isinstance(item_type, s.Padding):
            cast_fields.append("(void)")
        else:
            raise NotImplementedError(f"{item_type}")
    return cast_fields
