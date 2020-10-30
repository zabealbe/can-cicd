import errno

from lib.utils import *
from cgen import generator as cgen
from pygen import generator as pygen
import config

import os

#test

def generate_id_includes(message_ids, output_file):
    plaintext_file = cgen.generate_ids_include(message_ids)
    with open(output_file, "w+") as f:
        print(plaintext_file, file=f)

    pyoutput = pygen.generate_ids_include(message_ids)


def generate_flatbuf_includes(flatbuf_schema):
    pass


def parse_network_multipath(multipath):
    paths = {}
    if "[network]" in multipath:
        p = multipath.split("[network]")
        for d in os.scandir(p[0]):
            path = "{0}{1}".format(d.path, p[1])
            if os.path.isfile(path):
                paths[d.name] = path
    else:
        Exception()

    return paths


def main():
    if not os.path.exists(config.OUTPUT_DIR):
        os.makedirs(config.OUTPUT_DIR)

    paths = parse_network_multipath(config.IDS_FILE)

    for n, path in paths.items():
        ids = load_json(path)
        print("Loaded message ids from {0}".format(path))

        output_file = "{0}/{1}/{2}".format(config.OUTPUT_DIR, n, config.C_INCLUDE)
        create_file_subtree(output_file)

        generate_id_includes(ids, output_file)
        print("Generated id includes for network {1}".format(config.C_INCLUDE, n))
    """
        with open(config.FLATBUF_SCHEMA_FILE) as flatbuf_schema:
            generate_flatbuf_includes(flatbuf_schema)
        print("Loaded flatbuf schema from {0}".format(config.FLATBUF_SCHEMA_FILE))
    """

if __name__ == "__main__":
    main()
