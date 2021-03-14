MERGE_NETWORKS = False

NETWORK_FILE = "../networks/[network]/network.json"
NETWORK_FILE_VALIDATION_SCHEMA = "config/network_schema_flatbufgenerator.json"

FLATBUF_SCHEMA_FILE = "out/[network]/schema.fbs"

TYPES_SIZE = {
    "enum": 1,
    "bool": 1,
    "int8": 1,
    "uint8": 1,

    "int16": 2,
    "uint16": 2,

    "int32": 4,
    "uint32": 4,
    "float32": 4,

    "int64": 8,
    "uint64": 8,
    "float64": 8
}

# LANGUAGES
CONFIG_LANGUAGES = [
        "c",
        "python"
    ]
