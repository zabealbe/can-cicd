from enum import IntEnum, IntFlag
from struct import pack, unpack
from collections import namedtuple


# ImuAngularRate
class ImuAngularRate:
    struct = namedtuple("ImuAngularRate_struct", "ang_rate_x ang_rate_y ang_rate_z", rename=True)
    schema = "<hhh"
    
    @staticmethod
    def serialize(ang_rate_x, ang_rate_y, ang_rate_z) -> bytes:
        return pack(ImuAngularRate.schema, ang_rate_x, ang_rate_y, ang_rate_z)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "ImuAngularRate.struct":
        return ImuAngularRate.struct._make(unpack(ImuAngularRate.schema, buffer))

# ImuAcceleration
class ImuAcceleration:
    struct = namedtuple("ImuAcceleration_struct", "accel_x accel_y accel_z", rename=True)
    schema = "<hhh"
    
    @staticmethod
    def serialize(accel_x, accel_y, accel_z) -> bytes:
        return pack(ImuAcceleration.schema, accel_x, accel_y, accel_z)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "ImuAcceleration.struct":
        return ImuAcceleration.struct._make(unpack(ImuAcceleration.schema, buffer))

# IrtsFl0
class IrtsFl0:
    struct = namedtuple("IrtsFl0_struct", "channel1 channel2 channel3 channel4", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel1, channel2, channel3, channel4) -> bytes:
        return pack(IrtsFl0.schema, channel1, channel2, channel3, channel4)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsFl0.struct":
        return IrtsFl0.struct._make(unpack(IrtsFl0.schema, buffer))

# IrtsFl1
class IrtsFl1:
    struct = namedtuple("IrtsFl1_struct", "channel5 channel6 channel7 channel8", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel5, channel6, channel7, channel8) -> bytes:
        return pack(IrtsFl1.schema, channel5, channel6, channel7, channel8)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsFl1.struct":
        return IrtsFl1.struct._make(unpack(IrtsFl1.schema, buffer))

# IrtsFl2
class IrtsFl2:
    struct = namedtuple("IrtsFl2_struct", "channel9 channel10 channel11 channel12", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel9, channel10, channel11, channel12) -> bytes:
        return pack(IrtsFl2.schema, channel9, channel10, channel11, channel12)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsFl2.struct":
        return IrtsFl2.struct._make(unpack(IrtsFl2.schema, buffer))

# IrtsFl3
class IrtsFl3:
    struct = namedtuple("IrtsFl3_struct", "channel13 channel14 channel15 channel16", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel13, channel14, channel15, channel16) -> bytes:
        return pack(IrtsFl3.schema, channel13, channel14, channel15, channel16)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsFl3.struct":
        return IrtsFl3.struct._make(unpack(IrtsFl3.schema, buffer))

# IrtsFr0
class IrtsFr0:
    struct = namedtuple("IrtsFr0_struct", "channel1 channel2 channel3 channel4", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel1, channel2, channel3, channel4) -> bytes:
        return pack(IrtsFr0.schema, channel1, channel2, channel3, channel4)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsFr0.struct":
        return IrtsFr0.struct._make(unpack(IrtsFr0.schema, buffer))

# IrtsFr1
class IrtsFr1:
    struct = namedtuple("IrtsFr1_struct", "channel5 channel6 channel7 channel8", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel5, channel6, channel7, channel8) -> bytes:
        return pack(IrtsFr1.schema, channel5, channel6, channel7, channel8)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsFr1.struct":
        return IrtsFr1.struct._make(unpack(IrtsFr1.schema, buffer))

# IrtsFr2
class IrtsFr2:
    struct = namedtuple("IrtsFr2_struct", "channel9 channel10 channel11 channel12", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel9, channel10, channel11, channel12) -> bytes:
        return pack(IrtsFr2.schema, channel9, channel10, channel11, channel12)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsFr2.struct":
        return IrtsFr2.struct._make(unpack(IrtsFr2.schema, buffer))

# IrtsFr3
class IrtsFr3:
    struct = namedtuple("IrtsFr3_struct", "channel13 channel14 channel15 channel16", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel13, channel14, channel15, channel16) -> bytes:
        return pack(IrtsFr3.schema, channel13, channel14, channel15, channel16)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsFr3.struct":
        return IrtsFr3.struct._make(unpack(IrtsFr3.schema, buffer))

# IrtsRl0
class IrtsRl0:
    struct = namedtuple("IrtsRl0_struct", "channel1 channel2 channel3 channel4", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel1, channel2, channel3, channel4) -> bytes:
        return pack(IrtsRl0.schema, channel1, channel2, channel3, channel4)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsRl0.struct":
        return IrtsRl0.struct._make(unpack(IrtsRl0.schema, buffer))

# IrtsRl1
class IrtsRl1:
    struct = namedtuple("IrtsRl1_struct", "channel5 channel6 channel7 channel8", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel5, channel6, channel7, channel8) -> bytes:
        return pack(IrtsRl1.schema, channel5, channel6, channel7, channel8)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsRl1.struct":
        return IrtsRl1.struct._make(unpack(IrtsRl1.schema, buffer))

# IrtsRl2
class IrtsRl2:
    struct = namedtuple("IrtsRl2_struct", "channel9 channel10 channel11 channel12", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel9, channel10, channel11, channel12) -> bytes:
        return pack(IrtsRl2.schema, channel9, channel10, channel11, channel12)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsRl2.struct":
        return IrtsRl2.struct._make(unpack(IrtsRl2.schema, buffer))

# IrtsRl3
class IrtsRl3:
    struct = namedtuple("IrtsRl3_struct", "channel13 channel14 channel15 channel16", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel13, channel14, channel15, channel16) -> bytes:
        return pack(IrtsRl3.schema, channel13, channel14, channel15, channel16)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsRl3.struct":
        return IrtsRl3.struct._make(unpack(IrtsRl3.schema, buffer))

# IrtsRr0
class IrtsRr0:
    struct = namedtuple("IrtsRr0_struct", "channel1 channel2 channel3 channel4", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel1, channel2, channel3, channel4) -> bytes:
        return pack(IrtsRr0.schema, channel1, channel2, channel3, channel4)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsRr0.struct":
        return IrtsRr0.struct._make(unpack(IrtsRr0.schema, buffer))

# IrtsRr1
class IrtsRr1:
    struct = namedtuple("IrtsRr1_struct", "channel5 channel6 channel7 channel8", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel5, channel6, channel7, channel8) -> bytes:
        return pack(IrtsRr1.schema, channel5, channel6, channel7, channel8)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsRr1.struct":
        return IrtsRr1.struct._make(unpack(IrtsRr1.schema, buffer))

# IrtsRr2
class IrtsRr2:
    struct = namedtuple("IrtsRr2_struct", "channel9 channel10 channel11 channel12", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel9, channel10, channel11, channel12) -> bytes:
        return pack(IrtsRr2.schema, channel9, channel10, channel11, channel12)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsRr2.struct":
        return IrtsRr2.struct._make(unpack(IrtsRr2.schema, buffer))

# IrtsRr3
class IrtsRr3:
    struct = namedtuple("IrtsRr3_struct", "channel13 channel14 channel15 channel16", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(channel13, channel14, channel15, channel16) -> bytes:
        return pack(IrtsRr3.schema, channel13, channel14, channel15, channel16)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "IrtsRr3.struct":
        return IrtsRr3.struct._make(unpack(IrtsRr3.schema, buffer))
