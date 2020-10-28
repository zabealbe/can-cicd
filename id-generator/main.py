import json
import sys

# xxxxxx xxxxx => can id has 11 bits
# ^^^^^^       => bits for message id
#        ^^^^^ => bits for topic id
MESSAGE_BITS = 6
TOPIC_BITS = 5

MAX_PRIORITY = 7

MESSAGES_FILE = "messages.json"
OUTPUT_FILE = "message_ids.json"


def generate_message_ids(topic, messages):
    scoped_msg_ids = priority_to_id(
        [tm['name'] for tm in messages],  # messages names ["A", "B", ... ]
        [tm['priority'] for tm in messages]  # messages priorities [0, 0, 4, ... ] (dont have to be unique)
    )
    if len(messages) >= 2 ** MESSAGE_BITS:
        raise Exception(
            "Oops, you can't have more than {0} messages per topic!, maybe its time to rework the software?"
                .format(MESSAGE_BITS))

    global_msg_ids = {}
    for msg, id in scoped_msg_ids:
        global_msg_ids[msg] = (id << TOPIC_BITS) + topic

    if __debug__:
        for g, s in zip(global_msg_ids.keys(),  scoped_msg_ids):
            print("{0:<16}\tbin  int\n\t"
                  "topic:  {1:>011b}  {1}\n\t"
                  "scoped: {2:>011b}  {2}\n\t"
                  "global: {3:>011b}  {3}"
                  .format(s[0], topic, s[1], global_msg_ids[g]))

    return global_msg_ids


def generate_topic_ids(topics):
    ids = {}
    for i, t in enumerate(topics):
        ids[t] = i
    if len(ids) >= 2 ** TOPIC_BITS:
        raise Exception(
            "Oops, you can't have more than {0} topics!, maybe its time to rework the software?"
                .format(TOPIC_BITS))

    if __debug__:
        print("Assigned topic ids:", ids)

    return ids


def priority_to_id(names, priorities):
    """
        generates consecutive ids for each item based on the priority (higher priority = lower id)
        returns [(name, id), ... ]
    """
    messages_per_level = int(2 ** MESSAGE_BITS / (MAX_PRIORITY + 1))

    items_ids = []
    items_count = [0] * (MAX_PRIORITY + 1)  # keeps track of how many items are present in each priority level
    for item_name, item_priority in zip(names, priorities):
        if item_priority > MAX_PRIORITY:
            raise Exception(
                "Priority assigned to {0} is outside of the allowed range ({1}-{2})".format(item_name, 0, MAX_PRIORITY)
                    .format(MESSAGE_BITS))

        item_id = items_count[item_priority]
        if item_id >= messages_per_level:
            raise Exception(
                "You exceeded the maximum messages per priority level per topic! ({0})".format(messages_per_level)
                    .format(MESSAGE_BITS))

        items_count[item_priority] += 1
        items_ids.append((item_name, item_id + messages_per_level * (MAX_PRIORITY - item_priority)))

    return items_ids


def get_all_messages(network):
    messages = {}
    for topic in network.keys():
        for message in network[topic]:
            messages[message['name']] = message
    return messages


def merge_networks(n1, n2):
    n3 = {}
    for topic in n1.keys():
        n3[topic] = n1[topic]
    for topic in n2.keys():
        if topic in n3:
            n3[topic].append(n2[topic])
        else:
            n3[topic] = n2[topic]
    return n3


def load_json(path):
    try:
        with open(path, 'r') as d:
            json_data = json.load(d)
            if __debug__:
                print("Loaded", path)
    except (OSError, IOError) as e:
        print("{0}: {1}".format(e.strerror, path))
        return {}

    return json_data


def load_network(path):
    messages_path = path + "/" + MESSAGES_FILE
    messages = load_json(messages_path)

    network = {}
    if messages == {}:
        print("There was en error loading {0}, skipping".format(path))
        return network

    for m in messages:
        topic = m['topic']
        if topic not in network:
            network[topic] = []
        network[m['topic']].append(m)

    return network


def main():
    if len(sys.argv) < 2:
        print("Please specify one or more network directories")
        exit(1)

    print("====== Configuration ======")
    print("Max topics: {0}".format(2 ** TOPIC_BITS))
    print("Max messages per topic: {0}".format(2 ** MESSAGE_BITS))
    print("Priority range: {0}-{1}".format(0, MAX_PRIORITY))
    print("Max messages per priority per topic: {0}".format(int(2 ** MESSAGE_BITS / (MAX_PRIORITY + 1))))
    print("")

    print("====== Networks loading ======")
    network = {}
    for a in sys.argv[1:]:
        network = merge_networks(network, load_network(a))
    print("")

    print("====== Id generation ======")
    topic_ids = generate_topic_ids(network)
    msg_ids = {}
    for topic in network.keys():
        if __debug__:
            print("\nTOPIC {0}".format(topic))
        msg_ids.update(generate_message_ids(topic_ids[topic], network[topic]))
    print("")

    if __debug__:
        msgs = get_all_messages(network)
        msg_with_p = [[] for i in range(0, MAX_PRIORITY+1)]
        for m, id in zip(msg_ids.keys(), msg_ids.values()):
            message = msgs[m]
            msg_with_p[message['priority']].append("{0}: {1}".format(m, id))
        for p, mp in enumerate(msg_with_p):
            print("PRIORITY", p, mp)
    print("")
    print("Saving IDs to {0}".format(OUTPUT_FILE))
    with open(OUTPUT_FILE, "w+") as f:
        json.dump(msg_ids, f, indent=4)
    print("====== Done! ======")


if __name__ == "__main__":
    main()
