import os
import re 
import csv
import sys
import shutil

from .config import config as c
from .lib import utils


def main():
    print("====== sheet-generator ======")
    print("")

    networks_dir = utils.read_networks_arg(sys.argv)
    networks = utils.load_networks(networks_dir, c.NETWORK_VALIDATION_SCHEMA, c.NETWORK_IDS_DIR, c.NETWORK_IDS_VALIDATION_SCHEMA)

    # Clean previous build
    if c.OUTPUT_DIR.exists():
        shutil.rmtree(c.OUTPUT_DIR)
    os.mkdir(c.OUTPUT_DIR)

    columns = c.COLUMNS_ORDER

    out_file = c.OUTPUT_DIR / "networks.csv"

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
