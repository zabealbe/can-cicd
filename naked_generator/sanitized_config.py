from .config.config import *

assert ENDIANNESS == "little" or ENDIANNESS == "big", "ENDIANNESS can be either 'little' or 'big'"
IS_LITTLE_ENDIAN = ENDIANNESS == "little"
