from lib.utils import *
from lib.network import Network
from generators import c_gen
from generators import py_gen
import sanitized_config as c


def generate_id_includes(network, output_path):
    cgenerated = c_gen.generate_ids_include(network)
    with open(f"{output_path}/{c.C_IDS_INCLUDE}", "w+") as f:
        print(cgenerated, file=f)

    pygenerated = py_gen.generate_ids_include(network)
    with open(f"{output_path}/{c.PY_IDS_INCLUDE}", "w+") as f:
        print(pygenerated, file=f)


def generate_flatbuf_includes(flatbuf_schema):
    pass


def generate_canconfig_includes(canconfig, canconfig_version, network_name, output_path):
    cgenerated = c_gen.generate_canconfig_include(canconfig, canconfig_version, network_name)
    with open(f"{output_path}/{c.C_CANCONFIG_INCLUDE}", "w+") as f:
        print(cgenerated, file=f)

    pygenerated = py_gen.generate_canconfig_include(canconfig, canconfig_version)
    with open(f"{output_path}/{c.PY_CANCONFIG_INCLUDE}", "w+") as f:
        print(pygenerated, file=f)
        

def main():
    network_paths = parse_network_multipath(c.NETWORK_FILE)
    paths_ids = parse_network_multipath(c.NETWORK_IDS_FILE)
    paths = [
        (network_name, network_path, paths_ids[network_name]) for network_name, network_path in network_paths.items()
    ]

    merge_networks = c.MERGE_NETWORKS
    networks = []
    for network_name, network_path, ids_path in paths:
        network = Network(name=network_name,
                          path=network_path, validation_schema=c.NETWORK_FILE_VALIDATION_SCHEMA,
                          ids_path=ids_path, ids_validation_schema=c.NETWORK_IDS_FILE_VALIDATION_SCHEMA)

        if merge_networks and networks:
            networks[0].merge_with(network)
        else:
            networks.append(network)
        print(f"Loaded {network_name}")

    print(f"{len(networks)} network(s) loaded")
    
    print("====== Includes generation ======")
    
    # IDs & masks
    for n in networks:
        output_path = c.OUTPUT_DIR.replace("[network]", n.name)
        print(n.path)
        
        create_subtree(output_path)
        
        generate_id_includes(n, output_path)
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

        generate_canconfig_includes(canconfig, canconfig_version, network_name, output_path)
        print(f"Generated canconfig includes in {output_path}\n")

    '''
        with open(config.FLATBUF_SCHEMA_FILE) as flatbuf_schema:
            generate_flatbuf_includes(flatbuf_schema)
        print("Loaded flatbuf schema from {0}".format(config.FLATBUF_SCHEMA_FILE))
    '''


if __name__ == "__main__":
    main()
