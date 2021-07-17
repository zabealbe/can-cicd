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

# Voltages0
class Voltages0:
    struct = namedtuple("Voltages0_struct", "board_index __unused_padding_1 voltage0 voltage1 voltage2", rename=True)
    schema = "<bchhh"
    
    @staticmethod
    def serialize(board_index, voltage0, voltage1, voltage2) -> bytes:
        return pack(Voltages0.schema, board_index, 0x00, voltage0, voltage1, voltage2)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages0.struct":
        return Voltages0.struct._make(unpack(Voltages0.schema, buffer))

# Voltages1
class Voltages1:
    struct = namedtuple("Voltages1_struct", "board_index __unused_padding_1 voltage3 voltage4 voltage5", rename=True)
    schema = "<bchhh"
    
    @staticmethod
    def serialize(board_index, voltage3, voltage4, voltage5) -> bytes:
        return pack(Voltages1.schema, board_index, 0x00, voltage3, voltage4, voltage5)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages1.struct":
        return Voltages1.struct._make(unpack(Voltages1.schema, buffer))

# Voltages2
class Voltages2:
    struct = namedtuple("Voltages2_struct", "board_index __unused_padding_1 voltage6 voltage7 voltage8", rename=True)
    schema = "<bchhh"
    
    @staticmethod
    def serialize(board_index, voltage6, voltage7, voltage8) -> bytes:
        return pack(Voltages2.schema, board_index, 0x00, voltage6, voltage7, voltage8)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages2.struct":
        return Voltages2.struct._make(unpack(Voltages2.schema, buffer))

# Voltages3
class Voltages3:
    struct = namedtuple("Voltages3_struct", "board_index __unused_padding_1 voltage9 voltage10 voltage11", rename=True)
    schema = "<bchhh"
    
    @staticmethod
    def serialize(board_index, voltage9, voltage10, voltage11) -> bytes:
        return pack(Voltages3.schema, board_index, 0x00, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages3.struct":
        return Voltages3.struct._make(unpack(Voltages3.schema, buffer))

# Voltages4
class Voltages4:
    struct = namedtuple("Voltages4_struct", "board_index __unused_padding_1 voltage12 voltage13 voltage14", rename=True)
    schema = "<bchhh"
    
    @staticmethod
    def serialize(board_index, voltage12, voltage13, voltage14) -> bytes:
        return pack(Voltages4.schema, board_index, 0x00, voltage12, voltage13, voltage14)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages4.struct":
        return Voltages4.struct._make(unpack(Voltages4.schema, buffer))

# Voltages5
class Voltages5:
    struct = namedtuple("Voltages5_struct", "board_index __unused_padding_1 voltage15 voltage16 voltage17", rename=True)
    schema = "<bchhh"
    
    @staticmethod
    def serialize(board_index, voltage15, voltage16, voltage17) -> bytes:
        return pack(Voltages5.schema, board_index, 0x00, voltage15, voltage16, voltage17)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages5.struct":
        return Voltages5.struct._make(unpack(Voltages5.schema, buffer))
