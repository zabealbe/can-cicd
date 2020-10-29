from lib.utils import *

MESSAGES_FILE = "messages.json"


class Network:
    def __init__(self, path):
        self.path = path
        self.name = path.split('/')[-1]
        self.contents = []
        if path:
            self.load()

    def load(self):
        messages_path = self.path + "/" + MESSAGES_FILE
        messages = load_json(messages_path)

        network = {}
        if messages == {}:
            print("There was en error loading {0}, skipping".format(self.path))
            return network
        self.contents = messages

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
        self.name = self.name + network.name

    def get_all_messages(self):
        return self.contents

    def get_topics(self):
        topics = set()
        for m in self.contents:
            topics.add(m['topic'])
        return list(topics)

    def get_messages_by_topic(self, topic):
        """
            Very resource-heavy, can be optimized with index
        """
        messages = []
        for m in self.contents:
            if m['topic'] == topic:
                messages.append(m)

        return messages

    def get_message_by_name(self, name):
        """
            Very resource-heavy, can be optimized with index
        """
        for m in self.contents:
            if m['name'] == name:
                return m
        return {}