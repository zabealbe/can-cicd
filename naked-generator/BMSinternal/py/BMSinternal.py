from enum import Enum
from struct import pack, unpack
from collections import namedtuple


VOLTAGES_CB0_0 = namedtuple('VOLTAGES_CB0_0', 'voltage0 voltage1 voltage2 voltage3')
VOLTAGES_CB0_0_schema = '<HHHH'

VOLTAGES_CB0_1 = namedtuple('VOLTAGES_CB0_1', 'voltage4 voltage5 voltage6 voltage7')
VOLTAGES_CB0_1_schema = '<HHHH'

VOLTAGES_CB0_2 = namedtuple('VOLTAGES_CB0_2', 'voltage8 voltage9 voltage10 voltage11')
VOLTAGES_CB0_2_schema = '<HHHH'

VOLTAGES_CB0_3 = namedtuple('VOLTAGES_CB0_3', 'voltage12 voltage13 voltage14 voltage15')
VOLTAGES_CB0_3_schema = '<HHHH'

VOLTAGES_CB0_4 = namedtuple('VOLTAGES_CB0_4', 'voltage16 voltage17 max_voltage min_voltage')
VOLTAGES_CB0_4_schema = '<HHHH'

VOLTAGES_CB1_0 = namedtuple('VOLTAGES_CB1_0', 'voltage0 voltage1 voltage2 voltage3')
VOLTAGES_CB1_0_schema = '<HHHH'

VOLTAGES_CB1_1 = namedtuple('VOLTAGES_CB1_1', 'voltage4 voltage5 voltage6 voltage7')
VOLTAGES_CB1_1_schema = '<HHHH'

VOLTAGES_CB1_2 = namedtuple('VOLTAGES_CB1_2', 'voltage8 voltage9 voltage10 voltage11')
VOLTAGES_CB1_2_schema = '<HHHH'

VOLTAGES_CB1_3 = namedtuple('VOLTAGES_CB1_3', 'voltage12 voltage13 voltage14 voltage15')
VOLTAGES_CB1_3_schema = '<HHHH'

VOLTAGES_CB1_4 = namedtuple('VOLTAGES_CB1_4', 'voltage16 voltage17 max_voltage min_voltage')
VOLTAGES_CB1_4_schema = '<HHHH'

VOLTAGES_CB2_0 = namedtuple('VOLTAGES_CB2_0', 'voltage0 voltage1 voltage2 voltage3')
VOLTAGES_CB2_0_schema = '<HHHH'

VOLTAGES_CB2_1 = namedtuple('VOLTAGES_CB2_1', 'voltage4 voltage5 voltage6 voltage7')
VOLTAGES_CB2_1_schema = '<HHHH'

VOLTAGES_CB2_2 = namedtuple('VOLTAGES_CB2_2', 'voltage8 voltage9 voltage10 voltage11')
VOLTAGES_CB2_2_schema = '<HHHH'

VOLTAGES_CB2_3 = namedtuple('VOLTAGES_CB2_3', 'voltage12 voltage13 voltage14 voltage15')
VOLTAGES_CB2_3_schema = '<HHHH'

VOLTAGES_CB2_4 = namedtuple('VOLTAGES_CB2_4', 'voltage16 voltage17 max_voltage min_voltage')
VOLTAGES_CB2_4_schema = '<HHHH'

VOLTAGES_CB3_0 = namedtuple('VOLTAGES_CB3_0', 'voltage0 voltage1 voltage2 voltage3')
VOLTAGES_CB3_0_schema = '<HHHH'

VOLTAGES_CB3_1 = namedtuple('VOLTAGES_CB3_1', 'voltage4 voltage5 voltage6 voltage7')
VOLTAGES_CB3_1_schema = '<HHHH'

VOLTAGES_CB3_2 = namedtuple('VOLTAGES_CB3_2', 'voltage8 voltage9 voltage10 voltage11')
VOLTAGES_CB3_2_schema = '<HHHH'

