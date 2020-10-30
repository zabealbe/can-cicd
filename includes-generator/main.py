import os

from lib.utils import *
from cgen import generator as cgen
from pygen import generator as pygen
import config


def generate_id_includes(message_ids, output_file):
    plaintext_file = cgen.generate_ids_include(message_ids)
    with open(output_file, "w+") as f:
        print(plaintext_file, file=f)

    pyoutput = pygen.generate_ids_include(message_ids)


def generate_flatbuf_includes(flatbuf_schema):
    pass


def main():
    paths = parse_network_multipath(config.IDS_FILE)

    for n, path in paths.items():
        ids = load_json(path)
        print("Loaded message ids from {0}".format(path))
        output_path = config.OUTPUT_DIR.replace("[network]", n)
        output_file = "{0}/{1}".format(output_path, config.C_INCLUDE)
        create_file_subtree(output_file)
        generate_id_includes(ids, output_file)
        print("Generated id includes for {0} in {1}\n".format(n, output_path))
    '''
        with open(config.FLATBUF_SCHEMA_FILE) as flatbuf_schema:
            generate_flatbuf_includes(flatbuf_schema)
        print("Loaded flatbuf schema from {0}".format(config.FLATBUF_SCHEMA_FILE))
    '''


if __name__ == "__main__":
    main()
