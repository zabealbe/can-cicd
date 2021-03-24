from enum import Enum
from struct import pack, unpack
from collections import namedtuple


IMU_ANGULAR_RATE = namedtuple('IMU_ANGULAR_RATE', 'ang_rate_x ang_rate_y ang_rate_z')
IMU_ANGULAR_RATE_schema = '<HHH'

IMU_ACCELERATION = namedtuple('IMU_ACCELERATION', 'accel_x accel_y accel_z')
IMU_ACCELERATION_schema = '<HHH'

IRTS_FL_0 = namedtuple('IRTS_FL_0', 'channel1 channel2 channel3 channel4')
IRTS_FL_0_schema = '<HHHH'

IRTS_FL_1 = namedtuple('IRTS_FL_1', 'channel5 channel6 channel7 channel8')
IRTS_FL_1_schema = '<HHHH'

IRTS_FL_2 = namedtuple('IRTS_FL_2', 'channel9 channel10 channel11 channel12')
IRTS_FL_2_schema = '<HHHH'

IRTS_FL_3 = namedtuple('IRTS_FL_3', 'channel13 channel14 channel15 channel16')
IRTS_FL_3_schema = '<HHHH'

IRTS_FR_0 = namedtuple('IRTS_FR_0', 'channel1 channel2 channel3 channel4')
IRTS_FR_0_schema = '<HHHH'

IRTS_FR_1 = namedtuple('IRTS_FR_1', 'channel5 channel6 channel7 channel8')
IRTS_FR_1_schema = '<HHHH'

IRTS_FR_2 = namedtuple('IRTS_FR_2', 'channel9 channel10 channel11 channel12')
IRTS_FR_2_schema = '<HHHH'

IRTS_FR_3 = namedtuple('IRTS_FR_3', 'channel13 channel14 channel15 channel16')
IRTS_FR_3_schema = '<HHHH'

IRTS_RL_0 = namedtuple('IRTS_RL_0', 'channel1 channel2 channel3 channel4')
IRTS_RL_0_schema = '<HHHH'

IRTS_RL_1 = namedtuple('IRTS_RL_1', 'channel5 channel6 channel7 channel8')
IRTS_RL_1_schema = '<HHHH'

IRTS_RL_2 = namedtuple('IRTS_RL_2', 'channel9 channel10 channel11 channel12')
IRTS_RL_2_schema = '<HHHH'

IRTS_RL_3 = namedtuple('IRTS_RL_3', 'channel13 channel14 channel15 channel16')
IRTS_RL_3_schema = '<HHHH'

IRTS_RR_0 = namedtuple('IRTS_RR_0', 'channel1 channel2 channel3 channel4')
IRTS_RR_0_schema = '<HHHH'

IRTS_RR_1 = namedtuple('IRTS_RR_1', 'channel5 channel6 channel7 channel8')
IRTS_RR_1_schema = '<HHHH'

IRTS_RR_2 = namedtuple('IRTS_RR_2', 'channel9 channel10 channel11 channel12')
IRTS_RR_2_schema = '<HHHH'

IRTS_RR_3 = namedtuple('IRTS_RR_3', 'channel13 channel14 channel15 channel16')
IRTS_RR_3_schema = '<HHHH'


def serialize_IMU_ANGULAR_RATE(struct: IMU_ANGULAR_RATE) -> bytearray:
	return pack(IMU_ANGULAR_RATE, *tuple(struct))


def serialize_IMU_ACCELERATION(struct: IMU_ACCELERATION) -> bytearray:
	return pack(IMU_ACCELERATION, *tuple(struct))


def serialize_IRTS_FL_0(struct: IRTS_FL_0) -> bytearray:
	return pack(IRTS_FL_0, *tuple(struct))


def serialize_IRTS_FL_1(struct: IRTS_FL_1) -> bytearray:
	return pack(IRTS_FL_1, *tuple(struct))


def serialize_IRTS_FL_2(struct: IRTS_FL_2) -> bytearray:
	return pack(IRTS_FL_2, *tuple(struct))


def serialize_IRTS_FL_3(struct: IRTS_FL_3) -> bytearray:
	return pack(IRTS_FL_3, *tuple(struct))


def serialize_IRTS_FR_0(struct: IRTS_FR_0) -> bytearray:
	return pack(IRTS_FR_0, *tuple(struct))


def serialize_IRTS_FR_1(struct: IRTS_FR_1) -> bytearray:
	return pack(IRTS_FR_1, *tuple(struct))


def serialize_IRTS_FR_2(struct: IRTS_FR_2) -> bytearray:
	return pack(IRTS_FR_2, *tuple(struct))


