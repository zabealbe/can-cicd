const byteify = require('byteify');

function serializeBmsBoardStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.board_index),
        ...byteify.serializeInt8(data.errors),
        ...byteify.serializeInt8(data.balancing_status),
    ]);
}
function deserializeBmsBoardStatus(bytes) {
    return {
        board_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        errors: byteify.deserializeInt8(bytes.slice(1, 2)),
        balancing_status: byteify.deserializeInt8(bytes.slice(2, 3)),
    }
}

function serializeBmsTempStats(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.board_index),
        ...byteify.serializeUint8(data.average),
        ...byteify.serializeUint8(data.max),
        ...byteify.serializeUint8(data.min),
    ]);
}
function deserializeBmsTempStats(bytes) {
    return {
        board_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        average: byteify.deserializeUint8(bytes.slice(1, 2)),
        max: byteify.deserializeUint8(bytes.slice(2, 3)),
        min: byteify.deserializeUint8(bytes.slice(3, 4)),
    }
}

function serializeBmsBalancing(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.board_index),
        ...byteify.serializeInt8(data.cells),
    ]);
}
function deserializeBmsBalancing(bytes) {
    return {
        board_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        cells: byteify.deserializeInt8(bytes.slice(1, 4)),
    }
}

function serializeBmsMasterSync(data) {
    return Uint8Array.from([
        ...byteify.serializeUint32(data.time),
    ]);
}
function deserializeBmsMasterSync(bytes) {
    return {
        time: byteify.deserializeUint32(bytes.slice(0, 4)),
    }
}

function serializeBmsVoltages00(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsVoltages00(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages01(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsVoltages01(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages02(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsVoltages02(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages03(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsVoltages03(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages04(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsVoltages04(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages10(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsVoltages10(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages11(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsVoltages11(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages12(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsVoltages12(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages13(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsVoltages13(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages14(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsVoltages14(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages20(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsVoltages20(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages21(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsVoltages21(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages22(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsVoltages22(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages23(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsVoltages23(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages24(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsVoltages24(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages30(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsVoltages30(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages31(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsVoltages31(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages32(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsVoltages32(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages33(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsVoltages33(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages34(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsVoltages34(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages40(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsVoltages40(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages41(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsVoltages41(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages42(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsVoltages42(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages43(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsVoltages43(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages44(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsVoltages44(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages50(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsVoltages50(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages51(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsVoltages51(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages52(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsVoltages52(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages53(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsVoltages53(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages54(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsVoltages54(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}
