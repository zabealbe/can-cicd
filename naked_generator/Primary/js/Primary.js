const byteify = require('byteify');

function serializePrimarySetAcceleratorRange(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.sync_state),
    ]);
}
function deserializePrimarySetAcceleratorRange(bytes) {
    return {
        sync_state: byteify.deserializeInt8(bytes.slice(0, 1)),
    }
}

function serializePrimaryPedalsAdcRanges(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.accel1_raw_adc_min),
        ...byteify.serializeUint16(data.accel1_raw_adc_max),
        ...byteify.serializeUint16(data.accel2_raw_adc_min),
        ...byteify.serializeUint16(data.accel2_raw_adc_max),
    ]);
}
function deserializePrimaryPedalsAdcRanges(bytes) {
    return {
        accel1_raw_adc_min: byteify.deserializeUint16(bytes.slice(0, 2)),
        accel1_raw_adc_max: byteify.deserializeUint16(bytes.slice(2, 4)),
        accel2_raw_adc_min: byteify.deserializeUint16(bytes.slice(4, 6)),
        accel2_raw_adc_max: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializePrimaryAcceleratorPedalVal(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.level),
    ]);
}
function deserializePrimaryAcceleratorPedalVal(bytes) {
    return {
        level: byteify.deserializeUint8(bytes.slice(0, 1)),
    }
}

function serializePrimaryBrakePedalVal(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.level),
    ]);
}
function deserializePrimaryBrakePedalVal(bytes) {
    return {
        level: byteify.deserializeUint8(bytes.slice(0, 1)),
    }
}

function serializePrimaryPcuStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.warnings),
        ...byteify.serializeInt8(data.errors),
    ]);
}
function deserializePrimaryPcuStatus(bytes) {
    return {
        warnings: byteify.deserializeInt8(bytes.slice(0, 1)),
        errors: byteify.deserializeInt8(bytes.slice(1, 2)),
    }
}

function serializePrimaryTimestamp(data) {
    return Uint8Array.from([
        ...byteify.serializeUint32(data.timestamp),
    ]);
}
function deserializePrimaryTimestamp(bytes) {
    return {
        timestamp: byteify.deserializeUint32(bytes.slice(0, 4)),
    }
}

function serializePrimaryTlmStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.tlm_status),
        ...byteify.serializeInt8(data.race_type),
        ...byteify.serializeUint8(data.driver),
        ...byteify.serializeUint8(data.circuit),
    ]);
}
function deserializePrimaryTlmStatus(bytes) {
    return {
        tlm_status: byteify.deserializeInt8(bytes.slice(0, 1)),
        race_type: byteify.deserializeInt8(bytes.slice(1, 2)),
        driver: byteify.deserializeUint8(bytes.slice(2, 3)),
        circuit: byteify.deserializeUint8(bytes.slice(3, 4)),
    }
}

function serializePrimaryCarStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.car_status),
        ...byteify.serializeInt8(data.inverter_l),
        ...byteify.serializeInt8(data.inverter_r),
    ]);
}
function deserializePrimaryCarStatus(bytes) {
    return {
        car_status: byteify.deserializeInt8(bytes.slice(0, 1)),
        inverter_l: byteify.deserializeInt8(bytes.slice(1, 2)),
        inverter_r: byteify.deserializeInt8(bytes.slice(2, 3)),
    }
}

function serializePrimarySetTlmStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.tlm_status),
        ...byteify.serializeInt8(data.race_type),
        ...byteify.serializeUint8(data.driver),
        ...byteify.serializeUint8(data.circuit),
    ]);
}
function deserializePrimarySetTlmStatus(bytes) {
    return {
        tlm_status: byteify.deserializeInt8(bytes.slice(0, 1)),
        race_type: byteify.deserializeInt8(bytes.slice(1, 2)),
        driver: byteify.deserializeUint8(bytes.slice(2, 3)),
        circuit: byteify.deserializeUint8(bytes.slice(3, 4)),
    }
}

function serializePrimaryGpsCoords(data) {
    return Uint8Array.from([
        ...byteify.serializeFloat32(data.latitude),
        ...byteify.serializeFloat32(data.longitude),
    ]);
}
function deserializePrimaryGpsCoords(bytes) {
    return {
        latitude: byteify.deserializeFloat32(bytes.slice(0, 4)),
        longitude: byteify.deserializeFloat32(bytes.slice(4, 8)),
    }
}

