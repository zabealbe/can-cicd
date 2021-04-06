from enum import Enum
from struct import pack, unpack
from collections import namedtuple


class Secondary_Sync_State(Enum):
    MAX_START = 0
    MAX_END = 1
    MIN_START = 2
    MIN_END = 3


class Secondary_Pedal(Enum):
    ACCELERATOR = 0
    BRAKE = 1
    ALL = 2


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

# TlmStatus
class TlmStatus:
    struct = namedtuple("TlmStatus_struct", "tlm_status, race_type, driver, circuit", rename=True)
    schema = "<bbbb"
    
    @staticmethod
    def serialize(tlm_status, race_type, driver, circuit) -> bytes:
        return pack(TlmStatus.schema, tlm_status, race_type, driver, circuit)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TlmStatus.struct":
        return TlmStatus.struct._make(unpack(TlmStatus.schema, buffer))

# CarStatus
class CarStatus:
    struct = namedtuple("CarStatus_struct", "car_status, inverter_l, inverter_r", rename=True)
    schema = "<bbb"
    
    @staticmethod
    def serialize(car_status, inverter_l, inverter_r) -> bytes:
        return pack(CarStatus.schema, car_status, inverter_l, inverter_r)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "CarStatus.struct":
        return CarStatus.struct._make(unpack(CarStatus.schema, buffer))

# SetTlmStatus
class SetTlmStatus:
    struct = namedtuple("SetTlmStatus_struct", "tlm_status, race_type, driver, circuit", rename=True)
    schema = "<bbbb"
    
    @staticmethod
    def serialize(tlm_status, race_type, driver, circuit) -> bytes:
        return pack(SetTlmStatus.schema, tlm_status, race_type, driver, circuit)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetTlmStatus.struct":
        return SetTlmStatus.struct._make(unpack(SetTlmStatus.schema, buffer))

# HvVoltage
class HvVoltage:
    struct = namedtuple("HvVoltage_struct", "pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage", rename=True)
    schema = "<bbbb"
    
    @staticmethod
    def serialize(pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage) -> bytes:
        return pack(HvVoltage.schema, pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvVoltage.struct":
        return HvVoltage.struct._make(unpack(HvVoltage.schema, buffer))

# HvCurrent
class HvCurrent:
    struct = namedtuple("HvCurrent_struct", "power, current", rename=True)
    schema = "<bbb"
    
    @staticmethod
    def serialize(power, current) -> bytes:
        return pack(HvCurrent.schema, power, 0x00, current)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvCurrent.struct":
        return HvCurrent.struct._make(unpack(HvCurrent.schema, buffer))

# HvTemp
class HvTemp:
    struct = namedtuple("HvTemp_struct", "average_temp, max_temp, min_temp", rename=True)
    schema = "<bbb"
    
    @staticmethod
    def serialize(average_temp, max_temp, min_temp) -> bytes:
        return pack(HvTemp.schema, average_temp, max_temp, min_temp)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvTemp.struct":
        return HvTemp.struct._make(unpack(HvTemp.schema, buffer))

# HvError
class HvError:
    struct = namedtuple("HvError_struct", "error_code, error_index, active", rename=True)
    schema = "<bbb"
    
    @staticmethod
    def serialize(error_code, error_index, active) -> bytes:
        return pack(HvError.schema, error_code, error_index, active)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvError.struct":
        return HvError.struct._make(unpack(HvError.schema, buffer))

# TsStatus
class TsStatus:
    struct = namedtuple("TsStatus_struct", "ts_status", rename=True)
    schema = "<b"
    
    @staticmethod
    def serialize(ts_status) -> bytes:
        return pack(TsStatus.schema, ts_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TsStatus.struct":
        return TsStatus.struct._make(unpack(TsStatus.schema, buffer))

# SteerStatus
class SteerStatus:
    struct = namedtuple("SteerStatus_struct", "traction_control, map, radio_on", rename=True)
    schema = "<bbb"
    
    @staticmethod
    def serialize(traction_control, map, radio_on) -> bytes:
        return pack(SteerStatus.schema, traction_control, map, radio_on)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SteerStatus.struct":
        return SteerStatus.struct._make(unpack(SteerStatus.schema, buffer))

# SetCarStatus
class SetCarStatus:
    struct = namedtuple("SetCarStatus_struct", "car_status_set", rename=True)
    schema = "<b"
    
    @staticmethod
    def serialize(car_status_set) -> bytes:
        return pack(SetCarStatus.schema, car_status_set)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetCarStatus.struct":
        return SetCarStatus.struct._make(unpack(SetCarStatus.schema, buffer))

# SetTsStatus
class SetTsStatus:
    struct = namedtuple("SetTsStatus_struct", "ts_status_set", rename=True)
    schema = "<b"
    
    @staticmethod
    def serialize(ts_status_set) -> bytes:
        return pack(SetTsStatus.schema, ts_status_set)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetTsStatus.struct":
        return SetTsStatus.struct._make(unpack(SetTsStatus.schema, buffer))
