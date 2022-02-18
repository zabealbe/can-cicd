from .generate_schema import generate_schema
from .compile_schema import compile_schema
from . import sanitized_config as c
from .lib import utils
import sys


def main():
    print("====== naked-generator ======")
    print("")

    networks_dir = utils.read_networks_arg(sys.argv)
    networks = utils.load_networks(networks_dir, c.NETWORK_VALIDATION_SCHEMA)

    for network in networks:
        output_dir = c.OUTPUT_DIR / network.name

        schema_path = generate_schema(network, output_dir)
        compile_schema(schema_path)


if __name__ == "__main__":
    main()
