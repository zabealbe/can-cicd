from enum import Enum
from struct import pack, unpack
from collections import namedtuple


# VOLTAGES_CB0_0
class VOLTAGES_CB0_0:
    tuple = namedtuple("VOLTAGES_CB0_0", "voltage0, voltage1, voltage2, voltage3", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(VOLTAGES_CB0_0.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB0_0":
        return VOLTAGES_CB0_0.tuple._make(unpack(VOLTAGES_CB0_0.schema, buffer))


# VOLTAGES_CB0_1
class VOLTAGES_CB0_1:
    tuple = namedtuple("VOLTAGES_CB0_1", "voltage4, voltage5, voltage6, voltage7", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(VOLTAGES_CB0_1.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB0_1":
        return VOLTAGES_CB0_1.tuple._make(unpack(VOLTAGES_CB0_1.schema, buffer))


# VOLTAGES_CB0_2
class VOLTAGES_CB0_2:
    tuple = namedtuple("VOLTAGES_CB0_2", "voltage8, voltage9, voltage10, voltage11", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(VOLTAGES_CB0_2.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB0_2":
        return VOLTAGES_CB0_2.tuple._make(unpack(VOLTAGES_CB0_2.schema, buffer))


# VOLTAGES_CB0_3
class VOLTAGES_CB0_3:
    tuple = namedtuple("VOLTAGES_CB0_3", "voltage12, voltage13, voltage14, voltage15", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(VOLTAGES_CB0_3.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB0_3":
        return VOLTAGES_CB0_3.tuple._make(unpack(VOLTAGES_CB0_3.schema, buffer))


# VOLTAGES_CB0_4
class VOLTAGES_CB0_4:
    tuple = namedtuple("VOLTAGES_CB0_4", "voltage16, voltage17, max_voltage, min_voltage", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(VOLTAGES_CB0_4.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB0_4":
        return VOLTAGES_CB0_4.tuple._make(unpack(VOLTAGES_CB0_4.schema, buffer))


# VOLTAGES_CB1_0
class VOLTAGES_CB1_0:
    tuple = namedtuple("VOLTAGES_CB1_0", "voltage0, voltage1, voltage2, voltage3", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(VOLTAGES_CB1_0.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB1_0":
        return VOLTAGES_CB1_0.tuple._make(unpack(VOLTAGES_CB1_0.schema, buffer))


# VOLTAGES_CB1_1
class VOLTAGES_CB1_1:
    tuple = namedtuple("VOLTAGES_CB1_1", "voltage4, voltage5, voltage6, voltage7", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(VOLTAGES_CB1_1.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB1_1":
        return VOLTAGES_CB1_1.tuple._make(unpack(VOLTAGES_CB1_1.schema, buffer))


# VOLTAGES_CB1_2
class VOLTAGES_CB1_2:
    tuple = namedtuple("VOLTAGES_CB1_2", "voltage8, voltage9, voltage10, voltage11", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(VOLTAGES_CB1_2.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB1_2":
        return VOLTAGES_CB1_2.tuple._make(unpack(VOLTAGES_CB1_2.schema, buffer))


# VOLTAGES_CB1_3
class VOLTAGES_CB1_3:
    tuple = namedtuple("VOLTAGES_CB1_3", "voltage12, voltage13, voltage14, voltage15", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(VOLTAGES_CB1_3.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB1_3":
        return VOLTAGES_CB1_3.tuple._make(unpack(VOLTAGES_CB1_3.schema, buffer))


# VOLTAGES_CB1_4
class VOLTAGES_CB1_4:
    tuple = namedtuple("VOLTAGES_CB1_4", "voltage16, voltage17, max_voltage, min_voltage", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(VOLTAGES_CB1_4.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB1_4":
        return VOLTAGES_CB1_4.tuple._make(unpack(VOLTAGES_CB1_4.schema, buffer))


# VOLTAGES_CB2_0
class VOLTAGES_CB2_0:
    tuple = namedtuple("VOLTAGES_CB2_0", "voltage0, voltage1, voltage2, voltage3", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(VOLTAGES_CB2_0.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB2_0":
        return VOLTAGES_CB2_0.tuple._make(unpack(VOLTAGES_CB2_0.schema, buffer))


# VOLTAGES_CB2_1
class VOLTAGES_CB2_1:
    tuple = namedtuple("VOLTAGES_CB2_1", "voltage4, voltage5, voltage6, voltage7", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(VOLTAGES_CB2_1.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB2_1":
        return VOLTAGES_CB2_1.tuple._make(unpack(VOLTAGES_CB2_1.schema, buffer))


# VOLTAGES_CB2_2
class VOLTAGES_CB2_2:
    tuple = namedtuple("VOLTAGES_CB2_2", "voltage8, voltage9, voltage10, voltage11", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(VOLTAGES_CB2_2.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB2_2":
        return VOLTAGES_CB2_2.tuple._make(unpack(VOLTAGES_CB2_2.schema, buffer))


# VOLTAGES_CB2_3
class VOLTAGES_CB2_3:
    tuple = namedtuple("VOLTAGES_CB2_3", "voltage12, voltage13, voltage14, voltage15", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(VOLTAGES_CB2_3.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB2_3":
        return VOLTAGES_CB2_3.tuple._make(unpack(VOLTAGES_CB2_3.schema, buffer))


# VOLTAGES_CB2_4
class VOLTAGES_CB2_4:
    tuple = namedtuple("VOLTAGES_CB2_4", "voltage16, voltage17, max_voltage, min_voltage", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(VOLTAGES_CB2_4.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB2_4":
        return VOLTAGES_CB2_4.tuple._make(unpack(VOLTAGES_CB2_4.schema, buffer))


# VOLTAGES_CB3_0
class VOLTAGES_CB3_0:
    tuple = namedtuple("VOLTAGES_CB3_0", "voltage0, voltage1, voltage2, voltage3", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(VOLTAGES_CB3_0.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB3_0":
        return VOLTAGES_CB3_0.tuple._make(unpack(VOLTAGES_CB3_0.schema, buffer))


# VOLTAGES_CB3_1
class VOLTAGES_CB3_1:
    tuple = namedtuple("VOLTAGES_CB3_1", "voltage4, voltage5, voltage6, voltage7", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(VOLTAGES_CB3_1.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB3_1":
        return VOLTAGES_CB3_1.tuple._make(unpack(VOLTAGES_CB3_1.schema, buffer))


# VOLTAGES_CB3_2
class VOLTAGES_CB3_2:
    tuple = namedtuple("VOLTAGES_CB3_2", "voltage8, voltage9, voltage10, voltage11", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(VOLTAGES_CB3_2.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB3_2":
        return VOLTAGES_CB3_2.tuple._make(unpack(VOLTAGES_CB3_2.schema, buffer))


# VOLTAGES_CB3_3
class VOLTAGES_CB3_3:
    tuple = namedtuple("VOLTAGES_CB3_3", "voltage12, voltage13, voltage14, voltage15", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(VOLTAGES_CB3_3.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB3_3":
        return VOLTAGES_CB3_3.tuple._make(unpack(VOLTAGES_CB3_3.schema, buffer))


# VOLTAGES_CB3_4
class VOLTAGES_CB3_4:
    tuple = namedtuple("VOLTAGES_CB3_4", "voltage16, voltage17, max_voltage, min_voltage", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(VOLTAGES_CB3_4.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB3_4":
        return VOLTAGES_CB3_4.tuple._make(unpack(VOLTAGES_CB3_4.schema, buffer))


# VOLTAGES_CB4_0
class VOLTAGES_CB4_0:
    tuple = namedtuple("VOLTAGES_CB4_0", "voltage0, voltage1, voltage2, voltage3", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(VOLTAGES_CB4_0.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB4_0":
        return VOLTAGES_CB4_0.tuple._make(unpack(VOLTAGES_CB4_0.schema, buffer))


# VOLTAGES_CB4_1
class VOLTAGES_CB4_1:
    tuple = namedtuple("VOLTAGES_CB4_1", "voltage4, voltage5, voltage6, voltage7", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(VOLTAGES_CB4_1.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB4_1":
        return VOLTAGES_CB4_1.tuple._make(unpack(VOLTAGES_CB4_1.schema, buffer))


# VOLTAGES_CB4_2
class VOLTAGES_CB4_2:
    tuple = namedtuple("VOLTAGES_CB4_2", "voltage8, voltage9, voltage10, voltage11", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(VOLTAGES_CB4_2.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB4_2":
        return VOLTAGES_CB4_2.tuple._make(unpack(VOLTAGES_CB4_2.schema, buffer))


# VOLTAGES_CB4_3
class VOLTAGES_CB4_3:
    tuple = namedtuple("VOLTAGES_CB4_3", "voltage12, voltage13, voltage14, voltage15", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(VOLTAGES_CB4_3.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB4_3":
        return VOLTAGES_CB4_3.tuple._make(unpack(VOLTAGES_CB4_3.schema, buffer))


# VOLTAGES_CB4_4
class VOLTAGES_CB4_4:
    tuple = namedtuple("VOLTAGES_CB4_4", "voltage16, voltage17, max_voltage, min_voltage", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(VOLTAGES_CB4_4.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB4_4":
        return VOLTAGES_CB4_4.tuple._make(unpack(VOLTAGES_CB4_4.schema, buffer))


# VOLTAGES_CB5_0
class VOLTAGES_CB5_0:
    tuple = namedtuple("VOLTAGES_CB5_0", "voltage0, voltage1, voltage2, voltage3", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage0, voltage1, voltage2, voltage3) -> bytes:
        return pack(VOLTAGES_CB5_0.schema, voltage0, voltage1, voltage2, voltage3)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB5_0":
        return VOLTAGES_CB5_0.tuple._make(unpack(VOLTAGES_CB5_0.schema, buffer))


# VOLTAGES_CB5_1
class VOLTAGES_CB5_1:
    tuple = namedtuple("VOLTAGES_CB5_1", "voltage4, voltage5, voltage6, voltage7", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage4, voltage5, voltage6, voltage7) -> bytes:
        return pack(VOLTAGES_CB5_1.schema, voltage4, voltage5, voltage6, voltage7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB5_1":
        return VOLTAGES_CB5_1.tuple._make(unpack(VOLTAGES_CB5_1.schema, buffer))


# VOLTAGES_CB5_2
class VOLTAGES_CB5_2:
    tuple = namedtuple("VOLTAGES_CB5_2", "voltage8, voltage9, voltage10, voltage11", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage8, voltage9, voltage10, voltage11) -> bytes:
        return pack(VOLTAGES_CB5_2.schema, voltage8, voltage9, voltage10, voltage11)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB5_2":
        return VOLTAGES_CB5_2.tuple._make(unpack(VOLTAGES_CB5_2.schema, buffer))


# VOLTAGES_CB5_3
class VOLTAGES_CB5_3:
    tuple = namedtuple("VOLTAGES_CB5_3", "voltage12, voltage13, voltage14, voltage15", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage12, voltage13, voltage14, voltage15) -> bytes:
        return pack(VOLTAGES_CB5_3.schema, voltage12, voltage13, voltage14, voltage15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB5_3":
        return VOLTAGES_CB5_3.tuple._make(unpack(VOLTAGES_CB5_3.schema, buffer))


# VOLTAGES_CB5_4
class VOLTAGES_CB5_4:
    tuple = namedtuple("VOLTAGES_CB5_4", "voltage16, voltage17, max_voltage, min_voltage", rename=True)
    schema = "<HHHH"
    
    @staticmethod
    def serialize(voltage16, voltage17, max_voltage, min_voltage) -> bytes:
        return pack(VOLTAGES_CB5_4.schema, voltage16, voltage17, max_voltage, min_voltage)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "VOLTAGES_CB5_4":
        return VOLTAGES_CB5_4.tuple._make(unpack(VOLTAGES_CB5_4.schema, buffer))


# TEMPERATURES_CB0_0
class TEMPERATURES_CB0_0:
    tuple = namedtuple("TEMPERATURES_CB0_0", "temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7", rename=True)
    schema = "<BBBBBBBB"
    
    @staticmethod
    def serialize(temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7) -> bytes:
        return pack(TEMPERATURES_CB0_0.schema, temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB0_0":
        return TEMPERATURES_CB0_0.tuple._make(unpack(TEMPERATURES_CB0_0.schema, buffer))


# TEMPERATURES_CB0_1
class TEMPERATURES_CB0_1:
    tuple = namedtuple("TEMPERATURES_CB0_1", "temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15", rename=True)
    schema = "<BBBBBBBB"
    
    @staticmethod
    def serialize(temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15) -> bytes:
        return pack(TEMPERATURES_CB0_1.schema, temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB0_1":
        return TEMPERATURES_CB0_1.tuple._make(unpack(TEMPERATURES_CB0_1.schema, buffer))


# TEMPERATURES_CB0_2
class TEMPERATURES_CB0_2:
    tuple = namedtuple("TEMPERATURES_CB0_2", "temperature16, temperature17", rename=True)
    schema = "<BB"
    
    @staticmethod
    def serialize(temperature16, temperature17) -> bytes:
        return pack(TEMPERATURES_CB0_2.schema, temperature16, temperature17)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB0_2":
        return TEMPERATURES_CB0_2.tuple._make(unpack(TEMPERATURES_CB0_2.schema, buffer))


# TEMPERATURES_CB1_0
class TEMPERATURES_CB1_0:
    tuple = namedtuple("TEMPERATURES_CB1_0", "temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7", rename=True)
    schema = "<BBBBBBBB"
    
    @staticmethod
    def serialize(temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7) -> bytes:
        return pack(TEMPERATURES_CB1_0.schema, temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB1_0":
        return TEMPERATURES_CB1_0.tuple._make(unpack(TEMPERATURES_CB1_0.schema, buffer))


# TEMPERATURES_CB1_1
class TEMPERATURES_CB1_1:
    tuple = namedtuple("TEMPERATURES_CB1_1", "temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15", rename=True)
    schema = "<BBBBBBBB"
    
    @staticmethod
    def serialize(temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15) -> bytes:
        return pack(TEMPERATURES_CB1_1.schema, temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB1_1":
        return TEMPERATURES_CB1_1.tuple._make(unpack(TEMPERATURES_CB1_1.schema, buffer))


# TEMPERATURES_CB1_2
class TEMPERATURES_CB1_2:
    tuple = namedtuple("TEMPERATURES_CB1_2", "temperature16, temperature17, max_temperature, min_temperature", rename=True)
    schema = "<BBBB"
    
    @staticmethod
    def serialize(temperature16, temperature17, max_temperature, min_temperature) -> bytes:
        return pack(TEMPERATURES_CB1_2.schema, temperature16, temperature17, max_temperature, min_temperature)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB1_2":
        return TEMPERATURES_CB1_2.tuple._make(unpack(TEMPERATURES_CB1_2.schema, buffer))


# TEMPERATURES_CB2_0
class TEMPERATURES_CB2_0:
    tuple = namedtuple("TEMPERATURES_CB2_0", "temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7", rename=True)
    schema = "<BBBBBBBB"
    
    @staticmethod
    def serialize(temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7) -> bytes:
        return pack(TEMPERATURES_CB2_0.schema, temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB2_0":
        return TEMPERATURES_CB2_0.tuple._make(unpack(TEMPERATURES_CB2_0.schema, buffer))


# TEMPERATURES_CB2_1
class TEMPERATURES_CB2_1:
    tuple = namedtuple("TEMPERATURES_CB2_1", "temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15", rename=True)
    schema = "<BBBBBBBB"
    
    @staticmethod
    def serialize(temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15) -> bytes:
        return pack(TEMPERATURES_CB2_1.schema, temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB2_1":
        return TEMPERATURES_CB2_1.tuple._make(unpack(TEMPERATURES_CB2_1.schema, buffer))


# TEMPERATURES_CB2_2
class TEMPERATURES_CB2_2:
    tuple = namedtuple("TEMPERATURES_CB2_2", "temperature16, temperature17, max_temperature, min_temperature", rename=True)
    schema = "<BBBB"
    
    @staticmethod
    def serialize(temperature16, temperature17, max_temperature, min_temperature) -> bytes:
        return pack(TEMPERATURES_CB2_2.schema, temperature16, temperature17, max_temperature, min_temperature)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB2_2":
        return TEMPERATURES_CB2_2.tuple._make(unpack(TEMPERATURES_CB2_2.schema, buffer))


# TEMPERATURES_CB3_0
class TEMPERATURES_CB3_0:
    tuple = namedtuple("TEMPERATURES_CB3_0", "temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7", rename=True)
    schema = "<BBBBBBBB"
    
    @staticmethod
    def serialize(temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7) -> bytes:
        return pack(TEMPERATURES_CB3_0.schema, temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB3_0":
        return TEMPERATURES_CB3_0.tuple._make(unpack(TEMPERATURES_CB3_0.schema, buffer))


# TEMPERATURES_CB3_1
class TEMPERATURES_CB3_1:
    tuple = namedtuple("TEMPERATURES_CB3_1", "temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15", rename=True)
    schema = "<BBBBBBBB"
    
    @staticmethod
    def serialize(temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15) -> bytes:
        return pack(TEMPERATURES_CB3_1.schema, temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB3_1":
        return TEMPERATURES_CB3_1.tuple._make(unpack(TEMPERATURES_CB3_1.schema, buffer))


# TEMPERATURES_CB3_2
class TEMPERATURES_CB3_2:
    tuple = namedtuple("TEMPERATURES_CB3_2", "temperature16, temperature17, max_temperature, min_temperature", rename=True)
    schema = "<BBBB"
    
    @staticmethod
    def serialize(temperature16, temperature17, max_temperature, min_temperature) -> bytes:
        return pack(TEMPERATURES_CB3_2.schema, temperature16, temperature17, max_temperature, min_temperature)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB3_2":
        return TEMPERATURES_CB3_2.tuple._make(unpack(TEMPERATURES_CB3_2.schema, buffer))


# TEMPERATURES_CB4_0
class TEMPERATURES_CB4_0:
    tuple = namedtuple("TEMPERATURES_CB4_0", "temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7", rename=True)
    schema = "<BBBBBBBB"
    
    @staticmethod
    def serialize(temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7) -> bytes:
        return pack(TEMPERATURES_CB4_0.schema, temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB4_0":
        return TEMPERATURES_CB4_0.tuple._make(unpack(TEMPERATURES_CB4_0.schema, buffer))


# TEMPERATURES_CB4_1
class TEMPERATURES_CB4_1:
    tuple = namedtuple("TEMPERATURES_CB4_1", "temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15", rename=True)
    schema = "<BBBBBBBB"
    
    @staticmethod
    def serialize(temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15) -> bytes:
        return pack(TEMPERATURES_CB4_1.schema, temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB4_1":
        return TEMPERATURES_CB4_1.tuple._make(unpack(TEMPERATURES_CB4_1.schema, buffer))


# TEMPERATURES_CB4_2
class TEMPERATURES_CB4_2:
    tuple = namedtuple("TEMPERATURES_CB4_2", "temperature16, temperature17, max_temperature, min_temperature", rename=True)
    schema = "<BBBB"
    
    @staticmethod
    def serialize(temperature16, temperature17, max_temperature, min_temperature) -> bytes:
        return pack(TEMPERATURES_CB4_2.schema, temperature16, temperature17, max_temperature, min_temperature)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB4_2":
        return TEMPERATURES_CB4_2.tuple._make(unpack(TEMPERATURES_CB4_2.schema, buffer))


# TEMPERATURES_CB5_0
class TEMPERATURES_CB5_0:
    tuple = namedtuple("TEMPERATURES_CB5_0", "temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7", rename=True)
    schema = "<BBBBBBBB"
    
    @staticmethod
    def serialize(temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7) -> bytes:
        return pack(TEMPERATURES_CB5_0.schema, temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB5_0":
        return TEMPERATURES_CB5_0.tuple._make(unpack(TEMPERATURES_CB5_0.schema, buffer))


# TEMPERATURES_CB5_1
class TEMPERATURES_CB5_1:
    tuple = namedtuple("TEMPERATURES_CB5_1", "temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15", rename=True)
    schema = "<BBBBBBBB"
    
    @staticmethod
    def serialize(temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15) -> bytes:
        return pack(TEMPERATURES_CB5_1.schema, temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB5_1":
        return TEMPERATURES_CB5_1.tuple._make(unpack(TEMPERATURES_CB5_1.schema, buffer))


# TEMPERATURES_CB5_2
class TEMPERATURES_CB5_2:
    tuple = namedtuple("TEMPERATURES_CB5_2", "temperature16, temperature17, max_temperature, min_temperature", rename=True)
    schema = "<BBBB"
    
    @staticmethod
    def serialize(temperature16, temperature17, max_temperature, min_temperature) -> bytes:
        return pack(TEMPERATURES_CB5_2.schema, temperature16, temperature17, max_temperature, min_temperature)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "TEMPERATURES_CB5_2":
        return TEMPERATURES_CB5_2.tuple._make(unpack(TEMPERATURES_CB5_2.schema, buffer))


# MASTER_SYNC
class MASTER_SYNC:
    tuple = namedtuple("MASTER_SYNC", "time", rename=True)
    schema = "<I"
    
    @staticmethod
    def serialize(time) -> bytes:
        return pack(MASTER_SYNC.schema, time)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "MASTER_SYNC":
        return MASTER_SYNC.tuple._make(unpack(MASTER_SYNC.schema, buffer))


# CELLBOARD_TOKEN
class CELLBOARD_TOKEN:
    tuple = namedtuple("CELLBOARD_TOKEN", "sender_cellboard, time", rename=True)
    schema = "<BcccI"
    
    @staticmethod
    def serialize(sender_cellboard, time) -> bytes:
        return pack(CELLBOARD_TOKEN.schema, sender_cellboard, 0x00, 0x00, 0x00, time)
    
    @staticmethod
    def deserialize(buffer: bytes) -> "CELLBOARD_TOKEN":
        return CELLBOARD_TOKEN.tuple._make(unpack(CELLBOARD_TOKEN.schema, buffer))
