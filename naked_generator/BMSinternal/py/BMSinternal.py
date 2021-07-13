from enum import IntEnum, IntFlag
from struct import pack, unpack
from collections import namedtuple


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

# VoltagesCb20
class VoltagesCb20:
    struct = namedtuple("VoltagesCb20_struct", "voltage0 voltage1 voltage2 voltage3", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(VoltagesCb20.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb20.struct":
        return VoltagesCb20.struct._make(unpack(VoltagesCb20.schema, buffer))

# VoltagesCb21
class VoltagesCb21:
    struct = namedtuple("VoltagesCb21_struct", "voltage4 voltage5 voltage6 voltage7", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(VoltagesCb21.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb21.struct":
        return VoltagesCb21.struct._make(unpack(VoltagesCb21.schema, buffer))

# VoltagesCb22
class VoltagesCb22:
    struct = namedtuple("VoltagesCb22_struct", "voltage8 voltage9 voltage10 voltage11", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(VoltagesCb22.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb22.struct":
        return VoltagesCb22.struct._make(unpack(VoltagesCb22.schema, buffer))

# VoltagesCb23
class VoltagesCb23:
    struct = namedtuple("VoltagesCb23_struct", "voltage12 voltage13 voltage14 voltage15", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(VoltagesCb23.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb23.struct":
        return VoltagesCb23.struct._make(unpack(VoltagesCb23.schema, buffer))

# VoltagesCb24
class VoltagesCb24:
    struct = namedtuple("VoltagesCb24_struct", "voltage16 voltage17 max_voltage min_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(VoltagesCb24.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb24.struct":
        return VoltagesCb24.struct._make(unpack(VoltagesCb24.schema, buffer))

# VoltagesCb30
class VoltagesCb30:
    struct = namedtuple("VoltagesCb30_struct", "voltage0 voltage1 voltage2 voltage3", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(VoltagesCb30.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb30.struct":
        return VoltagesCb30.struct._make(unpack(VoltagesCb30.schema, buffer))

# VoltagesCb31
class VoltagesCb31:
    struct = namedtuple("VoltagesCb31_struct", "voltage4 voltage5 voltage6 voltage7", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(VoltagesCb31.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb31.struct":
        return VoltagesCb31.struct._make(unpack(VoltagesCb31.schema, buffer))

# VoltagesCb32
class VoltagesCb32:
    struct = namedtuple("VoltagesCb32_struct", "voltage8 voltage9 voltage10 voltage11", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(VoltagesCb32.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb32.struct":
        return VoltagesCb32.struct._make(unpack(VoltagesCb32.schema, buffer))

# VoltagesCb33
class VoltagesCb33:
    struct = namedtuple("VoltagesCb33_struct", "voltage12 voltage13 voltage14 voltage15", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(VoltagesCb33.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb33.struct":
        return VoltagesCb33.struct._make(unpack(VoltagesCb33.schema, buffer))

# VoltagesCb34
class VoltagesCb34:
    struct = namedtuple("VoltagesCb34_struct", "voltage16 voltage17 max_voltage min_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(VoltagesCb34.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb34.struct":
        return VoltagesCb34.struct._make(unpack(VoltagesCb34.schema, buffer))

# VoltagesCb40
class VoltagesCb40:
    struct = namedtuple("VoltagesCb40_struct", "voltage0 voltage1 voltage2 voltage3", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(VoltagesCb40.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb40.struct":
        return VoltagesCb40.struct._make(unpack(VoltagesCb40.schema, buffer))

# VoltagesCb41
class VoltagesCb41:
    struct = namedtuple("VoltagesCb41_struct", "voltage4 voltage5 voltage6 voltage7", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(VoltagesCb41.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb41.struct":
        return VoltagesCb41.struct._make(unpack(VoltagesCb41.schema, buffer))

# VoltagesCb42
class VoltagesCb42:
    struct = namedtuple("VoltagesCb42_struct", "voltage8 voltage9 voltage10 voltage11", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(VoltagesCb42.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb42.struct":
        return VoltagesCb42.struct._make(unpack(VoltagesCb42.schema, buffer))

# VoltagesCb43
class VoltagesCb43:
    struct = namedtuple("VoltagesCb43_struct", "voltage12 voltage13 voltage14 voltage15", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(VoltagesCb43.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb43.struct":
        return VoltagesCb43.struct._make(unpack(VoltagesCb43.schema, buffer))

# VoltagesCb44
class VoltagesCb44:
    struct = namedtuple("VoltagesCb44_struct", "voltage16 voltage17 max_voltage min_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(VoltagesCb44.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb44.struct":
        return VoltagesCb44.struct._make(unpack(VoltagesCb44.schema, buffer))

# VoltagesCb50
class VoltagesCb50:
    struct = namedtuple("VoltagesCb50_struct", "voltage0 voltage1 voltage2 voltage3", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(VoltagesCb50.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb50.struct":
        return VoltagesCb50.struct._make(unpack(VoltagesCb50.schema, buffer))

# VoltagesCb51
class VoltagesCb51:
    struct = namedtuple("VoltagesCb51_struct", "voltage4 voltage5 voltage6 voltage7", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(VoltagesCb51.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb51.struct":
        return VoltagesCb51.struct._make(unpack(VoltagesCb51.schema, buffer))

# VoltagesCb52
class VoltagesCb52:
    struct = namedtuple("VoltagesCb52_struct", "voltage8 voltage9 voltage10 voltage11", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(VoltagesCb52.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb52.struct":
        return VoltagesCb52.struct._make(unpack(VoltagesCb52.schema, buffer))

# VoltagesCb53
class VoltagesCb53:
    struct = namedtuple("VoltagesCb53_struct", "voltage12 voltage13 voltage14 voltage15", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(VoltagesCb53.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb53.struct":
        return VoltagesCb53.struct._make(unpack(VoltagesCb53.schema, buffer))

# VoltagesCb54
class VoltagesCb54:
    struct = namedtuple("VoltagesCb54_struct", "voltage16 voltage17 max_voltage min_voltage", rename=True)
    schema = "<hhhh"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(VoltagesCb54.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VoltagesCb54.struct":
        return VoltagesCb54.struct._make(unpack(VoltagesCb54.schema, buffer))

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

# TemperaturesCb10
class TemperaturesCb10:
    struct = namedtuple("TemperaturesCb10_struct", "temperature0 temperature1 temperature2 temperature3 temperature4 temperature5 temperature6 temperature7", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7) -> bytes:
        return pack(TemperaturesCb10.schema, temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb10.struct":
        return TemperaturesCb10.struct._make(unpack(TemperaturesCb10.schema, buffer))

# TemperaturesCb11
class TemperaturesCb11:
    struct = namedtuple("TemperaturesCb11_struct", "temperature8 temperature9 temperature10 temperature11 temperature12 temperature13 temperature14 temperature15", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15) -> bytes:
        return pack(TemperaturesCb11.schema, temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb11.struct":
        return TemperaturesCb11.struct._make(unpack(TemperaturesCb11.schema, buffer))

# TemperaturesCb12
class TemperaturesCb12:
    struct = namedtuple("TemperaturesCb12_struct", "temperature16 temperature17 max_temperature min_temperature", rename=True)
    schema = "<bbbb"
    
    @staticmethod
    def serialize(temperature16, temperature17, max_temperature, min_temperature) -> bytes:
        return pack(TemperaturesCb12.schema, temperature16, temperature17, max_temperature, min_temperature)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb12.struct":
        return TemperaturesCb12.struct._make(unpack(TemperaturesCb12.schema, buffer))

# TemperaturesCb20
class TemperaturesCb20:
    struct = namedtuple("TemperaturesCb20_struct", "temperature0 temperature1 temperature2 temperature3 temperature4 temperature5 temperature6 temperature7", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7) -> bytes:
        return pack(TemperaturesCb20.schema, temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb20.struct":
        return TemperaturesCb20.struct._make(unpack(TemperaturesCb20.schema, buffer))

# TemperaturesCb21
class TemperaturesCb21:
    struct = namedtuple("TemperaturesCb21_struct", "temperature8 temperature9 temperature10 temperature11 temperature12 temperature13 temperature14 temperature15", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15) -> bytes:
        return pack(TemperaturesCb21.schema, temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb21.struct":
        return TemperaturesCb21.struct._make(unpack(TemperaturesCb21.schema, buffer))

# TemperaturesCb22
class TemperaturesCb22:
    struct = namedtuple("TemperaturesCb22_struct", "temperature16 temperature17 max_temperature min_temperature", rename=True)
    schema = "<bbbb"
    
    @staticmethod
    def serialize(temperature16, temperature17, max_temperature, min_temperature) -> bytes:
        return pack(TemperaturesCb22.schema, temperature16, temperature17, max_temperature, min_temperature)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb22.struct":
        return TemperaturesCb22.struct._make(unpack(TemperaturesCb22.schema, buffer))

# TemperaturesCb30
class TemperaturesCb30:
    struct = namedtuple("TemperaturesCb30_struct", "temperature0 temperature1 temperature2 temperature3 temperature4 temperature5 temperature6 temperature7", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7) -> bytes:
        return pack(TemperaturesCb30.schema, temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb30.struct":
        return TemperaturesCb30.struct._make(unpack(TemperaturesCb30.schema, buffer))

# TemperaturesCb31
class TemperaturesCb31:
    struct = namedtuple("TemperaturesCb31_struct", "temperature8 temperature9 temperature10 temperature11 temperature12 temperature13 temperature14 temperature15", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15) -> bytes:
        return pack(TemperaturesCb31.schema, temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb31.struct":
        return TemperaturesCb31.struct._make(unpack(TemperaturesCb31.schema, buffer))

# TemperaturesCb32
class TemperaturesCb32:
    struct = namedtuple("TemperaturesCb32_struct", "temperature16 temperature17 max_temperature min_temperature", rename=True)
    schema = "<bbbb"
    
    @staticmethod
    def serialize(temperature16, temperature17, max_temperature, min_temperature) -> bytes:
        return pack(TemperaturesCb32.schema, temperature16, temperature17, max_temperature, min_temperature)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb32.struct":
        return TemperaturesCb32.struct._make(unpack(TemperaturesCb32.schema, buffer))

# TemperaturesCb40
class TemperaturesCb40:
    struct = namedtuple("TemperaturesCb40_struct", "temperature0 temperature1 temperature2 temperature3 temperature4 temperature5 temperature6 temperature7", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7) -> bytes:
        return pack(TemperaturesCb40.schema, temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb40.struct":
        return TemperaturesCb40.struct._make(unpack(TemperaturesCb40.schema, buffer))

# TemperaturesCb41
class TemperaturesCb41:
    struct = namedtuple("TemperaturesCb41_struct", "temperature8 temperature9 temperature10 temperature11 temperature12 temperature13 temperature14 temperature15", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15) -> bytes:
        return pack(TemperaturesCb41.schema, temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb41.struct":
        return TemperaturesCb41.struct._make(unpack(TemperaturesCb41.schema, buffer))

# TemperaturesCb42
class TemperaturesCb42:
    struct = namedtuple("TemperaturesCb42_struct", "temperature16 temperature17 max_temperature min_temperature", rename=True)
    schema = "<bbbb"
    
    @staticmethod
    def serialize(temperature16, temperature17, max_temperature, min_temperature) -> bytes:
        return pack(TemperaturesCb42.schema, temperature16, temperature17, max_temperature, min_temperature)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb42.struct":
        return TemperaturesCb42.struct._make(unpack(TemperaturesCb42.schema, buffer))

# TemperaturesCb50
class TemperaturesCb50:
    struct = namedtuple("TemperaturesCb50_struct", "temperature0 temperature1 temperature2 temperature3 temperature4 temperature5 temperature6 temperature7", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7) -> bytes:
        return pack(TemperaturesCb50.schema, temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb50.struct":
        return TemperaturesCb50.struct._make(unpack(TemperaturesCb50.schema, buffer))

# TemperaturesCb51
class TemperaturesCb51:
    struct = namedtuple("TemperaturesCb51_struct", "temperature8 temperature9 temperature10 temperature11 temperature12 temperature13 temperature14 temperature15", rename=True)
    schema = "<bbbbbbbb"
    
    @staticmethod
    def serialize(temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15) -> bytes:
        return pack(TemperaturesCb51.schema, temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb51.struct":
        return TemperaturesCb51.struct._make(unpack(TemperaturesCb51.schema, buffer))

# TemperaturesCb52
class TemperaturesCb52:
    struct = namedtuple("TemperaturesCb52_struct", "temperature16 temperature17 max_temperature min_temperature", rename=True)
    schema = "<bbbb"
    
    @staticmethod
    def serialize(temperature16, temperature17, max_temperature, min_temperature) -> bytes:
        return pack(TemperaturesCb52.schema, temperature16, temperature17, max_temperature, min_temperature)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TemperaturesCb52.struct":
        return TemperaturesCb52.struct._make(unpack(TemperaturesCb52.schema, buffer))

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

# CellboardToken
class CellboardToken:
    struct = namedtuple("CellboardToken_struct", "sender_cellboard __unused_padding_1 __unused_padding_2 __unused_padding_3 time", rename=True)
    schema = "<bccci"
    
    @staticmethod
    def serialize(sender_cellboard, time) -> bytes:
        return pack(CellboardToken.schema, sender_cellboard, 0x00, 0x00, 0x00, time)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "CellboardToken.struct":
        return CellboardToken.struct._make(unpack(CellboardToken.schema, buffer))
