import os
import copy
import random as rd
import schema as s
import jinja2 as j2
from lib import utils
import sanitized_config as c

rd.seed(441285359149401)

__TEMPLATE_C = os.path.dirname(__file__) + "/template.c.j2"
__TEMPLATE_H = os.path.dirname(__file__) + "/template.h.j2"
__TEST_TEMPLATE_C = os.path.dirname(__file__) + "/test_template.c.j2"


def generate(schema, prefix, output_path: str, filename: str):
    """
    Generates the source files in the specified output path
    
    Args:
        schema:
        prefix:
        output_path:
        filename:
    """
    structs, enums = __parse_schema(copy.copy(schema), prefix)
    
    utils.create_subtree(output_path)

    with open(f"{output_path}/{filename}.h", "w") as f:
        f.write(__generate_h(structs, enums, filename))

    with open(f"{output_path}/{filename}.c", "w") as f:
        f.write(__generate_c(structs, enums, filename))
        
    with open(f"{output_path}/test.c", "w") as f:
        f.write(__generate_test_c(structs, enums, filename))


def __generate_h(structs, enums, filename):
    """
    Generates C header file
    """
    endianness_tag = "LITTLE_ENDIAN" if c.IS_LITTLE_ENDIAN else "BIG_ENDIAN"
    with open(__TEMPLATE_H, "r") as f:
        template_h = f.read()

    code = j2.Template(template_h).render(
        structs=structs,
        enums=enums,
        endianness_tag=endianness_tag,
        filename=filename,
        zip=zip,

        c_types=__c_types,
        parameters=__parameters
    )

    return code


def __generate_c(structs, enums, filename):
    """
    Generates C source file
    """
    with open(__TEMPLATE_C, "r") as f:
        template_c = f.read()

    code = j2.Template(template_c).render(
        structs=structs,
        enums=enums,
        filename=filename,
        
        parameters=__parameters,
        fill_padding=__fill_padding,
    )

    return code


def __generate_test_c(structs, enums, filename):
    """
    Generates C source file for tests
    """
    with open(__TEST_TEMPLATE_C, "r") as f:
        test_template_c = f.read()

    code = j2.Template(test_template_c).render(
        structs=structs,
        enums=enums,
        filename=filename,
        
        read_struct=__read_struct,
        format_string=__format_string,
        random_values=__random_values
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
    enums = []
    for type_name, custom_type in schema.get_types().items():
        if isinstance(custom_type, s.Enum):
            custom_type.name = f"{prefix}_{custom_type.name}"
            enums.append(custom_type)

    # Adding fields used for rendering
    structs = []
    for struct in schema.structs:
        struct.name = f"{prefix}_{struct.name}"
        structs.append(struct)
            
    return structs, enums

def __fill_padding(struct):
    new_items = []
    for item_name, _ in struct.fields.items():
        if "padding" in item_name:
            new_items.append("0x00")
        else:
            new_items.append(item_name)
    return new_items

def __parameters(struct):
    return [f"{field_c_type} {field_name}" 
            for field_name, field_c_type 
            in zip(struct.fields.keys(), __c_types(struct)) 
            if "__" != field_name[0:2]]  # skip unused fields such as padding bytes

def __random_values(struct):
    return [str(rd.randrange(*field_type.range, field_type.precision)) if "__" != field_name[0:2] else "0"
            for field_name, field_type 
            in struct.fields.items()]

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
            if size >= 4:
                return "double"  # TODO
            else:
                return "float"
        
    elif isinstance(item_type, s.Enum):
        return item_type.name

def __format_string(struct):
    format_string = ""
    for c_type, type_name in zip(__c_types(struct), struct.fields.keys()):
        if "__" == type_name[0:2]:
            continue
        # Float32
        if "float32" == c_type:
            format_string += "%lf "
        # Float64
        elif "float64" == c_type:
            format_string += "%lf "
        # Ints
        elif "uint" in c_type:
            format_string += "%llu "
        elif "int" in c_type:
            format_string += "%lld "
        # Enum, Bool
        else:
            format_string += "%lld "
    return format_string.strip()

def __read_struct(struct, instance_name="{instance_name}", selector="{selector}"):
    read_fields = []
    for field_name, cast in zip(struct.fields.keys(), __printf_cast(struct)):
        if "__" == field_name[0:2]:
            continue
        read_fields.append(f"{cast}{instance_name}{selector}{field_name}")
    return ", ".join(read_fields)

def __printf_cast(struct):
    return ["(long long int)" if x.range[0] < 0 else "(long long unsigned int)" 
            for _, x 
            in struct.fields.items()]
