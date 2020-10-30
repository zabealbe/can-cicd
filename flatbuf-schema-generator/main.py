from lib.network import Network
import config
from lib.utils import *

import sys
import os


def get_message_schema(message):
    schema = "struct {0} {{\n".format(message['name'])
    enum = ""
    for item, value in message['contents'].items():
        item = item.lower()
        if isinstance(value, list):
            enum += "\nenum {0} : byte {{ {1} }}\n".format(item.title(), ", ".join(value))
            value = item.title()
        schema += "\t{0}: {1};\n".format(item, value)
    schema += "}"
    schema = enum + schema
    return schema


def main():
    merge_mode = False

    print("====== Networks loading ======")
    paths = parse_network_multipath(config.MESSAGES_FILE)
    networks = []
    for n, path in paths.items():
        if merge_mode and networks:
            networks[0].merge_with(Network(path, n))
        else:
            networks.append(Network(path, n))
        print("Loaded {0}".format(n))
    print("")

    for n in networks:
        schema = ""
        for m in n.get_all_messages():
            schema += "{0}\n".format(get_message_schema(m))

        print("====== Schema generating ======")
        print("Schema generated successfully!")
        output_path = "{0}/{1}/{2}".format(config.OUTPUT_DIR, n.name, config.OUTPUT_FILE)
        print("Saving schema to {0}".format(output_path))
        create_file_subtree(output_path)
        with open(output_path, "w+") as f:
            print(schema, file=f)
        print("====== Done! ======")


if __name__ == "__main__":
    main()