VOLTAGES_CB3_3 = namedtuple('VOLTAGES_CB3_3', 'voltage12 voltage13 voltage14 voltage15')
VOLTAGES_CB3_3_schema = '<HHHH'

VOLTAGES_CB3_4 = namedtuple('VOLTAGES_CB3_4', 'voltage16 voltage17 max_voltage min_voltage')
VOLTAGES_CB3_4_schema = '<HHHH'

VOLTAGES_CB4_0 = namedtuple('VOLTAGES_CB4_0', 'voltage0 voltage1 voltage2 voltage3')
VOLTAGES_CB4_0_schema = '<HHHH'

VOLTAGES_CB4_1 = namedtuple('VOLTAGES_CB4_1', 'voltage4 voltage5 voltage6 voltage7')
VOLTAGES_CB4_1_schema = '<HHHH'

VOLTAGES_CB4_2 = namedtuple('VOLTAGES_CB4_2', 'voltage8 voltage9 voltage10 voltage11')
VOLTAGES_CB4_2_schema = '<HHHH'

VOLTAGES_CB4_3 = namedtuple('VOLTAGES_CB4_3', 'voltage12 voltage13 voltage14 voltage15')
VOLTAGES_CB4_3_schema = '<HHHH'

VOLTAGES_CB4_4 = namedtuple('VOLTAGES_CB4_4', 'voltage16 voltage17 max_voltage min_voltage')
VOLTAGES_CB4_4_schema = '<HHHH'

VOLTAGES_CB5_0 = namedtuple('VOLTAGES_CB5_0', 'voltage0 voltage1 voltage2 voltage3')
VOLTAGES_CB5_0_schema = '<HHHH'

VOLTAGES_CB5_1 = namedtuple('VOLTAGES_CB5_1', 'voltage4 voltage5 voltage6 voltage7')
VOLTAGES_CB5_1_schema = '<HHHH'

VOLTAGES_CB5_2 = namedtuple('VOLTAGES_CB5_2', 'voltage8 voltage9 voltage10 voltage11')
VOLTAGES_CB5_2_schema = '<HHHH'

VOLTAGES_CB5_3 = namedtuple('VOLTAGES_CB5_3', 'voltage12 voltage13 voltage14 voltage15')
VOLTAGES_CB5_3_schema = '<HHHH'

VOLTAGES_CB5_4 = namedtuple('VOLTAGES_CB5_4', 'voltage16 voltage17 max_voltage min_voltage')
VOLTAGES_CB5_4_schema = '<HHHH'

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

MASTER_SYNC = namedtuple('MASTER_SYNC', 'time')
MASTER_SYNC_schema = '<I'

CELLBOARD_TOKEN = namedtuple('CELLBOARD_TOKEN', 'sender_cellboard __unused_padding_1 __unused_padding_2 __unused_padding_3 time')
CELLBOARD_TOKEN_schema = '<BPADDINGPADDINGPADDINGI'


def serialize_VOLTAGES_CB0_0(struct: VOLTAGES_CB0_0) -> bytearray:
	return pack(VOLTAGES_CB0_0, *tuple(struct))


def serialize_VOLTAGES_CB0_1(struct: VOLTAGES_CB0_1) -> bytearray:
	return pack(VOLTAGES_CB0_1, *tuple(struct))


def serialize_VOLTAGES_CB0_2(struct: VOLTAGES_CB0_2) -> bytearray:
	return pack(VOLTAGES_CB0_2, *tuple(struct))


def serialize_VOLTAGES_CB0_3(struct: VOLTAGES_CB0_3) -> bytearray:
	return pack(VOLTAGES_CB0_3, *tuple(struct))


def serialize_VOLTAGES_CB0_4(struct: VOLTAGES_CB0_4) -> bytearray:
	return pack(VOLTAGES_CB0_4, *tuple(struct))


def serialize_VOLTAGES_CB1_0(struct: VOLTAGES_CB1_0) -> bytearray:
	return pack(VOLTAGES_CB1_0, *tuple(struct))


