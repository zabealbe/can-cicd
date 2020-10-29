from lib.utils import *
from cgen import generator as cgen
from pygen import generator as pygen
import config

import os

def generate_id_includes(message_ids):
    coutput = cgen.generate_ids_include(message_ids)
    print("OUT ",coutput)
    with open(config.C_INCLUDE, "w+") as f:
        print(coutput, file=f)
    print("Generated C Header {0}".format(config.C_INCLUDE))

    pyoutput = pygen.generate_ids_include(message_ids)


def generate_flatbuf_includes(flatbuf_schema):
    pass


def main():
    if not os.path.exists(config.OUT_DIR):
        os.makedirs(config.OUT_DIR)

    ids = load_json(config.IDS_FILE)
    print("Loaded message ids from {0}".format(config.IDS_FILE))
    generate_id_includes(ids)


    with open(config.FLATBUF_SCHEMA_FILE) as flatbuf_schema:
        generate_flatbuf_includes(flatbuf_schema)
    print("Loaded flatbuf schema from {0}".format(config.FLATBUF_SCHEMA_FILE))

if __name__ == "__main__":
    main()
