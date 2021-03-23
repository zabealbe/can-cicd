from pathlib import Path
from generators.gen import Generator as G


class Generator(G):
    def __init__(self, schema, types, endianness: str, skeleton_file_h: Path):
        self.schema = schema
        self.types = types
        self.skeleton_file_py = skeleton_file_h

        super(Generator, self).__init__(types, endianness)

    def generate_header(self):
        with open(self.skeleton_file_py) as f:
            code = f.read()

        for enum_name, enum in self.schema["enums"].items():
            code += "\n"
            code += f"enum {enum_name} {{\n"
            for index, item in enumerate(enum):
                code += f"\t{item},\n"
            code += "};\n"
        
        code += "\n"
        for struct_name, struct in self.schema["structs"].items():
            code += "#pragma pack(1)\n"  # Align to 1 byte
            code += f"struct {struct_name} {{\n"
            for index, (field_name, field) in enumerate(struct.items()):
                if "struct" in field:
                    continue
                
                field = field.split(":", 1)
                type_func = self.types[field[0]][1]
                field_class = type_func() if len(field) == 1 else type_func().format(field[1])
                code += f"\t{field_class} {field_name};\n"
            code += "}\n"

        return code

    def generate_serializer(self):
        code = ""
        for struct_name, struct in self.schema["structs"].items():
            code += f"void serialize_{struct_name}({struct_name}* {struct_name.lower()}, char* buffer, size_t len)) {{\n"
            code += f"\tassert(len >= sizeof(struct {struct_name}));\n"
            code += f"\tbuffer = (char*) {struct_name.lower()};\n"
            code += f"\treturn;\n"
            code += "}\n"
        return code

    def generate_deserializer(self):
        code = ""
        for struct_name, struct in self.schema["structs"].items():
            code += f"void deserialize_{struct_name}(char* buffer, size_t len, {struct_name}* {struct_name.lower()}) {{\n"
            code += f"\tassert(len >= sizeof(struct {struct_name}));\n"
            code += f"\t{struct_name.lower()} = (struct {struct_name}*) buffer;\n"
            code += f"\treturn;\n"
            code += "}\n"
        return code

    @staticmethod
    def add_bool():
        return "bool"

    @staticmethod
    def add_int8():
        return "int8_t"

    @staticmethod
    def add_int16():
        return "int16_t"

    @staticmethod
    def add_int32():
        return "int32_t"

    @staticmethod
    def add_int64():
        return "int64_t"

    @staticmethod
    def add_uint8():
        return "uint8_t"

    @staticmethod
    def add_uint16():
        return "uint16_t"

    @staticmethod
    def add_uint32():
        return "uint32_t"

    @staticmethod
    def add_uint64():
        return "uint64_t"

    @staticmethod
    def add_float32():
        return "float"

    @staticmethod
    def add_float64():
        return "double"

    @staticmethod
    def add_enum():
        return "{0}"
