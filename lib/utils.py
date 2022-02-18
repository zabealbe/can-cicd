import pathlib

from jsonschema import validate
from . import network
import subprocess
import errno
import json
import os


def load_json(path, validation_schema_path=None):
    with open(path, "r") as d:
        json_data = json.load(d)

    if validation_schema_path is not None:
        with open(validation_schema_path, "r") as d:
            json_schema = json.load(d)
        validate(json_data, json_schema)

    return json_data


def create_subtree(path):
    if not os.path.exists(path):
        try:
            os.makedirs(path)
        except OSError as exc:  # Guard against race condition
            if exc.errno != errno.EEXIST:
                raise


def load_networks(networks_path: pathlib.Path, validation_schema_path: pathlib.Path = None, ids_path: pathlib.Path = None, ids_validation_schema_path: pathlib.Path = None):
    networks_path = pathlib.Path(networks_path)

    networks = []
    for child in networks_path.iterdir():
        network_name = child.name

        network_path = networks_path / network_name / "network.json"
        if ids_path is None:
            network_ids_path = None
        else:
            network_ids_path = ids_path / network_name / "ids.json"

        try:
            networks.append(network.Network(
                name=network_name,
                path=network_path,
                validation_schema=validation_schema_path,
                ids_path=network_ids_path,
                ids_validation_schema=ids_validation_schema_path
            ))
        except Exception as e:
            print(f"Failed to load network {child.name}")
            print(e)
            continue

    print(f"{len(networks)} network(s) loaded")

    return networks


def remove_trailing_slash(path: str):
    if path[-1] == "/":
        return path[:-1]
    else:
        return path


#def run_command(command, verbose=False):
#    if verbose:
#        print(f"running '{command}'")
#    process = subprocess.run(
#        command, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True
#    )

#    code = process.returncode

#    out, out_err = (process.stdout, process.stderr)
#    return out.decode("utf-8"), out_err.decode("utf-8"), code

def parse_network_multipath(multipath):
    paths = {}
    if "[network]" in multipath:
        p = multipath.split("[network]")
        for d in os.scandir(p[0]):
            path = f"{d.path}{p[1]}"
            if os.path.exists(path):
                paths[d.name] = path
    else:
        Exception()

    return paths

def read_networks_arg(argv):
    if len(argv) != 2 or argv[1] in ["--help", "-h"]:
        raise ValueError("Usage: python3 main.py <networks_path>")
    base_dir = os.path.abspath(argv[1])

    if not os.path.exists(base_dir):
        raise ValueError(f"Path {base_dir} does not exist")

    return base_dir


def indent(string, amount):
    return " " * amount + string.replace("\n", "\n" + " " * amount)


def to_camel_case(string: str, delimiter=" "):
    return "".join([x.capitalize() for x in string.split(delimiter)])


def to_snake_case(string: str, delimiter=" "):
    return "".join([x.capitalize() for x in string.split(delimiter)])
