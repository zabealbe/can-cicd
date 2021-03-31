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
class TLM_STATUS:
    tuple = namedtuple("TLM_STATUS", "tlm_status, race_type, driver, circuit", rename=True)
    schema = "<bbBB"
    
    @staticmethod
    def serialize(tlm_status, race_type, driver, circuit) -> bytes:
        return pack(TLM_STATUS.schema, tlm_status, race_type, driver, circuit)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TLM_STATUS":
        return TLM_STATUS.tuple._make(unpack(TLM_STATUS.schema, buffer))


# CAR_STATUS
class CAR_STATUS:
    tuple = namedtuple("CAR_STATUS", "car_status, inverter_l, inverter_r", rename=True)
    schema = "<bbb"
    
    @staticmethod
    def serialize(car_status, inverter_l, inverter_r) -> bytes:
        return pack(CAR_STATUS.schema, car_status, inverter_l, inverter_r)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "CAR_STATUS":
        return CAR_STATUS.tuple._make(unpack(CAR_STATUS.schema, buffer))


# SET_TLM_STATUS
class SET_TLM_STATUS:
    tuple = namedtuple("SET_TLM_STATUS", "tlm_status, race_type, driver, circuit", rename=True)
    schema = "<bbBB"
    
    @staticmethod
    def serialize(tlm_status, race_type, driver, circuit) -> bytes:
        return pack(SET_TLM_STATUS.schema, tlm_status, race_type, driver, circuit)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SET_TLM_STATUS":
        return SET_TLM_STATUS.tuple._make(unpack(SET_TLM_STATUS.schema, buffer))


# HV_VOLTAGE
class HV_VOLTAGE:
    tuple = namedtuple("HV_VOLTAGE", "pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage) -> bytes:
        return pack(HV_VOLTAGE.schema, pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HV_VOLTAGE":
        return HV_VOLTAGE.tuple._make(unpack(HV_VOLTAGE.schema, buffer))


# HV_CURRENT
class HV_CURRENT:
    tuple = namedtuple("HV_CURRENT", "power, current", rename=True)
    schema = "<bcH"
    
    @staticmethod
    def serialize(power, current) -> bytes:
        return pack(HV_CURRENT.schema, power, 0x00, current)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HV_CURRENT":
        return HV_CURRENT.tuple._make(unpack(HV_CURRENT.schema, buffer))


# HV_TEMP
class HV_TEMP:
    tuple = namedtuple("HV_TEMP", "average_temp, max_temp, min_temp", rename=True)
    schema = "<HHH"
    
    @staticmethod
    def serialize(average_temp, max_temp, min_temp) -> bytes:
        return pack(HV_TEMP.schema, average_temp, max_temp, min_temp)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HV_TEMP":
        return HV_TEMP.tuple._make(unpack(HV_TEMP.schema, buffer))


# HV_ERROR
class HV_ERROR:
    tuple = namedtuple("HV_ERROR", "error_code, error_index, active", rename=True)
    schema = "<BBB"
    
    @staticmethod
    def serialize(error_code, error_index, active) -> bytes:
        return pack(HV_ERROR.schema, error_code, error_index, active)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HV_ERROR":
        return HV_ERROR.tuple._make(unpack(HV_ERROR.schema, buffer))


# TS_STATUS
class TS_STATUS:
    tuple = namedtuple("TS_STATUS", "ts_status", rename=True)
    schema = "<b"
    
    @staticmethod
    def serialize(ts_status) -> bytes:
        return pack(TS_STATUS.schema, ts_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TS_STATUS":
        return TS_STATUS.tuple._make(unpack(TS_STATUS.schema, buffer))


# STEER_STATUS
class STEER_STATUS:
    tuple = namedtuple("STEER_STATUS", "traction_control, map, radio_on", rename=True)
    schema = "<bb?"
    
    @staticmethod
    def serialize(traction_control, map, radio_on) -> bytes:
        return pack(STEER_STATUS.schema, traction_control, map, radio_on)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "STEER_STATUS":
        return STEER_STATUS.tuple._make(unpack(STEER_STATUS.schema, buffer))


# SET_CAR_STATUS
class SET_CAR_STATUS:
    tuple = namedtuple("SET_CAR_STATUS", "car_status_set", rename=True)
    schema = "<b"
    
    @staticmethod
    def serialize(car_status_set) -> bytes:
        return pack(SET_CAR_STATUS.schema, car_status_set)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SET_CAR_STATUS":
        return SET_CAR_STATUS.tuple._make(unpack(SET_CAR_STATUS.schema, buffer))


# SET_TS_STATUS
class SET_TS_STATUS:
    tuple = namedtuple("SET_TS_STATUS", "ts_status_set", rename=True)
    schema = "<b"
    
    @staticmethod
    def serialize(ts_status_set) -> bytes:
        return pack(SET_TS_STATUS.schema, ts_status_set)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SET_TS_STATUS":
        return SET_TS_STATUS.tuple._make(unpack(SET_TS_STATUS.schema, buffer))