function serializePrimaryGpsSpeed(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.speed),
    ]);
}
function deserializePrimaryGpsSpeed(bytes) {
    return {
        speed: byteify.deserializeUint16(bytes.slice(0, 2)),
    }
}

function serializePrimaryHvVoltage(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.pack_voltage),
        ...byteify.serializeUint16(data.bus_voltage),
        ...byteify.serializeUint16(data.max_cell_voltage),
        ...byteify.serializeUint16(data.min_cell_voltage),
    ]);
}
function deserializePrimaryHvVoltage(bytes) {
    return {
        pack_voltage: byteify.deserializeUint16(bytes.slice(0, 2)),
        bus_voltage: byteify.deserializeUint16(bytes.slice(2, 4)),
        max_cell_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
        min_cell_voltage: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializePrimaryHvCurrent(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.current),
        ...byteify.serializeInt16(data.power),
    ]);
}
function deserializePrimaryHvCurrent(bytes) {
    return {
        current: byteify.deserializeUint16(bytes.slice(0, 2)),
        power: byteify.deserializeInt16(bytes.slice(2, 4)),
    }
}

function serializePrimaryHvTemp(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.average_temp),
        ...byteify.serializeUint16(data.max_temp),
        ...byteify.serializeUint16(data.min_temp),
    ]);
}
function deserializePrimaryHvTemp(bytes) {
    return {
        average_temp: byteify.deserializeUint16(bytes.slice(0, 2)),
        max_temp: byteify.deserializeUint16(bytes.slice(2, 4)),
        min_temp: byteify.deserializeUint16(bytes.slice(4, 6)),
    }
}

function serializePrimaryHvErrors(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.warnings),
        ...byteify.serializeInt8(data.errors),
    ]);
}
function deserializePrimaryHvErrors(bytes) {
    return {
        warnings: byteify.deserializeInt8(bytes.slice(0, 2)),
        errors: byteify.deserializeInt8(bytes.slice(2, 4)),
    }
}

function serializePrimaryTsStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.ts_status),
    ]);
}
function deserializePrimaryTsStatus(bytes) {
    return {
        ts_status: byteify.deserializeInt8(bytes.slice(0, 1)),
    }
}

function serializePrimarySetTsStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.ts_status_set),
    ]);
}
function deserializePrimarySetTsStatus(bytes) {
    return {
        ts_status_set: byteify.deserializeInt8(bytes.slice(0, 1)),
    }
}

function serializePrimarySteerStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.traction_control),
        ...byteify.serializeInt8(data.map),
        ...byteify.serializeBool(data.radio_on),
    ]);
}
function deserializePrimarySteerStatus(bytes) {
    return {
        traction_control: byteify.deserializeInt8(bytes.slice(0, 1)),
        map: byteify.deserializeInt8(bytes.slice(1, 2)),
        radio_on: byteify.deserializeBool(bytes.slice(2, 3)),
    }
}

function serializePrimarySetCarStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.car_status_set),
    ]);
}
function deserializePrimarySetCarStatus(bytes) {
    return {
        car_status_set: byteify.deserializeInt8(bytes.slice(0, 1)),
    }
}

function serializePrimaryLvCurrent(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.current),
    ]);
}
function deserializePrimaryLvCurrent(bytes) {
    return {
        current: byteify.deserializeUint8(bytes.slice(0, 1)),
    }
}

function serializePrimaryLvVoltage(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.voltage_1),
        ...byteify.serializeUint8(data.voltage_2),
        ...byteify.serializeUint8(data.voltage_3),
        ...byteify.serializeUint8(data.voltage_4),
        ...byteify.serializeUint16(data.total_voltage),
    ]);
}
function deserializePrimaryLvVoltage(bytes) {
    return {
        voltage_1: byteify.deserializeUint8(bytes.slice(0, 1)),
        voltage_2: byteify.deserializeUint8(bytes.slice(1, 2)),
        voltage_3: byteify.deserializeUint8(bytes.slice(2, 3)),
        voltage_4: byteify.deserializeUint8(bytes.slice(3, 4)),
        total_voltage: byteify.deserializeUint16(bytes.slice(4, 6)),
    }
}

