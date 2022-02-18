from .generators.c_gen import c_gen
from .generators.py_gen import py_gen
from . import sanitized_config as c
from .lib import utils
import pathlib
import sys


def generate_id_includes(network, output_path):
    cgenerated = c_gen.generate_ids_include(network)
    with open(f"{output_path}/{c.C_IDS_INCLUDE}", "w+") as f:
        print(cgenerated, file=f)

    pygenerated = py_gen.generate_ids_include(network)
    with open(f"{output_path}/{c.PY_IDS_INCLUDE}", "w+") as f:
        print(pygenerated, file=f)


def generate_utils_includes(network, output_path):
    cgenerated = c_gen.generate_utils_include(network)
    with open(f"{output_path}/{c.C_UTILS_INCLUDE}", "w+") as f:
        print(cgenerated, file=f)


def generate_canconfig_includes(canconfig, canconfig_version, network_name, output_path):
    cgenerated = c_gen.generate_canconfig_include(canconfig, canconfig_version, network_name)
    with open(f"{output_path}/{c.C_CANCONFIG_INCLUDE}", "w+") as f:
        print(cgenerated, file=f)

    pygenerated = py_gen.generate_canconfig_include(canconfig, canconfig_version)
    with open(f"{output_path}/{c.PY_CANCONFIG_INCLUDE}", "w+") as f:
        print(pygenerated, file=f)
        

def main():
    print("====== includes-generator ======")
    print("")

    networks_dir = utils.read_networks_arg(sys.argv)
    networks = utils.load_networks(networks_dir, c.NETWORK_VALIDATION_SCHEMA, c.NETWORK_IDS_DIR, c.NETWORK_IDS_VALIDATION_SCHEMA)

    print(f"{len(networks)} network(s) loaded\n")

    for n in networks:
        print(f"Generating includes for network {n.name}")
        output_dir = c.OUTPUT_DIR / pathlib.Path(n.name)
        utils.create_subtree(output_dir)

        # IDs & masks
        generate_id_includes(n, output_dir)
        print(f"Generated id includes in {output_dir}")

        # Utils
        generate_utils_includes(n, output_dir)
        print(f"Generated utils includes in {output_dir}")

        # CAN config
        # TODO: generalize n cleanup
        canconfig_path = n.path.parent / "canconfig.json"
        if not canconfig_path.exists():
            continue
        canconfig_file = utils.load_json(canconfig_path, c.CANCONFIG_VALIDATION_SCHEMA)
        canconfig = canconfig_file["canconfig"]
        canconfig_version = float(canconfig_file["canconfig_version"])

        generate_canconfig_includes(canconfig, canconfig_version, n.name, output_dir)
        print(f"Generated canconfig includes in {output_dir}")

        print("")


if __name__ == "__main__":
    main()
