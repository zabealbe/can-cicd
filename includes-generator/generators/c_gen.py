from config import config as c


def generate_ids_include(topics, network_version):
    header = ""
    header += "#ifndef {0}_H\n".format(c.C_IDS_INCLUDE.split("/")[-1].split(".")[0].upper())
    header += "#define {0}_H\n\n".format(c.C_IDS_INCLUDE.split("/")[-1].split(".")[0].upper())
    header += "#define NETWORK_VERSION {0:}f\n\n".format(network_version)
    for topic_name, topic in topics.items():
        header += f"/* TOPIC {topic_name} */\n"
        if topic_name != "FIXED_IDS":
            header += f"#define TOPIC_{topic_name}_MASK 0b{0b00000011111:>011b}\n"
            header += f"#define TOPIC_{topic_name}_FILTER 0b{topic['id']:>011b}\n"
        for message_name, message in topic["messages"].items():
            header += f"#define {message_name} 0b{message['id']:>011b}\n"
        header += "\n"
    header += "#endif\n"

    return header


def generate_flatbuf_include(flatbuf_schema):
    output = ""
    return output


def generate_canconfig_include(canconfig, canconfig_version):
    header = ""
    header += "#ifndef {0}_H\n".format(c.C_CANCONFIG_INCLUDE.split("/")[-1].split(".")[0].upper())
    header += "#define {0}_H\n\n".format(c.C_CANCONFIG_INCLUDE.split("/")[-1].split(".")[0].upper())
    header += "#define CANCONFIG_VERSION {0}f\n\n".format(canconfig_version)
    for k, v in canconfig.items():
        if isinstance(v, dict):
            header += "\n"
            for _k, _v in v.items():
                header += f"#define {_k.upper()} {_v}"
                if isinstance(_v, float):
                    header += "f"
                header += "\n"
        else:
            header += f"#define {k.upper()} {v}"
            if isinstance(v, float):
                header += "f"
            header += "\n"
    header += "#endif\n"

    return header
