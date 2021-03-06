from collections import namedtuple
from lib.utils import *

Message = namedtuple("MessageId", "name id")


class MessageTopic:
    def __init__(self, obj):
        self.name = obj["topic"]
        self.id = obj["id"]
        self.messages = [Message(k, v) for k, v in obj["messages"].items()]

    def __iter__(self):
        return iter(self.messages)


class MessageIds:
    def __init__(self, path, name):
        self.path = path
        self.name = name
        if path:
            self.load()

    def load(self):
        network_ids = load_json(self.path)
        self.topics = [MessageTopic(topic) for topic in network_ids["ids"]]

    def __getitem__(self, key):
        for topic in self.topics:
            for message in topic.messages:
                if message.name == key:
                    return message.id
        return None

    def __iter__(self):
        return iter(self.topics)
