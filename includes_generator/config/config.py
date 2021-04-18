# INPUT FILES
NETWORK_FILE = "../networks/[network]/network.json"
NETWORK_FILE_VALIDATION_SCHEMA = "config/network_schema_sheetgenerator.json"

NETWORK_IDS_FILE = "../id_generator/out/[network]/ids.json"
NETWORK_IDS_FILE_VALIDATION_SCHEMA = "config/network_ids_schema_sheetgenerator.json"

CANCONFIG_FILE = "../networks/[network]/canconfig.json"
CANCONFIG_FILE_VALIDATION_SCHEMA = "config/canconfig_schema_includesgenerator.json"

# OUTPUT FILES
OUTPUT_DIR = "./out/[network]/"

# IDS & masks
C_IDS_INCLUDE = "ids.h"
PY_IDS_INCLUDE = "ids.py"

# CAN configuration
C_CANCONFIG_INCLUDE = "can_config.h"
PY_CANCONFIG_INCLUDE = "can_config.py"

MERGE_NETWORKS = False