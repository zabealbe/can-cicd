from lib.network import Network
from lib.utils import *
from config import config as c


def get_message_schema(message):
    schema = "struct {0} {{\n".format(message["name"])
    enum = ""
    for item, value in message["contents"].items():
        field_name = item.lower()
        field_value = value
        if isinstance(value, list):
            if ":" in field_name:
                enum_name = field_name.split(":")[0].strip().title()
                field_name = field_name.split(":")[1].strip()
            else:
                enum_name = field_name.title()
            field_value = enum_name
            enum += "enum {0} : byte {{ {1} }}\n".format(enum_name, ", ".join(value))
        schema += "\t{0}: {1};\n".format(field_name, field_value)
    schema += "}"
    schema = enum + schema
    return schema


def get_schema(messages):
    schema = ""
    for m in messages:
        if len(m["contents"]) == 0:  # skip empty messages
            continue
        schema += "{0}\n\n".format(get_message_schema(m))

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
    merge_networks = c.MERGE_NETWORKS

    print("====== Networks loading ======")
    paths = parse_network_multipath(c.NETWORK_FILE)
    networks = []
    for network_name, path in paths.items():
        if merge_networks and networks:
            networks[0].merge_with(Network(path, network_name))
        else:
            networks.append(Network(path, network_name))
        print("Loaded {0}".format(network_name))

    print("{0} network(s) loaded".format(len(networks)))

    print("====== Schema generation ======")
    for n in networks:
        schema = get_schema(n.get_all_messages())
        print("Schema for {0} generated successfully!".format(n.name))
        output_path = c.FLATBUF_SCHEMA_FILE.replace("[network]", n.name)
        print("Saving schema to {0}".format(output_path))
        create_file_subtree(output_path)
        with open(output_path, "w+") as f:
            print(schema, file=f)

    print("done.")


if __name__ == "__main__":
    main()
