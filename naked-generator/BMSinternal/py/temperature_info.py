from enum import Enum
from struct import pack, unpack
from collections import namedtuple


TEMPERATURES_CB0_0 = namedtuple('TEMPERATURES_CB0_0', 'temperature0 temperature1 temperature2 temperature3 temperature4 temperature5 temperature6 temperature7')
TEMPERATURES_CB0_0_schema = '<BBBBBBBB'

TEMPERATURES_CB0_1 = namedtuple('TEMPERATURES_CB0_1', 'temperature8 temperature9 temperature10 temperature11 temperature12 temperature13 temperature14 temperature15')
TEMPERATURES_CB0_1_schema = '<BBBBBBBB'

TEMPERATURES_CB0_2 = namedtuple('TEMPERATURES_CB0_2', 'temperature16 temperature17')
TEMPERATURES_CB0_2_schema = '<BB'

TEMPERATURES_CB1_0 = namedtuple('TEMPERATURES_CB1_0', 'temperature0 temperature1 temperature2 temperature3 temperature4 temperature5 temperature6 temperature7')
TEMPERATURES_CB1_0_schema = '<BBBBBBBB'

TEMPERATURES_CB1_1 = namedtuple('TEMPERATURES_CB1_1', 'temperature8 temperature9 temperature10 temperature11 temperature12 temperature13 temperature14 temperature15')
TEMPERATURES_CB1_1_schema = '<BBBBBBBB'

TEMPERATURES_CB1_2 = namedtuple('TEMPERATURES_CB1_2', 'temperature16 temperature17 max_temperature min_temperature')
TEMPERATURES_CB1_2_schema = '<BBBB'

TEMPERATURES_CB2_0 = namedtuple('TEMPERATURES_CB2_0', 'temperature0 temperature1 temperature2 temperature3 temperature4 temperature5 temperature6 temperature7')
TEMPERATURES_CB2_0_schema = '<BBBBBBBB'

TEMPERATURES_CB2_1 = namedtuple('TEMPERATURES_CB2_1', 'temperature8 temperature9 temperature10 temperature11 temperature12 temperature13 temperature14 temperature15')
TEMPERATURES_CB2_1_schema = '<BBBBBBBB'

TEMPERATURES_CB2_2 = namedtuple('TEMPERATURES_CB2_2', 'temperature16 temperature17 max_temperature min_temperature')
TEMPERATURES_CB2_2_schema = '<BBBB'

TEMPERATURES_CB3_0 = namedtuple('TEMPERATURES_CB3_0', 'temperature0 temperature1 temperature2 temperature3 temperature4 temperature5 temperature6 temperature7')
TEMPERATURES_CB3_0_schema = '<BBBBBBBB'

TEMPERATURES_CB3_1 = namedtuple('TEMPERATURES_CB3_1', 'temperature8 temperature9 temperature10 temperature11 temperature12 temperature13 temperature14 temperature15')
TEMPERATURES_CB3_1_schema = '<BBBBBBBB'

TEMPERATURES_CB3_2 = namedtuple('TEMPERATURES_CB3_2', 'temperature16 temperature17 max_temperature min_temperature')
TEMPERATURES_CB3_2_schema = '<BBBB'

TEMPERATURES_CB4_0 = namedtuple('TEMPERATURES_CB4_0', 'temperature0 temperature1 temperature2 temperature3 temperature4 temperature5 temperature6 temperature7')
TEMPERATURES_CB4_0_schema = '<BBBBBBBB'

TEMPERATURES_CB4_1 = namedtuple('TEMPERATURES_CB4_1', 'temperature8 temperature9 temperature10 temperature11 temperature12 temperature13 temperature14 temperature15')
TEMPERATURES_CB4_1_schema = '<BBBBBBBB'

TEMPERATURES_CB4_2 = namedtuple('TEMPERATURES_CB4_2', 'temperature16 temperature17 max_temperature min_temperature')
TEMPERATURES_CB4_2_schema = '<BBBB'

TEMPERATURES_CB5_0 = namedtuple('TEMPERATURES_CB5_0', 'temperature0 temperature1 temperature2 temperature3 temperature4 temperature5 temperature6 temperature7')
TEMPERATURES_CB5_0_schema = '<BBBBBBBB'

