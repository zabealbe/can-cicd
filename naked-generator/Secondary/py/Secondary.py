from enum import Enum
from struct import pack, unpack
from collections import namedtuple


# IMU_ANGULAR_RATE
class IMU_ANGULAR_RATE:
    tuple = namedtuple("IMU_ANGULAR_RATE", "ang_rate_x, ang_rate_y, ang_rate_z", rename=True)
    schema = "<HHH"
    
    @staticmethod
    def serialize(ang_rate_x, ang_rate_y, ang_rate_z) -> bytes:
        return pack(IMU_ANGULAR_RATE.schema, ang_rate_x, ang_rate_y, ang_rate_z)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IMU_ANGULAR_RATE":
        return IMU_ANGULAR_RATE.tuple._make(unpack(IMU_ANGULAR_RATE.schema, buffer))


# IMU_ACCELERATION
class IMU_ACCELERATION:
    tuple = namedtuple("IMU_ACCELERATION", "accel_x, accel_y, accel_z", rename=True)
    schema = "<HHH"
    
    @staticmethod
    def serialize(accel_x, accel_y, accel_z) -> bytes:
        return pack(IMU_ACCELERATION.schema, accel_x, accel_y, accel_z)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IMU_ACCELERATION":
        return IMU_ACCELERATION.tuple._make(unpack(IMU_ACCELERATION.schema, buffer))


# IRTS_FL_0
class IRTS_FL_0:
    tuple = namedtuple("IRTS_FL_0", "channel1, channel2, channel3, channel4", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel1, channel2, channel3, channel4) -> bytes:
        return pack(IRTS_FL_0.schema, channel1, channel2, channel3, channel4)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_FL_0":
        return IRTS_FL_0.tuple._make(unpack(IRTS_FL_0.schema, buffer))


# IRTS_FL_1
class IRTS_FL_1:
    tuple = namedtuple("IRTS_FL_1", "channel5, channel6, channel7, channel8", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel5, channel6, channel7, channel8) -> bytes:
        return pack(IRTS_FL_1.schema, channel5, channel6, channel7, channel8)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_FL_1":
        return IRTS_FL_1.tuple._make(unpack(IRTS_FL_1.schema, buffer))


# IRTS_FL_2
class IRTS_FL_2:
    tuple = namedtuple("IRTS_FL_2", "channel9, channel10, channel11, channel12", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel9, channel10, channel11, channel12) -> bytes:
        return pack(IRTS_FL_2.schema, channel9, channel10, channel11, channel12)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_FL_2":
        return IRTS_FL_2.tuple._make(unpack(IRTS_FL_2.schema, buffer))


# IRTS_FL_3
class IRTS_FL_3:
    tuple = namedtuple("IRTS_FL_3", "channel13, channel14, channel15, channel16", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel13, channel14, channel15, channel16) -> bytes:
        return pack(IRTS_FL_3.schema, channel13, channel14, channel15, channel16)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_FL_3":
        return IRTS_FL_3.tuple._make(unpack(IRTS_FL_3.schema, buffer))


# IRTS_FR_0
class IRTS_FR_0:
    tuple = namedtuple("IRTS_FR_0", "channel1, channel2, channel3, channel4", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel1, channel2, channel3, channel4) -> bytes:
        return pack(IRTS_FR_0.schema, channel1, channel2, channel3, channel4)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_FR_0":
        return IRTS_FR_0.tuple._make(unpack(IRTS_FR_0.schema, buffer))


# IRTS_FR_1
class IRTS_FR_1:
    tuple = namedtuple("IRTS_FR_1", "channel5, channel6, channel7, channel8", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel5, channel6, channel7, channel8) -> bytes:
        return pack(IRTS_FR_1.schema, channel5, channel6, channel7, channel8)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_FR_1":
        return IRTS_FR_1.tuple._make(unpack(IRTS_FR_1.schema, buffer))


