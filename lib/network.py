from lib.utils import *


def load_network(path):
    if not os.path.exists(path):
        return {}
    return Network(path, path.split("/")[-2])


class Network:
    def __init__(self, name: str
                 , path: str = None, validation_schema: str = None
                 , ids_path: str = None, ids_validation_schema: str = None):
        self.path = None
        self.ids_path = None
        self.name = name
        self.contents = []
        self.name_index = {}
        self.version = None
        self.max_payload_size = None

        if path:
            self.load(path, validation_schema)
        
        if ids_path:
            self.load_ids(ids_path, ids_validation_schema)

    def load(self, path: str, validation_schema: str = None):
        self.path = path
        network = load_json(self.path, validation_schema)

        self.contents = network["messages"]
        self.version = network["network_version"]
        self.max_payload_size = network["max_payload_size"]

        for i, m in enumerate(self.contents):
            self.name_index[m["name"]] = i

    def load_ids(self, path: str, validation_schema: str = None):
        self.ids_path = path
        network_ids = load_json(self.ids_path)#, validation_schema) # TODO: fix
        assert network_ids["network_version"] == self.version, \
            f"Version mismatch between {self.path} and {self.ids_path}"

        for m in self.contents:
            if "fixed_id" in m:  # skipping if message has already a fixed id
                m["topic"] = "FIXED_IDS"
            topic = m["topic"]
            m["id"] = network_ids["topics"][topic]["messages"][m["name"]]["id"]

    def merge_with(self, network: 'Network'):
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
        topics = set()
        for m in self.contents:
            if "topic" in m:
                topics.add(m["topic"])
        return sorted(topics)  # NEEDED for IDs consistency across runs

    def get_messages_by_topic(self, topic):
        """
            Very resource-heavy, can be optimized with index
        """
        messages = []
        for m in self.contents:
            if "topic" in m and m["topic"] == topic:  # This also filters messages with fixed id
                messages.append(m)  # because topic field can't be present if fixed_id is

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
