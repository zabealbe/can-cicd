from jsonschema import validate
import subprocess
import errno
import json
import os


def load_json(path, validation_schema_path=None):
    with open(path, 'r') as d:
        json_data = json.load(d)
        
    if validation_schema_path is not None:
        with open(validation_schema_path, 'r') as d:
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


def remove_trailing_slash(path: str):
    if path[-1] == "/":
        return path[:-1]
    else:
        return path
    
    
def run_command(command, verbose=False):
    if verbose:
        print(f"running '{command}'")
    process = subprocess.run(
        command, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True
    )

    code = process.returncode

    out, out_err = (process.stdout, process.stderr)
    return out.decode("utf-8"), out_err.decode("utf-8"), code
