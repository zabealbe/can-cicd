from pathlib import Path
from generators.gen import Generator as G
from enum import Enum


class Generator(G):
    def __init__(self, schema, types, endianness: str, skeleton_file_py: str):
        self.skeleton_file_py = skeleton_file_py
        
        super(Generator, self).__init__(schema, types, endianness)
        
    def generate_header(self):
        code = ""
        for enum_name, enum in self.schema["enums"].items():
            code += f"class {enum_name}(Enum):\n"
            for index, item in enumerate(enum):
                code += f"\t{item} = {index}\n"
            code += "\n\n"

        for struct_name, struct in self.schema["structs"].items():
            code += f"{struct_name} = namedtuple('{struct_name}', '"
            schema = "<" if self.endianness == "little" else ">"
            for index, (field_name, field_type) in enumerate(struct.items()):
                if "struct" in field_type:
                    continue
                code += f"{field_name} "
                schema += self.types[field_type.split(":", 1)[0]][2]()
            code = code[:-1] + "')\n"  # Removing last whitespace
            code += f"{struct_name}_schema = '{schema}'"
            code += "\n\n"
        code += "\n"
        
        with open(self.skeleton_file_py) as f:
            schema_py = f.read().format(code=code)
        
        return schema_py

    def generate_serializer(self):
        code = ""
        for struct_name, struct in self.schema["structs"].items():
            code += f"def serialize_{struct_name}(struct: {struct_name}) -> bytearray:\n"
            code += f"\treturn pack({struct_name}, *tuple(struct))\n"
            code += "\n\n"
        return code

    def generate_deserializer(self):
        code = ""
        for struct_name, struct in self.schema["structs"].items():
            code += f"def deserialize_{struct_name}(buffer: bytearray) -> {struct_name}:\n"
            code += f"\treturn {struct_name}._make(unpack({struct_name}_schema, buffer))\n"
            code += "\n\n"
        return code
    
    def generate_all(self):
        code = self.generate_header()
        code += self.generate_serializer()
        code += self.generate_deserializer()
        return code
    
    @staticmethod
    def add_padding():
        return "PADDING"
    
    @staticmethod
    def add_bool():
        return "?"

    @staticmethod
    def add_int8():
        return "c"

    @staticmethod
    def add_int16():
        return "h"

    @staticmethod
    def add_int32():
        return "i"

    @staticmethod
    def add_int64():
        return "q"

    @staticmethod
    def add_uint8():
        return "B"

    @staticmethod
    def add_uint16():
        return "H"

    @staticmethod
    def add_uint32():
        return "I"

    @staticmethod
    def add_uint64():
        return "Q"

    @staticmethod
    def add_float32():
        return "f"

    @staticmethod
    def add_float64():
        return "d"

    @staticmethod
    def add_enum():
        return "c"
