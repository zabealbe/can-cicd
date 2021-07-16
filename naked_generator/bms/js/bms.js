const byteify = require('byteify');

function serializeBmsBoardStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.errors),
        ...byteify.serializeInt8(data.balancing_status),
    ]);
}
function deserializeBmsBoardStatus(bytes) {
    return {
        errors: byteify.deserializeInt8(bytes.slice(0, 1)),
        balancing_status: byteify.deserializeInt8(bytes.slice(1, 2)),
    }
}

function serializeBmsTempStats(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.board_id),
        ...byteify.serializeUint8(data.average),
        ...byteify.serializeUint8(data.max),
        ...byteify.serializeUint8(data.min),
    ]);
}
function deserializeBmsTempStats(bytes) {
    return {
        board_id: byteify.deserializeUint8(bytes.slice(0, 1)),
        average: byteify.deserializeUint8(bytes.slice(1, 2)),
        max: byteify.deserializeUint8(bytes.slice(2, 3)),
        min: byteify.deserializeUint8(bytes.slice(3, 4)),
    }
}

function serializeBmsTemperaturesCb00(data) {
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
function deserializeBmsTemperaturesCb00(bytes) {
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

function serializeBmsTemperaturesCb01(data) {
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
function deserializeBmsTemperaturesCb01(bytes) {
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

function serializeBmsTemperaturesCb02(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.temperature16),
        ...byteify.serializeUint8(data.temperature17),
    ]);
}
function deserializeBmsTemperaturesCb02(bytes) {
    return {
        temperature16: byteify.deserializeUint8(bytes.slice(0, 1)),
        temperature17: byteify.deserializeUint8(bytes.slice(1, 2)),
    }
}

function serializeBmsBalancing(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.board_id),
        ...byteify.serializeInt8(data.cells),
    ]);
}
function deserializeBmsBalancing(bytes) {
    return {
        board_id: byteify.deserializeUint8(bytes.slice(0, 1)),
        cells: byteify.deserializeInt8(bytes.slice(1, 4)),
    }
}

function serializeBmsVoltagesCb00(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsVoltagesCb00(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltagesCb01(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsVoltagesCb01(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltagesCb02(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsVoltagesCb02(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltagesCb03(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsVoltagesCb03(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltagesCb04(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsVoltagesCb04(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltagesCb10(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
        ...byteify.serializeUint16(data.voltage3),
    ]);
}
function deserializeBmsVoltagesCb10(bytes) {
    return {
        voltage0: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage1: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage2: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage3: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltagesCb11(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
    ]);
}
function deserializeBmsVoltagesCb11(bytes) {
    return {
        voltage4: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage5: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage6: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage7: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltagesCb12(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage8),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsVoltagesCb12(bytes) {
    return {
        voltage8: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltagesCb13(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
        ...byteify.serializeUint16(data.voltage15),
    ]);
}
function deserializeBmsVoltagesCb13(bytes) {
    return {
        voltage12: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage13: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage14: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage15: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltagesCb14(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
        ...byteify.serializeUint16(data.max_voltage),
        ...byteify.serializeUint16(data.min_voltage),
    ]);
}
function deserializeBmsVoltagesCb14(bytes) {
    return {
        voltage16: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage17: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
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
