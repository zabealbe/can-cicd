from io import BytesIO

"""
    CONSUMERS/DESERIALIZERS
"""


def consume_bool(buffer: BytesIO) -> bool:
    pass


def consume_int(buffer: BytesIO, signed: bool, bit_size: int) -> int:
    pass


def consume_float(buffer: BytesIO, bit_size: int) -> float:
    pass


def consume_enum(buffer: BytesIO):
    pass


"""
    PRODUCERS/SERIALIZERS
"""


def produce_bool(value: bool, buffer: BytesIO):
    if __debug__:
        pass
    pass


def produce_int(value: int, buffer: BytesIO, signed: bool, bit_size: int):
    if __debug__:
        # check size
        pass
    pass


def produce_float(value: float, buffer: BytesIO, bit_size: int):
    if __debug__:
        # check size
        pass
    pass


def produce_enum(value: float, buffer: BytesIO):
    if __debug__:
        # check size
        pass
    pass


"""
def deserialize_HV_VOLTAGE(buffer: bytearray) -> dict:
    bytesio = BytesIO(buffer)
    struct = {
        "field1": consume_uint16(bytesio),
        "field2": consume_uint16(bytesio)
    }
    
    return struct
"""