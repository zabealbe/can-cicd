#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "bms.h"

/* bms_BOARD_STATUS */
size_t serialize_bms_BOARD_STATUS(uint8_t* buffer, uint8_t board_index, bms_errors errors, bms_balancing_status balancing_status) {
    bms_BOARD_STATUS bms_board_status = { board_index, {errors[0]}, balancing_status };
	// assert(buf_len >= sizeof(bms_BOARD_STATUS));
	memcpy(buffer, &bms_board_status, sizeof(bms_BOARD_STATUS));
    return sizeof(bms_BOARD_STATUS);
} 
size_t deserialize_bms_BOARD_STATUS(uint8_t* buffer, bms_BOARD_STATUS* bms_board_status) {
	// assert(buf_len >= sizeof(bms_BOARD_STATUS));
	memcpy(bms_board_status, buffer, sizeof(bms_BOARD_STATUS));
    return sizeof(bms_BOARD_STATUS);
}
/* bms_TEMP_STATS */
size_t serialize_bms_TEMP_STATS(uint8_t* buffer, uint8_t board_index, uint8_t average, uint8_t max, uint8_t min) {
    bms_TEMP_STATS bms_temp_stats = { board_index, average, max, min };
	// assert(buf_len >= sizeof(bms_TEMP_STATS));
	memcpy(buffer, &bms_temp_stats, sizeof(bms_TEMP_STATS));
    return sizeof(bms_TEMP_STATS);
} 
size_t deserialize_bms_TEMP_STATS(uint8_t* buffer, bms_TEMP_STATS* bms_temp_stats) {
	// assert(buf_len >= sizeof(bms_TEMP_STATS));
	memcpy(bms_temp_stats, buffer, sizeof(bms_TEMP_STATS));
    return sizeof(bms_TEMP_STATS);
}
/* bms_BALANCING */
size_t serialize_bms_BALANCING(uint8_t* buffer, uint8_t board_index, bms_balancing_cells cells) {
    bms_BALANCING bms_balancing = { board_index, {cells[0], cells[1], cells[2]} };
	// assert(buf_len >= sizeof(bms_BALANCING));
	memcpy(buffer, &bms_balancing, sizeof(bms_BALANCING));
    return sizeof(bms_BALANCING);
} 
size_t deserialize_bms_BALANCING(uint8_t* buffer, bms_BALANCING* bms_balancing) {
	// assert(buf_len >= sizeof(bms_BALANCING));
	memcpy(bms_balancing, buffer, sizeof(bms_BALANCING));
    return sizeof(bms_BALANCING);
}
/* bms_MASTER_SYNC */
size_t serialize_bms_MASTER_SYNC(uint8_t* buffer, uint32_t time) {
    bms_MASTER_SYNC bms_master_sync = { time };
	// assert(buf_len >= sizeof(bms_MASTER_SYNC));
	memcpy(buffer, &bms_master_sync, sizeof(bms_MASTER_SYNC));
    return sizeof(bms_MASTER_SYNC);
} 
size_t deserialize_bms_MASTER_SYNC(uint8_t* buffer, bms_MASTER_SYNC* bms_master_sync) {
	// assert(buf_len >= sizeof(bms_MASTER_SYNC));
	memcpy(bms_master_sync, buffer, sizeof(bms_MASTER_SYNC));
    return sizeof(bms_MASTER_SYNC);
}
/* bms_VOLTAGES_0 */
size_t serialize_bms_VOLTAGES_0(uint8_t* buffer, uint8_t board_index, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2) {
    bms_VOLTAGES_0 bms_voltages_0 = { board_index, 0x00, voltage0, voltage1, voltage2 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_0));
	memcpy(buffer, &bms_voltages_0, sizeof(bms_VOLTAGES_0));
    return sizeof(bms_VOLTAGES_0);
} 
size_t deserialize_bms_VOLTAGES_0(uint8_t* buffer, bms_VOLTAGES_0* bms_voltages_0) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_0));
	memcpy(bms_voltages_0, buffer, sizeof(bms_VOLTAGES_0));
    return sizeof(bms_VOLTAGES_0);
}
/* bms_VOLTAGES_1 */
size_t serialize_bms_VOLTAGES_1(uint8_t* buffer, uint8_t board_index, uint16_t voltage3, uint16_t voltage4, uint16_t voltage5) {
    bms_VOLTAGES_1 bms_voltages_1 = { board_index, 0x00, voltage3, voltage4, voltage5 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_1));
	memcpy(buffer, &bms_voltages_1, sizeof(bms_VOLTAGES_1));
    return sizeof(bms_VOLTAGES_1);
} 
size_t deserialize_bms_VOLTAGES_1(uint8_t* buffer, bms_VOLTAGES_1* bms_voltages_1) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_1));
	memcpy(bms_voltages_1, buffer, sizeof(bms_VOLTAGES_1));
    return sizeof(bms_VOLTAGES_1);
}
/* bms_VOLTAGES_2 */
size_t serialize_bms_VOLTAGES_2(uint8_t* buffer, uint8_t board_index, uint16_t voltage6, uint16_t voltage7, uint16_t voltage8) {
    bms_VOLTAGES_2 bms_voltages_2 = { board_index, 0x00, voltage6, voltage7, voltage8 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_2));
	memcpy(buffer, &bms_voltages_2, sizeof(bms_VOLTAGES_2));
    return sizeof(bms_VOLTAGES_2);
} 
size_t deserialize_bms_VOLTAGES_2(uint8_t* buffer, bms_VOLTAGES_2* bms_voltages_2) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_2));
	memcpy(bms_voltages_2, buffer, sizeof(bms_VOLTAGES_2));
    return sizeof(bms_VOLTAGES_2);
}
/* bms_VOLTAGES_3 */
size_t serialize_bms_VOLTAGES_3(uint8_t* buffer, uint8_t board_index, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    bms_VOLTAGES_3 bms_voltages_3 = { board_index, 0x00, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_3));
	memcpy(buffer, &bms_voltages_3, sizeof(bms_VOLTAGES_3));
    return sizeof(bms_VOLTAGES_3);
} 
size_t deserialize_bms_VOLTAGES_3(uint8_t* buffer, bms_VOLTAGES_3* bms_voltages_3) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_3));
	memcpy(bms_voltages_3, buffer, sizeof(bms_VOLTAGES_3));
    return sizeof(bms_VOLTAGES_3);
}
/* bms_VOLTAGES_4 */
size_t serialize_bms_VOLTAGES_4(uint8_t* buffer, uint8_t board_index, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14) {
    bms_VOLTAGES_4 bms_voltages_4 = { board_index, 0x00, voltage12, voltage13, voltage14 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_4));
	memcpy(buffer, &bms_voltages_4, sizeof(bms_VOLTAGES_4));
    return sizeof(bms_VOLTAGES_4);
} 
size_t deserialize_bms_VOLTAGES_4(uint8_t* buffer, bms_VOLTAGES_4* bms_voltages_4) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_4));
	memcpy(bms_voltages_4, buffer, sizeof(bms_VOLTAGES_4));
    return sizeof(bms_VOLTAGES_4);
}
/* bms_VOLTAGES_5 */
size_t serialize_bms_VOLTAGES_5(uint8_t* buffer, uint8_t board_index, uint16_t voltage15, uint16_t voltage16, uint16_t voltage17) {
    bms_VOLTAGES_5 bms_voltages_5 = { board_index, 0x00, voltage15, voltage16, voltage17 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_5));
	memcpy(buffer, &bms_voltages_5, sizeof(bms_VOLTAGES_5));
    return sizeof(bms_VOLTAGES_5);
} 
size_t deserialize_bms_VOLTAGES_5(uint8_t* buffer, bms_VOLTAGES_5* bms_voltages_5) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_5));
	memcpy(bms_voltages_5, buffer, sizeof(bms_VOLTAGES_5));
    return sizeof(bms_VOLTAGES_5);
}
