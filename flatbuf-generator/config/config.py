MERGE_NETWORKS = False

NETWORK_FILE = "../config/[network]/network.json"
NETWORK_FILE_VALIDATION_SCHEMA = "config/network_schema_flatbufgenerator.json"

FLATBUF_SCHEMA_FILE = "out/[network]/schema.fbs"

# LANGUAGES
CONFIG_LANGUAGES = [
        "c",
#        "python"
    ]

# FLATC
FLATC_ENABLE = False
FLATC_CONFIG_LANGUAGES = [
        "c",
        "python"
    ]

# FLATCC (for c only)
FLATCC_ENABLE = True
FLATCC_CONFIG = {
}