def serialize_VOLTAGES_CB1_1(struct: VOLTAGES_CB1_1) -> bytearray:
	return pack(VOLTAGES_CB1_1, *tuple(struct))


def serialize_VOLTAGES_CB1_2(struct: VOLTAGES_CB1_2) -> bytearray:
	return pack(VOLTAGES_CB1_2, *tuple(struct))


def serialize_VOLTAGES_CB1_3(struct: VOLTAGES_CB1_3) -> bytearray:
	return pack(VOLTAGES_CB1_3, *tuple(struct))


def serialize_VOLTAGES_CB1_4(struct: VOLTAGES_CB1_4) -> bytearray:
	return pack(VOLTAGES_CB1_4, *tuple(struct))


def serialize_VOLTAGES_CB2_0(struct: VOLTAGES_CB2_0) -> bytearray:
	return pack(VOLTAGES_CB2_0, *tuple(struct))


def serialize_VOLTAGES_CB2_1(struct: VOLTAGES_CB2_1) -> bytearray:
	return pack(VOLTAGES_CB2_1, *tuple(struct))


def serialize_VOLTAGES_CB2_2(struct: VOLTAGES_CB2_2) -> bytearray:
	return pack(VOLTAGES_CB2_2, *tuple(struct))


def serialize_VOLTAGES_CB2_3(struct: VOLTAGES_CB2_3) -> bytearray:
	return pack(VOLTAGES_CB2_3, *tuple(struct))


def serialize_VOLTAGES_CB2_4(struct: VOLTAGES_CB2_4) -> bytearray:
	return pack(VOLTAGES_CB2_4, *tuple(struct))


def serialize_VOLTAGES_CB3_0(struct: VOLTAGES_CB3_0) -> bytearray:
	return pack(VOLTAGES_CB3_0, *tuple(struct))


def serialize_VOLTAGES_CB3_1(struct: VOLTAGES_CB3_1) -> bytearray:
	return pack(VOLTAGES_CB3_1, *tuple(struct))


def serialize_VOLTAGES_CB3_2(struct: VOLTAGES_CB3_2) -> bytearray:
	return pack(VOLTAGES_CB3_2, *tuple(struct))


def serialize_VOLTAGES_CB3_3(struct: VOLTAGES_CB3_3) -> bytearray:
	return pack(VOLTAGES_CB3_3, *tuple(struct))


def serialize_VOLTAGES_CB3_4(struct: VOLTAGES_CB3_4) -> bytearray:
	return pack(VOLTAGES_CB3_4, *tuple(struct))


def serialize_VOLTAGES_CB4_0(struct: VOLTAGES_CB4_0) -> bytearray:
	return pack(VOLTAGES_CB4_0, *tuple(struct))


def serialize_VOLTAGES_CB4_1(struct: VOLTAGES_CB4_1) -> bytearray:
	return pack(VOLTAGES_CB4_1, *tuple(struct))


def serialize_VOLTAGES_CB4_2(struct: VOLTAGES_CB4_2) -> bytearray:
	return pack(VOLTAGES_CB4_2, *tuple(struct))


def serialize_VOLTAGES_CB4_3(struct: VOLTAGES_CB4_3) -> bytearray:
	return pack(VOLTAGES_CB4_3, *tuple(struct))


def serialize_VOLTAGES_CB4_4(struct: VOLTAGES_CB4_4) -> bytearray:
	return pack(VOLTAGES_CB4_4, *tuple(struct))


def serialize_VOLTAGES_CB5_0(struct: VOLTAGES_CB5_0) -> bytearray:
	return pack(VOLTAGES_CB5_0, *tuple(struct))


def serialize_VOLTAGES_CB5_1(struct: VOLTAGES_CB5_1) -> bytearray:
	return pack(VOLTAGES_CB5_1, *tuple(struct))


def serialize_VOLTAGES_CB5_2(struct: VOLTAGES_CB5_2) -> bytearray:
	return pack(VOLTAGES_CB5_2, *tuple(struct))


