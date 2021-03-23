import abc


class Generator(abc.ABC):
    def __init__(self, types):
        self.types = {}
        for type_name, type_tuple in types.items():
            self.types[type_name] = (
                type_tuple[0],
                self.__class__.__dict__[type_tuple[1].__name__].__func__
            )

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
