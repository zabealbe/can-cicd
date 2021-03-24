from enum import Enum
from struct import pack, unpack
from collections import namedtuple


HV_VOLTAGE = namedtuple('HV_VOLTAGE', 'pack_voltage bus_voltage max_cell_voltage min_cell_voltage')
HV_VOLTAGE_schema = '<HHHH'

HV_CURRENT = namedtuple('HV_CURRENT', 'current power')
HV_CURRENT_schema = '<Hc'

HV_TEMP = namedtuple('HV_TEMP', 'average_temp max_temp min_temp')
HV_TEMP_schema = '<HHH'

HV_ERROR = namedtuple('HV_ERROR', 'error_code error_index active')
HV_ERROR_schema = '<BBB'


def serialize_HV_VOLTAGE(struct: HV_VOLTAGE) -> bytearray:
	return pack(HV_VOLTAGE, *tuple(struct))


def serialize_HV_CURRENT(struct: HV_CURRENT) -> bytearray:
	return pack(HV_CURRENT, *tuple(struct))


def serialize_HV_TEMP(struct: HV_TEMP) -> bytearray:
	return pack(HV_TEMP, *tuple(struct))


def serialize_HV_ERROR(struct: HV_ERROR) -> bytearray:
	return pack(HV_ERROR, *tuple(struct))


def deserialize_HV_VOLTAGE(buffer: bytearray) -> HV_VOLTAGE:
	return HV_VOLTAGE._make(unpack(HV_VOLTAGE_schema, buffer))


def deserialize_HV_CURRENT(buffer: bytearray) -> HV_CURRENT:
	return HV_CURRENT._make(unpack(HV_CURRENT_schema, buffer))


def deserialize_HV_TEMP(buffer: bytearray) -> HV_TEMP:
	return HV_TEMP._make(unpack(HV_TEMP_schema, buffer))


def deserialize_HV_ERROR(buffer: bytearray) -> HV_ERROR:
	return HV_ERROR._make(unpack(HV_ERROR_schema, buffer))