def serialize_IRTS_FR_3(struct: IRTS_FR_3) -> bytearray:
	return pack(IRTS_FR_3, *tuple(struct))


def serialize_IRTS_RL_0(struct: IRTS_RL_0) -> bytearray:
	return pack(IRTS_RL_0, *tuple(struct))


def serialize_IRTS_RL_1(struct: IRTS_RL_1) -> bytearray:
	return pack(IRTS_RL_1, *tuple(struct))


def serialize_IRTS_RL_2(struct: IRTS_RL_2) -> bytearray:
	return pack(IRTS_RL_2, *tuple(struct))


def serialize_IRTS_RL_3(struct: IRTS_RL_3) -> bytearray:
	return pack(IRTS_RL_3, *tuple(struct))


def serialize_IRTS_RR_0(struct: IRTS_RR_0) -> bytearray:
	return pack(IRTS_RR_0, *tuple(struct))


def serialize_IRTS_RR_1(struct: IRTS_RR_1) -> bytearray:
	return pack(IRTS_RR_1, *tuple(struct))


def serialize_IRTS_RR_2(struct: IRTS_RR_2) -> bytearray:
	return pack(IRTS_RR_2, *tuple(struct))


def serialize_IRTS_RR_3(struct: IRTS_RR_3) -> bytearray:
	return pack(IRTS_RR_3, *tuple(struct))


def deserialize_IMU_ANGULAR_RATE(buffer: bytearray) -> IMU_ANGULAR_RATE:
	return IMU_ANGULAR_RATE._make(unpack(IMU_ANGULAR_RATE_schema, buffer))


def deserialize_IMU_ACCELERATION(buffer: bytearray) -> IMU_ACCELERATION:
	return IMU_ACCELERATION._make(unpack(IMU_ACCELERATION_schema, buffer))


def deserialize_IRTS_FL_0(buffer: bytearray) -> IRTS_FL_0:
	return IRTS_FL_0._make(unpack(IRTS_FL_0_schema, buffer))


def deserialize_IRTS_FL_1(buffer: bytearray) -> IRTS_FL_1:
	return IRTS_FL_1._make(unpack(IRTS_FL_1_schema, buffer))


def deserialize_IRTS_FL_2(buffer: bytearray) -> IRTS_FL_2:
	return IRTS_FL_2._make(unpack(IRTS_FL_2_schema, buffer))


def deserialize_IRTS_FL_3(buffer: bytearray) -> IRTS_FL_3:
	return IRTS_FL_3._make(unpack(IRTS_FL_3_schema, buffer))


def deserialize_IRTS_FR_0(buffer: bytearray) -> IRTS_FR_0:
	return IRTS_FR_0._make(unpack(IRTS_FR_0_schema, buffer))


def deserialize_IRTS_FR_1(buffer: bytearray) -> IRTS_FR_1:
	return IRTS_FR_1._make(unpack(IRTS_FR_1_schema, buffer))


def deserialize_IRTS_FR_2(buffer: bytearray) -> IRTS_FR_2:
	return IRTS_FR_2._make(unpack(IRTS_FR_2_schema, buffer))


def deserialize_IRTS_FR_3(buffer: bytearray) -> IRTS_FR_3:
	return IRTS_FR_3._make(unpack(IRTS_FR_3_schema, buffer))


def deserialize_IRTS_RL_0(buffer: bytearray) -> IRTS_RL_0:
	return IRTS_RL_0._make(unpack(IRTS_RL_0_schema, buffer))


def deserialize_IRTS_RL_1(buffer: bytearray) -> IRTS_RL_1:
	return IRTS_RL_1._make(unpack(IRTS_RL_1_schema, buffer))


def deserialize_IRTS_RL_2(buffer: bytearray) -> IRTS_RL_2:
	return IRTS_RL_2._make(unpack(IRTS_RL_2_schema, buffer))


def deserialize_IRTS_RL_3(buffer: bytearray) -> IRTS_RL_3:
	return IRTS_RL_3._make(unpack(IRTS_RL_3_schema, buffer))


def deserialize_IRTS_RR_0(buffer: bytearray) -> IRTS_RR_0:
	return IRTS_RR_0._make(unpack(IRTS_RR_0_schema, buffer))


def deserialize_IRTS_RR_1(buffer: bytearray) -> IRTS_RR_1:
	return IRTS_RR_1._make(unpack(IRTS_RR_1_schema, buffer))


def deserialize_IRTS_RR_2(buffer: bytearray) -> IRTS_RR_2:
	return IRTS_RR_2._make(unpack(IRTS_RR_2_schema, buffer))


def deserialize_IRTS_RR_3(buffer: bytearray) -> IRTS_RR_3:
	return IRTS_RR_3._make(unpack(IRTS_RR_3_schema, buffer))


