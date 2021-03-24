#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "steer.h"

void serialize_TLM_STATUS(TLM_STATUS* tlm_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TLM_STATUS));
	memcpy(buffer, tlm_status, sizeof(STEER_STATUS));
}
void serialize_CAR_STATUS(CAR_STATUS* car_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(CAR_STATUS));
	memcpy(buffer, car_status, sizeof(STEER_STATUS));
}

void deserialize_TLM_STATUS(uint8_t* buffer, size_t buf_len, TLM_STATUS* tlm_status) {
	assert(buf_len >= sizeof(TLM_STATUS));
	memcpy(tlm_status, buffer, sizeof(STEER_STATUS));
}
void deserialize_CAR_STATUS(uint8_t* buffer, size_t buf_len, CAR_STATUS* car_status) {
	assert(buf_len >= sizeof(CAR_STATUS));
	memcpy(car_status, buffer, sizeof(STEER_STATUS));
}
