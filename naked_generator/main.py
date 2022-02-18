import sys

from .generate_schema import generate_schema
from .compile_schema import compile_schema
from . import sanitized_config as c
from .lib import utils


def main():
    print("====== naked-generator ======")
    print("")

    networks_dir, output_dir = utils.read_args(sys.argv)
    networks = utils.load_networks(networks_dir, c.NETWORK_VALIDATION_SCHEMA)

    for network in networks:
        output_dir_network = output_dir / network.name

        schema_path = generate_schema(network, output_dir_network)
        compile_schema(schema_path)


if __name__ == "__main__":
    main()
