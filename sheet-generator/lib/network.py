from jsonschema import validate

import config.config as c
from lib.utils import *
import os


def load_network(path):
    if not os.path.exists(path):
        return {}
    return Network(path, path.split("/")[-2])


class Network:
    def __init__(self, path, name):
        self.path = path
        self.name = name
        self.contents = []
        self.name_index = {}
        self.version = None
        if path:
            self.load()

    def load(self):
        network = load_json(self.path)
        network_schema = load_json(c.NETWORK_FILE_VALIDATION_SCHEMA)

        validate(network, network_schema)

        self.contents = network["messages"]
        self.version = network["network_version"]
        for i, m in enumerate(self.contents):
            self.name_index[m["name"]] = i

    def merge_with(self, network):
        if isinstance(network, Network):
            for m1 in network.contents:
                m2 = self.get_message_by_name(m1["name"])
                if m2:  # message name conflict
                    print(
                        "Message with same name {0} found in networks {1} and {2}".format(
                            m1["name"], self.name, network.name
                        )
                    )
                    print(
                        "Checking if the two messages are actually the same message..."
                    )
                    for (_, m1value), (_, m2value) in zip(m1.items(), m2.items()):
                        # check if messages are actually the same one
                        if m1value != m2value:
                            raise Exception(
                                "Found two incompatible messages with same name {0} in networks {1}, {2}".format(
                                    m1["name"], self.name, network.name
                                )
                            )
                    print("Messages found to be the same, the merge will continue")
            self.contents += network.contents
        else:
            raise Exception("Parameter network isn't a Network instance")
        self.name = self.name + "_" + network.name

    def get_all_messages(self):
        return self.contents

    def get_topics(self):
        topics = set()
        for m in self.contents:
            if "topic" in m:
                topics.add(m["topic"])
        return list(topics)

    def get_messages_by_topic(self, topic):
        """
        Very resource-heavy, can be optimized with index
        """
        messages = []
        for m in self.contents:
            if "topic" in m and m["topic"] == topic:
                messages.append(m)

        return messages

    def get_message_by_name(self, name):
        try:
            message = self.contents[self.name_index[name]]
        except KeyError:
            return {}
        return message
