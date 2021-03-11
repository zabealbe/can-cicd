import os
import re 
import csv
import shutil

from config import config as c
from lib.utils import parse_network_multipath
from lib.network import Network
from lib.ids import MessageIds


def main():
    print("====== Networks + IDs loading ======")
    paths_networks = parse_network_multipath(c.NETWORK_FILE)
    paths_ids = parse_network_multipath(c.NETWORK_IDS_FILE)

    paths = [
        (name, network, paths_ids[name]) for name, network in paths_networks.items()
    ]

    merge_networks = c.MERGE_NETWORKS

    networks = []
    for name, network_path, ids_path in paths:
        network = Network(network_path, name, c.NETWORK_FILE_VALIDATION_SCHEMA)
        ids = MessageIds(ids_path, name)
        for message in network.contents:
            message["id"] = ids[message["name"]]
            message["network"] = name
        if merge_networks and networks:
            networks[0].merge_with(network)
        else:
            networks.append(network)
        print(f"Loaded {name}")

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
            tot += len(network.contents)
            for message in network.contents:
                cols = [re.sub(r"\[|]|'|{|}|\"", "", str(message[col])) for col in columns]
                writer.writerow(cols)

    print(f"{tot} line(s) written")


if __name__ == "__main__":
    main()
