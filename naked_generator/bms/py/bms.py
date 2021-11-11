from enum import IntEnum, IntFlag
from struct import pack, unpack
from collections import namedtuple

class errors(IntFlag):
    CAN_COMM = 1
    LTC_COMM = 2
    TEMP_COMM_0 = 4
    TEMP_COMM_1 = 8
    TEMP_COMM_2 = 16
    TEMP_COMM_3 = 32
    TEMP_COMM_4 = 64
    TEMP_COMM_5 = 128

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


# BoardStatus0
class BoardStatus0:
    struct = namedtuple("BoardStatus0_struct", "errors balancing_status", rename=True)
    schema = "<bB"
    
    @staticmethod
    def serialize(errors, balancing_status) -> bytes:
        return pack(BoardStatus0.schema, errors, balancing_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "BoardStatus0.struct":
        return BoardStatus0.struct._make(unpack(BoardStatus0.schema, buffer))

# BoardStatus1
class BoardStatus1:
    struct = namedtuple("BoardStatus1_struct", "errors balancing_status", rename=True)
    schema = "<bB"
    
    @staticmethod
    def serialize(errors, balancing_status) -> bytes:
        return pack(BoardStatus1.schema, errors, balancing_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "BoardStatus1.struct":
        return BoardStatus1.struct._make(unpack(BoardStatus1.schema, buffer))

# BoardStatus2
class BoardStatus2:
    struct = namedtuple("BoardStatus2_struct", "errors balancing_status", rename=True)
    schema = "<bB"
    
    @staticmethod
    def serialize(errors, balancing_status) -> bytes:
        return pack(BoardStatus2.schema, errors, balancing_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "BoardStatus2.struct":
        return BoardStatus2.struct._make(unpack(BoardStatus2.schema, buffer))

# BoardStatus3
class BoardStatus3:
    struct = namedtuple("BoardStatus3_struct", "errors balancing_status", rename=True)
    schema = "<bB"
    
    @staticmethod
    def serialize(errors, balancing_status) -> bytes:
        return pack(BoardStatus3.schema, errors, balancing_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "BoardStatus3.struct":
        return BoardStatus3.struct._make(unpack(BoardStatus3.schema, buffer))

# BoardStatus4
class BoardStatus4:
    struct = namedtuple("BoardStatus4_struct", "errors balancing_status", rename=True)
    schema = "<bB"
    
    @staticmethod
    def serialize(errors, balancing_status) -> bytes:
        return pack(BoardStatus4.schema, errors, balancing_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "BoardStatus4.struct":
        return BoardStatus4.struct._make(unpack(BoardStatus4.schema, buffer))

# BoardStatus5
class BoardStatus5:
    struct = namedtuple("BoardStatus5_struct", "errors balancing_status", rename=True)
    schema = "<bB"
    
    @staticmethod
    def serialize(errors, balancing_status) -> bytes:
        return pack(BoardStatus5.schema, errors, balancing_status)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "BoardStatus5.struct":
        return BoardStatus5.struct._make(unpack(BoardStatus5.schema, buffer))

# TempStats0
class TempStats0:
    struct = namedtuple("TempStats0_struct", "start_index temp0 temp1 temp2 temp3 temp4 temp5", rename=True)
    schema = "<bbbbbbb"
    
    @staticmethod
    def serialize(start_index, temp0, temp1, temp2, temp3, temp4, temp5) -> bytes:
        return pack(TempStats0.schema, start_index, temp0, temp1, temp2, temp3, temp4, temp5)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TempStats0.struct":
        return TempStats0.struct._make(unpack(TempStats0.schema, buffer))

# TempStats1
class TempStats1:
    struct = namedtuple("TempStats1_struct", "start_index temp0 temp1 temp2 temp3 temp4 temp5", rename=True)
    schema = "<bbbbbbb"
    
    @staticmethod
    def serialize(start_index, temp0, temp1, temp2, temp3, temp4, temp5) -> bytes:
        return pack(TempStats1.schema, start_index, temp0, temp1, temp2, temp3, temp4, temp5)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TempStats1.struct":
        return TempStats1.struct._make(unpack(TempStats1.schema, buffer))

# TempStats2
class TempStats2:
    struct = namedtuple("TempStats2_struct", "start_index temp0 temp1 temp2 temp3 temp4 temp5", rename=True)
    schema = "<bbbbbbb"
    
    @staticmethod
    def serialize(start_index, temp0, temp1, temp2, temp3, temp4, temp5) -> bytes:
        return pack(TempStats2.schema, start_index, temp0, temp1, temp2, temp3, temp4, temp5)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TempStats2.struct":
        return TempStats2.struct._make(unpack(TempStats2.schema, buffer))

# TempStats3
class TempStats3:
    struct = namedtuple("TempStats3_struct", "start_index temp0 temp1 temp2 temp3 temp4 temp5", rename=True)
    schema = "<bbbbbbb"
    
    @staticmethod
    def serialize(start_index, temp0, temp1, temp2, temp3, temp4, temp5) -> bytes:
        return pack(TempStats3.schema, start_index, temp0, temp1, temp2, temp3, temp4, temp5)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TempStats3.struct":
        return TempStats3.struct._make(unpack(TempStats3.schema, buffer))

# TempStats4
class TempStats4:
    struct = namedtuple("TempStats4_struct", "start_index temp0 temp1 temp2 temp3 temp4 temp5", rename=True)
    schema = "<bbbbbbb"
    
    @staticmethod
    def serialize(start_index, temp0, temp1, temp2, temp3, temp4, temp5) -> bytes:
        return pack(TempStats4.schema, start_index, temp0, temp1, temp2, temp3, temp4, temp5)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TempStats4.struct":
        return TempStats4.struct._make(unpack(TempStats4.schema, buffer))

# TempStats5
class TempStats5:
    struct = namedtuple("TempStats5_struct", "start_index temp0 temp1 temp2 temp3 temp4 temp5", rename=True)
    schema = "<bbbbbbb"
    
    @staticmethod
    def serialize(start_index, temp0, temp1, temp2, temp3, temp4, temp5) -> bytes:
        return pack(TempStats5.schema, start_index, temp0, temp1, temp2, temp3, temp4, temp5)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TempStats5.struct":
        return TempStats5.struct._make(unpack(TempStats5.schema, buffer))

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
    struct = namedtuple("Voltages0_struct", "start_index __unused_padding_1 voltage0 voltage1 voltage2", rename=True)
    schema = "<bXhhh"
    
    @staticmethod
    def serialize(start_index, voltage0, voltage1, voltage2) -> bytes:
        return pack(Voltages0.schema, start_index, voltage0, voltage1, voltage2)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages0.struct":
        return Voltages0.struct._make(unpack(Voltages0.schema, buffer))

# Voltages1
class Voltages1:
    struct = namedtuple("Voltages1_struct", "start_index __unused_padding_1 voltage0 voltage1 voltage2", rename=True)
    schema = "<bXhhh"
    
    @staticmethod
    def serialize(start_index, voltage0, voltage1, voltage2) -> bytes:
        return pack(Voltages1.schema, start_index, voltage0, voltage1, voltage2)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages1.struct":
        return Voltages1.struct._make(unpack(Voltages1.schema, buffer))

# Voltages2
class Voltages2:
    struct = namedtuple("Voltages2_struct", "start_index __unused_padding_1 voltage0 voltage1 voltage2", rename=True)
    schema = "<bXhhh"
    
    @staticmethod
    def serialize(start_index, voltage0, voltage1, voltage2) -> bytes:
        return pack(Voltages2.schema, start_index, voltage0, voltage1, voltage2)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages2.struct":
        return Voltages2.struct._make(unpack(Voltages2.schema, buffer))

# Voltages3
class Voltages3:
    struct = namedtuple("Voltages3_struct", "start_index __unused_padding_1 voltage0 voltage1 voltage2", rename=True)
    schema = "<bXhhh"
    
    @staticmethod
    def serialize(start_index, voltage0, voltage1, voltage2) -> bytes:
        return pack(Voltages3.schema, start_index, voltage0, voltage1, voltage2)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages3.struct":
        return Voltages3.struct._make(unpack(Voltages3.schema, buffer))

# Voltages4
class Voltages4:
    struct = namedtuple("Voltages4_struct", "start_index __unused_padding_1 voltage0 voltage1 voltage2", rename=True)
    schema = "<bXhhh"
    
    @staticmethod
    def serialize(start_index, voltage0, voltage1, voltage2) -> bytes:
        return pack(Voltages4.schema, start_index, voltage0, voltage1, voltage2)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages4.struct":
        return Voltages4.struct._make(unpack(Voltages4.schema, buffer))

# Voltages5
class Voltages5:
    struct = namedtuple("Voltages5_struct", "start_index __unused_padding_1 voltage0 voltage1 voltage2", rename=True)
    schema = "<bXhhh"
    
    @staticmethod
    def serialize(start_index, voltage0, voltage1, voltage2) -> bytes:
        return pack(Voltages5.schema, start_index, voltage0, voltage1, voltage2)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "Voltages5.struct":
        return Voltages5.struct._make(unpack(Voltages5.schema, buffer))
