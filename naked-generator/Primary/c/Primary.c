#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "Primary.h"

void serialize_TLM_STATUS(TLM_STATUS* tlm_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TLM_STATUS));
	memcpy(buffer, tlm_status, sizeof(TLM_STATUS));
}
void serialize_CAR_STATUS(CAR_STATUS* car_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(CAR_STATUS));
	memcpy(buffer, car_status, sizeof(CAR_STATUS));
}
void serialize_SET_TLM_STATUS(SET_TLM_STATUS* set_tlm_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(SET_TLM_STATUS));
	memcpy(buffer, set_tlm_status, sizeof(SET_TLM_STATUS));
}
void serialize_HV_VOLTAGE(HV_VOLTAGE* hv_voltage, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(HV_VOLTAGE));
	memcpy(buffer, hv_voltage, sizeof(HV_VOLTAGE));
}
void serialize_HV_CURRENT(HV_CURRENT* hv_current, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(HV_CURRENT));
	memcpy(buffer, hv_current, sizeof(HV_CURRENT));
}
void serialize_HV_TEMP(HV_TEMP* hv_temp, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(HV_TEMP));
	memcpy(buffer, hv_temp, sizeof(HV_TEMP));
}
void serialize_HV_ERROR(HV_ERROR* hv_error, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(HV_ERROR));
	memcpy(buffer, hv_error, sizeof(HV_ERROR));
}
void serialize_TS_STATUS(TS_STATUS* ts_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TS_STATUS));
	memcpy(buffer, ts_status, sizeof(TS_STATUS));
}
void serialize_STEER_STATUS(STEER_STATUS* steer_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(STEER_STATUS));
	memcpy(buffer, steer_status, sizeof(STEER_STATUS));
}
void serialize_SET_CAR_STATUS(SET_CAR_STATUS* set_car_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(SET_CAR_STATUS));
	memcpy(buffer, set_car_status, sizeof(SET_CAR_STATUS));
}
void serialize_SET_TS_STATUS(SET_TS_STATUS* set_ts_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(SET_TS_STATUS));
	memcpy(buffer, set_ts_status, sizeof(SET_TS_STATUS));
}

void deserialize_TLM_STATUS(uint8_t* buffer, size_t buf_len, TLM_STATUS* tlm_status) {
	assert(buf_len >= sizeof(TLM_STATUS));
	memcpy(tlm_status, buffer, sizeof(TLM_STATUS));
}
void deserialize_CAR_STATUS(uint8_t* buffer, size_t buf_len, CAR_STATUS* car_status) {
	assert(buf_len >= sizeof(CAR_STATUS));
	memcpy(car_status, buffer, sizeof(CAR_STATUS));
}
void deserialize_SET_TLM_STATUS(uint8_t* buffer, size_t buf_len, SET_TLM_STATUS* set_tlm_status) {
	assert(buf_len >= sizeof(SET_TLM_STATUS));
	memcpy(set_tlm_status, buffer, sizeof(SET_TLM_STATUS));
}
void deserialize_HV_VOLTAGE(uint8_t* buffer, size_t buf_len, HV_VOLTAGE* hv_voltage) {
	assert(buf_len >= sizeof(HV_VOLTAGE));
	memcpy(hv_voltage, buffer, sizeof(HV_VOLTAGE));
}
void deserialize_HV_CURRENT(uint8_t* buffer, size_t buf_len, HV_CURRENT* hv_current) {
	assert(buf_len >= sizeof(HV_CURRENT));
	memcpy(hv_current, buffer, sizeof(HV_CURRENT));
}
void deserialize_HV_TEMP(uint8_t* buffer, size_t buf_len, HV_TEMP* hv_temp) {
	assert(buf_len >= sizeof(HV_TEMP));
	memcpy(hv_temp, buffer, sizeof(HV_TEMP));
}
void deserialize_HV_ERROR(uint8_t* buffer, size_t buf_len, HV_ERROR* hv_error) {
	assert(buf_len >= sizeof(HV_ERROR));
	memcpy(hv_error, buffer, sizeof(HV_ERROR));
}
void deserialize_TS_STATUS(uint8_t* buffer, size_t buf_len, TS_STATUS* ts_status) {
	assert(buf_len >= sizeof(TS_STATUS));
	memcpy(ts_status, buffer, sizeof(TS_STATUS));
}
void deserialize_STEER_STATUS(uint8_t* buffer, size_t buf_len, STEER_STATUS* steer_status) {
	assert(buf_len >= sizeof(STEER_STATUS));
	memcpy(steer_status, buffer, sizeof(STEER_STATUS));
}
void deserialize_SET_CAR_STATUS(uint8_t* buffer, size_t buf_len, SET_CAR_STATUS* set_car_status) {
	assert(buf_len >= sizeof(SET_CAR_STATUS));
	memcpy(set_car_status, buffer, sizeof(SET_CAR_STATUS));
}
void deserialize_SET_TS_STATUS(uint8_t* buffer, size_t buf_len, SET_TS_STATUS* set_ts_status) {
	assert(buf_len >= sizeof(SET_TS_STATUS));
	memcpy(set_ts_status, buffer, sizeof(SET_TS_STATUS));
}
