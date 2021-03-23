from pathlib import Path
from generators.gen import Generator as G


class Generator(G):
    def __init__(self, schema, types, skeleton_file_c: Path, skeleton_file_h: Path):
        self.schema = schema
        self.types = types
        self.skeleton_file_c = skeleton_file_c
        self.skeleton_file_h = skeleton_file_h

    def generate_serializer(self):
        """
            DOC
        """

    def generate_deserializer(self):
        """
            DOC
        """

    """
        DESERIALIZERS
    """
    def deserialize_bool(self):
        pass

    def deserialize_int8(self):
        pass

    def deserialize_int16(self):
        pass

    def deserialize_int32(self):
        pass

    def deserialize_int64(self):
        pass

    def deserialize_uint8(self):
        pass

    def deserialize_uint16(self):
        pass

    def deserialize_int32(self):
        pass

    def deserialize_int64(self):
        pass

    def deserialize_float32(self):
        pass

    def deserialize_float64(self):
        pass

    def deserialize_enum(self):
        pass

    """
        SERIALIZERS
    """
    def serialize_bool(self):
        pass

    def serialize_int8(self):
        pass

    def serialize_int16(self):
        pass

    def serialize_int32(self):
        pass

    def serialize_int64(self):
        pass

    def serialize_uint8(self):
        pass

    def serialize_uint16(self):
        pass

    def serialize_int32(self):
        pass

    def serialize_int64(self):
        pass

    def serialize_float32(self):
        pass

    def serialize_float64(self):
        pass

    def serialize_enum(self):
        pass