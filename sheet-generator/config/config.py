# INPUT FILES
NETWORK_FILE = "../networks/[network]/network.json"
NETWORK_FILE_VALIDATION_SCHEMA = "config/network_schema_sheetgenerator.json"

NETWORK_IDS_FILE = "../id-generator/out/[network]/ids.json"
NETWORK_IDS_FILE_VALIDATION_SCHEMA = "config/ids_schema_sheetgenerator.json"

# OUTPUT FILES
OUTPUT_CSV = "./out/messages.csv"

# SETTINGS
MERGE_NETWORKS = False
COLUMNS_ORDER = [
    "name",
    "id",
    "network",
    "topic",
    "priority",
    "sending",
    "receiving",
    "contents",
    "description",
]
