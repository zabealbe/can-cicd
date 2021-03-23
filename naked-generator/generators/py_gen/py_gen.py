from pathlib import Path
from generators.gen import Generator as G


class Generator(G):
    def __init__(self, schema, types, skeleton_file_py: Path):
        self.schema = schema
        self.types = types
        self.skeleton_file_py = skeleton_file_py
        
        super(Generator, self).__init__(types)

    def generate_serializer(self):
        with open(self.skeleton_file_py) as f:
            code = f.read()
        code += "\n\n"
        for struct_name, struct in self.schema["structs"].items():
            code += f"def serialize_{struct_name}(struct: dict) -> bytearray:\n"
            
            for index, (field_name, field_type) in enumerate(struct.items()):
                if "enums" in field_type or "struct" in field_type:
                    continue
                code += "\t" + self.types[field_type][1]().format(index) + "\n"
                print(code)
                
            code += "\tbuffer = bytearray()\n"
            code += "\treturn buffer\n"
            print(code)

    def generate_deserializer(self):
        """
            DOC
        """

    """
        DESERIALIZERS
    """
    @staticmethod
    def deserialize_bool(self):
        pass

    @staticmethod
    def deserialize_int8(self):
        pass

    @staticmethod
    def deserialize_int16(self):
        pass

    @staticmethod
    def deserialize_int32(self):
        pass

    @staticmethod
    def deserialize_int64(self):
        pass

    @staticmethod
    def deserialize_uint8(self):
        pass

    @staticmethod
    def deserialize_uint16(self):
        pass

    @staticmethod
    def deserialize_uint32(self):
        pass

    @staticmethod
    def deserialize_uint64(self):
        pass

    @staticmethod
    def deserialize_float32(self):
        pass

    @staticmethod
    def deserialize_float64(self):
        pass

    @staticmethod
    def deserialize_enum(self):
        pass

    """
        SERIALIZERS
    """
    @staticmethod
    def serialize_bool():
        return f"produce_bool(buffer, struct.values()[{0}])"
        pass

    @staticmethod
    def serialize_int8():
        return f"produce_int8(buffer, struct.values()[{0}])"
        pass

    @staticmethod
    def serialize_int16():
        return f"produce_int16(buffer, struct.values()[{0}])"
        pass

    @staticmethod
    def serialize_int32():
        return f"produce_int32(buffer, struct.values()[{0}])"
        pass

    @staticmethod
    def serialize_int64():
        return f"produce_int64(buffer, struct.values()[{0}])"
        pass

    @staticmethod
    def serialize_uint8():
        return f"produce_uint8(buffer, struct.values()[{0}])"
        pass

    @staticmethod
    def serialize_uint16():
        return f"produce_uint16(buffer, struct.values()[{0}])"
        pass

    @staticmethod
    def serialize_uint32():
        return f"produce_uint32(buffer, struct.values()[{0}])"
        pass

    @staticmethod
    def serialize_uint64():
        return f"produce_uint64(buffer, struct.values()[{0}])"
        pass

    @staticmethod
    def serialize_float32():
        return f"produce_float32(buffer, struct.values()[{0}])"
        pass

    @staticmethod
    def serialize_float64():
        return f"produce_float64(buffer, struct.values()[{0}])"
        pass

    @staticmethod
    def serialize_enum():
        return f"produce_enum(buffer, struct.values()[{0}])"
        pass
