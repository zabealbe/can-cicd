from pathlib import Path

BASE_DIR = Path(__file__).parent.parent

# Network configuration which will be used to generate the schema
NETWORK_VALIDATION_SCHEMA = BASE_DIR / "config/network_schema_nakedgenerator.json"

# Schema describing the data structure
SCHEMA_LOCATION = BASE_DIR / "out/[network]/schema.json"

# CUSTOMIZATION SETTINGS
ENDIANNESS = "little"  # Can be either "little" or "big"
