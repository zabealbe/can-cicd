import abc


class Generator(abc.ABC):
    def __init__(self, types):
        self.types = {}
        for type_name, type_tuple in types.items():
            self.types[type_name] = (
                type_tuple[0],
                self.__class__.__dict__[type_tuple[1].__name__].__func__,
                self.__class__.__dict__[type_tuple[2].__name__].__func__,
            )

    @staticmethod
    @abc.abstractmethod
    def generate_serializer(self):
        """
            DOC
        """

    @staticmethod
    @abc.abstractmethod
    def generate_deserializer(self):
        """
            DOC
        """

    """
        DESERIALIZERS
    """
    @staticmethod
    @abc.abstractmethod
    def deserialize_bool(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def deserialize_int8(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def deserialize_int16(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def deserialize_int32(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def deserialize_int64(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def deserialize_uint8(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def deserialize_uint16(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def deserialize_uint32(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def deserialize_uint64(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def deserialize_float32(self):
        pass

    @abc.abstractmethod
    def deserialize_float64(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def deserialize_enum(self):
        pass

    """
        SERIALIZERS
    """
    @staticmethod
    @abc.abstractmethod
    def serialize_bool(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def serialize_int8(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def serialize_int16(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def serialize_int32(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def serialize_int64(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def serialize_uint8(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def serialize_uint16(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def serialize_uint32(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def serialize_uint64(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def serialize_float32(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def serialize_float64(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def serialize_enum(self):
        pass
