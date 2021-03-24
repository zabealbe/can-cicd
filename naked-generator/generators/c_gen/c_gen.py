from generators.gen import Generator as G
from config import config as c
from pathlib import Path
from lib import utils


class Generator(G):
    def __init__(self, schema, types, endianness: str, skeleton_file_h: Path, skeleton_file_c: Path):
        self.schema = schema
        self.types = types
        self.skeleton_file_h = skeleton_file_h
        self.skeleton_file_c = skeleton_file_c

        super(Generator, self).__init__(types, endianness)

    def generate_h(self, output_file):
        code_h = ""

        """
        Enums
        """
        for enum_name, enum in self.schema["enums"].items():
            code_h += "\n"
            code_h += f"enum {enum_name} __is_packed {{\n"
            for index, item in enumerate(enum):
                code_h += f"\t{enum_name}_{item},\n"
            code_h += f"}};\n"

        """
        Structs
        """
        code_h += "\n"
        for struct_name, struct in self.schema["structs"].items():
            # code_h += "#pragma pack(1)\n"  # Align to 1 byte
            code_h += f"typedef struct __is_packed {{\n"
            for index, (field_name, field) in enumerate(struct.items()):
                if "struct" in field:
                    continue

                field = field.split(":", 1)
                type_func = self.types[field[0]][1]
                field_class = type_func() if len(field) == 1 else type_func().format(field[1])
                code_h += f"\t{field_class} {field_name};\n"
            code_h += f"}} {struct_name};\n\n"

        """
        Serializer
        """
        for struct_name, struct in self.schema["structs"].items():
            code_h += f"void serialize_{struct_name}({struct_name}* {struct_name.lower()}, uint8_t* buffer, size_t buf_len);\n"
        code_h += "\n"
        """
        Deserializer
        """
        for struct_name, struct in self.schema["structs"].items():
            code_h += f"void deserialize_{struct_name}(uint8_t* buffer, size_t buf_len, {struct_name}* {struct_name.lower()});\n"

        """
        Building from skeleton
        """
        endianness = "BIG_ENDIAN" if self.endianness == "big" else "LITTLE_ENDIAN"
        with open(self.skeleton_file_h, "r") as f:
            skeleton_h = f.read().format(code=code_h, endianness=endianness, filename_caps=output_file.upper())

        return skeleton_h

    def generate_c(self, output_file):
        code_c = ""

        """
        Serializer
        """
        for struct_name, struct in self.schema["structs"].items():
            code_c += f"void serialize_{struct_name}({struct_name}* {struct_name.lower()}, uint8_t* buffer, size_t buf_len) {{\n"
            code_c += f"\tassert(buf_len >= sizeof({struct_name}));\n"
            code_c += f"\tmemcpy(buffer, {struct_name.lower()}, sizeof(STEER_STATUS));\n"
            code_c += "}\n"
        code_c += "\n"

        """
        Deserializer
        """
        for struct_name, struct in self.schema["structs"].items():
            code_c += f"void deserialize_{struct_name}(uint8_t* buffer, size_t buf_len, {struct_name}* {struct_name.lower()}) {{\n"
            code_c += f"\tassert(buf_len >= sizeof({struct_name}));\n"
            code_c += f"\tmemcpy({struct_name.lower()}, buffer, sizeof(STEER_STATUS));\n"
            code_c += "}\n"

        """
        Building from skeleton
        """
        with open(self.skeleton_file_c, "r") as f:
            skeleton_c = f.read().format(code=code_c, filename=output_file)

        return skeleton_c

    def generate(self, output_path: str, filename: str):
        utils.create_subtree(output_path)

        with open(f"{output_path}/{filename}.h", "w") as f:
            f.write(self.generate_h(filename))

        with open(f"{output_path}/{filename}.c", "w") as f:
            f.write(self.generate_c(filename))

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
