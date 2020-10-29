import json


def load_json(path):
    try:
        with open(path, 'r') as d:
            json_data = json.load(d)
    except (OSError, IOError) as e:
        print("{0}: {1}".format(e.strerror, path))
        return {}

    return json_data
