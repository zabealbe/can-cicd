from config import config as c


def generate_ids_include(ids, network_version):
    header = ""
    header += "NETWORK_VERSION = {0}\n\n".format(network_version)
    for topic_name, topic in ids.items():
        header += f"# TOPIC {topic_name}\n"
        if topic_name != "FIXED_IDS":
            header += f"TOPIC_{topic_name}_MASK = 0b{0b00000011111:>011b}\n"
            header += f"TOPIC_{topic_name}_FILTER = 0b{topic['id']:>011b}\n"
        for message_name, message in topic["messages"].items():
            header += "{0} = 0b{1:>011b}\n".format(message_name, message["id"])
        header += "\n"

    return header


def generate_flatbuf_include(flatbuf_schema):
    output = ""
    return output


def generate_canconfig_include(canconfig, canconfig_version):
    header = ""
    header += "CANCONFIG_VERSION = {0}\n\n".format(canconfig_version)
    for k, v in canconfig.items():
        if isinstance(v, dict):
            header += "\n"
            for _k, _v in v.items():
                header += f"{_k.upper()} = {_v}"
                header += "\n"
        else:
            header += f"{k.upper()} = {v}\n"

    return header