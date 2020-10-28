from lib.network import Network
import config

import json
import sys

# xxxxxx xxxxx => can id has 11 bits
# ^^^^^^       => bits for message id
#        ^^^^^ => bits for topic id
MESSAGE_BITS = 6
TOPIC_BITS = 5

MAX_PRIORITY = 7


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


def generate_topic_ids(network):
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
    network = Network("")
    for a in sys.argv[1:]:
        network.merge_with(Network(a))
    print("")

    print("====== Id generation ======")
    topic_ids = generate_topic_ids(network)
    msg_ids = {}
    for topic, topic_id in topic_ids.items():
        if __debug__:
            print("\nTOPIC {0}".format(topic))
        msg_ids.update(
            generate_message_ids(
                topic_ids[topic], network.get_messages_by_topic(topic)
            )
        )
    print("")

    if __debug__:
        msg_with_p = [[] for i in range(0, MAX_PRIORITY+1)] #  populate array

        for m, m_id in msg_ids.items():
            message = network.get_message_by_name(m)
            msg_with_p[message['priority']].append("{0}: {1}".format(m, m_id))
        for p, mp in enumerate(msg_with_p):
            print("PRIORITY", p, mp)
    print("")
    print("Saving IDs to {0}".format(config.OUTPUT_FILE))
    with open(config.OUTPUT_FILE, "w+") as f:
        json.dump(msg_ids, f, indent=4)
    print("====== Done! ======")


if __name__ == "__main__":
    main()
