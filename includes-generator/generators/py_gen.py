from config import config as c


def generate_ids_include(ids, network_version):
    header = ""
    header += "NETWORK_VERSION = {0}\n\n".format(network_version)
    for t in ids:
        header += "# TOPIC {0}\n".format(t['topic'])
        header += "TOPIC_{0}_MASK = 0b{1:>011b}\n".format(t['topic'], 0b00000011111)
        header += "TOPIC_{0}_FILTER = 0b{1:>011b}\n".format(t['topic'], t['id'])
        for m, mid in t['messages'].items():
            header += "ID_{0} = 0b{1:>011b}\n".format(m, mid)
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