#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "tlm.h"

void serialize_SET_TLM_STATUS(SET_TLM_STATUS* set_tlm_status, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(SET_TLM_STATUS));
	memcpy(buffer, set_tlm_status, sizeof(STEER_STATUS));
}

void deserialize_SET_TLM_STATUS(uint8_t* buffer, size_t buf_len, SET_TLM_STATUS* set_tlm_status) {
	assert(buf_len >= sizeof(SET_TLM_STATUS));
	memcpy(set_tlm_status, buffer, sizeof(STEER_STATUS));
}