# IRTS_FR_2
class IRTS_FR_2:
    tuple = namedtuple("IRTS_FR_2", "channel9, channel10, channel11, channel12", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel9, channel10, channel11, channel12) -> bytes:
        return pack(IRTS_FR_2.schema, channel9, channel10, channel11, channel12)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_FR_2":
        return IRTS_FR_2.tuple._make(unpack(IRTS_FR_2.schema, buffer))


# IRTS_FR_3
class IRTS_FR_3:
    tuple = namedtuple("IRTS_FR_3", "channel13, channel14, channel15, channel16", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel13, channel14, channel15, channel16) -> bytes:
        return pack(IRTS_FR_3.schema, channel13, channel14, channel15, channel16)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_FR_3":
        return IRTS_FR_3.tuple._make(unpack(IRTS_FR_3.schema, buffer))


# IRTS_RL_0
class IRTS_RL_0:
    tuple = namedtuple("IRTS_RL_0", "channel1, channel2, channel3, channel4", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel1, channel2, channel3, channel4) -> bytes:
        return pack(IRTS_RL_0.schema, channel1, channel2, channel3, channel4)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_RL_0":
        return IRTS_RL_0.tuple._make(unpack(IRTS_RL_0.schema, buffer))


# IRTS_RL_1
class IRTS_RL_1:
    tuple = namedtuple("IRTS_RL_1", "channel5, channel6, channel7, channel8", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel5, channel6, channel7, channel8) -> bytes:
        return pack(IRTS_RL_1.schema, channel5, channel6, channel7, channel8)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_RL_1":
        return IRTS_RL_1.tuple._make(unpack(IRTS_RL_1.schema, buffer))


# IRTS_RL_2
class IRTS_RL_2:
    tuple = namedtuple("IRTS_RL_2", "channel9, channel10, channel11, channel12", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel9, channel10, channel11, channel12) -> bytes:
        return pack(IRTS_RL_2.schema, channel9, channel10, channel11, channel12)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_RL_2":
        return IRTS_RL_2.tuple._make(unpack(IRTS_RL_2.schema, buffer))


# IRTS_RL_3
class IRTS_RL_3:
    tuple = namedtuple("IRTS_RL_3", "channel13, channel14, channel15, channel16", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel13, channel14, channel15, channel16) -> bytes:
        return pack(IRTS_RL_3.schema, channel13, channel14, channel15, channel16)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_RL_3":
        return IRTS_RL_3.tuple._make(unpack(IRTS_RL_3.schema, buffer))


# IRTS_RR_0
class IRTS_RR_0:
    tuple = namedtuple("IRTS_RR_0", "channel1, channel2, channel3, channel4", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel1, channel2, channel3, channel4) -> bytes:
        return pack(IRTS_RR_0.schema, channel1, channel2, channel3, channel4)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_RR_0":
        return IRTS_RR_0.tuple._make(unpack(IRTS_RR_0.schema, buffer))


# IRTS_RR_1
class IRTS_RR_1:
    tuple = namedtuple("IRTS_RR_1", "channel5, channel6, channel7, channel8", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel5, channel6, channel7, channel8) -> bytes:
        return pack(IRTS_RR_1.schema, channel5, channel6, channel7, channel8)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_RR_1":
        return IRTS_RR_1.tuple._make(unpack(IRTS_RR_1.schema, buffer))


# IRTS_RR_2
class IRTS_RR_2:
    tuple = namedtuple("IRTS_RR_2", "channel9, channel10, channel11, channel12", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel9, channel10, channel11, channel12) -> bytes:
        return pack(IRTS_RR_2.schema, channel9, channel10, channel11, channel12)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_RR_2":
        return IRTS_RR_2.tuple._make(unpack(IRTS_RR_2.schema, buffer))


# IRTS_RR_3
class IRTS_RR_3:
    tuple = namedtuple("IRTS_RR_3", "channel13, channel14, channel15, channel16", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(channel13, channel14, channel15, channel16) -> bytes:
        return pack(IRTS_RR_3.schema, channel13, channel14, channel15, channel16)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IRTS_RR_3":
        return IRTS_RR_3.tuple._make(unpack(IRTS_RR_3.schema, buffer))
