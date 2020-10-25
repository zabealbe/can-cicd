import json
import sys

# xxxxxxxxxxx => can id has 11 bits

BITS_LENGTH = 11

DEVICES_FILE = "devices.json"
MESSAGES_FILE = "messages.json"


def generate_messages_id(messages):
    msg_ids = []

    msg_ids = priority_to_id(
        [dm['name'] for dm in messages],  # messages names ["A", "B", ... ]
        [dm['priority'] for dm in messages]  # messages priorities [0, 0, 4, ... ] (dont have to be unique)
    )
    if len(msg_ids) >= 2 ** BITS_LENGTH:
        raise Exception(
            "Oops, you can't have more than {0} messages!, maybe its time to rework the software?"
                .format(BITS_LENGTH))

    if __debug__:
        print("Assigned messages ids:", msg_ids)

    return msg_ids


def priority_to_id(names, priorities):
    """
        generates consecutive ids for each item based on the priority (higher priority = lower id)
        returns [(name, id), ... ]
    """
    items_id = []
    priorities_unique = set()
    for p in priorities:
        priorities_unique.add(p)

    id = 0
    for p_u in priorities_unique:
        for n, p in zip(names, priorities):
            if p is p_u:
                items_id.append((n, id))
                id += 1

    return items_id


def normalize_priority(names, priorities):  # unused
    """
        compacts priorities values onto consecutive integers (not unique)
        returns [(name, priority), ... ]
    """
    items_id = []
    priorities_unique = set()
    for p in priorities:
        priorities_unique.add(p)

    id = 0
    for p_u in priorities_unique:
        for n, p in zip(names, priorities):
            if p is p_u:
                items_id.append((n, id))
        id += 1

    return items_id


def merge_networks(n1, n2):
    devices = n1[0] + n2[0]
    messages = n1[1] + n2[1]
    return devices, messages


def load_network(path):
    try:
        devices_path = path + "/" + DEVICES_FILE
        with open(devices_path, 'r') as d:
            devices = json.load(d)
            if __debug__:
                print("Loaded", devices_path)
        messages_path = path + "/" + MESSAGES_FILE
        with open(messages_path, 'r') as m:
            messages = json.load(m)
            if __debug__:
                print("Loaded", messages_path)
    except (OSError, IOError) as e:
        print("{0}: {1}".format(e.strerror, e.filename))
        print("There was en error loading {0}, skipping".format(path))
        return [], []

    return devices, messages


def main():
    if len(sys.argv) < 2:
        print("Please specify one or more network directories")
        exit(1)
    print("Max messages: {0}".format(2 ** BITS_LENGTH))

    network = ([], [])
    for a in sys.argv[1:]:
        network = merge_networks(network, load_network(a))
    generate_messages_id(network[1])

    print("Done!")


if __name__ == "__main__":
    main()
