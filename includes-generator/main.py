from lib.utils import *
from cgen import generator as cgen
from pygen import generator as pygen
from config import config as c


def generate_id_includes(message_ids, output_path):
    cgenerated = cgen.generate_ids_include(message_ids)
    with open("{0}/{1}".format(output_path, c.C_INCLUDE), "w+") as f:
        print(cgenerated, file=f)

    pygenerated = pygen.generate_ids_include(message_ids)


def generate_flatbuf_includes(flatbuf_schema):
    pass


def main():
    paths = parse_network_multipath(c.IDS_FILE)

    for n, path in paths.items():
        print(path)
        ids = load_json(path)
        print("Loaded message ids from {0}".format(path))
        output_path = c.OUTPUT_DIR.replace("[network]", n)
        output_file = "{0}/{1}".format(output_path, c.C_INCLUDE)
        create_file_subtree(output_file)
        generate_id_includes(ids, output_path)
        print("Generated id includes for {0} in {1}\n".format(n, output_path))
    '''
        with open(config.FLATBUF_SCHEMA_FILE) as flatbuf_schema:
            generate_flatbuf_includes(flatbuf_schema)
        print("Loaded flatbuf schema from {0}".format(config.FLATBUF_SCHEMA_FILE))
    '''


if __name__ == "__main__":
    main()
