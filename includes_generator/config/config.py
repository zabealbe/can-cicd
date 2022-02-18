from pathlib import Path

BASE_DIR = Path(__file__).parent.parent

# INPUT FILES
NETWORK_VALIDATION_SCHEMA = BASE_DIR / "config/network_schema_sheetgenerator.json"

NETWORK_IDS_DIR = BASE_DIR / "../id_generator/out"
NETWORK_IDS_VALIDATION_SCHEMA = BASE_DIR / "config/network_ids_schema_sheetgenerator.json"

CANCONFIG_VALIDATION_SCHEMA = BASE_DIR / "config/canconfig_schema_includesgenerator.json"

# OUTPUT FILES
OUTPUT_DIR = BASE_DIR / "out"

# IDS & masks
C_IDS_INCLUDE = "ids.h"
PY_IDS_INCLUDE = "ids.py"

# Utility tools & functions
C_UTILS_INCLUDE = "utils.h"
PY_UTILS_INCLUDE = "utils.py"

# CAN configuration
C_CANCONFIG_INCLUDE = "can_config.h"
PY_CANCONFIG_INCLUDE = "can_config.py"

# CUSTOMIZATION SETTINGS
