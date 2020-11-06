from config import config as c


def generate_ids_include(ids):
    header = ""
    header += "#ifndef {0}_H\n".format(c.C_INCLUDE.split("/")[-1].split(".")[0].upper())
    header += "#define {0}_H\n\n".format(c.C_INCLUDE.split("/")[-1].split(".")[0].upper())
    for t in ids:
        header += "/* TOPIC {0} */\n".format(t['topic'])
        header += "#define TOPIC_{0}_MASK {1:>011b}\n".format(t['topic'], 0b00000011111)
        header += "#define TOPIC_{0}_FILTER {1:>011b}\n".format(t['topic'], t['id'])
        for m, mid in t['messages'].items():
            header += "#define {0} {1:>011b}\n".format(m, mid)
        header += "\n"
    header += "#endif\n"

    return header


def generate_flatbuf_include(flatbuf_schema):
    output = ""
    return output
