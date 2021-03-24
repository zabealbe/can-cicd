#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "acunsteer.h"

void serialize_HV_VOLTAGE(HV_VOLTAGE* hv_voltage, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(HV_VOLTAGE));
	memcpy(buffer, hv_voltage, sizeof(STEER_STATUS));
}
void serialize_HV_CURRENT(HV_CURRENT* hv_current, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(HV_CURRENT));
	memcpy(buffer, hv_current, sizeof(STEER_STATUS));
}
void serialize_HV_TEMP(HV_TEMP* hv_temp, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(HV_TEMP));
	memcpy(buffer, hv_temp, sizeof(STEER_STATUS));
}
void serialize_HV_ERROR(HV_ERROR* hv_error, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(HV_ERROR));
	memcpy(buffer, hv_error, sizeof(STEER_STATUS));
}

void deserialize_HV_VOLTAGE(uint8_t* buffer, size_t buf_len, HV_VOLTAGE* hv_voltage) {
	assert(buf_len >= sizeof(HV_VOLTAGE));
	memcpy(hv_voltage, buffer, sizeof(STEER_STATUS));
}
void deserialize_HV_CURRENT(uint8_t* buffer, size_t buf_len, HV_CURRENT* hv_current) {
	assert(buf_len >= sizeof(HV_CURRENT));
	memcpy(hv_current, buffer, sizeof(STEER_STATUS));
}
void deserialize_HV_TEMP(uint8_t* buffer, size_t buf_len, HV_TEMP* hv_temp) {
	assert(buf_len >= sizeof(HV_TEMP));
	memcpy(hv_temp, buffer, sizeof(STEER_STATUS));
}
void deserialize_HV_ERROR(uint8_t* buffer, size_t buf_len, HV_ERROR* hv_error) {
	assert(buf_len >= sizeof(HV_ERROR));
	memcpy(hv_error, buffer, sizeof(STEER_STATUS));
}
