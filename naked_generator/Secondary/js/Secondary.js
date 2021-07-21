const byteify = require('byteify');

function serializeSecondaryImuAngularRate(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.ang_rate_x),
        ...byteify.serializeUint16(data.ang_rate_y),
        ...byteify.serializeUint16(data.ang_rate_z),
    ]);
}
function deserializeSecondaryImuAngularRate(bytes) {
    return {
        ang_rate_x: byteify.deserializeUint16(bytes.slice(0, 2)),
        ang_rate_y: byteify.deserializeUint16(bytes.slice(2, 4)),
        ang_rate_z: byteify.deserializeUint16(bytes.slice(4, 6)),
    }
}

function serializeSecondaryImuAcceleration(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.accel_x),
        ...byteify.serializeUint16(data.accel_y),
        ...byteify.serializeUint16(data.accel_z),
    ]);
}
function deserializeSecondaryImuAcceleration(bytes) {
    return {
        accel_x: byteify.deserializeUint16(bytes.slice(0, 2)),
        accel_y: byteify.deserializeUint16(bytes.slice(2, 4)),
        accel_z: byteify.deserializeUint16(bytes.slice(4, 6)),
    }
}

function serializeSecondaryIrtsFl0(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel1),
        ...byteify.serializeUint16(data.channel2),
        ...byteify.serializeUint16(data.channel3),
        ...byteify.serializeUint16(data.channel4),
    ]);
}
function deserializeSecondaryIrtsFl0(bytes) {
    return {
        channel1: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel2: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel3: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel4: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsFl1(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel5),
        ...byteify.serializeUint16(data.channel6),
        ...byteify.serializeUint16(data.channel7),
        ...byteify.serializeUint16(data.channel8),
    ]);
}
function deserializeSecondaryIrtsFl1(bytes) {
    return {
        channel5: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel6: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel7: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel8: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsFl2(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel9),
        ...byteify.serializeUint16(data.channel10),
        ...byteify.serializeUint16(data.channel11),
        ...byteify.serializeUint16(data.channel12),
    ]);
}
function deserializeSecondaryIrtsFl2(bytes) {
    return {
        channel9: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel10: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel11: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel12: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsFl3(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel13),
        ...byteify.serializeUint16(data.channel14),
        ...byteify.serializeUint16(data.channel15),
        ...byteify.serializeUint16(data.channel16),
    ]);
}
function deserializeSecondaryIrtsFl3(bytes) {
    return {
        channel13: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel14: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel15: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel16: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsFr0(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel1),
        ...byteify.serializeUint16(data.channel2),
        ...byteify.serializeUint16(data.channel3),
        ...byteify.serializeUint16(data.channel4),
    ]);
}
function deserializeSecondaryIrtsFr0(bytes) {
    return {
        channel1: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel2: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel3: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel4: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsFr1(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel5),
        ...byteify.serializeUint16(data.channel6),
        ...byteify.serializeUint16(data.channel7),
        ...byteify.serializeUint16(data.channel8),
    ]);
}
function deserializeSecondaryIrtsFr1(bytes) {
    return {
        channel5: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel6: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel7: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel8: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsFr2(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel9),
        ...byteify.serializeUint16(data.channel10),
        ...byteify.serializeUint16(data.channel11),
        ...byteify.serializeUint16(data.channel12),
    ]);
}
function deserializeSecondaryIrtsFr2(bytes) {
    return {
        channel9: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel10: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel11: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel12: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsFr3(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel13),
        ...byteify.serializeUint16(data.channel14),
        ...byteify.serializeUint16(data.channel15),
        ...byteify.serializeUint16(data.channel16),
    ]);
}
function deserializeSecondaryIrtsFr3(bytes) {
    return {
        channel13: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel14: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel15: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel16: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsRl0(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel1),
        ...byteify.serializeUint16(data.channel2),
        ...byteify.serializeUint16(data.channel3),
        ...byteify.serializeUint16(data.channel4),
    ]);
}
function deserializeSecondaryIrtsRl0(bytes) {
    return {
        channel1: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel2: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel3: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel4: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsRl1(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel5),
        ...byteify.serializeUint16(data.channel6),
        ...byteify.serializeUint16(data.channel7),
        ...byteify.serializeUint16(data.channel8),
    ]);
}
function deserializeSecondaryIrtsRl1(bytes) {
    return {
        channel5: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel6: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel7: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel8: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsRl2(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel9),
        ...byteify.serializeUint16(data.channel10),
        ...byteify.serializeUint16(data.channel11),
        ...byteify.serializeUint16(data.channel12),
    ]);
}
function deserializeSecondaryIrtsRl2(bytes) {
    return {
        channel9: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel10: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel11: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel12: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsRl3(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel13),
        ...byteify.serializeUint16(data.channel14),
        ...byteify.serializeUint16(data.channel15),
        ...byteify.serializeUint16(data.channel16),
    ]);
}
function deserializeSecondaryIrtsRl3(bytes) {
    return {
        channel13: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel14: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel15: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel16: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsRr0(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel1),
        ...byteify.serializeUint16(data.channel2),
        ...byteify.serializeUint16(data.channel3),
        ...byteify.serializeUint16(data.channel4),
    ]);
}
function deserializeSecondaryIrtsRr0(bytes) {
    return {
        channel1: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel2: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel3: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel4: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsRr1(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel5),
        ...byteify.serializeUint16(data.channel6),
        ...byteify.serializeUint16(data.channel7),
        ...byteify.serializeUint16(data.channel8),
    ]);
}
function deserializeSecondaryIrtsRr1(bytes) {
    return {
        channel5: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel6: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel7: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel8: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsRr2(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel9),
        ...byteify.serializeUint16(data.channel10),
        ...byteify.serializeUint16(data.channel11),
        ...byteify.serializeUint16(data.channel12),
    ]);
}
function deserializeSecondaryIrtsRr2(bytes) {
    return {
        channel9: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel10: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel11: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel12: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializeSecondaryIrtsRr3(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.channel13),
        ...byteify.serializeUint16(data.channel14),
        ...byteify.serializeUint16(data.channel15),
        ...byteify.serializeUint16(data.channel16),
    ]);
}
function deserializeSecondaryIrtsRr3(bytes) {
    return {
        channel13: byteify.deserializeUint16(bytes.slice(0, 2)),
        channel14: byteify.deserializeUint16(bytes.slice(2, 4)),
        channel15: byteify.deserializeUint16(bytes.slice(4, 6)),
        channel16: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}
