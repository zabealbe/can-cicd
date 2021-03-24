#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "intra_net_bms_sync.h"

void serialize_MASTER_SYNC(MASTER_SYNC* master_sync, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(MASTER_SYNC));
	memcpy(buffer, master_sync, sizeof(STEER_STATUS));
}
void serialize_CELLBOARD_TOKEN(CELLBOARD_TOKEN* cellboard_token, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(CELLBOARD_TOKEN));
	memcpy(buffer, cellboard_token, sizeof(STEER_STATUS));
}

void deserialize_MASTER_SYNC(uint8_t* buffer, size_t buf_len, MASTER_SYNC* master_sync) {
	assert(buf_len >= sizeof(MASTER_SYNC));
	memcpy(master_sync, buffer, sizeof(STEER_STATUS));
}
void deserialize_CELLBOARD_TOKEN(uint8_t* buffer, size_t buf_len, CELLBOARD_TOKEN* cellboard_token) {
	assert(buf_len >= sizeof(CELLBOARD_TOKEN));
	memcpy(cellboard_token, buffer, sizeof(STEER_STATUS));
}
