from config.config import *
from lib.utils import *

assert ENDIANNESS == "little" or ENDIANNESS == "big", "ENDIANNESS can be either 'little' or 'big'"
ENDIANNESS = ENDIANNESS

OUTPUT_DIR = remove_trailing_slash(OUTPUT_DIR)
