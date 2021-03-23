from io import BytesIO

"""
    CONSUMERS/DESERIALIZERS
"""


def consume_bool(buffer: BytesIO) -> bool:
    pass


def consume_int8(buffer: BytesIO) -> int:
    pass


def consume_int16(buffer: BytesIO) -> int:
    pass


def consume_int32(buffer: BytesIO) -> int:
    pass


def consume_int64(buffer: BytesIO) -> int:
    pass


def consume_uint8(buffer: BytesIO) -> int:
    pass


def consume_uint16(buffer: BytesIO) -> int:
    pass


def consume_int32(buffer: BytesIO) -> int:
    pass


def consume_int64(buffer: BytesIO) -> int:
    pass


def consume_float32(buffer: BytesIO) -> float:
    pass


def consume_float64(buffer: BytesIO) -> float:
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


def produce_int8(value: int, buffer: BytesIO):
    if __debug__:
        # check size
        pass
    pass


def produce_int16(value: int, buffer: BytesIO):
    if __debug__:
        # check size
        pass
    pass


def produce_int32(value: int, buffer: BytesIO):
    if __debug__:
        # check size
        pass
    pass


def produce_int64(value: int, buffer: BytesIO):
    if __debug__:
        # check size
        pass
    pass


def produce_uint8(value: int, buffer: BytesIO):
    if __debug__:
        # check size
        pass
    pass


def produce_uint16(value: int, buffer: BytesIO):
    if __debug__:
        # check size
        pass
    pass


def produce_int32(value: int, buffer: BytesIO):
    if __debug__:
        # check size
        pass
    pass


def produce_int64(value: int, buffer: BytesIO):
    if __debug__:
        # check size
        pass
    pass


def produce_float32(value: float, buffer: BytesIO):
    if __debug__:
        # check size
        pass
    pass


def produce_float64(value: float, buffer: BytesIO):
    if __debug__:
        # check size
        pass
    pass


def produce_enum(value: float, buffer: BytesIO):
    if __debug__:
        # check size
        pass
    pass


def deserialize_HV_VOLTAGE(buffer: bytearray) -> dict:
    bytesio = BytesIO(buffer)
    struct = {
        "field1": consume_uint16(bytesio),
        "field2": consume_uint16(bytesio)
    }
    
    return struct
