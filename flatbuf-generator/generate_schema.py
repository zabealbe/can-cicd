from lib.network import Network
import config
from lib.utils import *


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


def get_schema(messages):
    schema = ""
    for m in messages:
        schema += "{0}\n".format(get_message_schema(m))

    stripped_schema = ""
    enums = {}

    for line in schema.splitlines():  # enums deduplication
        if "enum" not in line:
            stripped_schema += line + "\n"
            continue

        enum_name = line.split(" ")[1]
        enum_body = line.split("{")[1].split("}")[0]
        if enum_name in enums.keys():
            if enum_body != enums[enum_name]:
                raise Exception(
                    "You can't use the same name for different enums:"
                    "\nNAME: {0}\nENUMS:"
                    "\n\t{1}\n\t{2}"
                    .format(enum_name, enum_body, enums[enum_name])
                )
        else:
            enums[enum_name] = enum_body
            stripped_schema += line + "\n"

    return stripped_schema


def main():
    merge_mode = False

    print("====== Networks loading ======")
    paths = parse_network_multipath(config.MESSAGES_FILE)
    networks = []
    for network_name, path in paths.items():
        if merge_mode and networks:
            networks[0].merge_with(Network(path, network_name))
        else:
            networks.append(Network(path, network_name))
        print("Loaded {0}".format(network_name))

    for n in networks:
        schema = get_schema(n.get_all_messages())
        print("")
        print("====== Schema for generating ======")
        print("Schema generated successfully!")
        output_path = config.SCHEMA_FILE.replace("[network]", n.name)
        print("Saving schema to {0}".format(output_path))
        create_file_subtree(output_path)
        with open(output_path, "w+") as f:
            print(schema, file=f)
        print("done.")


if __name__ == "__main__":
    main()
