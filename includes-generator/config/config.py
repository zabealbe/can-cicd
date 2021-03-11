# INPUT FILES
IDS_FILE = "../id-generator/out/[network]/ids.json"
CANCONFIG_FILE = "../networks/[network]/canconfig.json"
CANCONFIG_FILE_VALIDATION_SCHEMA = "config/canconfig_schema_includesgenerator.json"

FLATBUF_SCHEMA_FILE = "../flatbuf-schema-generator/out/[network]/schema.fbs"

# OUTPUT FILES
OUTPUT_DIR = "./out/[network]/"

# IDS & masks
C_IDS_INCLUDE = "ids.h"
PY_IDS_INCLUDE = "ids.py"

# CAN configuration
C_CANCONFIG_INCLUDE = "can_config.h"
PY_CANCONFIG_INCLUDE = "can_config.py"
