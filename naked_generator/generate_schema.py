import pathlib

from .lib import utils
from . import sanitized_config as c
from .schema import Schema
import json
import sys
import os


def generate_schema_from_network(network):
    schema = {
        "types": {},
        "structs": {}
    }
    for topic_name, _ in network.get_topics().items():
        schema["types"] = network.get_types()
        for message_name, message_contents in network.get_messages_by_topic(topic_name).items():
            struct = {}
            for field_name, field in message_contents["contents"].items():
                if isinstance(field, list):
                    if ":" in field_name:  # Named enum
                        enum_name = field_name.split(":")[0].strip().title()
                        field_name = field_name.split(":")[1].strip()
                    else:
                        enum_name = field_name.title()
                    
                    schema["types"][enum_name] = {
                        "type": "enum",
                        "items": field
                    }
                    field = enum_name
                struct[field_name] = field
            if struct:  # Don't allow empty structs
                schema["structs"][message_name] = struct
        
    return schema


def generate_schema(network, output_path: pathlib.Path):
    output_file_path = output_path / "schema.json"
    schema = generate_schema_from_network(network)

    utils.create_subtree(output_path)
    with open(output_file_path, "w") as f:
        json.dump(schema, f, indent=4)
    print(f"Generated schema for {network.name} in {output_file_path}")

    return output_file_path


def main():
    print("====== Networks loading ======")
    networks_dir = utils.read_networks_arg(sys.argv)
    networks = utils.load_networks(networks_dir, c.NETWORK_VALIDATION_SCHEMA)
    print(f"{len(networks)} network(s) loaded\n")

    print("====== Schemas generation ======")
    for network in networks:
        output_dir = c.OUTPUT_DIR / network.name
        generate_schema(network, output_dir)


if __name__ == "__main__":
    main()


