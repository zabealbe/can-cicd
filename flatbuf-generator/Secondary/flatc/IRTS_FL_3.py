# automatically generated by the FlatBuffers compiler, do not modify

# namespace: 

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class IRTS_FL_3(object):
    __slots__ = ['_tab']

    @classmethod
    def SizeOf(cls):
        return 8

    # IRTS_FL_3
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # IRTS_FL_3
    def Channel13(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(0))
    # IRTS_FL_3
    def Channel14(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(2))
    # IRTS_FL_3
    def Channel15(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(4))
    # IRTS_FL_3
    def Channel16(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(6))

def CreateIRTS_FL_3(builder, channel13, channel14, channel15, channel16):
    builder.Prep(2, 8)
    builder.PrependUint16(channel16)
    builder.PrependUint16(channel15)
    builder.PrependUint16(channel14)
    builder.PrependUint16(channel13)
    return builder.Offset()
