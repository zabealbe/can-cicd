#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "Primary.h"

/* Primary_TLM_STATUS */
void serialize_Primary_TLM_STATUS(Primary_Tlm_Status tlm_status, Primary_Race_Type race_type, uint8_t driver, uint8_t circuit, uint8_t* buffer, size_t buf_len) {
    Primary_TLM_STATUS primary_tlm_status = { tlm_status, race_type, driver, circuit };
	assert(buf_len >= sizeof(Primary_TLM_STATUS));
	memcpy(buffer, &primary_tlm_status, sizeof(Primary_TLM_STATUS));
} 
void deserialize_Primary_TLM_STATUS(uint8_t* buffer, size_t buf_len, Primary_TLM_STATUS* primary_tlm_status) {
	assert(buf_len >= sizeof(Primary_TLM_STATUS));
	memcpy(primary_tlm_status, buffer, sizeof(Primary_TLM_STATUS));
}

/* Primary_CAR_STATUS */
void serialize_Primary_CAR_STATUS(Primary_Car_Status car_status, Primary_Inverter_Status inverter_l, Primary_Inverter_Status inverter_r, uint8_t* buffer, size_t buf_len) {
    Primary_CAR_STATUS primary_car_status = { car_status, inverter_l, inverter_r };
	assert(buf_len >= sizeof(Primary_CAR_STATUS));
	memcpy(buffer, &primary_car_status, sizeof(Primary_CAR_STATUS));
} 
void deserialize_Primary_CAR_STATUS(uint8_t* buffer, size_t buf_len, Primary_CAR_STATUS* primary_car_status) {
	assert(buf_len >= sizeof(Primary_CAR_STATUS));
	memcpy(primary_car_status, buffer, sizeof(Primary_CAR_STATUS));
}

/* Primary_SET_TLM_STATUS */
void serialize_Primary_SET_TLM_STATUS(Primary_Tlm_Status tlm_status, Primary_Race_Type race_type, uint8_t driver, uint8_t circuit, uint8_t* buffer, size_t buf_len) {
    Primary_SET_TLM_STATUS primary_set_tlm_status = { tlm_status, race_type, driver, circuit };
	assert(buf_len >= sizeof(Primary_SET_TLM_STATUS));
	memcpy(buffer, &primary_set_tlm_status, sizeof(Primary_SET_TLM_STATUS));
} 
void deserialize_Primary_SET_TLM_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_TLM_STATUS* primary_set_tlm_status) {
	assert(buf_len >= sizeof(Primary_SET_TLM_STATUS));
	memcpy(primary_set_tlm_status, buffer, sizeof(Primary_SET_TLM_STATUS));
}

/* Primary_HV_VOLTAGE */
void serialize_Primary_HV_VOLTAGE(uint16_t pack_voltage, uint16_t bus_voltage, uint16_t max_cell_voltage, uint16_t min_cell_voltage, uint8_t* buffer, size_t buf_len) {
    Primary_HV_VOLTAGE primary_hv_voltage = { pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage };
	assert(buf_len >= sizeof(Primary_HV_VOLTAGE));
	memcpy(buffer, &primary_hv_voltage, sizeof(Primary_HV_VOLTAGE));
} 
void deserialize_Primary_HV_VOLTAGE(uint8_t* buffer, size_t buf_len, Primary_HV_VOLTAGE* primary_hv_voltage) {
	assert(buf_len >= sizeof(Primary_HV_VOLTAGE));
	memcpy(primary_hv_voltage, buffer, sizeof(Primary_HV_VOLTAGE));
}

/* Primary_HV_CURRENT */
void serialize_Primary_HV_CURRENT(int8_t power, uint16_t current, uint8_t* buffer, size_t buf_len) {
    Primary_HV_CURRENT primary_hv_current = { power, 0x00, current };
	assert(buf_len >= sizeof(Primary_HV_CURRENT));
	memcpy(buffer, &primary_hv_current, sizeof(Primary_HV_CURRENT));
} 
void deserialize_Primary_HV_CURRENT(uint8_t* buffer, size_t buf_len, Primary_HV_CURRENT* primary_hv_current) {
	assert(buf_len >= sizeof(Primary_HV_CURRENT));
	memcpy(primary_hv_current, buffer, sizeof(Primary_HV_CURRENT));
}

