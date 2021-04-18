import os
import re 
import csv
import shutil

from config import config as c
from lib.utils import parse_network_multipath
from lib.network import Network


def main():
    print("====== Networks + IDs loading ======")
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

    print("====== CSV generation ======")

    # Clean previous build
    out_dir = os.path.dirname(c.OUTPUT_CSV)
    if os.path.exists(out_dir):
        shutil.rmtree(out_dir)
    os.mkdir(out_dir)

    columns = c.COLUMNS_ORDER

    tot = 0
    with open(c.OUTPUT_CSV, "w+") as out:
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

    print(f"{tot} line(s) written")


if __name__ == "__main__":
    main()
