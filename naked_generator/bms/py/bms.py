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
    struct = namedtuple("BoardStatus_struct", "board_index errors balancing_status", rename=True)
    schema = "<bbB"
    
    @staticmethod
    def serialize(board_index, errors, balancing_status) -> bytes:
        return pack(BoardStatus.schema, board_index, errors, balancing_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "BoardStatus.struct":
        return BoardStatus.struct._make(unpack(BoardStatus.schema, buffer))

# TempStats
class TempStats:
    struct = namedtuple("TempStats_struct", "board_index average max min", rename=True)
    schema = "<bbbb"
    
    @staticmethod
    def serialize(board_index, average, max, min) -> bytes:
        return pack(TempStats.schema, board_index, average, max, min)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TempStats.struct":
        return TempStats.struct._make(unpack(TempStats.schema, buffer))

# Balancing
class Balancing:
    struct = namedtuple("Balancing_struct", "board_index cells", rename=True)
    schema = "<bi"
    
    @staticmethod
    def serialize(board_index, cells) -> bytes:
        return pack(Balancing.schema, board_index, cells)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Balancing.struct":
        return Balancing.struct._make(unpack(Balancing.schema, buffer))

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

# Voltages00
class Voltages00:
    struct = namedtuple("Voltages00_struct", "voltage0 voltage1 voltage2 voltage3", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(Voltages00.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages00.struct":
        return Voltages00.struct._make(unpack(Voltages00.schema, buffer))

# Voltages01
class Voltages01:
    struct = namedtuple("Voltages01_struct", "voltage4 voltage5 voltage6 voltage7", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(Voltages01.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages01.struct":
        return Voltages01.struct._make(unpack(Voltages01.schema, buffer))

# Voltages02
class Voltages02:
    struct = namedtuple("Voltages02_struct", "voltage8 voltage9 voltage10 voltage11", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(Voltages02.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages02.struct":
        return Voltages02.struct._make(unpack(Voltages02.schema, buffer))

# Voltages03
class Voltages03:
    struct = namedtuple("Voltages03_struct", "voltage12 voltage13 voltage14 voltage15", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(Voltages03.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages03.struct":
        return Voltages03.struct._make(unpack(Voltages03.schema, buffer))

# Voltages04
class Voltages04:
    struct = namedtuple("Voltages04_struct", "voltage16 voltage17 max_voltage min_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(Voltages04.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages04.struct":
        return Voltages04.struct._make(unpack(Voltages04.schema, buffer))

# Voltages10
class Voltages10:
    struct = namedtuple("Voltages10_struct", "voltage0 voltage1 voltage2 voltage3", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(Voltages10.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages10.struct":
        return Voltages10.struct._make(unpack(Voltages10.schema, buffer))

# Voltages11
class Voltages11:
    struct = namedtuple("Voltages11_struct", "voltage4 voltage5 voltage6 voltage7", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(Voltages11.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages11.struct":
        return Voltages11.struct._make(unpack(Voltages11.schema, buffer))

# Voltages12
class Voltages12:
    struct = namedtuple("Voltages12_struct", "voltage8 voltage9 voltage10 voltage11", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(Voltages12.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages12.struct":
        return Voltages12.struct._make(unpack(Voltages12.schema, buffer))

# Voltages13
class Voltages13:
    struct = namedtuple("Voltages13_struct", "voltage12 voltage13 voltage14 voltage15", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(Voltages13.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages13.struct":
        return Voltages13.struct._make(unpack(Voltages13.schema, buffer))

# Voltages14
class Voltages14:
    struct = namedtuple("Voltages14_struct", "voltage16 voltage17 max_voltage min_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(Voltages14.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages14.struct":
        return Voltages14.struct._make(unpack(Voltages14.schema, buffer))

# Voltages20
class Voltages20:
    struct = namedtuple("Voltages20_struct", "voltage0 voltage1 voltage2 voltage3", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(Voltages20.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages20.struct":
        return Voltages20.struct._make(unpack(Voltages20.schema, buffer))

# Voltages21
class Voltages21:
    struct = namedtuple("Voltages21_struct", "voltage4 voltage5 voltage6 voltage7", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(Voltages21.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages21.struct":
        return Voltages21.struct._make(unpack(Voltages21.schema, buffer))

# Voltages22
class Voltages22:
    struct = namedtuple("Voltages22_struct", "voltage8 voltage9 voltage10 voltage11", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(Voltages22.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages22.struct":
        return Voltages22.struct._make(unpack(Voltages22.schema, buffer))

# Voltages23
class Voltages23:
    struct = namedtuple("Voltages23_struct", "voltage12 voltage13 voltage14 voltage15", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(Voltages23.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages23.struct":
        return Voltages23.struct._make(unpack(Voltages23.schema, buffer))

# Voltages24
class Voltages24:
    struct = namedtuple("Voltages24_struct", "voltage16 voltage17 max_voltage min_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(Voltages24.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages24.struct":
        return Voltages24.struct._make(unpack(Voltages24.schema, buffer))

# Voltages30
class Voltages30:
    struct = namedtuple("Voltages30_struct", "voltage0 voltage1 voltage2 voltage3", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(Voltages30.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages30.struct":
        return Voltages30.struct._make(unpack(Voltages30.schema, buffer))

# Voltages31
class Voltages31:
    struct = namedtuple("Voltages31_struct", "voltage4 voltage5 voltage6 voltage7", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(Voltages31.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages31.struct":
        return Voltages31.struct._make(unpack(Voltages31.schema, buffer))

# Voltages32
class Voltages32:
    struct = namedtuple("Voltages32_struct", "voltage8 voltage9 voltage10 voltage11", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(Voltages32.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages32.struct":
        return Voltages32.struct._make(unpack(Voltages32.schema, buffer))

# Voltages33
class Voltages33:
    struct = namedtuple("Voltages33_struct", "voltage12 voltage13 voltage14 voltage15", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(Voltages33.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages33.struct":
        return Voltages33.struct._make(unpack(Voltages33.schema, buffer))

# Voltages34
class Voltages34:
    struct = namedtuple("Voltages34_struct", "voltage16 voltage17 max_voltage min_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(Voltages34.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages34.struct":
        return Voltages34.struct._make(unpack(Voltages34.schema, buffer))

# Voltages40
class Voltages40:
    struct = namedtuple("Voltages40_struct", "voltage0 voltage1 voltage2 voltage3", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(Voltages40.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages40.struct":
        return Voltages40.struct._make(unpack(Voltages40.schema, buffer))

# Voltages41
class Voltages41:
    struct = namedtuple("Voltages41_struct", "voltage4 voltage5 voltage6 voltage7", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(Voltages41.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages41.struct":
        return Voltages41.struct._make(unpack(Voltages41.schema, buffer))

# Voltages42
class Voltages42:
    struct = namedtuple("Voltages42_struct", "voltage8 voltage9 voltage10 voltage11", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(Voltages42.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages42.struct":
        return Voltages42.struct._make(unpack(Voltages42.schema, buffer))

# Voltages43
class Voltages43:
    struct = namedtuple("Voltages43_struct", "voltage12 voltage13 voltage14 voltage15", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(Voltages43.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages43.struct":
        return Voltages43.struct._make(unpack(Voltages43.schema, buffer))

# Voltages44
class Voltages44:
    struct = namedtuple("Voltages44_struct", "voltage16 voltage17 max_voltage min_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(Voltages44.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages44.struct":
        return Voltages44.struct._make(unpack(Voltages44.schema, buffer))

# Voltages50
class Voltages50:
    struct = namedtuple("Voltages50_struct", "voltage0 voltage1 voltage2 voltage3", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(Voltages50.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages50.struct":
        return Voltages50.struct._make(unpack(Voltages50.schema, buffer))

# Voltages51
class Voltages51:
    struct = namedtuple("Voltages51_struct", "voltage4 voltage5 voltage6 voltage7", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(Voltages51.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages51.struct":
        return Voltages51.struct._make(unpack(Voltages51.schema, buffer))

# Voltages52
class Voltages52:
    struct = namedtuple("Voltages52_struct", "voltage8 voltage9 voltage10 voltage11", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(Voltages52.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages52.struct":
        return Voltages52.struct._make(unpack(Voltages52.schema, buffer))

# Voltages53
class Voltages53:
    struct = namedtuple("Voltages53_struct", "voltage12 voltage13 voltage14 voltage15", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(Voltages53.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages53.struct":
        return Voltages53.struct._make(unpack(Voltages53.schema, buffer))

# Voltages54
class Voltages54:
    struct = namedtuple("Voltages54_struct", "voltage16 voltage17 max_voltage min_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(Voltages54.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages54.struct":
        return Voltages54.struct._make(unpack(Voltages54.schema, buffer))
