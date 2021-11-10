from enum import IntEnum, IntFlag
from struct import pack, unpack
from collections import namedtuple

class pcu_flags(IntFlag):
    IMPLAUSIBILITY = 1
    ADC_ERROR = 2
    UART_ERROR = 4
    CALIBRATION_INCOMPLETE = 8
    CAN_ERROR = 16

class Hv_Errors(IntFlag):
    LTC_PEC_ERROR = 1
    CELL_UNDER_VOLTAGE = 2
    CELL_OVER_VOLTAGE = 4
    CELL_OVER_TEMPERATURE = 8
    OVER_CURRENT = 16
    ADC_INIT = 32
    ADC_TIMEOUT = 64
    INT_VOLTAGE_MISMATCH = 128
    FEEDBACK_HARD = 256
    FEEDBACK_SOFT = 512
    
class Sync_State(IntEnum):
    MAX_SET = 0
    MIN_SET = 1
    
class Tlm_Status(IntEnum):
    ON = 0
    OFF = 1
    
class Race_Type(IntEnum):
    ACCELERATION = 0
    SKIDPAD = 1
    AUTOCROSS = 2
    ENDURANCE = 3
    
class Car_Status(IntEnum):
    IDLE = 0
    SETUP = 1
    RUN = 2
    
class Inverter_Status(IntEnum):
    OFF = 0
    IDLE = 1
    ON = 2
    
class Ts_Status(IntEnum):
    OFF = 0
    PRECHARGE = 1
    ON = 2
    FATAL = 3
    
class Ts_Status_Set(IntEnum):
    OFF = 0
    ON = 1
    
class Traction_Control(IntEnum):
    OFF = 0
    SLIP_CONTROL = 1
    TORQUE_VECTORING = 2
    COMPLETE = 3
    
class Map(IntEnum):
    R = 0
    D20 = 1
    D40 = 2
    D60 = 3
    D80 = 4
    D100 = 5
    
class Car_Status_Set(IntEnum):
    IDLE = 0
    RUN = 1
    
class Status(IntEnum):
    CHG_OFF = 0
    CHG_TC = 1
    CHG_CC = 2
    CHG_CV = 3


# SetAcceleratorRange
class SetAcceleratorRange:
    struct = namedtuple("SetAcceleratorRange_struct", "sync_state", rename=True)
    schema = "<B"
    
    @staticmethod
    def serialize(sync_state) -> bytes:
        return pack(SetAcceleratorRange.schema, sync_state)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetAcceleratorRange.struct":
        return SetAcceleratorRange.struct._make(unpack(SetAcceleratorRange.schema, buffer))

