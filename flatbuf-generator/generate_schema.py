from lib.network import Network
from lib.utils import *
from config import config as c


def get_message_schema(message_name, message_payload):
    schema = "struct {0} {{\n".format(message_name)
    enum = ""
    payload_size = 0  # in bytes
    for item, value in message_payload.items():
        field_name = item.lower()
        field_value = value
        if isinstance(value, list):  # is enum
            if ":" in field_name:
                enum_name = field_name.split(":")[0].strip().title()
                field_name = field_name.split(":")[1].strip()
            else:
                enum_name = field_name.title()
            field_value = enum_name
            enum += "enum {0} : byte {{ {1} }}\n".format(enum_name, ", ".join(value))

        #  Calculating payload size
        if field_value in c.TYPES_SIZE:
            payload_size += c.TYPES_SIZE[field_value]
        elif isinstance(value, list):  # is enum
            payload_size += c.TYPES_SIZE["enum"]

        schema += "\t{0}: {1};\n".format(field_name, field_value)
    schema += "}"
    schema = enum + schema
    return schema, payload_size


def get_schema(network):
    schema = ""
    for message_name, message_contents in network.get_messages().items():
        if len(message_contents["contents"]) == 0:  # skip empty messages
            continue
        message_schema, payload_size = get_message_schema(message_name, message_contents["contents"])
        assert payload_size <= network.max_payload_size, \
            f"Payload max size of {network.max_payload_size} bytes for network '{network.name}'" \
            f" is exceeded by {message_name}"
        schema += "{0}\n\n".format(message_schema)

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
            networks[0].merge_with(
                Network(name=network_name, path=path, network_name=c.NETWORK_FILE_VALIDATION_SCHEMA)
            )
        else:
            networks.append(
                Network(name=network_name, path=path, validation_schema=c.NETWORK_FILE_VALIDATION_SCHEMA)
            )
        print("Loaded {0}".format(network_name))

    print("{0} network(s) loaded".format(len(networks)))

    print("====== Schema generation ======")
    for n in networks:
        schema = get_schema(n)
        print("Schema for {0} generated successfully!".format(n.name))
        output_file = c.FLATBUF_SCHEMA_FILE.replace("[network]", n.name)
        print("Saving schema to {0}".format(output_file))
        create_subtree(os.path.dirname(output_file))
        with open(output_file, "w+") as f:
            print(schema, file=f)

    print("done.")


if __name__ == "__main__":
    main()