/* Primary_HV_TEMP */
void serialize_Primary_HV_TEMP(uint16_t average_temp, uint16_t max_temp, uint16_t min_temp, uint8_t* buffer, size_t buf_len) {
    Primary_HV_TEMP primary_hv_temp = { average_temp, max_temp, min_temp };
	assert(buf_len >= sizeof(Primary_HV_TEMP));
	memcpy(buffer, &primary_hv_temp, sizeof(Primary_HV_TEMP));
} 
void deserialize_Primary_HV_TEMP(uint8_t* buffer, size_t buf_len, Primary_HV_TEMP* primary_hv_temp) {
	assert(buf_len >= sizeof(Primary_HV_TEMP));
	memcpy(primary_hv_temp, buffer, sizeof(Primary_HV_TEMP));
}

/* Primary_HV_ERROR */
void serialize_Primary_HV_ERROR(uint8_t error_code, uint8_t error_index, uint8_t active, uint8_t* buffer, size_t buf_len) {
    Primary_HV_ERROR primary_hv_error = { error_code, error_index, active };
	assert(buf_len >= sizeof(Primary_HV_ERROR));
	memcpy(buffer, &primary_hv_error, sizeof(Primary_HV_ERROR));
} 
void deserialize_Primary_HV_ERROR(uint8_t* buffer, size_t buf_len, Primary_HV_ERROR* primary_hv_error) {
	assert(buf_len >= sizeof(Primary_HV_ERROR));
	memcpy(primary_hv_error, buffer, sizeof(Primary_HV_ERROR));
}

/* Primary_TS_STATUS */
void serialize_Primary_TS_STATUS(Primary_Ts_Status ts_status, uint8_t* buffer, size_t buf_len) {
    Primary_TS_STATUS primary_ts_status = { ts_status };
	assert(buf_len >= sizeof(Primary_TS_STATUS));
	memcpy(buffer, &primary_ts_status, sizeof(Primary_TS_STATUS));
} 
void deserialize_Primary_TS_STATUS(uint8_t* buffer, size_t buf_len, Primary_TS_STATUS* primary_ts_status) {
	assert(buf_len >= sizeof(Primary_TS_STATUS));
	memcpy(primary_ts_status, buffer, sizeof(Primary_TS_STATUS));
}

/* Primary_STEER_STATUS */
void serialize_Primary_STEER_STATUS(Primary_Traction_Control traction_control, Primary_Map map, bool radio_on, uint8_t* buffer, size_t buf_len) {
    Primary_STEER_STATUS primary_steer_status = { traction_control, map, radio_on };
	assert(buf_len >= sizeof(Primary_STEER_STATUS));
	memcpy(buffer, &primary_steer_status, sizeof(Primary_STEER_STATUS));
} 
void deserialize_Primary_STEER_STATUS(uint8_t* buffer, size_t buf_len, Primary_STEER_STATUS* primary_steer_status) {
	assert(buf_len >= sizeof(Primary_STEER_STATUS));
	memcpy(primary_steer_status, buffer, sizeof(Primary_STEER_STATUS));
}

/* Primary_SET_CAR_STATUS */
void serialize_Primary_SET_CAR_STATUS(Primary_Car_Status_Set car_status_set, uint8_t* buffer, size_t buf_len) {
    Primary_SET_CAR_STATUS primary_set_car_status = { car_status_set };
	assert(buf_len >= sizeof(Primary_SET_CAR_STATUS));
	memcpy(buffer, &primary_set_car_status, sizeof(Primary_SET_CAR_STATUS));
} 
void deserialize_Primary_SET_CAR_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_CAR_STATUS* primary_set_car_status) {
	assert(buf_len >= sizeof(Primary_SET_CAR_STATUS));
	memcpy(primary_set_car_status, buffer, sizeof(Primary_SET_CAR_STATUS));
}

/* Primary_SET_TS_STATUS */
void serialize_Primary_SET_TS_STATUS(Primary_Ts_Status_Set ts_status_set, uint8_t* buffer, size_t buf_len) {
    Primary_SET_TS_STATUS primary_set_ts_status = { ts_status_set };
	assert(buf_len >= sizeof(Primary_SET_TS_STATUS));
	memcpy(buffer, &primary_set_ts_status, sizeof(Primary_SET_TS_STATUS));
} 
void deserialize_Primary_SET_TS_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_TS_STATUS* primary_set_ts_status) {
	assert(buf_len >= sizeof(Primary_SET_TS_STATUS));
	memcpy(primary_set_ts_status, buffer, sizeof(Primary_SET_TS_STATUS));
}
