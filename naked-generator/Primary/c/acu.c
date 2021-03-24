#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "acu.h"

void serialize_TS_STATUS(TS_STATUS* ts_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TS_STATUS));
	memcpy(buffer, ts_status, sizeof(STEER_STATUS));
}
void serialize_STEER_STATUS(STEER_STATUS* steer_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(STEER_STATUS));
	memcpy(buffer, steer_status, sizeof(STEER_STATUS));
}
void serialize_SET_CAR_STATUS(SET_CAR_STATUS* set_car_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(SET_CAR_STATUS));
	memcpy(buffer, set_car_status, sizeof(STEER_STATUS));
}

void deserialize_TS_STATUS(uint8_t* buffer, size_t buf_len, TS_STATUS* ts_status) {
	assert(buf_len >= sizeof(TS_STATUS));
	memcpy(ts_status, buffer, sizeof(STEER_STATUS));
}
void deserialize_STEER_STATUS(uint8_t* buffer, size_t buf_len, STEER_STATUS* steer_status) {
	assert(buf_len >= sizeof(STEER_STATUS));
	memcpy(steer_status, buffer, sizeof(STEER_STATUS));
}
void deserialize_SET_CAR_STATUS(uint8_t* buffer, size_t buf_len, SET_CAR_STATUS* set_car_status) {
	assert(buf_len >= sizeof(SET_CAR_STATUS));
	memcpy(set_car_status, buffer, sizeof(STEER_STATUS));
}
