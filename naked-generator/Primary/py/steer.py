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


class Car_Status(Enum):
	IDLE = 0
	SETUP = 1
	RUN = 2


class Inverter_Status: Inverter_L(Enum):
	OFF = 0
	IDLE = 1
	ON = 2


class Inverter_Status: Inverter_R(Enum):
	OFF = 0
	IDLE = 1
	ON = 2


TLM_STATUS = namedtuple('TLM_STATUS', 'tlm_status race_type driver circuit')
TLM_STATUS_schema = '<ccBB'

CAR_STATUS = namedtuple('CAR_STATUS', 'car_status Inverter_status: inverter_l Inverter_status: inverter_r')
CAR_STATUS_schema = '<ccc'


def serialize_TLM_STATUS(struct: TLM_STATUS) -> bytearray:
	return pack(TLM_STATUS, *tuple(struct))


def serialize_CAR_STATUS(struct: CAR_STATUS) -> bytearray:
	return pack(CAR_STATUS, *tuple(struct))


def deserialize_TLM_STATUS(buffer: bytearray) -> TLM_STATUS:
	return TLM_STATUS._make(unpack(TLM_STATUS_schema, buffer))


def deserialize_CAR_STATUS(buffer: bytearray) -> CAR_STATUS:
	return CAR_STATUS._make(unpack(CAR_STATUS_schema, buffer))