def serialize_VOLTAGES_CB5_3(struct: VOLTAGES_CB5_3) -> bytearray:
	return pack(VOLTAGES_CB5_3, *tuple(struct))


def serialize_VOLTAGES_CB5_4(struct: VOLTAGES_CB5_4) -> bytearray:
	return pack(VOLTAGES_CB5_4, *tuple(struct))


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


def serialize_MASTER_SYNC(struct: MASTER_SYNC) -> bytearray:
	return pack(MASTER_SYNC, *tuple(struct))


def serialize_CELLBOARD_TOKEN(struct: CELLBOARD_TOKEN) -> bytearray:
	return pack(CELLBOARD_TOKEN, *tuple(struct))


def deserialize_VOLTAGES_CB0_0(buffer: bytearray) -> VOLTAGES_CB0_0:
	return VOLTAGES_CB0_0._make(unpack(VOLTAGES_CB0_0_schema, buffer))


def deserialize_VOLTAGES_CB0_1(buffer: bytearray) -> VOLTAGES_CB0_1:
	return VOLTAGES_CB0_1._make(unpack(VOLTAGES_CB0_1_schema, buffer))


def deserialize_VOLTAGES_CB0_2(buffer: bytearray) -> VOLTAGES_CB0_2:
	return VOLTAGES_CB0_2._make(unpack(VOLTAGES_CB0_2_schema, buffer))


def deserialize_VOLTAGES_CB0_3(buffer: bytearray) -> VOLTAGES_CB0_3:
	return VOLTAGES_CB0_3._make(unpack(VOLTAGES_CB0_3_schema, buffer))


def deserialize_VOLTAGES_CB0_4(buffer: bytearray) -> VOLTAGES_CB0_4:
	return VOLTAGES_CB0_4._make(unpack(VOLTAGES_CB0_4_schema, buffer))


def deserialize_VOLTAGES_CB1_0(buffer: bytearray) -> VOLTAGES_CB1_0:
	return VOLTAGES_CB1_0._make(unpack(VOLTAGES_CB1_0_schema, buffer))


def deserialize_VOLTAGES_CB1_1(buffer: bytearray) -> VOLTAGES_CB1_1:
	return VOLTAGES_CB1_1._make(unpack(VOLTAGES_CB1_1_schema, buffer))


def deserialize_VOLTAGES_CB1_2(buffer: bytearray) -> VOLTAGES_CB1_2:
	return VOLTAGES_CB1_2._make(unpack(VOLTAGES_CB1_2_schema, buffer))


def deserialize_VOLTAGES_CB1_3(buffer: bytearray) -> VOLTAGES_CB1_3:
	return VOLTAGES_CB1_3._make(unpack(VOLTAGES_CB1_3_schema, buffer))


def deserialize_VOLTAGES_CB1_4(buffer: bytearray) -> VOLTAGES_CB1_4:
	return VOLTAGES_CB1_4._make(unpack(VOLTAGES_CB1_4_schema, buffer))


def deserialize_VOLTAGES_CB2_0(buffer: bytearray) -> VOLTAGES_CB2_0:
	return VOLTAGES_CB2_0._make(unpack(VOLTAGES_CB2_0_schema, buffer))


def deserialize_VOLTAGES_CB2_1(buffer: bytearray) -> VOLTAGES_CB2_1:
	return VOLTAGES_CB2_1._make(unpack(VOLTAGES_CB2_1_schema, buffer))


def deserialize_VOLTAGES_CB2_2(buffer: bytearray) -> VOLTAGES_CB2_2:
	return VOLTAGES_CB2_2._make(unpack(VOLTAGES_CB2_2_schema, buffer))


def deserialize_VOLTAGES_CB2_3(buffer: bytearray) -> VOLTAGES_CB2_3:
	return VOLTAGES_CB2_3._make(unpack(VOLTAGES_CB2_3_schema, buffer))


