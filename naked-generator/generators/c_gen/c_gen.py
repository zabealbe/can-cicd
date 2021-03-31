from generators.gen import Generator as G
from lib import utils
import jinja2 as j2


class Generator(G):
    def __init__(self, schema, endianness: str, skeleton_file_h: str, skeleton_file_c: str, prefix: str = ""):
        self.prefix = prefix
        self.skeleton_file_h = skeleton_file_h
        self.skeleton_file_c = skeleton_file_c

        super(Generator, self).__init__(schema, endianness)
        
        # Converting conventional type name to C type name
        for struct in self.schema.get_structs():
            for item_name, item_type in struct["items"].items():
                type_name = self.format_string(item_type).format(namespace=self.prefix)
                struct["items"][item_name] = type_name
            
    def generate_h(self):
        endianness = "BIG_ENDIAN" if self.endianness == "big" else "LITTLE_ENDIAN"
        with open(self.skeleton_file_h, "r") as f:
            skeleton_h = f.read()
        
        code = j2.Template(skeleton_h).render(
            structs=self.schema.get_structs(),
            enums=self.schema.get_enums(),
            endianness=endianness,
            namespace=self.prefix
        )

        return code

    def generate_c(self, output_file):
        with open(self.skeleton_file_c, "r") as f:
            skeleton_c = f.read()

        code = j2.Template(skeleton_c).render(
            structs=self.schema.get_structs(),
            enums=self.schema.get_enums(),
            namespace=self.prefix,
            filename=output_file
        )

        return code

    def generate(self, output_path: str, filename: str):
        utils.create_subtree(output_path)

        with open(f"{output_path}/{filename}.h", "w") as f:
            f.write(self.generate_h())

        with open(f"{output_path}/{filename}.c", "w") as f:
            f.write(self.generate_c(filename))
    
    @staticmethod
    def format_string(type_name):
        if type_name == "bool":
            return "bool"
        
        if type_name == "int8":
            return "int8_t"
        elif type_name == "int8":
            return "int16_t"
        elif type_name == "int16":
            return "int32_t"
        elif type_name == "int32":
            return "int32_t"
        elif type_name == "int64":
            return "int64_t"
        
        elif type_name == "uint8":
            return "uint8_t"
        elif type_name == "uint16":
            return "uint16_t"
        elif type_name == "uint32":
            return "uint32_t"
        elif type_name == "uint64":
            return "uint64_t"
        
        elif type_name == "float32":
            return "float"
        elif type_name == "float64":
            return "double"
        
        elif type_name == "padding":
            return "int8_t"
        
        else:
            return "{namespace}_" + type_name
