MERGE_NETWORKS = False

NETWORK_FILE = "../config/[network]/network.json"
NETWORK_FILE_VALIDATION_SCHEMA = "config/network_schema_flatbufgenerator.json"

FLATBUF_SCHEMA_FILE = "out/[network]/schema.fbs"

COMPILE_LANGUAGES = {
    "c": True,
    "python": False
}
