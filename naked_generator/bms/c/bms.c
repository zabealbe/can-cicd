#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "bms.h"

/* bms_BOARD_STATUS */
size_t serialize_bms_BOARD_STATUS(uint8_t* buffer, bms_errors errors, bms_balancing_status balancing_status) {
    bms_BOARD_STATUS bms_board_status = { {errors[0]}, balancing_status };
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
size_t serialize_bms_TEMP_STATS(uint8_t* buffer, uint8_t board_id, uint8_t average, uint8_t max, uint8_t min) {
    bms_TEMP_STATS bms_temp_stats = { board_id, average, max, min };
	// assert(buf_len >= sizeof(bms_TEMP_STATS));
	memcpy(buffer, &bms_temp_stats, sizeof(bms_TEMP_STATS));
    return sizeof(bms_TEMP_STATS);
} 
size_t deserialize_bms_TEMP_STATS(uint8_t* buffer, bms_TEMP_STATS* bms_temp_stats) {
	// assert(buf_len >= sizeof(bms_TEMP_STATS));
	memcpy(bms_temp_stats, buffer, sizeof(bms_TEMP_STATS));
    return sizeof(bms_TEMP_STATS);
}
/* bms_TEMPERATURES_CB0_0 */
size_t serialize_bms_TEMPERATURES_CB0_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7) {
    bms_TEMPERATURES_CB0_0 bms_temperatures_cb0_0 = { temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7 };
	// assert(buf_len >= sizeof(bms_TEMPERATURES_CB0_0));
	memcpy(buffer, &bms_temperatures_cb0_0, sizeof(bms_TEMPERATURES_CB0_0));
    return sizeof(bms_TEMPERATURES_CB0_0);
} 
size_t deserialize_bms_TEMPERATURES_CB0_0(uint8_t* buffer, bms_TEMPERATURES_CB0_0* bms_temperatures_cb0_0) {
	// assert(buf_len >= sizeof(bms_TEMPERATURES_CB0_0));
	memcpy(bms_temperatures_cb0_0, buffer, sizeof(bms_TEMPERATURES_CB0_0));
    return sizeof(bms_TEMPERATURES_CB0_0);
}
/* bms_TEMPERATURES_CB0_1 */
size_t serialize_bms_TEMPERATURES_CB0_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15) {
    bms_TEMPERATURES_CB0_1 bms_temperatures_cb0_1 = { temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15 };
	// assert(buf_len >= sizeof(bms_TEMPERATURES_CB0_1));
	memcpy(buffer, &bms_temperatures_cb0_1, sizeof(bms_TEMPERATURES_CB0_1));
    return sizeof(bms_TEMPERATURES_CB0_1);
} 
size_t deserialize_bms_TEMPERATURES_CB0_1(uint8_t* buffer, bms_TEMPERATURES_CB0_1* bms_temperatures_cb0_1) {
	// assert(buf_len >= sizeof(bms_TEMPERATURES_CB0_1));
	memcpy(bms_temperatures_cb0_1, buffer, sizeof(bms_TEMPERATURES_CB0_1));
    return sizeof(bms_TEMPERATURES_CB0_1);
}
/* bms_TEMPERATURES_CB0_2 */
size_t serialize_bms_TEMPERATURES_CB0_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17) {
    bms_TEMPERATURES_CB0_2 bms_temperatures_cb0_2 = { temperature16, temperature17 };
	// assert(buf_len >= sizeof(bms_TEMPERATURES_CB0_2));
	memcpy(buffer, &bms_temperatures_cb0_2, sizeof(bms_TEMPERATURES_CB0_2));
    return sizeof(bms_TEMPERATURES_CB0_2);
} 
size_t deserialize_bms_TEMPERATURES_CB0_2(uint8_t* buffer, bms_TEMPERATURES_CB0_2* bms_temperatures_cb0_2) {
	// assert(buf_len >= sizeof(bms_TEMPERATURES_CB0_2));
	memcpy(bms_temperatures_cb0_2, buffer, sizeof(bms_TEMPERATURES_CB0_2));
    return sizeof(bms_TEMPERATURES_CB0_2);
}
/* bms_BALANCING */
size_t serialize_bms_BALANCING(uint8_t* buffer, uint8_t board_id, bms_balancing_cells cells) {
    bms_BALANCING bms_balancing = { board_id, {cells[0], cells[1], cells[2]} };
	// assert(buf_len >= sizeof(bms_BALANCING));
	memcpy(buffer, &bms_balancing, sizeof(bms_BALANCING));
    return sizeof(bms_BALANCING);
} 
size_t deserialize_bms_BALANCING(uint8_t* buffer, bms_BALANCING* bms_balancing) {
	// assert(buf_len >= sizeof(bms_BALANCING));
	memcpy(bms_balancing, buffer, sizeof(bms_BALANCING));
    return sizeof(bms_BALANCING);
}
/* bms_VOLTAGES_CB0_0 */
size_t serialize_bms_VOLTAGES_CB0_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    bms_VOLTAGES_CB0_0 bms_voltages_cb0_0 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB0_0));
	memcpy(buffer, &bms_voltages_cb0_0, sizeof(bms_VOLTAGES_CB0_0));
    return sizeof(bms_VOLTAGES_CB0_0);
} 
size_t deserialize_bms_VOLTAGES_CB0_0(uint8_t* buffer, bms_VOLTAGES_CB0_0* bms_voltages_cb0_0) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB0_0));
	memcpy(bms_voltages_cb0_0, buffer, sizeof(bms_VOLTAGES_CB0_0));
    return sizeof(bms_VOLTAGES_CB0_0);
}
/* bms_VOLTAGES_CB0_1 */
size_t serialize_bms_VOLTAGES_CB0_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    bms_VOLTAGES_CB0_1 bms_voltages_cb0_1 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB0_1));
	memcpy(buffer, &bms_voltages_cb0_1, sizeof(bms_VOLTAGES_CB0_1));
    return sizeof(bms_VOLTAGES_CB0_1);
} 
size_t deserialize_bms_VOLTAGES_CB0_1(uint8_t* buffer, bms_VOLTAGES_CB0_1* bms_voltages_cb0_1) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB0_1));
	memcpy(bms_voltages_cb0_1, buffer, sizeof(bms_VOLTAGES_CB0_1));
    return sizeof(bms_VOLTAGES_CB0_1);
}
/* bms_VOLTAGES_CB0_2 */
size_t serialize_bms_VOLTAGES_CB0_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    bms_VOLTAGES_CB0_2 bms_voltages_cb0_2 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB0_2));
	memcpy(buffer, &bms_voltages_cb0_2, sizeof(bms_VOLTAGES_CB0_2));
    return sizeof(bms_VOLTAGES_CB0_2);
} 
size_t deserialize_bms_VOLTAGES_CB0_2(uint8_t* buffer, bms_VOLTAGES_CB0_2* bms_voltages_cb0_2) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB0_2));
	memcpy(bms_voltages_cb0_2, buffer, sizeof(bms_VOLTAGES_CB0_2));
    return sizeof(bms_VOLTAGES_CB0_2);
}
/* bms_VOLTAGES_CB0_3 */
size_t serialize_bms_VOLTAGES_CB0_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    bms_VOLTAGES_CB0_3 bms_voltages_cb0_3 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB0_3));
	memcpy(buffer, &bms_voltages_cb0_3, sizeof(bms_VOLTAGES_CB0_3));
    return sizeof(bms_VOLTAGES_CB0_3);
} 
size_t deserialize_bms_VOLTAGES_CB0_3(uint8_t* buffer, bms_VOLTAGES_CB0_3* bms_voltages_cb0_3) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB0_3));
	memcpy(bms_voltages_cb0_3, buffer, sizeof(bms_VOLTAGES_CB0_3));
    return sizeof(bms_VOLTAGES_CB0_3);
}
/* bms_VOLTAGES_CB0_4 */
size_t serialize_bms_VOLTAGES_CB0_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    bms_VOLTAGES_CB0_4 bms_voltages_cb0_4 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB0_4));
	memcpy(buffer, &bms_voltages_cb0_4, sizeof(bms_VOLTAGES_CB0_4));
    return sizeof(bms_VOLTAGES_CB0_4);
} 
size_t deserialize_bms_VOLTAGES_CB0_4(uint8_t* buffer, bms_VOLTAGES_CB0_4* bms_voltages_cb0_4) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB0_4));
	memcpy(bms_voltages_cb0_4, buffer, sizeof(bms_VOLTAGES_CB0_4));
    return sizeof(bms_VOLTAGES_CB0_4);
}
/* bms_VOLTAGES_CB1_0 */
size_t serialize_bms_VOLTAGES_CB1_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    bms_VOLTAGES_CB1_0 bms_voltages_cb1_0 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB1_0));
	memcpy(buffer, &bms_voltages_cb1_0, sizeof(bms_VOLTAGES_CB1_0));
    return sizeof(bms_VOLTAGES_CB1_0);
} 
size_t deserialize_bms_VOLTAGES_CB1_0(uint8_t* buffer, bms_VOLTAGES_CB1_0* bms_voltages_cb1_0) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB1_0));
	memcpy(bms_voltages_cb1_0, buffer, sizeof(bms_VOLTAGES_CB1_0));
    return sizeof(bms_VOLTAGES_CB1_0);
}
/* bms_VOLTAGES_CB1_1 */
size_t serialize_bms_VOLTAGES_CB1_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    bms_VOLTAGES_CB1_1 bms_voltages_cb1_1 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB1_1));
	memcpy(buffer, &bms_voltages_cb1_1, sizeof(bms_VOLTAGES_CB1_1));
    return sizeof(bms_VOLTAGES_CB1_1);
} 
size_t deserialize_bms_VOLTAGES_CB1_1(uint8_t* buffer, bms_VOLTAGES_CB1_1* bms_voltages_cb1_1) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB1_1));
	memcpy(bms_voltages_cb1_1, buffer, sizeof(bms_VOLTAGES_CB1_1));
    return sizeof(bms_VOLTAGES_CB1_1);
}
/* bms_VOLTAGES_CB1_2 */
size_t serialize_bms_VOLTAGES_CB1_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    bms_VOLTAGES_CB1_2 bms_voltages_cb1_2 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB1_2));
	memcpy(buffer, &bms_voltages_cb1_2, sizeof(bms_VOLTAGES_CB1_2));
    return sizeof(bms_VOLTAGES_CB1_2);
} 
size_t deserialize_bms_VOLTAGES_CB1_2(uint8_t* buffer, bms_VOLTAGES_CB1_2* bms_voltages_cb1_2) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB1_2));
	memcpy(bms_voltages_cb1_2, buffer, sizeof(bms_VOLTAGES_CB1_2));
    return sizeof(bms_VOLTAGES_CB1_2);
}
/* bms_VOLTAGES_CB1_3 */
size_t serialize_bms_VOLTAGES_CB1_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    bms_VOLTAGES_CB1_3 bms_voltages_cb1_3 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB1_3));
	memcpy(buffer, &bms_voltages_cb1_3, sizeof(bms_VOLTAGES_CB1_3));
    return sizeof(bms_VOLTAGES_CB1_3);
} 
size_t deserialize_bms_VOLTAGES_CB1_3(uint8_t* buffer, bms_VOLTAGES_CB1_3* bms_voltages_cb1_3) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB1_3));
	memcpy(bms_voltages_cb1_3, buffer, sizeof(bms_VOLTAGES_CB1_3));
    return sizeof(bms_VOLTAGES_CB1_3);
}
/* bms_VOLTAGES_CB1_4 */
size_t serialize_bms_VOLTAGES_CB1_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    bms_VOLTAGES_CB1_4 bms_voltages_cb1_4 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB1_4));
	memcpy(buffer, &bms_voltages_cb1_4, sizeof(bms_VOLTAGES_CB1_4));
    return sizeof(bms_VOLTAGES_CB1_4);
} 
size_t deserialize_bms_VOLTAGES_CB1_4(uint8_t* buffer, bms_VOLTAGES_CB1_4* bms_voltages_cb1_4) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_CB1_4));
	memcpy(bms_voltages_cb1_4, buffer, sizeof(bms_VOLTAGES_CB1_4));
    return sizeof(bms_VOLTAGES_CB1_4);
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
