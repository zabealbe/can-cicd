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
/* bms_VOLTAGES_00 */
size_t serialize_bms_VOLTAGES_00(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    bms_VOLTAGES_00 bms_voltages_00 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_00));
	memcpy(buffer, &bms_voltages_00, sizeof(bms_VOLTAGES_00));
    return sizeof(bms_VOLTAGES_00);
} 
size_t deserialize_bms_VOLTAGES_00(uint8_t* buffer, bms_VOLTAGES_00* bms_voltages_00) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_00));
	memcpy(bms_voltages_00, buffer, sizeof(bms_VOLTAGES_00));
    return sizeof(bms_VOLTAGES_00);
}
/* bms_VOLTAGES_01 */
size_t serialize_bms_VOLTAGES_01(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    bms_VOLTAGES_01 bms_voltages_01 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_01));
	memcpy(buffer, &bms_voltages_01, sizeof(bms_VOLTAGES_01));
    return sizeof(bms_VOLTAGES_01);
} 
size_t deserialize_bms_VOLTAGES_01(uint8_t* buffer, bms_VOLTAGES_01* bms_voltages_01) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_01));
	memcpy(bms_voltages_01, buffer, sizeof(bms_VOLTAGES_01));
    return sizeof(bms_VOLTAGES_01);
}
/* bms_VOLTAGES_02 */
size_t serialize_bms_VOLTAGES_02(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    bms_VOLTAGES_02 bms_voltages_02 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_02));
	memcpy(buffer, &bms_voltages_02, sizeof(bms_VOLTAGES_02));
    return sizeof(bms_VOLTAGES_02);
} 
size_t deserialize_bms_VOLTAGES_02(uint8_t* buffer, bms_VOLTAGES_02* bms_voltages_02) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_02));
	memcpy(bms_voltages_02, buffer, sizeof(bms_VOLTAGES_02));
    return sizeof(bms_VOLTAGES_02);
}
/* bms_VOLTAGES_03 */
size_t serialize_bms_VOLTAGES_03(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    bms_VOLTAGES_03 bms_voltages_03 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_03));
	memcpy(buffer, &bms_voltages_03, sizeof(bms_VOLTAGES_03));
    return sizeof(bms_VOLTAGES_03);
} 
size_t deserialize_bms_VOLTAGES_03(uint8_t* buffer, bms_VOLTAGES_03* bms_voltages_03) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_03));
	memcpy(bms_voltages_03, buffer, sizeof(bms_VOLTAGES_03));
    return sizeof(bms_VOLTAGES_03);
}
/* bms_VOLTAGES_04 */
size_t serialize_bms_VOLTAGES_04(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    bms_VOLTAGES_04 bms_voltages_04 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(bms_VOLTAGES_04));
	memcpy(buffer, &bms_voltages_04, sizeof(bms_VOLTAGES_04));
    return sizeof(bms_VOLTAGES_04);
} 
size_t deserialize_bms_VOLTAGES_04(uint8_t* buffer, bms_VOLTAGES_04* bms_voltages_04) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_04));
	memcpy(bms_voltages_04, buffer, sizeof(bms_VOLTAGES_04));
    return sizeof(bms_VOLTAGES_04);
}
/* bms_VOLTAGES_10 */
size_t serialize_bms_VOLTAGES_10(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    bms_VOLTAGES_10 bms_voltages_10 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_10));
	memcpy(buffer, &bms_voltages_10, sizeof(bms_VOLTAGES_10));
    return sizeof(bms_VOLTAGES_10);
} 
size_t deserialize_bms_VOLTAGES_10(uint8_t* buffer, bms_VOLTAGES_10* bms_voltages_10) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_10));
	memcpy(bms_voltages_10, buffer, sizeof(bms_VOLTAGES_10));
    return sizeof(bms_VOLTAGES_10);
}
/* bms_VOLTAGES_11 */
size_t serialize_bms_VOLTAGES_11(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    bms_VOLTAGES_11 bms_voltages_11 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_11));
	memcpy(buffer, &bms_voltages_11, sizeof(bms_VOLTAGES_11));
    return sizeof(bms_VOLTAGES_11);
} 
size_t deserialize_bms_VOLTAGES_11(uint8_t* buffer, bms_VOLTAGES_11* bms_voltages_11) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_11));
	memcpy(bms_voltages_11, buffer, sizeof(bms_VOLTAGES_11));
    return sizeof(bms_VOLTAGES_11);
}
/* bms_VOLTAGES_12 */
size_t serialize_bms_VOLTAGES_12(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    bms_VOLTAGES_12 bms_voltages_12 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_12));
	memcpy(buffer, &bms_voltages_12, sizeof(bms_VOLTAGES_12));
    return sizeof(bms_VOLTAGES_12);
} 
size_t deserialize_bms_VOLTAGES_12(uint8_t* buffer, bms_VOLTAGES_12* bms_voltages_12) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_12));
	memcpy(bms_voltages_12, buffer, sizeof(bms_VOLTAGES_12));
    return sizeof(bms_VOLTAGES_12);
}
/* bms_VOLTAGES_13 */
size_t serialize_bms_VOLTAGES_13(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    bms_VOLTAGES_13 bms_voltages_13 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_13));
	memcpy(buffer, &bms_voltages_13, sizeof(bms_VOLTAGES_13));
    return sizeof(bms_VOLTAGES_13);
} 
size_t deserialize_bms_VOLTAGES_13(uint8_t* buffer, bms_VOLTAGES_13* bms_voltages_13) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_13));
	memcpy(bms_voltages_13, buffer, sizeof(bms_VOLTAGES_13));
    return sizeof(bms_VOLTAGES_13);
}
/* bms_VOLTAGES_14 */
size_t serialize_bms_VOLTAGES_14(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    bms_VOLTAGES_14 bms_voltages_14 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(bms_VOLTAGES_14));
	memcpy(buffer, &bms_voltages_14, sizeof(bms_VOLTAGES_14));
    return sizeof(bms_VOLTAGES_14);
} 
size_t deserialize_bms_VOLTAGES_14(uint8_t* buffer, bms_VOLTAGES_14* bms_voltages_14) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_14));
	memcpy(bms_voltages_14, buffer, sizeof(bms_VOLTAGES_14));
    return sizeof(bms_VOLTAGES_14);
}
/* bms_VOLTAGES_20 */
size_t serialize_bms_VOLTAGES_20(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    bms_VOLTAGES_20 bms_voltages_20 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_20));
	memcpy(buffer, &bms_voltages_20, sizeof(bms_VOLTAGES_20));
    return sizeof(bms_VOLTAGES_20);
} 
size_t deserialize_bms_VOLTAGES_20(uint8_t* buffer, bms_VOLTAGES_20* bms_voltages_20) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_20));
	memcpy(bms_voltages_20, buffer, sizeof(bms_VOLTAGES_20));
    return sizeof(bms_VOLTAGES_20);
}
/* bms_VOLTAGES_21 */
size_t serialize_bms_VOLTAGES_21(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    bms_VOLTAGES_21 bms_voltages_21 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_21));
	memcpy(buffer, &bms_voltages_21, sizeof(bms_VOLTAGES_21));
    return sizeof(bms_VOLTAGES_21);
} 
size_t deserialize_bms_VOLTAGES_21(uint8_t* buffer, bms_VOLTAGES_21* bms_voltages_21) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_21));
	memcpy(bms_voltages_21, buffer, sizeof(bms_VOLTAGES_21));
    return sizeof(bms_VOLTAGES_21);
}
/* bms_VOLTAGES_22 */
size_t serialize_bms_VOLTAGES_22(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    bms_VOLTAGES_22 bms_voltages_22 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_22));
	memcpy(buffer, &bms_voltages_22, sizeof(bms_VOLTAGES_22));
    return sizeof(bms_VOLTAGES_22);
} 
size_t deserialize_bms_VOLTAGES_22(uint8_t* buffer, bms_VOLTAGES_22* bms_voltages_22) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_22));
	memcpy(bms_voltages_22, buffer, sizeof(bms_VOLTAGES_22));
    return sizeof(bms_VOLTAGES_22);
}
/* bms_VOLTAGES_23 */
size_t serialize_bms_VOLTAGES_23(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    bms_VOLTAGES_23 bms_voltages_23 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_23));
	memcpy(buffer, &bms_voltages_23, sizeof(bms_VOLTAGES_23));
    return sizeof(bms_VOLTAGES_23);
} 
size_t deserialize_bms_VOLTAGES_23(uint8_t* buffer, bms_VOLTAGES_23* bms_voltages_23) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_23));
	memcpy(bms_voltages_23, buffer, sizeof(bms_VOLTAGES_23));
    return sizeof(bms_VOLTAGES_23);
}
/* bms_VOLTAGES_24 */
size_t serialize_bms_VOLTAGES_24(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    bms_VOLTAGES_24 bms_voltages_24 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(bms_VOLTAGES_24));
	memcpy(buffer, &bms_voltages_24, sizeof(bms_VOLTAGES_24));
    return sizeof(bms_VOLTAGES_24);
} 
size_t deserialize_bms_VOLTAGES_24(uint8_t* buffer, bms_VOLTAGES_24* bms_voltages_24) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_24));
	memcpy(bms_voltages_24, buffer, sizeof(bms_VOLTAGES_24));
    return sizeof(bms_VOLTAGES_24);
}
/* bms_VOLTAGES_30 */
size_t serialize_bms_VOLTAGES_30(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    bms_VOLTAGES_30 bms_voltages_30 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_30));
	memcpy(buffer, &bms_voltages_30, sizeof(bms_VOLTAGES_30));
    return sizeof(bms_VOLTAGES_30);
} 
size_t deserialize_bms_VOLTAGES_30(uint8_t* buffer, bms_VOLTAGES_30* bms_voltages_30) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_30));
	memcpy(bms_voltages_30, buffer, sizeof(bms_VOLTAGES_30));
    return sizeof(bms_VOLTAGES_30);
}
/* bms_VOLTAGES_31 */
size_t serialize_bms_VOLTAGES_31(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    bms_VOLTAGES_31 bms_voltages_31 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_31));
	memcpy(buffer, &bms_voltages_31, sizeof(bms_VOLTAGES_31));
    return sizeof(bms_VOLTAGES_31);
} 
size_t deserialize_bms_VOLTAGES_31(uint8_t* buffer, bms_VOLTAGES_31* bms_voltages_31) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_31));
	memcpy(bms_voltages_31, buffer, sizeof(bms_VOLTAGES_31));
    return sizeof(bms_VOLTAGES_31);
}
/* bms_VOLTAGES_32 */
size_t serialize_bms_VOLTAGES_32(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    bms_VOLTAGES_32 bms_voltages_32 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_32));
	memcpy(buffer, &bms_voltages_32, sizeof(bms_VOLTAGES_32));
    return sizeof(bms_VOLTAGES_32);
} 
size_t deserialize_bms_VOLTAGES_32(uint8_t* buffer, bms_VOLTAGES_32* bms_voltages_32) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_32));
	memcpy(bms_voltages_32, buffer, sizeof(bms_VOLTAGES_32));
    return sizeof(bms_VOLTAGES_32);
}
/* bms_VOLTAGES_33 */
size_t serialize_bms_VOLTAGES_33(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    bms_VOLTAGES_33 bms_voltages_33 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_33));
	memcpy(buffer, &bms_voltages_33, sizeof(bms_VOLTAGES_33));
    return sizeof(bms_VOLTAGES_33);
} 
size_t deserialize_bms_VOLTAGES_33(uint8_t* buffer, bms_VOLTAGES_33* bms_voltages_33) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_33));
	memcpy(bms_voltages_33, buffer, sizeof(bms_VOLTAGES_33));
    return sizeof(bms_VOLTAGES_33);
}
/* bms_VOLTAGES_34 */
size_t serialize_bms_VOLTAGES_34(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    bms_VOLTAGES_34 bms_voltages_34 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(bms_VOLTAGES_34));
	memcpy(buffer, &bms_voltages_34, sizeof(bms_VOLTAGES_34));
    return sizeof(bms_VOLTAGES_34);
} 
size_t deserialize_bms_VOLTAGES_34(uint8_t* buffer, bms_VOLTAGES_34* bms_voltages_34) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_34));
	memcpy(bms_voltages_34, buffer, sizeof(bms_VOLTAGES_34));
    return sizeof(bms_VOLTAGES_34);
}
/* bms_VOLTAGES_40 */
size_t serialize_bms_VOLTAGES_40(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    bms_VOLTAGES_40 bms_voltages_40 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_40));
	memcpy(buffer, &bms_voltages_40, sizeof(bms_VOLTAGES_40));
    return sizeof(bms_VOLTAGES_40);
} 
size_t deserialize_bms_VOLTAGES_40(uint8_t* buffer, bms_VOLTAGES_40* bms_voltages_40) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_40));
	memcpy(bms_voltages_40, buffer, sizeof(bms_VOLTAGES_40));
    return sizeof(bms_VOLTAGES_40);
}
/* bms_VOLTAGES_41 */
size_t serialize_bms_VOLTAGES_41(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    bms_VOLTAGES_41 bms_voltages_41 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_41));
	memcpy(buffer, &bms_voltages_41, sizeof(bms_VOLTAGES_41));
    return sizeof(bms_VOLTAGES_41);
} 
size_t deserialize_bms_VOLTAGES_41(uint8_t* buffer, bms_VOLTAGES_41* bms_voltages_41) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_41));
	memcpy(bms_voltages_41, buffer, sizeof(bms_VOLTAGES_41));
    return sizeof(bms_VOLTAGES_41);
}
/* bms_VOLTAGES_42 */
size_t serialize_bms_VOLTAGES_42(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    bms_VOLTAGES_42 bms_voltages_42 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_42));
	memcpy(buffer, &bms_voltages_42, sizeof(bms_VOLTAGES_42));
    return sizeof(bms_VOLTAGES_42);
} 
size_t deserialize_bms_VOLTAGES_42(uint8_t* buffer, bms_VOLTAGES_42* bms_voltages_42) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_42));
	memcpy(bms_voltages_42, buffer, sizeof(bms_VOLTAGES_42));
    return sizeof(bms_VOLTAGES_42);
}
/* bms_VOLTAGES_43 */
size_t serialize_bms_VOLTAGES_43(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    bms_VOLTAGES_43 bms_voltages_43 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_43));
	memcpy(buffer, &bms_voltages_43, sizeof(bms_VOLTAGES_43));
    return sizeof(bms_VOLTAGES_43);
} 
size_t deserialize_bms_VOLTAGES_43(uint8_t* buffer, bms_VOLTAGES_43* bms_voltages_43) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_43));
	memcpy(bms_voltages_43, buffer, sizeof(bms_VOLTAGES_43));
    return sizeof(bms_VOLTAGES_43);
}
/* bms_VOLTAGES_44 */
size_t serialize_bms_VOLTAGES_44(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    bms_VOLTAGES_44 bms_voltages_44 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(bms_VOLTAGES_44));
	memcpy(buffer, &bms_voltages_44, sizeof(bms_VOLTAGES_44));
    return sizeof(bms_VOLTAGES_44);
} 
size_t deserialize_bms_VOLTAGES_44(uint8_t* buffer, bms_VOLTAGES_44* bms_voltages_44) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_44));
	memcpy(bms_voltages_44, buffer, sizeof(bms_VOLTAGES_44));
    return sizeof(bms_VOLTAGES_44);
}
/* bms_VOLTAGES_50 */
size_t serialize_bms_VOLTAGES_50(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    bms_VOLTAGES_50 bms_voltages_50 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_50));
	memcpy(buffer, &bms_voltages_50, sizeof(bms_VOLTAGES_50));
    return sizeof(bms_VOLTAGES_50);
} 
size_t deserialize_bms_VOLTAGES_50(uint8_t* buffer, bms_VOLTAGES_50* bms_voltages_50) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_50));
	memcpy(bms_voltages_50, buffer, sizeof(bms_VOLTAGES_50));
    return sizeof(bms_VOLTAGES_50);
}
/* bms_VOLTAGES_51 */
size_t serialize_bms_VOLTAGES_51(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    bms_VOLTAGES_51 bms_voltages_51 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_51));
	memcpy(buffer, &bms_voltages_51, sizeof(bms_VOLTAGES_51));
    return sizeof(bms_VOLTAGES_51);
} 
size_t deserialize_bms_VOLTAGES_51(uint8_t* buffer, bms_VOLTAGES_51* bms_voltages_51) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_51));
	memcpy(bms_voltages_51, buffer, sizeof(bms_VOLTAGES_51));
    return sizeof(bms_VOLTAGES_51);
}
/* bms_VOLTAGES_52 */
size_t serialize_bms_VOLTAGES_52(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    bms_VOLTAGES_52 bms_voltages_52 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_52));
	memcpy(buffer, &bms_voltages_52, sizeof(bms_VOLTAGES_52));
    return sizeof(bms_VOLTAGES_52);
} 
size_t deserialize_bms_VOLTAGES_52(uint8_t* buffer, bms_VOLTAGES_52* bms_voltages_52) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_52));
	memcpy(bms_voltages_52, buffer, sizeof(bms_VOLTAGES_52));
    return sizeof(bms_VOLTAGES_52);
}
/* bms_VOLTAGES_53 */
size_t serialize_bms_VOLTAGES_53(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    bms_VOLTAGES_53 bms_voltages_53 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(bms_VOLTAGES_53));
	memcpy(buffer, &bms_voltages_53, sizeof(bms_VOLTAGES_53));
    return sizeof(bms_VOLTAGES_53);
} 
size_t deserialize_bms_VOLTAGES_53(uint8_t* buffer, bms_VOLTAGES_53* bms_voltages_53) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_53));
	memcpy(bms_voltages_53, buffer, sizeof(bms_VOLTAGES_53));
    return sizeof(bms_VOLTAGES_53);
}
/* bms_VOLTAGES_54 */
size_t serialize_bms_VOLTAGES_54(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    bms_VOLTAGES_54 bms_voltages_54 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(bms_VOLTAGES_54));
	memcpy(buffer, &bms_voltages_54, sizeof(bms_VOLTAGES_54));
    return sizeof(bms_VOLTAGES_54);
} 
size_t deserialize_bms_VOLTAGES_54(uint8_t* buffer, bms_VOLTAGES_54* bms_voltages_54) {
	// assert(buf_len >= sizeof(bms_VOLTAGES_54));
	memcpy(bms_voltages_54, buffer, sizeof(bms_VOLTAGES_54));
    return sizeof(bms_VOLTAGES_54);
}
