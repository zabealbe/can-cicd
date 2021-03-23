from pathlib import Path
from generators.gen import Generator as G


class Generator(G):
    def __init__(self, schema, types, endianness: str, skeleton_file_py: Path):
        self.schema = schema
        self.types = types
        if endianness != "little" and endianness != "big":
            raise ValueError(f"Endianness parameter must be either 'little' or 'big', got {endianness}")
        self.endianness = endianness
        self.skeleton_file_py = skeleton_file_py
        
        super(Generator, self).__init__(types)
        
    def generate_all(self):
        code = self.generate_header() + "\n\n"
        code += self.generate_serializer() + "\n\n"
        code += self.generate_deserializer() + "\n\n"
        print(code)
        return code
    
    def generate_header(self):
        with open(self.skeleton_file_py) as f:
            code = f.read()
        
        code += "\n"
        for struct_name, struct in self.schema["structs"].items():
            code += f"{struct_name} = namedtuple('{struct_name}', '"
            schema = "<" if self.endianness == "little" else ">"
            for index, (field_name, field_type) in enumerate(struct.items()):
                if "enums" in field_type or "struct" in field_type:
                    continue
                code += f"{field_name} "
                schema += self.types[field_type][1]()
            code = code[:-1] + "')\n"  # Removing last whitespace
            code += f"{struct_name}_schema = '{schema}'"

        return code        

    def generate_serializer(self):
        code = ""
        for struct_name, struct in self.schema["structs"].items():
            code += f"def serialize_{struct_name}(struct: {struct_name}) -> bytearray:\n"
            code += f"\treturn pack({struct_name}, *tuple(struct))\n"
        return code

    def generate_deserializer(self):
        code = ""
        for struct_name, struct in self.schema["structs"].items():
            code += f"def deserialize_{struct_name}(buffer: bytearray) -> {struct_name}:\n"
            code += f"\treturn {struct_name}._make(unpack({struct_name}_schema, buffer))\n"
        return code
    
    @staticmethod
    def add_bool(self):
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
        return ""
