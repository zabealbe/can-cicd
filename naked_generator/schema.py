from lib import utils
from lib.logger import Logger
import math
import abc

"""
    struct format = {
        "name": "struct_name",
        "fields": {
            "field_name": "field_type",
            ...
        }
        ...
    }
    
    enum format = {
        "name": "enum_name",
        "items": [ITEM_NAME, ...]
    }
"""

"""
    There is only 1 instance per type, if you modify a type, e.g. the name, the change will propagate
"""
types = {}

class Schema:
    def __init__(self, path: str = None, validation_schema: str = None, pack_structs: bool = False):
        global types
        types = {
            "padding": Padding(),
        
            "bool": Bool(),
        
            "uint8": Number((0, 2 ** 8 - 1), 1),
            "uint16": Number((0, 2 ** 16 - 1), 1),
            "uint32": Number((0, 2 ** 32 - 1), 1),
            "uint64": Number((0, 2 ** 64 - 1), 1),
        
            "int8": Number((-2 ** 4, 2 ** 4 - 1), 1),
            "int16": Number((-2 ** 8, 2 ** 8 - 1), 1),
            "int32": Number((-2 ** 16, 2 ** 16 - 1), 1),
            "int64": Number((-2 ** 32, 2 ** 32 - 1), 1),
        
            "float32": Number((-2 ** 32, 2 ** 32 - 1), 0.001),
            "float64": Number((-2 ** 32, 2 ** 32 - 1), 0.001)
        }
        with Logger.push_context(f"In file {path}\n\t{{message}}"):
            self.path = path
            schema = utils.load_json(self.path, validation_schema)
            
            for type_name, custom_type in schema["types"].items():
                with Logger.push_context(f"{type_name}: {{message}}"):
                    type_class = custom_type["type"]
        
                    if type_class == "number":
                        range = (-1, 1)
                        scale = 0.1
                        types[type_name] = Number(range, scale)
                    elif type_class == "enum":
                        items = custom_type["items"]
                        types[type_name] = Enum(type_name, items)
                    elif type_class == "bitset":
                        items = custom_type["items"]
                        types[type_name] = BitSet(type_name, items)
                    
            self.__structs = []
            for struct_name, struct_fields in schema["structs"].items():  
                self.__structs.append(Struct(struct_name, struct_fields, fill=not pack_structs))
        
    @property
    def structs(self):
        return self.__structs   
    
    def get_types(self):
        return types
    

class Type(abc.ABC):
    def __init__(self, size_bytes, size_bytes_packed, size_bits, alignment):
        """
            size = size in bits
            size_packed = minimal size in bits
            alignment = align to n bytes
        """
        
        self.size_bytes = size_bytes
        self.size_bytes_packed = size_bytes_packed
        self.size_bits = size_bits
        self.alignment = alignment

    
class Struct(Type):
    def __init__(self, name, fields, fill=False):
        """
            name = struct name
            fields = {
                field name: Type,
                ...
                }
            fill = fill the "holes" with padding bytes?
        """
        
        self.name = name
        self.__fields = {}
        for field_name, field_type in fields.items():
            self.__fields[field_name] = types[field_type]

        if fill:
            self.__align()
        else:
            self.is_aligned = False

        size_bytes = 0
        size_bytes_packed = 0
        size_bits = 0
        max_alignment = 0

        for field_name, field_type in self.__fields.items():
            size_bytes += field_type.size_bytes
            size_bytes_packed += field_type.size_bytes_packed
            size_bits += field_type.size_bits
            if field_type.alignment > max_alignment:
                max_alignment = field_type.alignment
                        
        super(Struct, self).__init__(size_bytes, size_bytes_packed, size_bits, max_alignment)

    @property
    def fields(self):
        return self.__fields

    def fill(self):
        """
        Returns a new struct with the "holes" caused by alignment filled with padding bytes
        """
        return Struct(self.name, self.fields, fill=True)

    def __align(self):
        """
        In-place aligning of struct with use of padding
        """
        
        self.__sort()

        size_bytes = 0
        padded_fields = {}
        for field_name, field_type in self.fields.items():
            type_size = field_type.size_bytes
            type_align = field_type.alignment  # type alignment size

            # padding
            padding = (type_size - size_bytes) % type_align
            for i in range(0, padding):
                padded_fields[f"__unused_padding_{size_bytes}"] = types["padding"]
                size_bytes += 1

            size_bytes += type_size  # adding type size
            padded_fields[field_name] = field_type
        self.size_bytes = size_bytes
        self.__fields = padded_fields
        
        self.is_aligned = True
        
    def __sort(self):
        """
        In-place sorting of struct fields based on type size
            struct = [xx x xxxx x xxxx]
            sorted_struct = [x xx xxxx xxxx]
        """
        
        def order_struct(item):
            field_type = item[1]
            type_align = field_type.alignment
            return type_align

        self.__fields = dict(sorted(self.fields.items(), key=order_struct))


class Enum(Type):
    def __init__(self, name, items):
        """
            name = enum name
            items = [ITEM_NAME, ...]
        """

        self.name = name
        self.items = [(item_name, item_index) for item_index, item_name in enumerate(items)]
        self.range = (-128, 127)
        self.precision = 1

        super(Enum, self).__init__(1, 1, 8, 1)

class BitSet(Type):
    def __init__(self, name, items):
        """
            name = enum name
            items = [ITEM_NAME, ...]
        """

        self.name = name
        self.precision = 1
        self.items = [(item_name, item_index) for item_index, item_name in enumerate(items)]
        self.range = (0, 2**len(items)-1)

        size = math.ceil(len(items) / 8)
        super(BitSet, self).__init__(size, size, len(items), 1)

class Number(Type):
    def __init__(self, range, precision):
        """
            range = (min, max)
            precision = minimum increment
        """
        if range[0] >= range[1]:
            Logger.exception(ValueError, "Range lower limit must be smaller than range upper limit")
        
        self.range = range
        self.precision = precision
        self.offset = range[0]
        
        needed_bits = (range[1]-range[0]).bit_length()

        needed_bytes_packed = math.ceil(needed_bits / 8)
        if needed_bytes_packed <= 1:  # 8 bit
            needed_bytes = 1
        elif needed_bytes_packed <= 2:  # 16 bit
            needed_bytes = 2
        elif needed_bytes_packed <= 4:  # 32 bit
            needed_bytes = 4
        elif needed_bytes_packed <= 8:  # 64 bit
            needed_bytes = 8
        else:
            Logger.exception(ValueError, f"Out of range for {range}")
            return
        
        super(Number, self).__init__(needed_bytes, needed_bytes_packed, needed_bits, needed_bytes)

class Padding(Type):
    def __init__(self):
        super(Padding, self).__init__(1, 1, 8, 1)

class Bool(Type):
    def __init__(self):
        """
            range = (min, max)
            precision = minimum increment
        """
        self.range = (0, 1)
        self.precision = 1

        super(Bool, self).__init__(1, 1, 1, 1)