TEMPERATURES_CB5_1 = namedtuple('TEMPERATURES_CB5_1', 'temperature8 temperature9 temperature10 temperature11 temperature12 temperature13 temperature14 temperature15')
TEMPERATURES_CB5_1_schema = '<BBBBBBBB'

TEMPERATURES_CB5_2 = namedtuple('TEMPERATURES_CB5_2', 'temperature16 temperature17 max_temperature min_temperature')
TEMPERATURES_CB5_2_schema = '<BBBB'


def serialize_TEMPERATURES_CB0_0(struct: TEMPERATURES_CB0_0) -> bytearray:
	return pack(TEMPERATURES_CB0_0, *tuple(struct))


def serialize_TEMPERATURES_CB0_1(struct: TEMPERATURES_CB0_1) -> bytearray:
	return pack(TEMPERATURES_CB0_1, *tuple(struct))


def serialize_TEMPERATURES_CB0_2(struct: TEMPERATURES_CB0_2) -> bytearray:
	return pack(TEMPERATURES_CB0_2, *tuple(struct))


def serialize_TEMPERATURES_CB1_0(struct: TEMPERATURES_CB1_0) -> bytearray:
	return pack(TEMPERATURES_CB1_0, *tuple(struct))


def serialize_TEMPERATURES_CB1_1(struct: TEMPERATURES_CB1_1) -> bytearray:
	return pack(TEMPERATURES_CB1_1, *tuple(struct))


def serialize_TEMPERATURES_CB1_2(struct: TEMPERATURES_CB1_2) -> bytearray:
	return pack(TEMPERATURES_CB1_2, *tuple(struct))


def serialize_TEMPERATURES_CB2_0(struct: TEMPERATURES_CB2_0) -> bytearray:
	return pack(TEMPERATURES_CB2_0, *tuple(struct))


def serialize_TEMPERATURES_CB2_1(struct: TEMPERATURES_CB2_1) -> bytearray:
	return pack(TEMPERATURES_CB2_1, *tuple(struct))


def serialize_TEMPERATURES_CB2_2(struct: TEMPERATURES_CB2_2) -> bytearray:
	return pack(TEMPERATURES_CB2_2, *tuple(struct))


def serialize_TEMPERATURES_CB3_0(struct: TEMPERATURES_CB3_0) -> bytearray:
	return pack(TEMPERATURES_CB3_0, *tuple(struct))


def serialize_TEMPERATURES_CB3_1(struct: TEMPERATURES_CB3_1) -> bytearray:
	return pack(TEMPERATURES_CB3_1, *tuple(struct))


def serialize_TEMPERATURES_CB3_2(struct: TEMPERATURES_CB3_2) -> bytearray:
	return pack(TEMPERATURES_CB3_2, *tuple(struct))


def serialize_TEMPERATURES_CB4_0(struct: TEMPERATURES_CB4_0) -> bytearray:
	return pack(TEMPERATURES_CB4_0, *tuple(struct))


def serialize_TEMPERATURES_CB4_1(struct: TEMPERATURES_CB4_1) -> bytearray:
	return pack(TEMPERATURES_CB4_1, *tuple(struct))


def serialize_TEMPERATURES_CB4_2(struct: TEMPERATURES_CB4_2) -> bytearray:
	return pack(TEMPERATURES_CB4_2, *tuple(struct))


def serialize_TEMPERATURES_CB5_0(struct: TEMPERATURES_CB5_0) -> bytearray:
	return pack(TEMPERATURES_CB5_0, *tuple(struct))


def serialize_TEMPERATURES_CB5_1(struct: TEMPERATURES_CB5_1) -> bytearray:
	return pack(TEMPERATURES_CB5_1, *tuple(struct))


def serialize_TEMPERATURES_CB5_2(struct: TEMPERATURES_CB5_2) -> bytearray:
	return pack(TEMPERATURES_CB5_2, *tuple(struct))


def deserialize_TEMPERATURES_CB0_0(buffer: bytearray) -> TEMPERATURES_CB0_0:
	return TEMPERATURES_CB0_0._make(unpack(TEMPERATURES_CB0_0_schema, buffer))


