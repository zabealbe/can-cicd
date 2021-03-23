from lib import utils
from config import config as c
from generators.gen import Generator
from generators.py_gen.py_gen import Generator as GeneratorPY
from generators.c_gen.c_gen import Generator as GeneratorC

types = {  # "type": ("bytes_size", "parsing_function")
    "bool": (1, Generator.add_bool),

    "uint8": (1, Generator.add_uint8),
    "uint16": (2, Generator.add_uint16),
    "uint32": (4, Generator.add_uint32),
    "uint64": (8, Generator.add_uint64),

    "int8": (1, Generator.add_int8),
    "int16": (2, Generator.add_int16),
    "int32": (4, Generator.add_int32),
    "int64": (8, Generator.add_int64),

    "float32": (4, Generator.add_float32),
    "float64": (8, Generator.add_float64),

    "enum": (1, Generator.add_enum),
}


def main():
    # Import schema
    schema = utils.load_json(c.SCHEMA_LOCATION)
    
    for file_schema in schema:
        # Run pygen
        py_gen = GeneratorPY(file_schema, types, c.ENDIANNESS, "generators/py_gen/skeleton.py")
        a = py_gen.generate_all()
        # output s and d to files
        
        """
        # Run cgen
        c_gen = GeneratorC(file_schema, types, "generators/py_gen/skeleton.c", "generators/py_gen/skeleton.h")
        s = c_gen.generate_serializer()
        d = c_gen.generate_deserializer()
        # output s and d to files
        """
        break
        

if __name__ == "__main__":
    main()
