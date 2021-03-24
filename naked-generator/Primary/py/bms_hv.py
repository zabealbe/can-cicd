from enum import Enum
from struct import pack, unpack
from collections import namedtuple


class Ts_Status_Set(Enum):
	OFF = 0
	ON = 1


SET_TS_STATUS = namedtuple('SET_TS_STATUS', 'ts_status_set')
SET_TS_STATUS_schema = '<c'


def serialize_SET_TS_STATUS(struct: SET_TS_STATUS) -> bytearray:
	return pack(SET_TS_STATUS, *tuple(struct))


def deserialize_SET_TS_STATUS(buffer: bytearray) -> SET_TS_STATUS:
	return SET_TS_STATUS._make(unpack(SET_TS_STATUS_schema, buffer))


