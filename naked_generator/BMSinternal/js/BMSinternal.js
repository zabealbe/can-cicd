const byteify = require('byteify');

function serializeBmsinternalVoltagesCb00(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsinternalVoltagesCb00(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb01(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsinternalVoltagesCb01(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb02(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsinternalVoltagesCb02(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb03(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsinternalVoltagesCb03(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb04(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsinternalVoltagesCb04(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb10(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsinternalVoltagesCb10(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb11(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsinternalVoltagesCb11(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb12(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsinternalVoltagesCb12(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb13(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsinternalVoltagesCb13(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb14(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsinternalVoltagesCb14(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb20(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsinternalVoltagesCb20(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb21(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsinternalVoltagesCb21(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb22(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsinternalVoltagesCb22(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb23(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsinternalVoltagesCb23(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb24(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsinternalVoltagesCb24(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb30(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsinternalVoltagesCb30(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb31(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsinternalVoltagesCb31(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb32(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsinternalVoltagesCb32(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb33(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsinternalVoltagesCb33(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb34(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsinternalVoltagesCb34(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb40(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsinternalVoltagesCb40(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb41(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsinternalVoltagesCb41(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb42(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsinternalVoltagesCb42(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb43(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsinternalVoltagesCb43(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb44(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsinternalVoltagesCb44(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb50(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsinternalVoltagesCb50(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb51(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsinternalVoltagesCb51(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb52(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsinternalVoltagesCb52(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb53(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsinternalVoltagesCb53(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalVoltagesCb54(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsinternalVoltagesCb54(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsinternalTemperaturesCb00(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature0),
        ...byteify.serializeUint8(data.temperature1),
        ...byteify.serializeUint8(data.temperature2),
        ...byteify.serializeUint8(data.temperature3),
        ...byteify.serializeUint8(data.temperature4),
        ...byteify.serializeUint8(data.temperature5),
        ...byteify.serializeUint8(data.temperature6),
        ...byteify.serializeUint8(data.temperature7),
    ]);
}
function deserializeBmsinternalTemperaturesCb00(bytes) {
    return {
        temperature0: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature1: byteify.deserializeUint8(bytes.slice(1, 2)),
        temperature2: byteify.deserializeUint8(bytes.slice(2, 3)),
        temperature3: byteify.deserializeUint8(bytes.slice(3, 4)),
        temperature4: byteify.deserializeUint8(bytes.slice(4, 5)),
        temperature5: byteify.deserializeUint8(bytes.slice(5, 6)),
        temperature6: byteify.deserializeUint8(bytes.slice(6, 7)),
        temperature7: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

function serializeBmsinternalTemperaturesCb01(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature8),
        ...byteify.serializeUint8(data.temperature9),
        ...byteify.serializeUint8(data.temperature10),
        ...byteify.serializeUint8(data.temperature11),
        ...byteify.serializeUint8(data.temperature12),
        ...byteify.serializeUint8(data.temperature13),
        ...byteify.serializeUint8(data.temperature14),
        ...byteify.serializeUint8(data.temperature15),
    ]);
}
function deserializeBmsinternalTemperaturesCb01(bytes) {
    return {
        temperature8: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature9: byteify.deserializeUint8(bytes.slice(1, 2)),
        temperature10: byteify.deserializeUint8(bytes.slice(2, 3)),
        temperature11: byteify.deserializeUint8(bytes.slice(3, 4)),
        temperature12: byteify.deserializeUint8(bytes.slice(4, 5)),
        temperature13: byteify.deserializeUint8(bytes.slice(5, 6)),
        temperature14: byteify.deserializeUint8(bytes.slice(6, 7)),
        temperature15: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

function serializeBmsinternalTemperaturesCb02(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature16),
        ...byteify.serializeUint8(data.temperature17),
    ]);
}
function deserializeBmsinternalTemperaturesCb02(bytes) {
    return {
        temperature16: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature17: byteify.deserializeUint8(bytes.slice(1, 2)),
    }
}

function serializeBmsinternalTemperaturesCb10(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature0),
        ...byteify.serializeUint8(data.temperature1),
        ...byteify.serializeUint8(data.temperature2),
        ...byteify.serializeUint8(data.temperature3),
        ...byteify.serializeUint8(data.temperature4),
        ...byteify.serializeUint8(data.temperature5),
        ...byteify.serializeUint8(data.temperature6),
        ...byteify.serializeUint8(data.temperature7),
    ]);
}
function deserializeBmsinternalTemperaturesCb10(bytes) {
    return {
        temperature0: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature1: byteify.deserializeUint8(bytes.slice(1, 2)),
        temperature2: byteify.deserializeUint8(bytes.slice(2, 3)),
        temperature3: byteify.deserializeUint8(bytes.slice(3, 4)),
        temperature4: byteify.deserializeUint8(bytes.slice(4, 5)),
        temperature5: byteify.deserializeUint8(bytes.slice(5, 6)),
        temperature6: byteify.deserializeUint8(bytes.slice(6, 7)),
        temperature7: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

function serializeBmsinternalTemperaturesCb11(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature8),
        ...byteify.serializeUint8(data.temperature9),
        ...byteify.serializeUint8(data.temperature10),
        ...byteify.serializeUint8(data.temperature11),
        ...byteify.serializeUint8(data.temperature12),
        ...byteify.serializeUint8(data.temperature13),
        ...byteify.serializeUint8(data.temperature14),
        ...byteify.serializeUint8(data.temperature15),
    ]);
}
function deserializeBmsinternalTemperaturesCb11(bytes) {
    return {
        temperature8: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature9: byteify.deserializeUint8(bytes.slice(1, 2)),
        temperature10: byteify.deserializeUint8(bytes.slice(2, 3)),
        temperature11: byteify.deserializeUint8(bytes.slice(3, 4)),
        temperature12: byteify.deserializeUint8(bytes.slice(4, 5)),
        temperature13: byteify.deserializeUint8(bytes.slice(5, 6)),
        temperature14: byteify.deserializeUint8(bytes.slice(6, 7)),
        temperature15: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

function serializeBmsinternalTemperaturesCb12(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature16),
        ...byteify.serializeUint8(data.temperature17),
        ...byteify.serializeUint8(data.max_temperature),
        ...byteify.serializeUint8(data.min_temperature),
    ]);
}
function deserializeBmsinternalTemperaturesCb12(bytes) {
    return {
        temperature16: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature17: byteify.deserializeUint8(bytes.slice(1, 2)),
        max_temperature: byteify.deserializeUint8(bytes.slice(2, 3)),
        min_temperature: byteify.deserializeUint8(bytes.slice(3, 4)),
    }
}

function serializeBmsinternalTemperaturesCb20(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature0),
        ...byteify.serializeUint8(data.temperature1),
        ...byteify.serializeUint8(data.temperature2),
        ...byteify.serializeUint8(data.temperature3),
        ...byteify.serializeUint8(data.temperature4),
        ...byteify.serializeUint8(data.temperature5),
        ...byteify.serializeUint8(data.temperature6),
        ...byteify.serializeUint8(data.temperature7),
    ]);
}
function deserializeBmsinternalTemperaturesCb20(bytes) {
    return {
        temperature0: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature1: byteify.deserializeUint8(bytes.slice(1, 2)),
        temperature2: byteify.deserializeUint8(bytes.slice(2, 3)),
        temperature3: byteify.deserializeUint8(bytes.slice(3, 4)),
        temperature4: byteify.deserializeUint8(bytes.slice(4, 5)),
        temperature5: byteify.deserializeUint8(bytes.slice(5, 6)),
        temperature6: byteify.deserializeUint8(bytes.slice(6, 7)),
        temperature7: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

function serializeBmsinternalTemperaturesCb21(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature8),
        ...byteify.serializeUint8(data.temperature9),
        ...byteify.serializeUint8(data.temperature10),
        ...byteify.serializeUint8(data.temperature11),
        ...byteify.serializeUint8(data.temperature12),
        ...byteify.serializeUint8(data.temperature13),
        ...byteify.serializeUint8(data.temperature14),
        ...byteify.serializeUint8(data.temperature15),
    ]);
}
function deserializeBmsinternalTemperaturesCb21(bytes) {
    return {
        temperature8: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature9: byteify.deserializeUint8(bytes.slice(1, 2)),
        temperature10: byteify.deserializeUint8(bytes.slice(2, 3)),
        temperature11: byteify.deserializeUint8(bytes.slice(3, 4)),
        temperature12: byteify.deserializeUint8(bytes.slice(4, 5)),
        temperature13: byteify.deserializeUint8(bytes.slice(5, 6)),
        temperature14: byteify.deserializeUint8(bytes.slice(6, 7)),
        temperature15: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

function serializeBmsinternalTemperaturesCb22(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature16),
        ...byteify.serializeUint8(data.temperature17),
        ...byteify.serializeUint8(data.max_temperature),
        ...byteify.serializeUint8(data.min_temperature),
    ]);
}
function deserializeBmsinternalTemperaturesCb22(bytes) {
    return {
        temperature16: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature17: byteify.deserializeUint8(bytes.slice(1, 2)),
        max_temperature: byteify.deserializeUint8(bytes.slice(2, 3)),
        min_temperature: byteify.deserializeUint8(bytes.slice(3, 4)),
    }
}

function serializeBmsinternalTemperaturesCb30(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature0),
        ...byteify.serializeUint8(data.temperature1),
        ...byteify.serializeUint8(data.temperature2),
        ...byteify.serializeUint8(data.temperature3),
        ...byteify.serializeUint8(data.temperature4),
        ...byteify.serializeUint8(data.temperature5),
        ...byteify.serializeUint8(data.temperature6),
        ...byteify.serializeUint8(data.temperature7),
    ]);
}
function deserializeBmsinternalTemperaturesCb30(bytes) {
    return {
        temperature0: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature1: byteify.deserializeUint8(bytes.slice(1, 2)),
        temperature2: byteify.deserializeUint8(bytes.slice(2, 3)),
        temperature3: byteify.deserializeUint8(bytes.slice(3, 4)),
        temperature4: byteify.deserializeUint8(bytes.slice(4, 5)),
        temperature5: byteify.deserializeUint8(bytes.slice(5, 6)),
        temperature6: byteify.deserializeUint8(bytes.slice(6, 7)),
        temperature7: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

function serializeBmsinternalTemperaturesCb31(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature8),
        ...byteify.serializeUint8(data.temperature9),
        ...byteify.serializeUint8(data.temperature10),
        ...byteify.serializeUint8(data.temperature11),
        ...byteify.serializeUint8(data.temperature12),
        ...byteify.serializeUint8(data.temperature13),
        ...byteify.serializeUint8(data.temperature14),
        ...byteify.serializeUint8(data.temperature15),
    ]);
}
function deserializeBmsinternalTemperaturesCb31(bytes) {
    return {
        temperature8: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature9: byteify.deserializeUint8(bytes.slice(1, 2)),
        temperature10: byteify.deserializeUint8(bytes.slice(2, 3)),
        temperature11: byteify.deserializeUint8(bytes.slice(3, 4)),
        temperature12: byteify.deserializeUint8(bytes.slice(4, 5)),
        temperature13: byteify.deserializeUint8(bytes.slice(5, 6)),
        temperature14: byteify.deserializeUint8(bytes.slice(6, 7)),
        temperature15: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

function serializeBmsinternalTemperaturesCb32(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature16),
        ...byteify.serializeUint8(data.temperature17),
        ...byteify.serializeUint8(data.max_temperature),
        ...byteify.serializeUint8(data.min_temperature),
    ]);
}
function deserializeBmsinternalTemperaturesCb32(bytes) {
    return {
        temperature16: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature17: byteify.deserializeUint8(bytes.slice(1, 2)),
        max_temperature: byteify.deserializeUint8(bytes.slice(2, 3)),
        min_temperature: byteify.deserializeUint8(bytes.slice(3, 4)),
    }
}

function serializeBmsinternalTemperaturesCb40(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature0),
        ...byteify.serializeUint8(data.temperature1),
        ...byteify.serializeUint8(data.temperature2),
        ...byteify.serializeUint8(data.temperature3),
        ...byteify.serializeUint8(data.temperature4),
        ...byteify.serializeUint8(data.temperature5),
        ...byteify.serializeUint8(data.temperature6),
        ...byteify.serializeUint8(data.temperature7),
    ]);
}
function deserializeBmsinternalTemperaturesCb40(bytes) {
    return {
        temperature0: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature1: byteify.deserializeUint8(bytes.slice(1, 2)),
        temperature2: byteify.deserializeUint8(bytes.slice(2, 3)),
        temperature3: byteify.deserializeUint8(bytes.slice(3, 4)),
        temperature4: byteify.deserializeUint8(bytes.slice(4, 5)),
        temperature5: byteify.deserializeUint8(bytes.slice(5, 6)),
        temperature6: byteify.deserializeUint8(bytes.slice(6, 7)),
        temperature7: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

function serializeBmsinternalTemperaturesCb41(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature8),
        ...byteify.serializeUint8(data.temperature9),
        ...byteify.serializeUint8(data.temperature10),
        ...byteify.serializeUint8(data.temperature11),
        ...byteify.serializeUint8(data.temperature12),
        ...byteify.serializeUint8(data.temperature13),
        ...byteify.serializeUint8(data.temperature14),
        ...byteify.serializeUint8(data.temperature15),
    ]);
}
function deserializeBmsinternalTemperaturesCb41(bytes) {
    return {
        temperature8: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature9: byteify.deserializeUint8(bytes.slice(1, 2)),
        temperature10: byteify.deserializeUint8(bytes.slice(2, 3)),
        temperature11: byteify.deserializeUint8(bytes.slice(3, 4)),
        temperature12: byteify.deserializeUint8(bytes.slice(4, 5)),
        temperature13: byteify.deserializeUint8(bytes.slice(5, 6)),
        temperature14: byteify.deserializeUint8(bytes.slice(6, 7)),
        temperature15: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

function serializeBmsinternalTemperaturesCb42(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature16),
        ...byteify.serializeUint8(data.temperature17),
        ...byteify.serializeUint8(data.max_temperature),
        ...byteify.serializeUint8(data.min_temperature),
    ]);
}
function deserializeBmsinternalTemperaturesCb42(bytes) {
    return {
        temperature16: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature17: byteify.deserializeUint8(bytes.slice(1, 2)),
        max_temperature: byteify.deserializeUint8(bytes.slice(2, 3)),
        min_temperature: byteify.deserializeUint8(bytes.slice(3, 4)),
    }
}

function serializeBmsinternalTemperaturesCb50(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature0),
        ...byteify.serializeUint8(data.temperature1),
        ...byteify.serializeUint8(data.temperature2),
        ...byteify.serializeUint8(data.temperature3),
        ...byteify.serializeUint8(data.temperature4),
        ...byteify.serializeUint8(data.temperature5),
        ...byteify.serializeUint8(data.temperature6),
        ...byteify.serializeUint8(data.temperature7),
    ]);
}
function deserializeBmsinternalTemperaturesCb50(bytes) {
    return {
        temperature0: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature1: byteify.deserializeUint8(bytes.slice(1, 2)),
        temperature2: byteify.deserializeUint8(bytes.slice(2, 3)),
        temperature3: byteify.deserializeUint8(bytes.slice(3, 4)),
        temperature4: byteify.deserializeUint8(bytes.slice(4, 5)),
        temperature5: byteify.deserializeUint8(bytes.slice(5, 6)),
        temperature6: byteify.deserializeUint8(bytes.slice(6, 7)),
        temperature7: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

function serializeBmsinternalTemperaturesCb51(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature8),
        ...byteify.serializeUint8(data.temperature9),
        ...byteify.serializeUint8(data.temperature10),
        ...byteify.serializeUint8(data.temperature11),
        ...byteify.serializeUint8(data.temperature12),
        ...byteify.serializeUint8(data.temperature13),
        ...byteify.serializeUint8(data.temperature14),
        ...byteify.serializeUint8(data.temperature15),
    ]);
}
function deserializeBmsinternalTemperaturesCb51(bytes) {
    return {
        temperature8: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature9: byteify.deserializeUint8(bytes.slice(1, 2)),
        temperature10: byteify.deserializeUint8(bytes.slice(2, 3)),
        temperature11: byteify.deserializeUint8(bytes.slice(3, 4)),
        temperature12: byteify.deserializeUint8(bytes.slice(4, 5)),
        temperature13: byteify.deserializeUint8(bytes.slice(5, 6)),
        temperature14: byteify.deserializeUint8(bytes.slice(6, 7)),
        temperature15: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

function serializeBmsinternalTemperaturesCb52(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature16),
        ...byteify.serializeUint8(data.temperature17),
        ...byteify.serializeUint8(data.max_temperature),
        ...byteify.serializeUint8(data.min_temperature),
    ]);
}
function deserializeBmsinternalTemperaturesCb52(bytes) {
    return {
        temperature16: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature17: byteify.deserializeUint8(bytes.slice(1, 2)),
        max_temperature: byteify.deserializeUint8(bytes.slice(2, 3)),
        min_temperature: byteify.deserializeUint8(bytes.slice(3, 4)),
    }
}

function serializeBmsinternalMasterSync(data) {
    return Uint8Array.from([
        ...byteify.serializeUint32(data.time),
    ]);
}
function deserializeBmsinternalMasterSync(bytes) {
    return {
        time: byteify.deserializeUint32(bytes.slice(0, 4)),
    }
}

function serializeBmsinternalCellboardToken(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.sender_cellboard),
        ...byteify.serializeUInt8(data.__unused_padding_1),
        ...byteify.serializeUInt8(data.__unused_padding_2),
        ...byteify.serializeUInt8(data.__unused_padding_3),
        ...byteify.serializeUint32(data.time),
    ]);
}
function deserializeBmsinternalCellboardToken(bytes) {
    return {
        sender_cellboard: byteify.deserializeUint8(bytes.slice(0, 1)),
        __unused_padding_1: byteify.deserializeUInt8(bytes.slice(1, 2)),
        __unused_padding_2: byteify.deserializeUInt8(bytes.slice(2, 3)),
        __unused_padding_3: byteify.deserializeUInt8(bytes.slice(3, 4)),
        time: byteify.deserializeUint32(bytes.slice(4, 8)),
    }
}
