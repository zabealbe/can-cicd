from lib.network import Network
from config import config as c


def generate_ids_include(network: Network):
    filename = c.C_IDS_INCLUDE.split("/")[-1].split(".")[0]
    
    header = ""
    header += f"#ifndef {network.name}_{filename.upper()}_H\n"
    header += f"#define {network.name}_{filename.upper()}_H\n\n"
    header += f"#define NETWORK_{network.name}_VERSION {network.version}f\n\n"
    for topic_name, topic_id in network.get_topics().items():
        topic_messages = network.get_messages_by_topic(topic_name)
        header += f"/* TOPIC {topic_name} */\n"
        if topic_id is not None:
            header += f"#define TOPIC_{topic_name}_MASK 0b{0b00000011111:>011b}\n"
            header += f"#define TOPIC_{topic_name}_FILTER 0b{topic_id:>011b}\n"
        for message_name, message_contents in topic_messages.items():
            if "description" in message_contents:
                header += "/*\n"
                for line in message_contents["description"].split("\n"):
                    header += f"* {line}\n"
                header += "*/\n"
            header += f"#define ID_{message_name} 0b{message_contents['id']:>011b}\n"
        header += "\n"
    header += "#endif\n"

    return header


def generate_flatbuf_include(flatbuf_schema):
    output = ""
    return output


def generate_canconfig_include(canconfig, canconfig_version, namespace):
    filename = c.C_CANCONFIG_INCLUDE.split("/")[-1].split(".")[0]
    
    header = ""
    header += f"#ifndef {namespace}_{filename.upper()}_H\n"
    header += f"#define {namespace}_{filename.upper()}_H\n\n"
    header += f"#define CANCONFIG_VERSION {canconfig_version}f\n\n"
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
