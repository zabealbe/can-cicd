from lib.utils import *
from generators import c_gen
from generators import py_gen
from config import config as c


def generate_id_includes(message_ids, network_version, output_path):
    cgenerated = c_gen.generate_ids_include(message_ids, network_version)
    with open(f"{output_path}{c.C_IDS_INCLUDE}", "w+") as f:
        print(cgenerated, file=f)

    pygenerated = py_gen.generate_ids_include(message_ids, network_version)
    with open(f"{output_path}{c.PY_IDS_INCLUDE}", "w+") as f:
        print(pygenerated, file=f)


def generate_flatbuf_includes(flatbuf_schema):
    pass


def generate_canconfig_includes(canconfig, canconfig_version, output_path):
    cgenerated = c_gen.generate_canconfig_include(canconfig, canconfig_version)
    with open(f"{output_path}{c.C_CANCONFIG_INCLUDE}", "w+") as f:
        print(cgenerated, file=f)

    pygenerated = py_gen.generate_canconfig_include(canconfig, canconfig_version)
    with open(f"{output_path}{c.PY_CANCONFIG_INCLUDE}", "w+") as f:
        print(pygenerated, file=f)
        

def main():
    # Config validity checks
    if c.OUTPUT_DIR[-1] != "/":
        print("OUTPUT_DIR in config.py isn't a valid directory path")
        print("examples:\n\t./path/to/directory/\n\tpath/to/directory/")
        exit(1)

    # IDs & masks
    for network_name, path in parse_network_multipath(c.IDS_FILE).items():
        output_path = c.OUTPUT_DIR.replace("[network]", network_name)
        print(path)
        
        ids_file = load_json(path)
        ids = ids_file["ids"]
        network_version = float(ids_file["network_version"])
        print(f"Loaded message ids from {path}")
        
        create_subtree(output_path)
        
        generate_id_includes(ids, network_version, output_path)
        print(f"Generated id includes in {output_path}\n")

    # CAN config
    for network_name, path in parse_network_multipath(c.CANCONFIG_FILE).items():
        output_path = c.OUTPUT_DIR.replace("[network]", network_name)
        print(path)

        canconfig_file = load_json(path, c.CANCONFIG_FILE_VALIDATION_SCHEMA)
        canconfig = canconfig_file["canconfig"]
        canconfig_version = float(canconfig_file["canconfig_version"])
        print(f"Loaded can configuration from {path}")

        create_subtree(output_path)

        generate_canconfig_includes(canconfig, canconfig_version, output_path)
        print(f"Generated canconfig includes in {output_path}\n")

    '''
        with open(config.FLATBUF_SCHEMA_FILE) as flatbuf_schema:
            generate_flatbuf_includes(flatbuf_schema)
        print("Loaded flatbuf schema from {0}".format(config.FLATBUF_SCHEMA_FILE))
    '''


if __name__ == "__main__":
    main()