def deserialize_VOLTAGES_CB2_4(buffer: bytearray) -> VOLTAGES_CB2_4:
	return VOLTAGES_CB2_4._make(unpack(VOLTAGES_CB2_4_schema, buffer))


def deserialize_VOLTAGES_CB3_0(buffer: bytearray) -> VOLTAGES_CB3_0:
	return VOLTAGES_CB3_0._make(unpack(VOLTAGES_CB3_0_schema, buffer))


def deserialize_VOLTAGES_CB3_1(buffer: bytearray) -> VOLTAGES_CB3_1:
	return VOLTAGES_CB3_1._make(unpack(VOLTAGES_CB3_1_schema, buffer))


def deserialize_VOLTAGES_CB3_2(buffer: bytearray) -> VOLTAGES_CB3_2:
	return VOLTAGES_CB3_2._make(unpack(VOLTAGES_CB3_2_schema, buffer))


def deserialize_VOLTAGES_CB3_3(buffer: bytearray) -> VOLTAGES_CB3_3:
	return VOLTAGES_CB3_3._make(unpack(VOLTAGES_CB3_3_schema, buffer))


def deserialize_VOLTAGES_CB3_4(buffer: bytearray) -> VOLTAGES_CB3_4:
	return VOLTAGES_CB3_4._make(unpack(VOLTAGES_CB3_4_schema, buffer))


def deserialize_VOLTAGES_CB4_0(buffer: bytearray) -> VOLTAGES_CB4_0:
	return VOLTAGES_CB4_0._make(unpack(VOLTAGES_CB4_0_schema, buffer))


def deserialize_VOLTAGES_CB4_1(buffer: bytearray) -> VOLTAGES_CB4_1:
	return VOLTAGES_CB4_1._make(unpack(VOLTAGES_CB4_1_schema, buffer))


def deserialize_VOLTAGES_CB4_2(buffer: bytearray) -> VOLTAGES_CB4_2:
	return VOLTAGES_CB4_2._make(unpack(VOLTAGES_CB4_2_schema, buffer))


def deserialize_VOLTAGES_CB4_3(buffer: bytearray) -> VOLTAGES_CB4_3:
	return VOLTAGES_CB4_3._make(unpack(VOLTAGES_CB4_3_schema, buffer))


def deserialize_VOLTAGES_CB4_4(buffer: bytearray) -> VOLTAGES_CB4_4:
	return VOLTAGES_CB4_4._make(unpack(VOLTAGES_CB4_4_schema, buffer))


def deserialize_VOLTAGES_CB5_0(buffer: bytearray) -> VOLTAGES_CB5_0:
	return VOLTAGES_CB5_0._make(unpack(VOLTAGES_CB5_0_schema, buffer))


def deserialize_VOLTAGES_CB5_1(buffer: bytearray) -> VOLTAGES_CB5_1:
	return VOLTAGES_CB5_1._make(unpack(VOLTAGES_CB5_1_schema, buffer))


def deserialize_VOLTAGES_CB5_2(buffer: bytearray) -> VOLTAGES_CB5_2:
	return VOLTAGES_CB5_2._make(unpack(VOLTAGES_CB5_2_schema, buffer))


def deserialize_VOLTAGES_CB5_3(buffer: bytearray) -> VOLTAGES_CB5_3:
	return VOLTAGES_CB5_3._make(unpack(VOLTAGES_CB5_3_schema, buffer))


def deserialize_VOLTAGES_CB5_4(buffer: bytearray) -> VOLTAGES_CB5_4:
	return VOLTAGES_CB5_4._make(unpack(VOLTAGES_CB5_4_schema, buffer))


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


def deserialize_MASTER_SYNC(buffer: bytearray) -> MASTER_SYNC:
	return MASTER_SYNC._make(unpack(MASTER_SYNC_schema, buffer))


def deserialize_CELLBOARD_TOKEN(buffer: bytearray) -> CELLBOARD_TOKEN:
	return CELLBOARD_TOKEN._make(unpack(CELLBOARD_TOKEN_schema, buffer))