def deserialize_TEMPERATURES_CB0_1(buffer: bytearray) -> TEMPERATURES_CB0_1:
	return TEMPERATURES_CB0_1._make(unpack(TEMPERATURES_CB0_1_schema, buffer))


def deserialize_TEMPERATURES_CB0_2(buffer: bytearray) -> TEMPERATURES_CB0_2:
	return TEMPERATURES_CB0_2._make(unpack(TEMPERATURES_CB0_2_schema, buffer))


def deserialize_TEMPERATURES_CB1_0(buffer: bytearray) -> TEMPERATURES_CB1_0:
	return TEMPERATURES_CB1_0._make(unpack(TEMPERATURES_CB1_0_schema, buffer))


def deserialize_TEMPERATURES_CB1_1(buffer: bytearray) -> TEMPERATURES_CB1_1:
	return TEMPERATURES_CB1_1._make(unpack(TEMPERATURES_CB1_1_schema, buffer))


def deserialize_TEMPERATURES_CB1_2(buffer: bytearray) -> TEMPERATURES_CB1_2:
	return TEMPERATURES_CB1_2._make(unpack(TEMPERATURES_CB1_2_schema, buffer))


def deserialize_TEMPERATURES_CB2_0(buffer: bytearray) -> TEMPERATURES_CB2_0:
	return TEMPERATURES_CB2_0._make(unpack(TEMPERATURES_CB2_0_schema, buffer))


def deserialize_TEMPERATURES_CB2_1(buffer: bytearray) -> TEMPERATURES_CB2_1:
	return TEMPERATURES_CB2_1._make(unpack(TEMPERATURES_CB2_1_schema, buffer))


def deserialize_TEMPERATURES_CB2_2(buffer: bytearray) -> TEMPERATURES_CB2_2:
	return TEMPERATURES_CB2_2._make(unpack(TEMPERATURES_CB2_2_schema, buffer))


def deserialize_TEMPERATURES_CB3_0(buffer: bytearray) -> TEMPERATURES_CB3_0:
	return TEMPERATURES_CB3_0._make(unpack(TEMPERATURES_CB3_0_schema, buffer))


def deserialize_TEMPERATURES_CB3_1(buffer: bytearray) -> TEMPERATURES_CB3_1:
	return TEMPERATURES_CB3_1._make(unpack(TEMPERATURES_CB3_1_schema, buffer))


def deserialize_TEMPERATURES_CB3_2(buffer: bytearray) -> TEMPERATURES_CB3_2:
	return TEMPERATURES_CB3_2._make(unpack(TEMPERATURES_CB3_2_schema, buffer))


def deserialize_TEMPERATURES_CB4_0(buffer: bytearray) -> TEMPERATURES_CB4_0:
	return TEMPERATURES_CB4_0._make(unpack(TEMPERATURES_CB4_0_schema, buffer))


def deserialize_TEMPERATURES_CB4_1(buffer: bytearray) -> TEMPERATURES_CB4_1:
	return TEMPERATURES_CB4_1._make(unpack(TEMPERATURES_CB4_1_schema, buffer))


def deserialize_TEMPERATURES_CB4_2(buffer: bytearray) -> TEMPERATURES_CB4_2:
	return TEMPERATURES_CB4_2._make(unpack(TEMPERATURES_CB4_2_schema, buffer))


def deserialize_TEMPERATURES_CB5_0(buffer: bytearray) -> TEMPERATURES_CB5_0:
	return TEMPERATURES_CB5_0._make(unpack(TEMPERATURES_CB5_0_schema, buffer))


def deserialize_TEMPERATURES_CB5_1(buffer: bytearray) -> TEMPERATURES_CB5_1:
	return TEMPERATURES_CB5_1._make(unpack(TEMPERATURES_CB5_1_schema, buffer))


def deserialize_TEMPERATURES_CB5_2(buffer: bytearray) -> TEMPERATURES_CB5_2:
	return TEMPERATURES_CB5_2._make(unpack(TEMPERATURES_CB5_2_schema, buffer))


