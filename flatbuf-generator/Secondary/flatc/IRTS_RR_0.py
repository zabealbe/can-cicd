# automatically generated by the FlatBuffers compiler, do not modify

# namespace: 

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class IRTS_RR_0(object):
    __slots__ = ['_tab']

    @classmethod
    def SizeOf(cls):
        return 8

    # IRTS_RR_0
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # IRTS_RR_0
    def Channel1(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(0))
    # IRTS_RR_0
    def Channel2(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(2))
    # IRTS_RR_0
    def Channel3(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(4))
    # IRTS_RR_0
    def Channel4(self): return self._tab.Get(flatbuffers.number_types.Uint16Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(6))

def CreateIRTS_RR_0(builder, channel1, channel2, channel3, channel4):
    builder.Prep(2, 8)
    builder.PrependUint16(channel4)
    builder.PrependUint16(channel3)
    builder.PrependUint16(channel2)
    builder.PrependUint16(channel1)
    return builder.Offset()
