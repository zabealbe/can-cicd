#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "Primary.h"


/* Primary_TLM_STATUS */
void serialize_Primary_TLM_STATUS(Primary_TLM_STATUS* tlm_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Primary_TLM_STATUS));
	memcpy(buffer, tlm_status, sizeof(Primary_TLM_STATUS));
} 
void deserialize_Primary_TLM_STATUS(uint8_t* buffer, size_t buf_len, Primary_TLM_STATUS* tlm_status) {
	assert(buf_len >= sizeof(Primary_TLM_STATUS));
	memcpy(tlm_status, buffer, sizeof(Primary_TLM_STATUS));
}


/* Primary_CAR_STATUS */
void serialize_Primary_CAR_STATUS(Primary_CAR_STATUS* car_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Primary_CAR_STATUS));
	memcpy(buffer, car_status, sizeof(Primary_CAR_STATUS));
} 
void deserialize_Primary_CAR_STATUS(uint8_t* buffer, size_t buf_len, Primary_CAR_STATUS* car_status) {
	assert(buf_len >= sizeof(Primary_CAR_STATUS));
	memcpy(car_status, buffer, sizeof(Primary_CAR_STATUS));
}


/* Primary_SET_TLM_STATUS */
void serialize_Primary_SET_TLM_STATUS(Primary_SET_TLM_STATUS* set_tlm_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Primary_SET_TLM_STATUS));
	memcpy(buffer, set_tlm_status, sizeof(Primary_SET_TLM_STATUS));
} 
void deserialize_Primary_SET_TLM_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_TLM_STATUS* set_tlm_status) {
	assert(buf_len >= sizeof(Primary_SET_TLM_STATUS));
	memcpy(set_tlm_status, buffer, sizeof(Primary_SET_TLM_STATUS));
}


/* Primary_HV_VOLTAGE */
void serialize_Primary_HV_VOLTAGE(Primary_HV_VOLTAGE* hv_voltage, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Primary_HV_VOLTAGE));
	memcpy(buffer, hv_voltage, sizeof(Primary_HV_VOLTAGE));
} 
void deserialize_Primary_HV_VOLTAGE(uint8_t* buffer, size_t buf_len, Primary_HV_VOLTAGE* hv_voltage) {
	assert(buf_len >= sizeof(Primary_HV_VOLTAGE));
	memcpy(hv_voltage, buffer, sizeof(Primary_HV_VOLTAGE));
}


/* Primary_HV_CURRENT */
void serialize_Primary_HV_CURRENT(Primary_HV_CURRENT* hv_current, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Primary_HV_CURRENT));
	memcpy(buffer, hv_current, sizeof(Primary_HV_CURRENT));
} 
void deserialize_Primary_HV_CURRENT(uint8_t* buffer, size_t buf_len, Primary_HV_CURRENT* hv_current) {
	assert(buf_len >= sizeof(Primary_HV_CURRENT));
	memcpy(hv_current, buffer, sizeof(Primary_HV_CURRENT));
}


/* Primary_HV_TEMP */
void serialize_Primary_HV_TEMP(Primary_HV_TEMP* hv_temp, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Primary_HV_TEMP));
	memcpy(buffer, hv_temp, sizeof(Primary_HV_TEMP));
} 
void deserialize_Primary_HV_TEMP(uint8_t* buffer, size_t buf_len, Primary_HV_TEMP* hv_temp) {
	assert(buf_len >= sizeof(Primary_HV_TEMP));
	memcpy(hv_temp, buffer, sizeof(Primary_HV_TEMP));
}


/* Primary_HV_ERROR */
void serialize_Primary_HV_ERROR(Primary_HV_ERROR* hv_error, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Primary_HV_ERROR));
	memcpy(buffer, hv_error, sizeof(Primary_HV_ERROR));
} 
void deserialize_Primary_HV_ERROR(uint8_t* buffer, size_t buf_len, Primary_HV_ERROR* hv_error) {
	assert(buf_len >= sizeof(Primary_HV_ERROR));
	memcpy(hv_error, buffer, sizeof(Primary_HV_ERROR));
}


/* Primary_TS_STATUS */
void serialize_Primary_TS_STATUS(Primary_TS_STATUS* ts_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Primary_TS_STATUS));
	memcpy(buffer, ts_status, sizeof(Primary_TS_STATUS));
} 
void deserialize_Primary_TS_STATUS(uint8_t* buffer, size_t buf_len, Primary_TS_STATUS* ts_status) {
	assert(buf_len >= sizeof(Primary_TS_STATUS));
	memcpy(ts_status, buffer, sizeof(Primary_TS_STATUS));
}


/* Primary_STEER_STATUS */
void serialize_Primary_STEER_STATUS(Primary_STEER_STATUS* steer_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Primary_STEER_STATUS));
	memcpy(buffer, steer_status, sizeof(Primary_STEER_STATUS));
} 
void deserialize_Primary_STEER_STATUS(uint8_t* buffer, size_t buf_len, Primary_STEER_STATUS* steer_status) {
	assert(buf_len >= sizeof(Primary_STEER_STATUS));
	memcpy(steer_status, buffer, sizeof(Primary_STEER_STATUS));
}


/* Primary_SET_CAR_STATUS */
void serialize_Primary_SET_CAR_STATUS(Primary_SET_CAR_STATUS* set_car_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Primary_SET_CAR_STATUS));
	memcpy(buffer, set_car_status, sizeof(Primary_SET_CAR_STATUS));
} 
void deserialize_Primary_SET_CAR_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_CAR_STATUS* set_car_status) {
	assert(buf_len >= sizeof(Primary_SET_CAR_STATUS));
	memcpy(set_car_status, buffer, sizeof(Primary_SET_CAR_STATUS));
}


/* Primary_SET_TS_STATUS */
void serialize_Primary_SET_TS_STATUS(Primary_SET_TS_STATUS* set_ts_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Primary_SET_TS_STATUS));
	memcpy(buffer, set_ts_status, sizeof(Primary_SET_TS_STATUS));
} 
void deserialize_Primary_SET_TS_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_TS_STATUS* set_ts_status) {
	assert(buf_len >= sizeof(Primary_SET_TS_STATUS));
	memcpy(set_ts_status, buffer, sizeof(Primary_SET_TS_STATUS));
}
