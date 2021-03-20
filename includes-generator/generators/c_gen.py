from config import config as c


def generate_ids_include(ids, network_version):
    header = ""
    header += "#ifndef {0}_H\n".format(c.C_IDS_INCLUDE.split("/")[-1].split(".")[0].upper())
    header += "#define {0}_H\n\n".format(c.C_IDS_INCLUDE.split("/")[-1].split(".")[0].upper())
    header += "#define NETWORK_VERSION {0:}f\n\n".format(network_version)
    for t in ids:
        header += "/* TOPIC {0} */\n".format(t['topic'])
        header += "#define TOPIC_{0}_MASK 0b{1:>011b}\n".format(t['topic'], 0b00000011111)
        header += "#define TOPIC_{0}_FILTER 0b{1:>011b}\n".format(t['topic'], t['id'])
        for m, mid in t['messages'].items():
            header += "#define ID_{0} 0b{1:>011b}\n".format(m, mid)
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
