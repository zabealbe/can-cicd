import errno
import json
import os


def load_json(path):
    with open(path, "r") as d:
        json_data = json.load(d)

    return json_data


def create_file_subtree(filepath):
    if not os.path.exists(os.path.dirname(filepath)):
        try:
            os.makedirs(os.path.dirname(filepath))
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
