#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "bms_hv.h"

void serialize_SET_TS_STATUS(SET_TS_STATUS* set_ts_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(SET_TS_STATUS));
	memcpy(buffer, set_ts_status, sizeof(STEER_STATUS));
}

void deserialize_SET_TS_STATUS(uint8_t* buffer, size_t buf_len, SET_TS_STATUS* set_ts_status) {
	assert(buf_len >= sizeof(SET_TS_STATUS));
	memcpy(set_ts_status, buffer, sizeof(STEER_STATUS));
}
