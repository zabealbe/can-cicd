import json

from lib.network import Network
import config

import sys


def get_message_schema(message):
    schema = "struct {0} {{\n".format(message['name'])
    for item, value in message['contents'].items():
        schema += "\t{0}: {1};\n".format(item, value)
    schema += "}"
    print(schema)
    return schema

def main():
    if len(sys.argv) < 2:
        print("Please specify one or more network directories")
        exit(1)

    print("====== Networks loading ======")
    network = Network("")
    for a in sys.argv[1:]:
        network.merge_with(Network(a))

    print("====== Schema generation ======")
    schema = ""
    for m in network.get_all_messages():
        schema += "{0}\n".format(get_message_schema(m))
    print("")

    print("Saving schema to {0}".format(config.OUTPUT_FILE))
    with open(config.OUTPUT_FILE, "w+") as f:
        print(schema, file=f)
    print("====== Done! ======")



if __name__ == "__main__":
    main()
