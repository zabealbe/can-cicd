from pathlib import Path

BASE_DIR = Path(__file__).parent.parent

# INPUT FILES
NETWORK_VALIDATION_SCHEMA = BASE_DIR / "config/network_schema_sheetgenerator.json"

NETWORK_IDS_DIR = BASE_DIR / "../id_generator/out"
NETWORK_IDS_VALIDATION_SCHEMA = BASE_DIR / "config/network_ids_schema_sheetgenerator.json"

# OUTPUT FILES
OUTPUT_DIR = BASE_DIR / "out"

# CUSTOMIZATION SETTINGS
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
