import jinja2 as j2
from lib import utils
from generators.gen import Generator as G


class Generator(G):
    def __init__(self, schema, endianness: str, skeleton_file_py: str):
        self.skeleton_file_py = skeleton_file_py
        
        super(Generator, self).__init__(schema, endianness)
        
    def generate_py(self):
        with open(self.skeleton_file_py, "r") as f:
            skeleton_py = f.read()

        code = j2.Template(skeleton_py).render(
            structs=self.schema.get_structs(),
            enums=self.schema.get_enums(),
            format_string=self.to_schema,
            endianness=self.endianness,
            fill_padding=self.fill_padding
        )

        return code
    
    def generate(self, output_path: str, filename: str):
        utils.create_subtree(output_path)
        print(output_path)
        with open(f"{output_path}/{filename}.py", "w") as f:
            f.write(self.generate_py())

    @staticmethod
    def fill_padding(items):
        new_items = []
        for item in items:
            if "padding" in item:
                new_items.append("0x00")
            else:
                new_items.append(item)
        return new_items
            
    @staticmethod
    def to_schema(items):
        format = ""
        for item_name, item_type in items.items():
            if item_type == "bool":
                format += "?"
                
            elif item_type == "int8":
                format += "b"
            elif item_type == "int16":
                format += "h"
            elif item_type == "int32":
                format += "i"
            elif item_type == "int64":
                format += "q"
    
            elif item_type == "uint8":
                format += "B"
            elif item_type == "uint16":
                format += "H"
            elif item_type == "uint32":
                format += "I"
            elif item_type == "uint64":
                format += "Q"
    
            elif item_type == "float32":
                format += "f"
            elif item_type == "float64":
                format += "d"
    
            elif item_type == "padding":
                format += "c"
            
            else:
                format += "b"
        print(items, format)
        return format
    """
    @staticmethod
    def add_padding():
        return "PADDING"
    
    @staticmethod
    def add_bool():
        return "?"

    @staticmethod
    def add_int8():
        return "c"

    @staticmethod
    def add_int16():
        return "h"

    @staticmethod
    def add_int32():
        return "i"

    @staticmethod
    def add_int64():
        return "q"

    @staticmethod
    def add_uint8():
        return "B"

    @staticmethod
    def add_uint16():
        return "H"

    @staticmethod
    def add_uint32():
        return "I"

    @staticmethod
    def add_uint64():
        return "Q"

    @staticmethod
    def add_float32():
        return "f"

    @staticmethod
    def add_float64():
        return "d"

    @staticmethod
    def add_enum():
        return "c"
    """