function serializePrimaryLvTemperature(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.dcdc_temperature),
        ...byteify.serializeUInt8(data.__unused_padding_1),
        ...byteify.serializeUint16(data.battery_temperature),
    ]);
}
function deserializePrimaryLvTemperature(bytes) {
    return {
        dcdc_temperature: byteify.deserializeUint8(bytes.slice(0, 1)),
        __unused_padding_1: byteify.deserializeUInt8(bytes.slice(1, 2)),
        battery_temperature: byteify.deserializeUint16(bytes.slice(2, 4)),
    }
}

function serializePrimaryCoolingStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.hv_fan_speed),
        ...byteify.serializeUint8(data.lv_fan_speed),
        ...byteify.serializeUint8(data.pump_speed),
    ]);
}
function deserializePrimaryCoolingStatus(bytes) {
    return {
        hv_fan_speed: byteify.deserializeUint8(bytes.slice(0, 1)),
        lv_fan_speed: byteify.deserializeUint8(bytes.slice(1, 2)),
        pump_speed: byteify.deserializeUint8(bytes.slice(2, 3)),
    }
}

function serializePrimaryHvCellsVoltage(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.cell_index),
        ...byteify.serializeUInt8(data.__unused_padding_1),
        ...byteify.serializeUint16(data.voltage_0),
        ...byteify.serializeUint16(data.voltage_1),
        ...byteify.serializeUint16(data.voltage_2),
    ]);
}
function deserializePrimaryHvCellsVoltage(bytes) {
    return {
        cell_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        __unused_padding_1: byteify.deserializeUInt8(bytes.slice(1, 2)),
        voltage_0: byteify.deserializeUint16(bytes.slice(2, 4)),
        voltage_1: byteify.deserializeUint16(bytes.slice(4, 6)),
        voltage_2: byteify.deserializeUint16(bytes.slice(6, 8)),
    }
}

function serializePrimaryHvCellsTemp(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.cell_index),
        ...byteify.serializeUint8(data.temp_0),
        ...byteify.serializeUint8(data.temp_1),
        ...byteify.serializeUint8(data.temp_2),
        ...byteify.serializeUint8(data.temp_3),
        ...byteify.serializeUint8(data.temp_4),
        ...byteify.serializeUint8(data.temp_5),
        ...byteify.serializeUint8(data.temp_6),
    ]);
}
function deserializePrimaryHvCellsTemp(bytes) {
    return {
        cell_index: byteify.deserializeUint8(bytes.slice(0, 1)),
        temp_0: byteify.deserializeUint8(bytes.slice(1, 2)),
        temp_1: byteify.deserializeUint8(bytes.slice(2, 3)),
        temp_2: byteify.deserializeUint8(bytes.slice(3, 4)),
        temp_3: byteify.deserializeUint8(bytes.slice(4, 5)),
        temp_4: byteify.deserializeUint8(bytes.slice(5, 6)),
        temp_5: byteify.deserializeUint8(bytes.slice(6, 7)),
        temp_6: byteify.deserializeUint8(bytes.slice(7, 8)),
    }
}

function serializePrimarySetChgPower(data) {
    return Uint8Array.from([
        ...byteify.serializeUint16(data.current),
        ...byteify.serializeUint16(data.voltage),
    ]);
}
function deserializePrimarySetChgPower(bytes) {
    return {
        current: byteify.deserializeUint16(bytes.slice(0, 2)),
        voltage: byteify.deserializeUint16(bytes.slice(2, 4)),
    }
}

function serializePrimaryChgStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.status),
    ]);
}
function deserializePrimaryChgStatus(bytes) {
    return {
        status: byteify.deserializeInt8(bytes.slice(0, 1)),
    }
}

function serializePrimarySetChgStatus(data) {
    return Uint8Array.from([
        ...byteify.serializeInt8(data.status),
    ]);
}
function deserializePrimarySetChgStatus(bytes) {
    return {
        status: byteify.deserializeInt8(bytes.slice(0, 1)),
    }
}

function serializePrimaryChgSettings(data) {
    return Uint8Array.from([
        ...byteify.serializeUint8(data.v_cutoff),
    ]);
}
function deserializePrimaryChgSettings(bytes) {
    return {
        v_cutoff: byteify.deserializeUint8(bytes.slice(0, 1)),
    }
}
