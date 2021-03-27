import abc


class Generator(abc.ABC):
    def __init__(self, schema, types, endianness):
        self.schema = schema
        
        if endianness != "little" and endianness != "big":
            raise ValueError(f"Endianness parameter must be either 'little' or 'big', got {endianness}")
        self.endianness = endianness
        
        self.types = {}
        for type_name, type_tuple in types.items():
            self.types[type_name] = (
                type_tuple[0],
                type_tuple[1],
                self.__class__.__dict__[type_tuple[2].__name__].__func__
            )
        
        # Ordering struct fields by alignment size
        for struct_name, struct_contents in self.schema["structs"].items():
            sorted_struct = dict(self.sorted_alignment(struct_contents.items()))

            struct_size = 0
            padded_struct = {}
            for field_name, field in sorted_struct.items():
                type_name = field.split(":", 1)[0]
                type_size = self.types[type_name][0]
                type_align = self.types[type_name][1]  # type alignment
                
                # Aligning
                padding = (type_size - struct_size) % type_align
                for i in range(0, padding):
                    padded_struct[f"__unused_padding_{struct_size}"] = f"padding:{padding}"
                    struct_size += 1
                
                struct_size += type_size  # adding type size
                padded_struct[field_name] = field
                
            self.schema["structs"][struct_name] = padded_struct

    def sorted_alignment(self, items):
        """
        Orders struct fields based on type alignment
        items = [(field_name, field_type),...]
        """

        def order_struct(item):
            type_name = item[1].split(":")[0]
            type_align = self.types[type_name][1]
            return type_align

        return sorted(items, key=order_struct)

    @staticmethod
    @abc.abstractmethod
    def add_padding(self):
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
