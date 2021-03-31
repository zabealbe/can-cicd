from lib import utils
from generators.gen import Generator


class Schema:
    def __init__(self, path: str = None, validation_schema: str = None):
        self.types = {  # "type": ("bytes_size", "align to n bytes", "parsing_function")  
            "padding": (1, 1),

            "bool": (1, 1),

            "uint8": (1, 1),
            "uint16": (2, 2),
            "uint32": (4, 4),
            "uint64": (8, 8),

            "int8": (1, 1),
            "int16": (2, 2),
            "int32": (4, 4),
            "int64": (8, 8),

            "float32": (4, 4),
            "float64": (8, 8)
        }
        
        self.path = path

        schema = utils.load_json(self.path, validation_schema)
        
        self.structs = []
        for struct_name, struct_items in schema["structs"].items():
            struct = {
                "name": struct_name,
                "items": struct_items
            }
            self.structs.append(struct)
        
        self.enums = []
        for enum_name, enum_items in schema["enums"].items():
            enum = {
                "name": enum_name,
                "items": enum_items
            }
            self.enums.append(enum)
            self.types[enum_name] = (1, 1)
        
    def get_structs(self):
        return self.structs
        
    def get_enums(self):
        return self.enums
