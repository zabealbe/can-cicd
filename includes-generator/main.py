from lib.utils import *
from cgen import generator as cgen
from pygen import generator as pygen
from config import config as c


def generate_id_includes(message_ids, network_version, output_path):
    cgenerated = cgen.generate_ids_include(message_ids, network_version)
    with open(output_path, "w+") as f:
        print(cgenerated, file=f)

    pygenerated = pygen.generate_ids_include(message_ids, network_version)


def generate_flatbuf_includes(flatbuf_schema):
    pass


def generate_canconfig_includes(canconfig, canconfig_version, output_path):
    cgenerated = cgen.generate_canconfig_include(canconfig, canconfig_version)
    with open(output_path, "w+") as f:
        print(cgenerated, file=f)

    pygenerated = pygen.generate_ids_include(canconfig, canconfig_version)


def main():
    # IDs & masks
    for n, path in parse_network_multipath(c.IDS_FILE).items():
        print(path)
        
        # IDS & masks
        ids_file = load_json(path)
        ids = ids_file["ids"]
        network_version = ids_file["network_version"]
        print(f"Loaded message ids from {path}")
        
        output_path = c.OUTPUT_DIR.replace("[network]", n)
        create_subtree(output_path)
        
        # IDS & masks
        output_ids_file = f"{output_path}/{c.C_IDS_INCLUDE}"
        generate_id_includes(ids, network_version, output_ids_file)
        print(f"Generated id includes for {n} in {output_ids_file}\n")
        
    for n, path in parse_network_multipath(c.CANCONFIG_FILE).items():
        print(path)

        # CAN config
        canconfig_file = load_json(path, c.CANCONFIG_FILE_VALIDATION_SCHEMA)
        canconfig = canconfig_file["canconfig"]
        canconfig_version = canconfig_file["canconfig_version"]
        print(f"Loaded can configuration from {path}")

        output_path = c.OUTPUT_DIR.replace("[network]", n)
        create_subtree(output_path)

        # CAN config
        output_canconfig_file = f"{output_path}/{c.C_CANCONFIG_INCLUDE}"
        generate_canconfig_includes(canconfig, canconfig_version, output_canconfig_file)
        print(f"Generated canconfig includes for {n} in {output_canconfig_file}\n")

    '''
        with open(config.FLATBUF_SCHEMA_FILE) as flatbuf_schema:
            generate_flatbuf_includes(flatbuf_schema)
        print("Loaded flatbuf schema from {0}".format(config.FLATBUF_SCHEMA_FILE))
    '''


if __name__ == "__main__":
    main()
