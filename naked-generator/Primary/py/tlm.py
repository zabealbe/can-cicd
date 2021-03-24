from enum import Enum
from struct import pack, unpack
from collections import namedtuple


class Tlm_Status(Enum):
	ON = 0
	OFF = 1


class Race_Type(Enum):
	ACCELERATION = 0
	SKIDPAD = 1
	AUTOCROSS = 2
	ENDURANCE = 3


SET_TLM_STATUS = namedtuple('SET_TLM_STATUS', 'tlm_status race_type driver circuit')
SET_TLM_STATUS_schema = '<ccBB'


def serialize_SET_TLM_STATUS(struct: SET_TLM_STATUS) -> bytearray:
	return pack(SET_TLM_STATUS, *tuple(struct))


def deserialize_SET_TLM_STATUS(buffer: bytearray) -> SET_TLM_STATUS:
	return SET_TLM_STATUS._make(unpack(SET_TLM_STATUS_schema, buffer))


