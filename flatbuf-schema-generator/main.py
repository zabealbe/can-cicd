from lib.network import Network
import config

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
    if not os.path.exists(config.OUTPUT_DIR):
        os.makedirs(config.OUTPUT_DIR)

    if len(sys.argv) < 2:
        print("Please specify one or more network directories")
        exit(1)

    print("====== Networks loading ======")
    network = Network("")
    for a in sys.argv[1:]:
        network.merge_with(Network(a))
    print("")

    schema = ""
    for m in network.get_all_messages():
        schema += "{0}\n".format(get_message_schema(m))

    print("====== Schema generating ======")
    print("Schema generated successfully!")
    print("Saving schema to {0}".format(config.OUTPUT_FILE))
    with open("{0}/{1}".format(config.OUTPUT_DIR, config.OUTPUT_FILE), "w+") as f:
        print(schema, file=f)
    print("====== Done! ======")


if __name__ == "__main__":
    main()
