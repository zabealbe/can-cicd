from lib.utils import *
from lib.network import Network
import sanitized_config as c
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


def generate_schema_from_network(network):
    schema = {
        "enums": {},
        "structs": {}
    }
    for topic_name, _ in network.get_topics().items():
        for message_name, message_contents in network.get_messages_by_topic(topic_name).items():
            struct = {}
            for field_name, field in message_contents["contents"].items():
                if isinstance(field, list):
                    if ":" in field_name:  # Named enum
                        enum_name = field_name.split(":")[0].strip().title()
                        field_name = field_name.split(":")[1].strip()
                    else:
                        enum_name = field_name.title()
                    
                    schema["enums"][enum_name] = field
                    field = f"enum:{enum_name}"
                struct[field_name] = field
            if struct:  # Don't allow empty structs
                schema["structs"][message_name] = struct
        
    return schema


def generate_schema():
    print("====== Networks loading ======")
    paths = parse_network_multipath(c.NETWORK_FILE)
    networks = []
    for network_name, path in paths.items():
        if c.MERGE_NETWORKS and networks:
            networks[0].merge_with(
                Network(name=network_name, path=path, network_name=c.NETWORK_FILE_VALIDATION_SCHEMA)
            )
        else:
            networks.append(
                Network(name=network_name, path=path, validation_schema=c.NETWORK_FILE_VALIDATION_SCHEMA)
            )
    print(f"{len(paths.keys())} network(s) loaded\n")

    print("====== Schemas generation ======")
    for network in networks:
        output_path = f"{c.OUTPUT_DIR}/{network.name}"
        output_file_path = f"{output_path}/schema.json"
        schema = generate_schema_from_network(network)
        
        create_subtree(output_path)
        with open(output_file_path, "w") as f:
            json.dump(schema, f, indent=4)
        print(f"Generated schema for {network.name} in {output_file_path}")
    print("")


if __name__ == "__main__":
    generate_schema()


