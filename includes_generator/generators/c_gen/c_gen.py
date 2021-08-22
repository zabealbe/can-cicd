import os
import jinja2 as j2
from lib.network import Network
from config import config as c

__TEMPLATE_IDS_H = os.path.dirname(__file__) + "/ids.h.j2"
__TEMPLATE_UTILS_H = os.path.dirname(__file__) + "/utils.h.j2"

def generate_ids_include(network: Network):
    with open(__TEMPLATE_IDS_H, "r") as f:
        ids_h = f.read()
    
    code = j2.Template(ids_h).render(
        network=network
    )

    return code

def generate_utils_include(network: Network):
    with open(__TEMPLATE_UTILS_H, "r") as f:
        utils_h = f.read()
    
    # Calculate maximum message name length
    msg_name_max_length = 1  # Minimum message name length must be at least 1
    for message_name, _ in network.get_messages().items():
        if len(message_name) > msg_name_max_length:
            msg_name_max_length = len(message_name)

    code = j2.Template(utils_h).render(
        network=network,
        msg_name_max_length=msg_name_max_length
    )

    return code


def generate_canconfig_include(canconfig, canconfig_version, namespace):
    filename = c.C_CANCONFIG_INCLUDE.split("/")[-1].split(".")[0]
    
    header = ""
    header += f"#ifndef {namespace}_{filename.upper()}_H\n"
    header += f"#define {namespace}_{filename.upper()}_H\n\n"
    header += f"#define CANCONFIG_{namespace}_VERSION {canconfig_version}f\n\n"
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
