from enum import IntEnum, IntFlag
from struct import pack, unpack
from collections import namedtuple

class errors(IntFlag):
    LTC_COMM = 1
    TEMP_COMM_0 = 2
    TEMP_COMM_1 = 4
    TEMP_COMM_2 = 8
    TEMP_COMM_3 = 16
    TEMP_COMM_4 = 32
    TEMP_COMM_5 = 64

class balancing_cells(IntFlag):
    CELL0 = 1
    CELL1 = 2
    CELL2 = 4
    CELL3 = 8
    CELL4 = 16
    CELL5 = 32
    CELL6 = 64
    CELL7 = 128
    CELL8 = 256
    CELL9 = 512
    CELL10 = 1024
    CELL11 = 2048
    CELL12 = 4096
    CELL13 = 8192
    CELL14 = 16384
    CELL15 = 32768
    CELL16 = 65536
    CELL17 = 131072
    CELL18 = 262144
    
class balancing_status(IntEnum):
    OFF = 0
    COMPUTE = 1
    DISCHARGE = 2


# BoardStatus
class BoardStatus:
    struct = namedtuple("BoardStatus_struct", "errors balancing_status", rename=True)
    schema = "<bB"
    
    @staticmethod
    def serialize(errors, balancing_status) -> bytes:
        return pack(BoardStatus.schema, errors, balancing_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "BoardStatus.struct":
        return BoardStatus.struct._make(unpack(BoardStatus.schema, buffer))

# TempStats
class TempStats:
    struct = namedtuple("TempStats_struct", "board_id average max min", rename=True)
    schema = "<bbbb"
    
    @staticmethod
    def serialize(board_id, average, max, min) -> bytes:
        return pack(TempStats.schema, board_id, average, max, min)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TempStats.struct":
        return TempStats.struct._make(unpack(TempStats.schema, buffer))

# TemperaturesCb00
class TemperaturesCb00:
    struct = namedtuple("TemperaturesCb00_struct", "temperature0 temperature1 temperature2 temperature3 temperature4 temperature5 temperature6 temperature7", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7) -> bytes:
        return pack(TemperaturesCb00.schema, temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb00.struct":
        return TemperaturesCb00.struct._make(unpack(TemperaturesCb00.schema, buffer))

# TemperaturesCb01
class TemperaturesCb01:
    struct = namedtuple("TemperaturesCb01_struct", "temperature8 temperature9 temperature10 temperature11 temperature12 temperature13 temperature14 temperature15", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15) -> bytes:
        return pack(TemperaturesCb01.schema, temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb01.struct":
        return TemperaturesCb01.struct._make(unpack(TemperaturesCb01.schema, buffer))

# TemperaturesCb02
class TemperaturesCb02:
    struct = namedtuple("TemperaturesCb02_struct", "temperature16 temperature17", rename=True)
    schema = "<bb"
    
    @staticmethod
    def serialize(temperature16, temperature17) -> bytes:
        return pack(TemperaturesCb02.schema, temperature16, temperature17)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb02.struct":
        return TemperaturesCb02.struct._make(unpack(TemperaturesCb02.schema, buffer))

# Balancing
class Balancing:
    struct = namedtuple("Balancing_struct", "board_id cells", rename=True)
    schema = "<bi"
    
    @staticmethod
    def serialize(board_id, cells) -> bytes:
        return pack(Balancing.schema, board_id, cells)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Balancing.struct":
        return Balancing.struct._make(unpack(Balancing.schema, buffer))

# VoltagesCb00
class VoltagesCb00:
    struct = namedtuple("VoltagesCb00_struct", "voltage0 voltage1 voltage2 voltage3", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(VoltagesCb00.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb00.struct":
        return VoltagesCb00.struct._make(unpack(VoltagesCb00.schema, buffer))

# VoltagesCb01
class VoltagesCb01:
    struct = namedtuple("VoltagesCb01_struct", "voltage4 voltage5 voltage6 voltage7", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(VoltagesCb01.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb01.struct":
        return VoltagesCb01.struct._make(unpack(VoltagesCb01.schema, buffer))

# VoltagesCb02
class VoltagesCb02:
    struct = namedtuple("VoltagesCb02_struct", "voltage8 voltage9 voltage10 voltage11", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(VoltagesCb02.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb02.struct":
        return VoltagesCb02.struct._make(unpack(VoltagesCb02.schema, buffer))

# VoltagesCb03
class VoltagesCb03:
    struct = namedtuple("VoltagesCb03_struct", "voltage12 voltage13 voltage14 voltage15", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(VoltagesCb03.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb03.struct":
        return VoltagesCb03.struct._make(unpack(VoltagesCb03.schema, buffer))

# VoltagesCb04
class VoltagesCb04:
    struct = namedtuple("VoltagesCb04_struct", "voltage16 voltage17 max_voltage min_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(VoltagesCb04.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb04.struct":
        return VoltagesCb04.struct._make(unpack(VoltagesCb04.schema, buffer))

# VoltagesCb10
class VoltagesCb10:
    struct = namedtuple("VoltagesCb10_struct", "voltage0 voltage1 voltage2 voltage3", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(VoltagesCb10.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb10.struct":
        return VoltagesCb10.struct._make(unpack(VoltagesCb10.schema, buffer))

# VoltagesCb11
class VoltagesCb11:
    struct = namedtuple("VoltagesCb11_struct", "voltage4 voltage5 voltage6 voltage7", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(VoltagesCb11.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb11.struct":
        return VoltagesCb11.struct._make(unpack(VoltagesCb11.schema, buffer))

# VoltagesCb12
class VoltagesCb12:
    struct = namedtuple("VoltagesCb12_struct", "voltage8 voltage9 voltage10 voltage11", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(VoltagesCb12.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb12.struct":
        return VoltagesCb12.struct._make(unpack(VoltagesCb12.schema, buffer))

# VoltagesCb13
class VoltagesCb13:
    struct = namedtuple("VoltagesCb13_struct", "voltage12 voltage13 voltage14 voltage15", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(VoltagesCb13.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb13.struct":
        return VoltagesCb13.struct._make(unpack(VoltagesCb13.schema, buffer))

# VoltagesCb14
class VoltagesCb14:
    struct = namedtuple("VoltagesCb14_struct", "voltage16 voltage17 max_voltage min_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(VoltagesCb14.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb14.struct":
        return VoltagesCb14.struct._make(unpack(VoltagesCb14.schema, buffer))

# MasterSync
class MasterSync:
    struct = namedtuple("MasterSync_struct", "time", rename=True)
    schema = "<i"
    
    @staticmethod
    def serialize(time) -> bytes:
        return pack(MasterSync.schema, time)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "MasterSync.struct":
        return MasterSync.struct._make(unpack(MasterSync.schema, buffer))
