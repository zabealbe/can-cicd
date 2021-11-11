#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "bms.h"

/* bms_BOARD_STATUS_0 */
size_t serialize_bms_BOARD_STATUS_0(uint8_t* buffer, bms_errors errors, bms_balancing_status balancing_status) {
    bms_BOARD_STATUS_0 bms_board_status_0 = { {errors[0]}, balancing_status };
	// assert(buf_len >= sizeof(bms_BOARD_STATUS_0));
	memcpy(buffer, &bms_board_status_0, sizeof(bms_BOARD_STATUS_0));
    return sizeof(bms_BOARD_STATUS_0);
} 
size_t deserialize_bms_BOARD_STATUS_0(uint8_t* buffer, bms_BOARD_STATUS_0* bms_board_status_0) {
	// assert(buf_len >= sizeof(bms_BOARD_STATUS_0));
	memcpy(bms_board_status_0, buffer, sizeof(bms_BOARD_STATUS_0));
    return sizeof(bms_BOARD_STATUS_0);
}
/* bms_BOARD_STATUS_1 */
size_t serialize_bms_BOARD_STATUS_1(uint8_t* buffer, bms_errors errors, bms_balancing_status balancing_status) {
    bms_BOARD_STATUS_1 bms_board_status_1 = { {errors[0]}, balancing_status };
	// assert(buf_len >= sizeof(bms_BOARD_STATUS_1));
	memcpy(buffer, &bms_board_status_1, sizeof(bms_BOARD_STATUS_1));
    return sizeof(bms_BOARD_STATUS_1);
} 
size_t deserialize_bms_BOARD_STATUS_1(uint8_t* buffer, bms_BOARD_STATUS_1* bms_board_status_1) {
	// assert(buf_len >= sizeof(bms_BOARD_STATUS_1));
	memcpy(bms_board_status_1, buffer, sizeof(bms_BOARD_STATUS_1));
    return sizeof(bms_BOARD_STATUS_1);
}
/* bms_BOARD_STATUS_2 */
size_t serialize_bms_BOARD_STATUS_2(uint8_t* buffer, bms_errors errors, bms_balancing_status balancing_status) {
    bms_BOARD_STATUS_2 bms_board_status_2 = { {errors[0]}, balancing_status };
	// assert(buf_len >= sizeof(bms_BOARD_STATUS_2));
	memcpy(buffer, &bms_board_status_2, sizeof(bms_BOARD_STATUS_2));
    return sizeof(bms_BOARD_STATUS_2);
} 
size_t deserialize_bms_BOARD_STATUS_2(uint8_t* buffer, bms_BOARD_STATUS_2* bms_board_status_2) {
	// assert(buf_len >= sizeof(bms_BOARD_STATUS_2));
	memcpy(bms_board_status_2, buffer, sizeof(bms_BOARD_STATUS_2));
    return sizeof(bms_BOARD_STATUS_2);
}
/* bms_BOARD_STATUS_3 */
size_t serialize_bms_BOARD_STATUS_3(uint8_t* buffer, bms_errors errors, bms_balancing_status balancing_status) {
    bms_BOARD_STATUS_3 bms_board_status_3 = { {errors[0]}, balancing_status };
	// assert(buf_len >= sizeof(bms_BOARD_STATUS_3));
	memcpy(buffer, &bms_board_status_3, sizeof(bms_BOARD_STATUS_3));
    return sizeof(bms_BOARD_STATUS_3);
} 
size_t deserialize_bms_BOARD_STATUS_3(uint8_t* buffer, bms_BOARD_STATUS_3* bms_board_status_3) {
	// assert(buf_len >= sizeof(bms_BOARD_STATUS_3));
	memcpy(bms_board_status_3, buffer, sizeof(bms_BOARD_STATUS_3));
    return sizeof(bms_BOARD_STATUS_3);
}
/* bms_BOARD_STATUS_4 */
size_t serialize_bms_BOARD_STATUS_4(uint8_t* buffer, bms_errors errors, bms_balancing_status balancing_status) {
    bms_BOARD_STATUS_4 bms_board_status_4 = { {errors[0]}, balancing_status };
	// assert(buf_len >= sizeof(bms_BOARD_STATUS_4));
	memcpy(buffer, &bms_board_status_4, sizeof(bms_BOARD_STATUS_4));
    return sizeof(bms_BOARD_STATUS_4);
} 
size_t deserialize_bms_BOARD_STATUS_4(uint8_t* buffer, bms_BOARD_STATUS_4* bms_board_status_4) {
	// assert(buf_len >= sizeof(bms_BOARD_STATUS_4));
	memcpy(bms_board_status_4, buffer, sizeof(bms_BOARD_STATUS_4));
    return sizeof(bms_BOARD_STATUS_4);
}
/* bms_BOARD_STATUS_5 */
size_t serialize_bms_BOARD_STATUS_5(uint8_t* buffer, bms_errors errors, bms_balancing_status balancing_status) {
    bms_BOARD_STATUS_5 bms_board_status_5 = { {errors[0]}, balancing_status };
	// assert(buf_len >= sizeof(bms_BOARD_STATUS_5));
	memcpy(buffer, &bms_board_status_5, sizeof(bms_BOARD_STATUS_5));
    return sizeof(bms_BOARD_STATUS_5);
} 
size_t deserialize_bms_BOARD_STATUS_5(uint8_t* buffer, bms_BOARD_STATUS_5* bms_board_status_5) {
	// assert(buf_len >= sizeof(bms_BOARD_STATUS_5));
	memcpy(bms_board_status_5, buffer, sizeof(bms_BOARD_STATUS_5));
    return sizeof(bms_BOARD_STATUS_5);
}
/* bms_TEMP_STATS_0 */
size_t serialize_bms_TEMP_STATS_0(uint8_t* buffer, uint8_t start_index, uint8_t temp0, uint8_t temp1, uint8_t temp2, uint8_t temp3, uint8_t temp4, uint8_t temp5) {
    bms_TEMP_STATS_0 bms_temp_stats_0 = { start_index, temp0, temp1, temp2, temp3, temp4, temp5 };
	// assert(buf_len >= sizeof(bms_TEMP_STATS_0));
	memcpy(buffer, &bms_temp_stats_0, sizeof(bms_TEMP_STATS_0));
    return sizeof(bms_TEMP_STATS_0);
} 
size_t deserialize_bms_TEMP_STATS_0(uint8_t* buffer, bms_TEMP_STATS_0* bms_temp_stats_0) {
	// assert(buf_len >= sizeof(bms_TEMP_STATS_0));
	memcpy(bms_temp_stats_0, buffer, sizeof(bms_TEMP_STATS_0));
    return sizeof(bms_TEMP_STATS_0);
}
/* bms_TEMP_STATS_1 */
size_t serialize_bms_TEMP_STATS_1(uint8_t* buffer, uint8_t start_index, uint8_t temp0, uint8_t temp1, uint8_t temp2, uint8_t temp3, uint8_t temp4, uint8_t temp5) {
    bms_TEMP_STATS_1 bms_temp_stats_1 = { start_index, temp0, temp1, temp2, temp3, temp4, temp5 };
	// assert(buf_len >= sizeof(bms_TEMP_STATS_1));
	memcpy(buffer, &bms_temp_stats_1, sizeof(bms_TEMP_STATS_1));
    return sizeof(bms_TEMP_STATS_1);
} 
size_t deserialize_bms_TEMP_STATS_1(uint8_t* buffer, bms_TEMP_STATS_1* bms_temp_stats_1) {
	// assert(buf_len >= sizeof(bms_TEMP_STATS_1));
	memcpy(bms_temp_stats_1, buffer, sizeof(bms_TEMP_STATS_1));
    return sizeof(bms_TEMP_STATS_1);
}
/* bms_TEMP_STATS_2 */
size_t serialize_bms_TEMP_STATS_2(uint8_t* buffer, uint8_t start_index, uint8_t temp0, uint8_t temp1, uint8_t temp2, uint8_t temp3, uint8_t temp4, uint8_t temp5) {
    bms_TEMP_STATS_2 bms_temp_stats_2 = { start_index, temp0, temp1, temp2, temp3, temp4, temp5 };
	// assert(buf_len >= sizeof(bms_TEMP_STATS_2));
	memcpy(buffer, &bms_temp_stats_2, sizeof(bms_TEMP_STATS_2));
    return sizeof(bms_TEMP_STATS_2);
} 
size_t deserialize_bms_TEMP_STATS_2(uint8_t* buffer, bms_TEMP_STATS_2* bms_temp_stats_2) {
	// assert(buf_len >= sizeof(bms_TEMP_STATS_2));
	memcpy(bms_temp_stats_2, buffer, sizeof(bms_TEMP_STATS_2));
    return sizeof(bms_TEMP_STATS_2);
}
/* bms_TEMP_STATS_3 */
size_t serialize_bms_TEMP_STATS_3(uint8_t* buffer, uint8_t start_index, uint8_t temp0, uint8_t temp1, uint8_t temp2, uint8_t temp3, uint8_t temp4, uint8_t temp5) {
    bms_TEMP_STATS_3 bms_temp_stats_3 = { start_index, temp0, temp1, temp2, temp3, temp4, temp5 };
	// assert(buf_len >= sizeof(bms_TEMP_STATS_3));
	memcpy(buffer, &bms_temp_stats_3, sizeof(bms_TEMP_STATS_3));
    return sizeof(bms_TEMP_STATS_3);
} 
size_t deserialize_bms_TEMP_STATS_3(uint8_t* buffer, bms_TEMP_STATS_3* bms_temp_stats_3) {
	// assert(buf_len >= sizeof(bms_TEMP_STATS_3));
	memcpy(bms_temp_stats_3, buffer, sizeof(bms_TEMP_STATS_3));
    return sizeof(bms_TEMP_STATS_3);
}
/* bms_TEMP_STATS_4 */
size_t serialize_bms_TEMP_STATS_4(uint8_t* buffer, uint8_t start_index, uint8_t temp0, uint8_t temp1, uint8_t temp2, uint8_t temp3, uint8_t temp4, uint8_t temp5) {
    bms_TEMP_STATS_4 bms_temp_stats_4 = { start_index, temp0, temp1, temp2, temp3, temp4, temp5 };
	// assert(buf_len >= sizeof(bms_TEMP_STATS_4));
	memcpy(buffer, &bms_temp_stats_4, sizeof(bms_TEMP_STATS_4));
    return sizeof(bms_TEMP_STATS_4);
} 
size_t deserialize_bms_TEMP_STATS_4(uint8_t* buffer, bms_TEMP_STATS_4* bms_temp_stats_4) {
	// assert(buf_len >= sizeof(bms_TEMP_STATS_4));
	memcpy(bms_temp_stats_4, buffer, sizeof(bms_TEMP_STATS_4));
    return sizeof(bms_TEMP_STATS_4);
}
/* bms_TEMP_STATS_5 */
size_t serialize_bms_TEMP_STATS_5(uint8_t* buffer, uint8_t start_index, uint8_t temp0, uint8_t temp1, uint8_t temp2, uint8_t temp3, uint8_t temp4, uint8_t temp5) {
    bms_TEMP_STATS_5 bms_temp_stats_5 = { start_index, temp0, temp1, temp2, temp3, temp4, temp5 };
	// assert(buf_len >= sizeof(bms_TEMP_STATS_5));
	memcpy(buffer, &bms_temp_stats_5, sizeof(bms_TEMP_STATS_5));
    return sizeof(bms_TEMP_STATS_5);
} 
size_t deserialize_bms_TEMP_STATS_5(uint8_t* buffer, bms_TEMP_STATS_5* bms_temp_stats_5) {
	// assert(buf_len >= sizeof(bms_TEMP_STATS_5));
	memcpy(bms_temp_stats_5, buffer, sizeof(bms_TEMP_STATS_5));
    return sizeof(bms_TEMP_STATS_5);
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
size_t serialize_bms_VOLTAGES_0(uint8_t* buffer, uint8_t start_index, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2) {
    bms_VOLTAGES_0 bms_voltages_0 = { start_index, 0x00, voltage0, voltage1, voltage2 };
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
size_t serialize_bms_VOLTAGES_1(uint8_t* buffer, uint8_t start_index, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2) {
    bms_VOLTAGES_1 bms_voltages_1 = { start_index, 0x00, voltage0, voltage1, voltage2 };
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
size_t serialize_bms_VOLTAGES_2(uint8_t* buffer, uint8_t start_index, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2) {
    bms_VOLTAGES_2 bms_voltages_2 = { start_index, 0x00, voltage0, voltage1, voltage2 };
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
size_t serialize_bms_VOLTAGES_3(uint8_t* buffer, uint8_t start_index, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2) {
    bms_VOLTAGES_3 bms_voltages_3 = { start_index, 0x00, voltage0, voltage1, voltage2 };
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
size_t serialize_bms_VOLTAGES_4(uint8_t* buffer, uint8_t start_index, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2) {
    bms_VOLTAGES_4 bms_voltages_4 = { start_index, 0x00, voltage0, voltage1, voltage2 };
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
size_t serialize_bms_VOLTAGES_5(uint8_t* buffer, uint8_t start_index, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2) {
    bms_VOLTAGES_5 bms_voltages_5 = { start_index, 0x00, voltage0, voltage1, voltage2 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_5));
	memcpy(buffer, &bms_voltages_5, sizeof(bms_VOLTAGES_5));
    return sizeof(bms_VOLTAGES_5);
} 
size_t deserialize_bms_VOLTAGES_5(uint8_t* buffer, bms_VOLTAGES_5* bms_voltages_5) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_5));
	memcpy(bms_voltages_5, buffer, sizeof(bms_VOLTAGES_5));
    return sizeof(bms_VOLTAGES_5);
}
