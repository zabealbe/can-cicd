from lib.utils import *

MESSAGES_FILE = "messages.json"


class Network:
    def __init__(self, path):
        self.path = path
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
            self.contents += network.contents
        else:
            raise Exception("Parameter network isn't a Network instance")

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