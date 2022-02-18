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


def read_args(argv):
    # TODO: standardize
    if len(argv) != 4 or argv[1] in ["--help", "-h"]:
        raise ValueError("Usage: python3 main.py <networks_path> <ids_path> <output_path>")

    networks_dir = pathlib.Path(argv[1])
    ids_dir = pathlib.Path(argv[2])
    output_dir = pathlib.Path(argv[3])

    if not networks_dir.exists() or not networks_dir.is_dir():
        raise ValueError(f"Path {networks_dir} does not exist or it is not a directory")

    if not ids_dir.exists() or not ids_dir.is_dir():
        raise ValueError(f"Path {ids_dir} does not exist or it is not a directory")

    if output_dir.is_file():
        raise ValueError(f"Path {output_dir} is a file")

    return networks_dir, ids_dir, output_dir


def main():
    print("====== includes-generator ======")
    print("")

    networks_dir, ids_dir, output_dir = read_args(sys.argv)
    networks = utils.load_networks(networks_dir, c.NETWORK_VALIDATION_SCHEMA, ids_dir, c.NETWORK_IDS_VALIDATION_SCHEMA)

    for n in networks:
        print(f"Generating includes for network {n.name}")
        output_dir_network = output_dir / n.name
        utils.create_subtree(output_dir_network)

        # IDs & masks
        generate_id_includes(n, output_dir_network)
        print(f"Generated id includes in {output_dir_network}")

        # Utils
        generate_utils_includes(n, output_dir_network)
        print(f"Generated utils includes in {output_dir_network}")

        # CAN config
        # TODO: generalize n cleanup
        canconfig_path = n.path.parent / "canconfig.json"
        if not canconfig_path.exists():
            continue
        canconfig_file = utils.load_json(canconfig_path, c.CANCONFIG_VALIDATION_SCHEMA)
        canconfig = canconfig_file["canconfig"]
        canconfig_version = float(canconfig_file["canconfig_version"])

        generate_canconfig_includes(canconfig, canconfig_version, n.name, output_dir_network)
        print(f"Generated canconfig includes in {output_dir_network}")

        print("")


if __name__ == "__main__":
    main()
