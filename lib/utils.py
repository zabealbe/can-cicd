from jsonschema import validate
import errno
import json
import os


def load_json(path, validation_schema_path=None):
    with open(path, 'r') as d:
        json_data = json.load(d)
        
    if validation_schema_path is not None:
        with open(validation_schema_path, 'r') as d:
            json_validation_schema = json.load(d)
        validate(json_data, json_validation_schema)

    return json_data


def create_subtree(path):
    if not os.path.exists(os.path.dirname(path)):
        try:
            os.makedirs(os.path.dirname(path))
        except OSError as exc:  # Guard against race condition
            if exc.errno != errno.EEXIST:
                raise


def parse_network_multipath(multipath):
    paths = {}
    if "[network]" in multipath:
        p = multipath.split("[network]")
        for d in os.scandir(p[0]):
            path = "{0}{1}".format(d.path, p[1])
            if os.path.isfile(path):
                paths[d.name] = path
    else:
        Exception()

    return paths
