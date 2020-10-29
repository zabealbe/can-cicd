def generate_ids_include(ids):
    header = ""
    for t in ids:
        header += "/* TOPIC {0} */\n".format(t['topic'])
        header += "#define TOPIC_{0}_MASK {1:>011b}\n".format(t['topic'], 0b00000011111)
        header += "#define TOPIC_{0}_FILTER {1:>011b}\n".format(t['topic'], t['id'])
        for m, mid in t['messages'].items():
            header += "#define {0} {1:>011b}\n".format(m, mid)
        header += "\n"

    return header


def generate_flatbuf_include(flatbuf_schema):
    output = ""
    return  output