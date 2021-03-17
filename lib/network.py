from collections import OrderedDict
import os

from lib.utils import *


def load_network(path):
    if not os.path.exists(path):
        return {}
    return Network(path, path.split("/")[-2])


class Network:
    def __init__(self, path, name, validation_schema=None):
        self.path = path
        self.name = name
        self.contents = []
        self.name_index = {}
        self.version = None
        self.max_payload_size = None
        
        if path:
            self.load(validation_schema)

    def load(self, validation_schema=None):
        network = load_json(self.path, validation_schema)

        self.contents = network["messages"]
        self.version = network["network_version"]
        self.max_payload_size = network["max_payload_size"]
        
        for i, m in enumerate(self.contents):
            self.name_index[m["name"]] = i

    def merge_with(self, network):
        if isinstance(network, Network):
            for m1 in network.contents:
                m2 = self.get_message_by_name(m1['name'])
                if m2:  # message name conflict
                    print("Message with same name {0} found in networks {1} and {2}"
                          .format(m1['name'], self.name, network.name))
                    print("Checking if the two messages are actually the same message...")
                    for (_, m1value), (_, m2value) in zip(m1.items(), m2.items()):
                        # check if messages are actually the same one
                        if m1value != m2value:
                            raise Exception("Found two incompatible messages with same name {0} in networks {1}, {2}"
                                            .format(m1['name'], self.name, network.name))
                    print("Messages found to be the same, the merge will continue")
            self.contents += network.contents
        else:
            raise Exception("Parameter network isn't a Network instance")
        self.name = self.name + "_" + network.name

    def get_all_messages(self):
        return self.contents

    def get_topics(self):
        topics = OrderedDict()  # NEEDED for IDs consistency across runs
        for m in self.contents:
            if "topic" in m:
                topics[m["topic"]] = ""
        return list(topics.keys())

    def get_messages_by_topic(self, topic):
        """
            Very resource-heavy, can be optimized with index
        """
        messages = []
        for m in self.contents:
            if "topic" in m and m["topic"] == topic:
                messages.append(m)

        return messages

    def get_messages_with_fixed_id(self):
        """
            Very resource-heavy, can be optimized with index
        """
        messages = []
        for m in self.contents:
            if "fixed_id" in m:
                messages.append(m)

        return messages
    
    def get_reserved_ids(self):
        """
            Very resource-heavy, can be optimized with index
        """
        ids = {}
        for m in self.get_messages_with_fixed_id():
            ids[m["fixed_id"]] = m
        
        return ids

    def get_message_by_name(self, name):
        try:
            message = self.contents[self.name_index[name]]
        except KeyError:
            return {}
        return message

