import os
import re 
import csv
import sys
import shutil
import pathlib

from .config import config as c
from .lib import utils


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
    print("====== sheet-generator ======")
    print("")

    networks_dir, ids_dir, output_dir = read_args(sys.argv)
    networks = utils.load_networks(networks_dir, c.NETWORK_VALIDATION_SCHEMA, ids_dir, c.NETWORK_IDS_VALIDATION_SCHEMA)

    # Clean previous build
    if output_dir.exists():
        shutil.rmtree(output_dir)
    utils.create_subtree(output_dir)

    columns = c.COLUMNS_ORDER

    out_file = output_dir / "networks.csv"

    tot = 0
    with open(out_file, "w+") as out:
        writer = csv.writer(out)
        writer.writerow(columns)
        for network in networks:
            for message_name, message_contents in network.get_messages().items():
                tot += 1
                # Cleaning message dict and adding network column
                message_contents.pop("fixed_id", None)
                message_contents["name"] = message_name
                message_contents["network"] = network.name
                
                cols = [""] * len(columns)
                for i, (key, value) in enumerate(message_contents.items()):
                    cols[columns.index(key)] = re.sub(r"\[|]|'|{|}|\"", "", str(value))
                writer.writerow(cols)

    print("Generated CSV containing the following network(s):")
    for network in networks:
        print(f"  - {network.name}")

    print(f"{tot} line(s) written")


if __name__ == "__main__":
    main()
