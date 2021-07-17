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

function serializeBmsVoltages0(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.board_index),
        ...byteify.serializeUInt8(data.__unused_padding_1),
        ...byteify.serializeUint16(data.voltage0),
        ...byteify.serializeUint16(data.voltage1),
        ...byteify.serializeUint16(data.voltage2),
    ]);
}
function deserializeBmsVoltages0(bytes) {
    return {
        board_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        __unused_padding_1: byteify.deserializeUInt8(bytes.slice(1, 2)),
        voltage0: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage1: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage2: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages1(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.board_index),
        ...byteify.serializeUInt8(data.__unused_padding_1),
        ...byteify.serializeUint16(data.voltage3),
        ...byteify.serializeUint16(data.voltage4),
        ...byteify.serializeUint16(data.voltage5),
    ]);
}
function deserializeBmsVoltages1(bytes) {
    return {
        board_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        __unused_padding_1: byteify.deserializeUInt8(bytes.slice(1, 2)),
        voltage3: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage4: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage5: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages2(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.board_index),
        ...byteify.serializeUInt8(data.__unused_padding_1),
        ...byteify.serializeUint16(data.voltage6),
        ...byteify.serializeUint16(data.voltage7),
        ...byteify.serializeUint16(data.voltage8),
    ]);
}
function deserializeBmsVoltages2(bytes) {
    return {
        board_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        __unused_padding_1: byteify.deserializeUInt8(bytes.slice(1, 2)),
        voltage6: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage7: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage8: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages3(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.board_index),
        ...byteify.serializeUInt8(data.__unused_padding_1),
        ...byteify.serializeUint16(data.voltage9),
        ...byteify.serializeUint16(data.voltage10),
        ...byteify.serializeUint16(data.voltage11),
    ]);
}
function deserializeBmsVoltages3(bytes) {
    return {
        board_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        __unused_padding_1: byteify.deserializeUInt8(bytes.slice(1, 2)),
        voltage9: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage10: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage11: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages4(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.board_index),
        ...byteify.serializeUInt8(data.__unused_padding_1),
        ...byteify.serializeUint16(data.voltage12),
        ...byteify.serializeUint16(data.voltage13),
        ...byteify.serializeUint16(data.voltage14),
    ]);
}
function deserializeBmsVoltages4(bytes) {
    return {
        board_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        __unused_padding_1: byteify.deserializeUInt8(bytes.slice(1, 2)),
        voltage12: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage13: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage14: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeBmsVoltages5(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.board_index),
        ...byteify.serializeUInt8(data.__unused_padding_1),
        ...byteify.serializeUint16(data.voltage15),
        ...byteify.serializeUint16(data.voltage16),
        ...byteify.serializeUint16(data.voltage17),
    ]);
}
function deserializeBmsVoltages5(bytes) {
    return {
        board_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        __unused_padding_1: byteify.deserializeUInt8(bytes.slice(1, 2)),
        voltage15: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage16: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage17: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}
