from collections import OrderedDict
from lib.network import Network
from lib.utils import *

from config import config as c

# xxxxxx xxxxx => can id has 11 bits
# ^^^^^^       => bits for message id
#        ^^^^^ => bits for topic id
MESSAGE_BITS = 6
TOPIC_BITS = 5

MAX_PRIORITY = 7

MESSAGES_PER_PRIORITY = int(2 ** MESSAGE_BITS / (MAX_PRIORITY + 1))


def generate_message_ids(topic, messages, blacklist=None):
    """
        generates consecutive ids for each item based on the priority (higher priority = lower id)
        returns [(name, id), ... ]
    """

    msg_ids = []
    scoped_msg_ids = []
    items_count = [0] * (MAX_PRIORITY + 1)  # keeps track of how many items are present in each priority level
    for item_name, item_priority in zip(
        [tm['name'] for tm in messages],  # messages names ["A", "B", ... ]
        [tm['priority'] for tm in messages]  # messages priorities [0, 0, 4, ... ] (dont have to be unique)
    ):
        if item_priority > MAX_PRIORITY:
            raise Exception(
                f"Priority assigned to {item_name} is outside of the allowed range (0-{MAX_PRIORITY})"
                .format(MESSAGE_BITS)
            )

        item_id = items_count[item_priority]
        
        while True:
            items_count[item_priority] += 1
            start = MESSAGES_PER_PRIORITY * (MAX_PRIORITY - item_priority)
            if item_id >= MESSAGES_PER_PRIORITY:
                raise Exception(
                    f"You exceeded the maximum messages per priority level per topic! ({MESSAGES_PER_PRIORITY})"
                    .format(MESSAGE_BITS)
                )
            scoped_id = item_id + start
            global_id = (scoped_id << TOPIC_BITS) + topic
            
            if global_id not in blacklist:
                break
            item_id += 1  # If can't use ID, try next one

        scoped_msg_ids.append({
            "name": item_name,
            "id": scoped_id
        })
        msg_ids.append({
            "name": item_name,
            "id": global_id
        })

    if len(messages) >= 2 ** MESSAGE_BITS:
        raise Exception(
            "Oops, you can't have more than {0} messages per topic!, maybe its time to rework the software?"
            .format(MESSAGE_BITS)
        )

    if __debug__:
        for g, s in zip(msg_ids, scoped_msg_ids):
            print(f"{s['name']:<16}\tbin  int\n\t"
                  f"topic:  {topic:>011b}  {topic}\n\t"
                  f"scoped: {s['id']:>011b}  {s['id']}\n\t"
                  f"global: {g['id']:>011b}  {g['id']}")

    return msg_ids


def generate_topic_ids(network, blacklist=None):  # TODO: implement blacklist for topics
    ids = {}
    for i, t in enumerate(network.get_topics()):
        ids[t] = i
    if len(ids) >= 2 ** TOPIC_BITS:
        raise Exception(
            "Oops, you can't have more than {0} topics!, maybe its time to rework the software?"
            .format(TOPIC_BITS))

    if __debug__:
        print("Assigned topic ids:", ids)

    return ids


def main():
    print("====== Configuration ======")
    print("Max topics: {0}".format(2 ** TOPIC_BITS))
    print("Max messages per topic: {0}".format(2 ** MESSAGE_BITS))
    print("Priority range: {0}-{1}".format(0, MAX_PRIORITY))
    print("Max messages per priority per topic: {0}".format(int(2 ** MESSAGE_BITS / (MAX_PRIORITY + 1))))
    print("")

    print("====== Networks loading ======")
    paths = parse_network_multipath(c.NETWORK_FILE)
    networks = []
    for network_name, path in paths.items():
        if c.MERGE_NETWORKS and networks:
            networks[0].merge_with(Network(path, network_name, c.NETWORK_FILE_VALIDATION_SCHEMA))
        else:
            networks.append(Network(path, network_name, c.NETWORK_FILE_VALIDATION_SCHEMA))
        print("Loaded {0}".format(network_name))

    print("{0} network(s) loaded".format(len(networks)))

    print("")
    for n in networks:
        print("====== Id generation for network {0} ======".format(n.name))
        topic_ids = generate_topic_ids(n)
        reserved_ids = n.get_reserved_ids().keys()

        topics = {}
        for topic, topic_id in topic_ids.items():
            if __debug__:
                print("TOPIC {0}".format(topic))

            # Generating IDs
            message_ids = {}
            for m in generate_message_ids(topic_ids[topic], n.get_messages_by_topic(topic), blacklist=reserved_ids):
                message_ids[m["name"]] = {
                    "id": m["id"]
                }
            topics[topic] = {
                "id": topic_id,
                "messages": message_ids
            }
            
        # Adding fixed IDs
        message_fixed_ids = {}
        for m in n.get_messages_with_fixed_id():
            message_fixed_ids[m["name"]] = {
                "id": m["fixed_id"]
            }
        if message_fixed_ids:  # Don't create the topic unless there is at least one fixed id
            topics["FIXED_IDS"] = {
                "messages": message_fixed_ids
            }
            
        output_path = c.OUTPUT_FILE.replace("[network]", n.name)
        print("Saving IDs to {0}".format(output_path))
        create_subtree(output_path)

        output = {
            "network_version": n.version,
            "topics": topics
        }
        with open(output_path, "w+") as f:
            json.dump(output, f, indent=4)
            
        print("")
    print("done.")


if __name__ == "__main__":
    main()
