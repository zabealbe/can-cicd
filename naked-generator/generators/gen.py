import abc
import copy


class Generator(abc.ABC):
    def __init__(self, schema, endianness):
        self.schema = copy.copy(schema)
        
        if endianness != "little" and endianness != "big":
            raise ValueError(f"Endianness parameter must be either 'little' or 'big', got {endianness}")
        self.endianness = endianness
        
        self.types = self.schema.types
        for type_name, type_tuple in self.types.items():
            print("ADDED", type_name, type_tuple)
            self.types[type_name] = (
                type_tuple[0],
                type_tuple[1]
            )
        
        # Ordering struct fields by alignment size
        for struct in self.schema.get_structs():
            struct_items = struct["items"]
            sorted_struct = dict(self.sorted_alignment(struct_items.items()))

            struct_size = 0
            padded_items = {}
            for item_name, item_type in sorted_struct.items():
                type_size = self.types[item_type][0]
                type_align = self.types[item_type][1]  # type alignment
                
                # Aligning
                padding = (type_size - struct_size) % type_align
                for i in range(0, padding):
                    padded_items[f"__unused_padding_{struct_size}"] = "padding"
                    struct_size += 1
                
                struct_size += type_size  # adding type size
                padded_items[item_name] = item_type
            struct["size"] = struct_size
            struct["items"] = padded_items
            
    def sorted_alignment(self, items):
        """
        Orders struct fields based on type alignment
        items = [(field_name, field_type),...]
        """

        def order_struct(item):
            type_name = item[1]
            type_align = self.types[type_name][1]
            return type_align

        return sorted(items, key=order_struct)

    """
    @staticmethod
    @abc.abstractmethod
    def add_padding():
        pass

    @staticmethod
    @abc.abstractmethod
    def add_bool():
        pass

    @staticmethod
    @abc.abstractmethod
    def add_int8():
        pass

    @staticmethod
    @abc.abstractmethod
    def add_int16():
        pass

    @staticmethod
    @abc.abstractmethod
    def add_int32():
        pass

    @staticmethod
    @abc.abstractmethod
    def add_int64():
        pass

    @staticmethod
    @abc.abstractmethod
    def add_uint8():
        pass

    @staticmethod
    @abc.abstractmethod
    def add_uint16():
        pass

    @staticmethod
    @abc.abstractmethod
    def add_uint32():
        pass

    @staticmethod
    @abc.abstractmethod
    def add_uint64():
        pass

    @staticmethod
    @abc.abstractmethod
    def add_float32():
        pass

    @staticmethod
    @abc.abstractmethod
    def add_float64():
        pass

    @staticmethod
    @abc.abstractmethod
    def add_enum():
        pass
    """
