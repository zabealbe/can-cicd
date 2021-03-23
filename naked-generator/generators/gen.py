import abc


class Generator(abc.ABC):
    def __init__(self, types, endianness):
        if endianness != "little" and endianness != "big":
            raise ValueError(f"Endianness parameter must be either 'little' or 'big', got {endianness}")
        self.endianness = endianness
        
        self.types = {}
        for type_name, type_tuple in types.items():
            self.types[type_name] = (
                type_tuple[0],
                self.__class__.__dict__[type_tuple[1].__name__].__func__
            )

    def generate_all(self):
        code = self.generate_header() + "\n\n"
        code += self.generate_serializer() + "\n\n"
        code += self.generate_deserializer() + "\n\n"
        if __debug__:
            print(code)
        return code

    @abc.abstractmethod
    def generate_header(self):
        pass

    @abc.abstractmethod
    def generate_serializer(self):
        pass

    @abc.abstractmethod
    def generate_deserializer(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def add_bool(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def add_int8(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def add_int16(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def add_int32(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def add_int64(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def add_uint8(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def add_uint16(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def add_uint32(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def add_uint64(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def add_float32(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def add_float64(self):
        pass

    @staticmethod
    @abc.abstractmethod
    def add_enum(self):
        pass
