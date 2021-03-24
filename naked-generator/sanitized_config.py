from config import config as c
from lib.utils import *

NETWORK_FILE = c.NETWORK_FILE
NETWORK_FILE_VALIDATION_SCHEMA = c.NETWORK_FILE_VALIDATION_SCHEMA

SCHEMA_LOCATION = c.SCHEMA_LOCATION 

assert c.ENDIANNESS == "little" or c.ENDIANNESS == "big", "ENDIANNESS can be either 'little' or 'big'"
ENDIANNESS = c.ENDIANNESS

OUTPUT_DIR = remove_trailing_slash(c.OUTPUT_DIR)

MERGE_NETWORKS = c.MERGE_NETWORKS