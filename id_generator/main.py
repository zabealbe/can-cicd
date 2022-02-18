from .lib.network import Network
from .config import config as c
from .lib import utils
import json
import sys

# xxxxxx xxxxx => can id has 11 bits
# ^^^^^^       => bits for message id
#        ^^^^^ => bits for topic id
MESSAGE_BITS = 6
TOPIC_BITS = 5

MAX_PRIORITY = 7

MESSAGES_PER_PRIORITY = int(2 ** MESSAGE_BITS / (MAX_PRIORITY + 1))


def generate_ids(network: Network, blacklist=None):
    """
        generates consecutive ids for each item based on the priority (higher priority = lower id)
        returns [(name, id), ... ]
    """
    
    if len(network.get_messages()) >= 2 ** MESSAGE_BITS:
        raise Exception(
            "Oops, you can't have more than {0} messages per topic!, maybe its time to rework the software?"
            .format(MESSAGE_BITS)
        )

    ids = {}
    for topic_name, topic_id in generate_topics_id(network).items():
        if topic_name == "FIXED_IDS":
            continue
            
        msg_ids, scoped_msg_ids = generate_messages_id(
            network.get_messages_by_topic(topic_name), 
            topic_id,
            blacklist)
    
        if __debug__:
            for (g_name, g_contents), (s_name, s_contents) in zip(msg_ids.items(), scoped_msg_ids.items()):
                print(f"{s_name:<16}\tbin  int\n\t"
                      f"topic:  {topic_id:>011b}  {topic_id}\n\t"
                      f"scoped: {s_contents['id']:>011b}  {s_contents['id']}\n\t"
                      f"global: {g_contents['id']:>011b}  {g_contents['id']}")
        
        ids[topic_name] = {
            "id": topic_id,
            "messages": msg_ids
        }
        
    return ids


def generate_messages_id(topic_messages, topic_id, blacklist=None):
    msg_ids = {}
    scoped_msg_ids = {}
    items_count = [0] * (MAX_PRIORITY + 1)  # keeps track of how many items are present in each priority level
    for message_name, message_contents in topic_messages.items():
        message_priority = message_contents["priority"]

        if message_priority > MAX_PRIORITY:
            raise Exception(
                f"Priority assigned to {message_name} is outside of the allowed range (0-{MAX_PRIORITY})"
                    .format(MESSAGE_BITS)
            )

        item_id = items_count[message_priority]

        while True:
            items_count[message_priority] += 1
            start = MESSAGES_PER_PRIORITY * (MAX_PRIORITY - message_priority)
            if item_id >= MESSAGES_PER_PRIORITY:
                raise Exception(
                    f"You exceeded the maximum messages per priority level per topic! ({MESSAGES_PER_PRIORITY})"
                        .format(MESSAGE_BITS)
                )
            scoped_id = item_id + start
            global_id = (scoped_id << TOPIC_BITS) + topic_id

            if global_id not in blacklist:
                break
            item_id += 1  # If can't use ID, try next one

        scoped_msg_ids[message_name] = {"id": scoped_id}
        msg_ids[message_name] = ({"id": global_id})

    return msg_ids, scoped_msg_ids


def generate_topics_id(network: Network, blacklist=None):  # TODO: implement blacklist for topics
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


def generate_fixed_ids(network: Network):
    ids = {}
    for message_name, message_contents in network.get_messages_with_fixed_id().items():
        ids[message_name] = {
            "id": message_contents["fixed_id"]
        }
    return ids


def main():
    print("====== id-generator ======")
    print("Max topics: {0}".format(2 ** TOPIC_BITS))
    print("Max messages per topic: {0}".format(2 ** MESSAGE_BITS))
    print("Priority range: {0}-{1}".format(0, MAX_PRIORITY))
    print("Max messages per priority per topic: {0}".format(int(2 ** MESSAGE_BITS / (MAX_PRIORITY + 1))))
    print("")

    networks_dir, output_dir = utils.read_args(sys.argv)
    networks = utils.load_networks(networks_dir, c.NETWORK_VALIDATION_SCHEMA)

    for n in networks:
        print(f"Generating ids for network {n.name}... ", end="")
        reserved_ids = n.get_reserved_ids().keys()
        
        # Generating IDs
        ids = generate_ids(n, blacklist=reserved_ids)
            
        # Adding fixed IDs
        fixed_ids = generate_fixed_ids(n)
        if fixed_ids:  # Don't create the topic unless there is at least one fixed id
            ids["FIXED_IDS"] = {"messages": fixed_ids}
            
        output = {
            "network_version": n.version,
            "topics": ids
        }
            
        output_file = output_dir / n.name / "ids.json"
        print(f"done. Saving to {output_file}")
        
        utils.create_subtree(output_file.parent)
        with open(output_file, "w+") as f:
            json.dump(output, f, indent=4)


if __name__ == "__main__":
    main()