# PedalsAdcRanges
class PedalsAdcRanges:
    struct = namedtuple("PedalsAdcRanges_struct", "accel1_raw_adc_min accel1_raw_adc_max accel2_raw_adc_min accel2_raw_adc_max", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(accel1_raw_adc_min, accel1_raw_adc_max, accel2_raw_adc_min, accel2_raw_adc_max) -> bytes:
        return pack(PedalsAdcRanges.schema, accel1_raw_adc_min, accel1_raw_adc_max, accel2_raw_adc_min, accel2_raw_adc_max)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "PedalsAdcRanges.struct":
        return PedalsAdcRanges.struct._make(unpack(PedalsAdcRanges.schema, buffer))

# AcceleratorPedalVal
class AcceleratorPedalVal:
    struct = namedtuple("AcceleratorPedalVal_struct", "level", rename=True)
    schema = "<b"
    
    @staticmethod
    def serialize(level) -> bytes:
        return pack(AcceleratorPedalVal.schema, level)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "AcceleratorPedalVal.struct":
        return AcceleratorPedalVal.struct._make(unpack(AcceleratorPedalVal.schema, buffer))

# BrakePedalVal
class BrakePedalVal:
    struct = namedtuple("BrakePedalVal_struct", "level", rename=True)
    schema = "<b"
    
    @staticmethod
    def serialize(level) -> bytes:
        return pack(BrakePedalVal.schema, level)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "BrakePedalVal.struct":
        return BrakePedalVal.struct._make(unpack(BrakePedalVal.schema, buffer))

# PcuStatus
class PcuStatus:
    struct = namedtuple("PcuStatus_struct", "warnings errors", rename=True)
    schema = "<bb"
    
    @staticmethod
    def serialize(warnings, errors) -> bytes:
        return pack(PcuStatus.schema, warnings, errors)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "PcuStatus.struct":
        return PcuStatus.struct._make(unpack(PcuStatus.schema, buffer))

# Timestamp
class Timestamp:
    struct = namedtuple("Timestamp_struct", "timestamp", rename=True)
    schema = "<i"
    
    @staticmethod
    def serialize(timestamp) -> bytes:
        return pack(Timestamp.schema, timestamp)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Timestamp.struct":
        return Timestamp.struct._make(unpack(Timestamp.schema, buffer))

# TlmStatus
class TlmStatus:
    struct = namedtuple("TlmStatus_struct", "tlm_status race_type driver circuit", rename=True)
    schema = "<BBbb"
    
    @staticmethod
    def serialize(tlm_status, race_type, driver, circuit) -> bytes:
        return pack(TlmStatus.schema, tlm_status, race_type, driver, circuit)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TlmStatus.struct":
        return TlmStatus.struct._make(unpack(TlmStatus.schema, buffer))

# CarStatus
class CarStatus:
    struct = namedtuple("CarStatus_struct", "car_status inverter_l inverter_r", rename=True)
    schema = "<BBB"
    
    @staticmethod
    def serialize(car_status, inverter_l, inverter_r) -> bytes:
        return pack(CarStatus.schema, car_status, inverter_l, inverter_r)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "CarStatus.struct":
        return CarStatus.struct._make(unpack(CarStatus.schema, buffer))

# SetTlmStatus
class SetTlmStatus:
    struct = namedtuple("SetTlmStatus_struct", "tlm_status race_type driver circuit", rename=True)
    schema = "<BBbb"
    
    @staticmethod
    def serialize(tlm_status, race_type, driver, circuit) -> bytes:
        return pack(SetTlmStatus.schema, tlm_status, race_type, driver, circuit)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetTlmStatus.struct":
        return SetTlmStatus.struct._make(unpack(SetTlmStatus.schema, buffer))

# GpsCoords
class GpsCoords:
    struct = namedtuple("GpsCoords_struct", "latitude longitude", rename=True)
    schema = "<dd"
    
    @staticmethod
    def serialize(latitude, longitude) -> bytes:
        return pack(GpsCoords.schema, latitude, longitude)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "GpsCoords.struct":
        return GpsCoords.struct._make(unpack(GpsCoords.schema, buffer))

# GpsSpeed
class GpsSpeed:
    struct = namedtuple("GpsSpeed_struct", "speed", rename=True)
    schema = "<h"
    
    @staticmethod
    def serialize(speed) -> bytes:
        return pack(GpsSpeed.schema, speed)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "GpsSpeed.struct":
        return GpsSpeed.struct._make(unpack(GpsSpeed.schema, buffer))

# HvVoltage
class HvVoltage:
    struct = namedtuple("HvVoltage_struct", "pack_voltage bus_voltage max_cell_voltage min_cell_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage) -> bytes:
        return pack(HvVoltage.schema, pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvVoltage.struct":
        return HvVoltage.struct._make(unpack(HvVoltage.schema, buffer))

# HvCurrent
class HvCurrent:
    struct = namedtuple("HvCurrent_struct", "current power", rename=True)
    schema = "<hH"
    
    @staticmethod
    def serialize(current, power) -> bytes:
        return pack(HvCurrent.schema, current, power)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvCurrent.struct":
        return HvCurrent.struct._make(unpack(HvCurrent.schema, buffer))

# HvTemp
class HvTemp:
    struct = namedtuple("HvTemp_struct", "average_temp max_temp min_temp", rename=True)
    schema = "<hhh"
    
    @staticmethod
    def serialize(average_temp, max_temp, min_temp) -> bytes:
        return pack(HvTemp.schema, average_temp, max_temp, min_temp)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvTemp.struct":
        return HvTemp.struct._make(unpack(HvTemp.schema, buffer))

# HvErrors
class HvErrors:
    struct = namedtuple("HvErrors_struct", "warnings errors", rename=True)
    schema = "<hh"
    
    @staticmethod
    def serialize(warnings, errors) -> bytes:
        return pack(HvErrors.schema, warnings, errors)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvErrors.struct":
        return HvErrors.struct._make(unpack(HvErrors.schema, buffer))

# TsStatus
class TsStatus:
    struct = namedtuple("TsStatus_struct", "ts_status", rename=True)
    schema = "<B"
    
    @staticmethod
    def serialize(ts_status) -> bytes:
        return pack(TsStatus.schema, ts_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TsStatus.struct":
        return TsStatus.struct._make(unpack(TsStatus.schema, buffer))

# SetTsStatus
class SetTsStatus:
    struct = namedtuple("SetTsStatus_struct", "ts_status_set", rename=True)
    schema = "<B"
    
    @staticmethod
    def serialize(ts_status_set) -> bytes:
        return pack(SetTsStatus.schema, ts_status_set)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetTsStatus.struct":
        return SetTsStatus.struct._make(unpack(SetTsStatus.schema, buffer))

# SteerStatus
class SteerStatus:
    struct = namedtuple("SteerStatus_struct", "traction_control map radio_on", rename=True)
    schema = "<BBb"
    
    @staticmethod
    def serialize(traction_control, map, radio_on) -> bytes:
        return pack(SteerStatus.schema, traction_control, map, radio_on)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SteerStatus.struct":
        return SteerStatus.struct._make(unpack(SteerStatus.schema, buffer))

# SetCarStatus
class SetCarStatus:
    struct = namedtuple("SetCarStatus_struct", "car_status_set", rename=True)
    schema = "<B"
    
    @staticmethod
    def serialize(car_status_set) -> bytes:
        return pack(SetCarStatus.schema, car_status_set)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetCarStatus.struct":
        return SetCarStatus.struct._make(unpack(SetCarStatus.schema, buffer))

# LvCurrent
class LvCurrent:
    struct = namedtuple("LvCurrent_struct", "current", rename=True)
    schema = "<b"
    
    @staticmethod
    def serialize(current) -> bytes:
        return pack(LvCurrent.schema, current)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "LvCurrent.struct":
        return LvCurrent.struct._make(unpack(LvCurrent.schema, buffer))

# LvVoltage
class LvVoltage:
    struct = namedtuple("LvVoltage_struct", "voltage_1 voltage_2 voltage_3 voltage_4 total_voltage", rename=True)
    schema = "<bbbbh"
    
    @staticmethod
    def serialize(voltage_1, voltage_2, voltage_3, voltage_4, total_voltage) -> bytes:
        return pack(LvVoltage.schema, voltage_1, voltage_2, voltage_3, voltage_4, total_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "LvVoltage.struct":
        return LvVoltage.struct._make(unpack(LvVoltage.schema, buffer))

# LvTemperature
class LvTemperature:
    struct = namedtuple("LvTemperature_struct", "dcdc_temperature __unused_padding_1 battery_temperature", rename=True)
    schema = "<bXh"
    
    @staticmethod
    def serialize(dcdc_temperature, battery_temperature) -> bytes:
        return pack(LvTemperature.schema, dcdc_temperature, battery_temperature)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "LvTemperature.struct":
        return LvTemperature.struct._make(unpack(LvTemperature.schema, buffer))

# CoolingStatus
class CoolingStatus:
    struct = namedtuple("CoolingStatus_struct", "hv_fan_speed lv_fan_speed pump_speed", rename=True)
    schema = "<bbb"
    
    @staticmethod
    def serialize(hv_fan_speed, lv_fan_speed, pump_speed) -> bytes:
        return pack(CoolingStatus.schema, hv_fan_speed, lv_fan_speed, pump_speed)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "CoolingStatus.struct":
        return CoolingStatus.struct._make(unpack(CoolingStatus.schema, buffer))

# HvCellsVoltage
class HvCellsVoltage:
    struct = namedtuple("HvCellsVoltage_struct", "cell_index __unused_padding_1 voltage_0 voltage_1 voltage_2", rename=True)
    schema = "<bXhhh"
    
    @staticmethod
    def serialize(cell_index, voltage_0, voltage_1, voltage_2) -> bytes:
        return pack(HvCellsVoltage.schema, cell_index, voltage_0, voltage_1, voltage_2)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvCellsVoltage.struct":
        return HvCellsVoltage.struct._make(unpack(HvCellsVoltage.schema, buffer))

# HvCellsTemp
class HvCellsTemp:
    struct = namedtuple("HvCellsTemp_struct", "cell_index temp_0 temp_1 temp_2 temp_3 temp_4 temp_5 temp_6", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(cell_index, temp_0, temp_1, temp_2, temp_3, temp_4, temp_5, temp_6) -> bytes:
        return pack(HvCellsTemp.schema, cell_index, temp_0, temp_1, temp_2, temp_3, temp_4, temp_5, temp_6)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "HvCellsTemp.struct":
        return HvCellsTemp.struct._make(unpack(HvCellsTemp.schema, buffer))

# SetChgPower
class SetChgPower:
    struct = namedtuple("SetChgPower_struct", "current voltage", rename=True)
    schema = "<hh"
    
    @staticmethod
    def serialize(current, voltage) -> bytes:
        return pack(SetChgPower.schema, current, voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetChgPower.struct":
        return SetChgPower.struct._make(unpack(SetChgPower.schema, buffer))

# ChgStatus
class ChgStatus:
    struct = namedtuple("ChgStatus_struct", "status", rename=True)
    schema = "<B"
    
    @staticmethod
    def serialize(status) -> bytes:
        return pack(ChgStatus.schema, status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "ChgStatus.struct":
        return ChgStatus.struct._make(unpack(ChgStatus.schema, buffer))

# SetChgStatus
class SetChgStatus:
    struct = namedtuple("SetChgStatus_struct", "status", rename=True)
    schema = "<B"
    
    @staticmethod
    def serialize(status) -> bytes:
        return pack(SetChgStatus.schema, status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "SetChgStatus.struct":
        return SetChgStatus.struct._make(unpack(SetChgStatus.schema, buffer))

# ChgSettings
class ChgSettings:
    struct = namedtuple("ChgSettings_struct", "v_cutoff", rename=True)
    schema = "<b"
    
    @staticmethod
    def serialize(v_cutoff) -> bytes:
        return pack(ChgSettings.schema, v_cutoff)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "ChgSettings.struct":
        return ChgSettings.struct._make(unpack(ChgSettings.schema, buffer))
