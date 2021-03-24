from enum import Enum
from struct import pack, unpack
from collections import namedtuple


class Ts_Status(Enum):
	OFF = 0
	PRECHARGE = 1
	ON = 2
	FATAL = 3


class Traction_Control(Enum):
	OFF = 0
	SLIP_CONTROL = 1
	TORQUE_VECTORING = 2
	COMPLETE = 3


class Map(Enum):
	R = 0
	D20 = 1
	D40 = 2
	D60 = 3
	D80 = 4
	D100 = 5


class Car_Status_Set(Enum):
	IDLE = 0
	RUN = 1


TS_STATUS = namedtuple('TS_STATUS', 'ts_status')
TS_STATUS_schema = '<c'

STEER_STATUS = namedtuple('STEER_STATUS', 'traction_control map radio_on')
STEER_STATUS_schema = '<cc?'

SET_CAR_STATUS = namedtuple('SET_CAR_STATUS', 'car_status_set')
SET_CAR_STATUS_schema = '<c'


def serialize_TS_STATUS(struct: TS_STATUS) -> bytearray:
	return pack(TS_STATUS, *tuple(struct))


def serialize_STEER_STATUS(struct: STEER_STATUS) -> bytearray:
	return pack(STEER_STATUS, *tuple(struct))


def serialize_SET_CAR_STATUS(struct: SET_CAR_STATUS) -> bytearray:
	return pack(SET_CAR_STATUS, *tuple(struct))


def deserialize_TS_STATUS(buffer: bytearray) -> TS_STATUS:
	return TS_STATUS._make(unpack(TS_STATUS_schema, buffer))


def deserialize_STEER_STATUS(buffer: bytearray) -> STEER_STATUS:
	return STEER_STATUS._make(unpack(STEER_STATUS_schema, buffer))


def deserialize_SET_CAR_STATUS(buffer: bytearray) -> SET_CAR_STATUS:
	return SET_CAR_STATUS._make(unpack(SET_CAR_STATUS_schema, buffer))


