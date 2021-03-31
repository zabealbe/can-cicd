import jinja2 as j2
from lib import utils
from generators.gen import Generator as G


class Generator(G):
    def __init__(self, schema, endianness: str, skeleton_file_py: str):
        self.skeleton_file_py = skeleton_file_py
        
        super(Generator, self).__init__(schema, endianness)
        
        # Converting conventional type name to C type name
        """
        for struct in self.schema.get_structs():
            for item_name, item_type in struct["items"].items():
                type_name = self.format_string(item_type)
                struct["items"][item_name] = type_name
        """
        
    def generate_py(self):
        """
        code = ""
        
        for enum_name, enum in self.schema["enums"].items():
            code += f"class {enum_name}(Enum):\n"
            for index, item in enumerate(enum):
                code += f"\t{item} = {index}\n"
            code += "\n\n"

        for struct_name, struct in self.schema["structs"].items():
            code += f"{struct_name} = namedtuple('{struct_name}', '"
            schema = "<" if self.endianness == "little" else ">"
            for index, (field_name, field_type) in enumerate(struct.items()):
                if "struct" in field_type:
                    continue
                code += f"{field_name} "
                schema += self.types[field_type.split(":", 1)[0]][2]()
            code = code[:-1] + "')\n"  # Removing last whitespace
            code += f"{struct_name}_schema = '{schema}'"
            code += "\n\n"
        code += "\n"
        
        with open(self.skeleton_file_py) as f:
            schema_py = f.read().format(code=code.replace("\t", " "*4))
        
        return schema_py

        # def generate_serializer(self):
        for struct_name, struct in self.schema["structs"].items():
            code += f"def serialize_{struct_name}(struct: {struct_name}) -> bytearray:\n"
            code += f"\treturn pack({struct_name}, *tuple(struct))\n"
            code += "\n\n"
        
        # def generate_deserializer(self):
        code = ""
        for struct_name, struct in self.schema["structs"].items():
            code += f"def deserialize_{struct_name}(buffer: bytearray) -> {struct_name}:\n"
            code += f"\treturn {struct_name}._make(unpack({struct_name}_schema, buffer))\n"
            code += "\n\n"
        """    
        
        with open(self.skeleton_file_py, "r") as f:
            skeleton_py = f.read()

        code = j2.Template(skeleton_py).render(
            structs=self.schema.get_structs(),
            enums=self.schema.get_enums(),
            format_string=self.format_string,
            endianness=self.endianness
        )

        return code
    
    def generate(self, output_path: str, filename: str):
        utils.create_subtree(output_path)
        print(output_path)
        with open(f"{output_path}/{filename}.py", "w") as f:
            f.write(self.generate_py())

    @staticmethod
    def format_string(items):
        format = ""
        for item_name, item_type in items.items():
            if item_type == "bool":
                format += "?"
                
            elif item_type == "int8":
                format += "c"
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
                format += "c"
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