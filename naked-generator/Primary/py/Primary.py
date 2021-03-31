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


class Inverter_Status(Enum):
    OFF = 0
    IDLE = 1
    ON = 2


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


class Ts_Status_Set(Enum):
    OFF = 0
    ON = 1


# TLM_STATUS
TLM_STATUS = namedtuple("TLM_STATUS", "tlm_status race_type driver circuit", rename=True)
TLM_STATUS_schema = "<bbBB"

def serialize_TLM_STATUS(struct: TLM_STATUS) -> bytes:
    return pack(TLM_STATUS_schema, *tuple(struct))

def deserialize_TLM_STATUS(buffer: bytes) -> TLM_STATUS:
    return TLM_STATUS._make(unpack(TLM_STATUS_schema, buffer))


# CAR_STATUS
CAR_STATUS = namedtuple("CAR_STATUS", "car_status inverter_l inverter_r", rename=True)
CAR_STATUS_schema = "<bbb"

def serialize_CAR_STATUS(struct: CAR_STATUS) -> bytes:
    return pack(CAR_STATUS_schema, *tuple(struct))

def deserialize_CAR_STATUS(buffer: bytes) -> CAR_STATUS:
    return CAR_STATUS._make(unpack(CAR_STATUS_schema, buffer))


# SET_TLM_STATUS
SET_TLM_STATUS = namedtuple("SET_TLM_STATUS", "tlm_status race_type driver circuit", rename=True)
SET_TLM_STATUS_schema = "<bbBB"

def serialize_SET_TLM_STATUS(struct: SET_TLM_STATUS) -> bytes:
    return pack(SET_TLM_STATUS_schema, *tuple(struct))

def deserialize_SET_TLM_STATUS(buffer: bytes) -> SET_TLM_STATUS:
    return SET_TLM_STATUS._make(unpack(SET_TLM_STATUS_schema, buffer))


# HV_VOLTAGE
HV_VOLTAGE = namedtuple("HV_VOLTAGE", "pack_voltage bus_voltage max_cell_voltage min_cell_voltage", rename=True)
HV_VOLTAGE_schema = "<HHHH"

def serialize_HV_VOLTAGE(struct: HV_VOLTAGE) -> bytes:
    return pack(HV_VOLTAGE_schema, *tuple(struct))

def deserialize_HV_VOLTAGE(buffer: bytes) -> HV_VOLTAGE:
    return HV_VOLTAGE._make(unpack(HV_VOLTAGE_schema, buffer))


# HV_CURRENT
HV_CURRENT = namedtuple("HV_CURRENT", "power __unused_padding_1 current", rename=True)
HV_CURRENT_schema = "<bcH"

def serialize_HV_CURRENT(struct: HV_CURRENT) -> bytes:
    return pack(HV_CURRENT_schema, *tuple(struct))

def deserialize_HV_CURRENT(buffer: bytes) -> HV_CURRENT:
    return HV_CURRENT._make(unpack(HV_CURRENT_schema, buffer))


# HV_TEMP
HV_TEMP = namedtuple("HV_TEMP", "average_temp max_temp min_temp", rename=True)
HV_TEMP_schema = "<HHH"

def serialize_HV_TEMP(struct: HV_TEMP) -> bytes:
    return pack(HV_TEMP_schema, *tuple(struct))

def deserialize_HV_TEMP(buffer: bytes) -> HV_TEMP:
    return HV_TEMP._make(unpack(HV_TEMP_schema, buffer))


# HV_ERROR
HV_ERROR = namedtuple("HV_ERROR", "error_code error_index active", rename=True)
HV_ERROR_schema = "<BBB"

def serialize_HV_ERROR(struct: HV_ERROR) -> bytes:
    return pack(HV_ERROR_schema, *tuple(struct))

def deserialize_HV_ERROR(buffer: bytes) -> HV_ERROR:
    return HV_ERROR._make(unpack(HV_ERROR_schema, buffer))


# TS_STATUS
TS_STATUS = namedtuple("TS_STATUS", "ts_status", rename=True)
TS_STATUS_schema = "<b"

def serialize_TS_STATUS(struct: TS_STATUS) -> bytes:
    return pack(TS_STATUS_schema, *tuple(struct))

def deserialize_TS_STATUS(buffer: bytes) -> TS_STATUS:
    return TS_STATUS._make(unpack(TS_STATUS_schema, buffer))


# STEER_STATUS
STEER_STATUS = namedtuple("STEER_STATUS", "traction_control map radio_on", rename=True)
STEER_STATUS_schema = "<bb?"

def serialize_STEER_STATUS(struct: STEER_STATUS) -> bytes:
    return pack(STEER_STATUS_schema, *tuple(struct))

def deserialize_STEER_STATUS(buffer: bytes) -> STEER_STATUS:
    return STEER_STATUS._make(unpack(STEER_STATUS_schema, buffer))


# SET_CAR_STATUS
SET_CAR_STATUS = namedtuple("SET_CAR_STATUS", "car_status_set", rename=True)
SET_CAR_STATUS_schema = "<b"

def serialize_SET_CAR_STATUS(struct: SET_CAR_STATUS) -> bytes:
    return pack(SET_CAR_STATUS_schema, *tuple(struct))

def deserialize_SET_CAR_STATUS(buffer: bytes) -> SET_CAR_STATUS:
    return SET_CAR_STATUS._make(unpack(SET_CAR_STATUS_schema, buffer))


# SET_TS_STATUS
SET_TS_STATUS = namedtuple("SET_TS_STATUS", "ts_status_set", rename=True)
SET_TS_STATUS_schema = "<b"

def serialize_SET_TS_STATUS(struct: SET_TS_STATUS) -> bytes:
    return pack(SET_TS_STATUS_schema, *tuple(struct))

def deserialize_SET_TS_STATUS(buffer: bytes) -> SET_TS_STATUS:
    return SET_TS_STATUS._make(unpack(SET_TS_STATUS_schema, buffer))
