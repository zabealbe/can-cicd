#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "bms.h"

int main() {

/* bms_BOARD_STATUS */
    printf("bms_BOARD_STATUS:\n");
    uint8_t* buffer_bms_board_status = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS));
    
    bms_BOARD_STATUS bms_board_status_s = { 245, {254}, 34 };
    serialize_bms_BOARD_STATUS(buffer_bms_board_status, bms_board_status_s.board_index, bms_board_status_s.errors, bms_board_status_s.balancing_status);
    printf("\tSerialized\n\t%llu %hhx %lld\n", (long long unsigned int)bms_board_status_s.board_index, (long long unsigned int)bms_board_status_s.errors[0], (long long int)bms_board_status_s.balancing_status);
    
    bms_BOARD_STATUS* bms_board_status_d = (bms_BOARD_STATUS*)malloc(sizeof(bms_BOARD_STATUS));
    deserialize_bms_BOARD_STATUS(buffer_bms_board_status, bms_board_status_d);
    printf("\tDeserialized\n\t%llu %hhx %lld\n", (long long unsigned int)bms_board_status_d->board_index, (long long unsigned int)bms_board_status_d->errors[0], (long long int)bms_board_status_d->balancing_status);
    
    assert(memcmp(&bms_board_status_s, bms_board_status_d, sizeof(bms_BOARD_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS */
    printf("bms_TEMP_STATS:\n");
    uint8_t* buffer_bms_temp_stats = (uint8_t*)malloc(sizeof(bms_TEMP_STATS));
    
    bms_TEMP_STATS bms_temp_stats_s = { 24, 252, 110, 21 };
    serialize_bms_TEMP_STATS(buffer_bms_temp_stats, bms_temp_stats_s.board_index, bms_temp_stats_s.average, bms_temp_stats_s.max, bms_temp_stats_s.min);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_s.board_index, (long long unsigned int)bms_temp_stats_s.average, (long long unsigned int)bms_temp_stats_s.max, (long long unsigned int)bms_temp_stats_s.min);
    
    bms_TEMP_STATS* bms_temp_stats_d = (bms_TEMP_STATS*)malloc(sizeof(bms_TEMP_STATS));
    deserialize_bms_TEMP_STATS(buffer_bms_temp_stats, bms_temp_stats_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_d->board_index, (long long unsigned int)bms_temp_stats_d->average, (long long unsigned int)bms_temp_stats_d->max, (long long unsigned int)bms_temp_stats_d->min);
    
    assert(memcmp(&bms_temp_stats_s, bms_temp_stats_d, sizeof(bms_TEMP_STATS)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BALANCING */
    printf("bms_BALANCING:\n");
    uint8_t* buffer_bms_balancing = (uint8_t*)malloc(sizeof(bms_BALANCING));
    
    bms_BALANCING bms_balancing_s = { 148, {252, 234, 232} };
    serialize_bms_BALANCING(buffer_bms_balancing, bms_balancing_s.board_index, bms_balancing_s.cells);
    printf("\tSerialized\n\t%llu %hhx.%hhx.%hhx\n", (long long unsigned int)bms_balancing_s.board_index, (long long unsigned int)bms_balancing_s.cells[0], (long long unsigned int)bms_balancing_s.cells[1], (long long unsigned int)bms_balancing_s.cells[2]);
    
    bms_BALANCING* bms_balancing_d = (bms_BALANCING*)malloc(sizeof(bms_BALANCING));
    deserialize_bms_BALANCING(buffer_bms_balancing, bms_balancing_d);
    printf("\tDeserialized\n\t%llu %hhx.%hhx.%hhx\n", (long long unsigned int)bms_balancing_d->board_index, (long long unsigned int)bms_balancing_d->cells[0], (long long unsigned int)bms_balancing_d->cells[1], (long long unsigned int)bms_balancing_d->cells[2]);
    
    assert(memcmp(&bms_balancing_s, bms_balancing_d, sizeof(bms_BALANCING)) == 0);
    puts("SUCCESS!\n");
        

/* bms_MASTER_SYNC */
    printf("bms_MASTER_SYNC:\n");
    uint8_t* buffer_bms_master_sync = (uint8_t*)malloc(sizeof(bms_MASTER_SYNC));
    
    bms_MASTER_SYNC bms_master_sync_s = { 2537276089 };
    serialize_bms_MASTER_SYNC(buffer_bms_master_sync, bms_master_sync_s.time);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)bms_master_sync_s.time);
    
    bms_MASTER_SYNC* bms_master_sync_d = (bms_MASTER_SYNC*)malloc(sizeof(bms_MASTER_SYNC));
    deserialize_bms_MASTER_SYNC(buffer_bms_master_sync, bms_master_sync_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)bms_master_sync_d->time);
    
    assert(memcmp(&bms_master_sync_s, bms_master_sync_d, sizeof(bms_MASTER_SYNC)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_00 */
    printf("bms_VOLTAGES_00:\n");
    uint8_t* buffer_bms_voltages_00 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_00));
    
    bms_VOLTAGES_00 bms_voltages_00_s = { 54676, 17927, 2296, 21730 };
    serialize_bms_VOLTAGES_00(buffer_bms_voltages_00, bms_voltages_00_s.voltage0, bms_voltages_00_s.voltage1, bms_voltages_00_s.voltage2, bms_voltages_00_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_00_s.voltage0, (long long unsigned int)bms_voltages_00_s.voltage1, (long long unsigned int)bms_voltages_00_s.voltage2, (long long unsigned int)bms_voltages_00_s.voltage3);
    
    bms_VOLTAGES_00* bms_voltages_00_d = (bms_VOLTAGES_00*)malloc(sizeof(bms_VOLTAGES_00));
    deserialize_bms_VOLTAGES_00(buffer_bms_voltages_00, bms_voltages_00_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_00_d->voltage0, (long long unsigned int)bms_voltages_00_d->voltage1, (long long unsigned int)bms_voltages_00_d->voltage2, (long long unsigned int)bms_voltages_00_d->voltage3);
    
    assert(memcmp(&bms_voltages_00_s, bms_voltages_00_d, sizeof(bms_VOLTAGES_00)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_01 */
    printf("bms_VOLTAGES_01:\n");
    uint8_t* buffer_bms_voltages_01 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_01));
    
    bms_VOLTAGES_01 bms_voltages_01_s = { 7609, 43906, 49986, 51888 };
    serialize_bms_VOLTAGES_01(buffer_bms_voltages_01, bms_voltages_01_s.voltage4, bms_voltages_01_s.voltage5, bms_voltages_01_s.voltage6, bms_voltages_01_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_01_s.voltage4, (long long unsigned int)bms_voltages_01_s.voltage5, (long long unsigned int)bms_voltages_01_s.voltage6, (long long unsigned int)bms_voltages_01_s.voltage7);
    
    bms_VOLTAGES_01* bms_voltages_01_d = (bms_VOLTAGES_01*)malloc(sizeof(bms_VOLTAGES_01));
    deserialize_bms_VOLTAGES_01(buffer_bms_voltages_01, bms_voltages_01_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_01_d->voltage4, (long long unsigned int)bms_voltages_01_d->voltage5, (long long unsigned int)bms_voltages_01_d->voltage6, (long long unsigned int)bms_voltages_01_d->voltage7);
    
    assert(memcmp(&bms_voltages_01_s, bms_voltages_01_d, sizeof(bms_VOLTAGES_01)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_02 */
    printf("bms_VOLTAGES_02:\n");
    uint8_t* buffer_bms_voltages_02 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_02));
    
    bms_VOLTAGES_02 bms_voltages_02_s = { 46131, 55257, 908, 35842 };
    serialize_bms_VOLTAGES_02(buffer_bms_voltages_02, bms_voltages_02_s.voltage8, bms_voltages_02_s.voltage9, bms_voltages_02_s.voltage10, bms_voltages_02_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_02_s.voltage8, (long long unsigned int)bms_voltages_02_s.voltage9, (long long unsigned int)bms_voltages_02_s.voltage10, (long long unsigned int)bms_voltages_02_s.voltage11);
    
    bms_VOLTAGES_02* bms_voltages_02_d = (bms_VOLTAGES_02*)malloc(sizeof(bms_VOLTAGES_02));
    deserialize_bms_VOLTAGES_02(buffer_bms_voltages_02, bms_voltages_02_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_02_d->voltage8, (long long unsigned int)bms_voltages_02_d->voltage9, (long long unsigned int)bms_voltages_02_d->voltage10, (long long unsigned int)bms_voltages_02_d->voltage11);
    
    assert(memcmp(&bms_voltages_02_s, bms_voltages_02_d, sizeof(bms_VOLTAGES_02)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_03 */
    printf("bms_VOLTAGES_03:\n");
    uint8_t* buffer_bms_voltages_03 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_03));
    
    bms_VOLTAGES_03 bms_voltages_03_s = { 25053, 60329, 13158, 11397 };
    serialize_bms_VOLTAGES_03(buffer_bms_voltages_03, bms_voltages_03_s.voltage12, bms_voltages_03_s.voltage13, bms_voltages_03_s.voltage14, bms_voltages_03_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_03_s.voltage12, (long long unsigned int)bms_voltages_03_s.voltage13, (long long unsigned int)bms_voltages_03_s.voltage14, (long long unsigned int)bms_voltages_03_s.voltage15);
    
    bms_VOLTAGES_03* bms_voltages_03_d = (bms_VOLTAGES_03*)malloc(sizeof(bms_VOLTAGES_03));
    deserialize_bms_VOLTAGES_03(buffer_bms_voltages_03, bms_voltages_03_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_03_d->voltage12, (long long unsigned int)bms_voltages_03_d->voltage13, (long long unsigned int)bms_voltages_03_d->voltage14, (long long unsigned int)bms_voltages_03_d->voltage15);
    
    assert(memcmp(&bms_voltages_03_s, bms_voltages_03_d, sizeof(bms_VOLTAGES_03)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_04 */
    printf("bms_VOLTAGES_04:\n");
    uint8_t* buffer_bms_voltages_04 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_04));
    
    bms_VOLTAGES_04 bms_voltages_04_s = { 54440, 52791, 27110, 46067 };
    serialize_bms_VOLTAGES_04(buffer_bms_voltages_04, bms_voltages_04_s.voltage16, bms_voltages_04_s.voltage17, bms_voltages_04_s.max_voltage, bms_voltages_04_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_04_s.voltage16, (long long unsigned int)bms_voltages_04_s.voltage17, (long long unsigned int)bms_voltages_04_s.max_voltage, (long long unsigned int)bms_voltages_04_s.min_voltage);
    
    bms_VOLTAGES_04* bms_voltages_04_d = (bms_VOLTAGES_04*)malloc(sizeof(bms_VOLTAGES_04));
    deserialize_bms_VOLTAGES_04(buffer_bms_voltages_04, bms_voltages_04_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_04_d->voltage16, (long long unsigned int)bms_voltages_04_d->voltage17, (long long unsigned int)bms_voltages_04_d->max_voltage, (long long unsigned int)bms_voltages_04_d->min_voltage);
    
    assert(memcmp(&bms_voltages_04_s, bms_voltages_04_d, sizeof(bms_VOLTAGES_04)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_10 */
    printf("bms_VOLTAGES_10:\n");
    uint8_t* buffer_bms_voltages_10 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_10));
    
    bms_VOLTAGES_10 bms_voltages_10_s = { 32474, 19164, 27432, 55646 };
    serialize_bms_VOLTAGES_10(buffer_bms_voltages_10, bms_voltages_10_s.voltage0, bms_voltages_10_s.voltage1, bms_voltages_10_s.voltage2, bms_voltages_10_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_10_s.voltage0, (long long unsigned int)bms_voltages_10_s.voltage1, (long long unsigned int)bms_voltages_10_s.voltage2, (long long unsigned int)bms_voltages_10_s.voltage3);
    
    bms_VOLTAGES_10* bms_voltages_10_d = (bms_VOLTAGES_10*)malloc(sizeof(bms_VOLTAGES_10));
    deserialize_bms_VOLTAGES_10(buffer_bms_voltages_10, bms_voltages_10_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_10_d->voltage0, (long long unsigned int)bms_voltages_10_d->voltage1, (long long unsigned int)bms_voltages_10_d->voltage2, (long long unsigned int)bms_voltages_10_d->voltage3);
    
    assert(memcmp(&bms_voltages_10_s, bms_voltages_10_d, sizeof(bms_VOLTAGES_10)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_11 */
    printf("bms_VOLTAGES_11:\n");
    uint8_t* buffer_bms_voltages_11 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_11));
    
    bms_VOLTAGES_11 bms_voltages_11_s = { 3533, 32660, 1775, 4006 };
    serialize_bms_VOLTAGES_11(buffer_bms_voltages_11, bms_voltages_11_s.voltage4, bms_voltages_11_s.voltage5, bms_voltages_11_s.voltage6, bms_voltages_11_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_11_s.voltage4, (long long unsigned int)bms_voltages_11_s.voltage5, (long long unsigned int)bms_voltages_11_s.voltage6, (long long unsigned int)bms_voltages_11_s.voltage7);
    
    bms_VOLTAGES_11* bms_voltages_11_d = (bms_VOLTAGES_11*)malloc(sizeof(bms_VOLTAGES_11));
    deserialize_bms_VOLTAGES_11(buffer_bms_voltages_11, bms_voltages_11_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_11_d->voltage4, (long long unsigned int)bms_voltages_11_d->voltage5, (long long unsigned int)bms_voltages_11_d->voltage6, (long long unsigned int)bms_voltages_11_d->voltage7);
    
    assert(memcmp(&bms_voltages_11_s, bms_voltages_11_d, sizeof(bms_VOLTAGES_11)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_12 */
    printf("bms_VOLTAGES_12:\n");
    uint8_t* buffer_bms_voltages_12 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_12));
    
    bms_VOLTAGES_12 bms_voltages_12_s = { 36313, 37998, 48856, 41816 };
    serialize_bms_VOLTAGES_12(buffer_bms_voltages_12, bms_voltages_12_s.voltage8, bms_voltages_12_s.voltage9, bms_voltages_12_s.voltage10, bms_voltages_12_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_12_s.voltage8, (long long unsigned int)bms_voltages_12_s.voltage9, (long long unsigned int)bms_voltages_12_s.voltage10, (long long unsigned int)bms_voltages_12_s.voltage11);
    
    bms_VOLTAGES_12* bms_voltages_12_d = (bms_VOLTAGES_12*)malloc(sizeof(bms_VOLTAGES_12));
    deserialize_bms_VOLTAGES_12(buffer_bms_voltages_12, bms_voltages_12_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_12_d->voltage8, (long long unsigned int)bms_voltages_12_d->voltage9, (long long unsigned int)bms_voltages_12_d->voltage10, (long long unsigned int)bms_voltages_12_d->voltage11);
    
    assert(memcmp(&bms_voltages_12_s, bms_voltages_12_d, sizeof(bms_VOLTAGES_12)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_13 */
    printf("bms_VOLTAGES_13:\n");
    uint8_t* buffer_bms_voltages_13 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_13));
    
    bms_VOLTAGES_13 bms_voltages_13_s = { 38297, 2640, 16963, 32184 };
    serialize_bms_VOLTAGES_13(buffer_bms_voltages_13, bms_voltages_13_s.voltage12, bms_voltages_13_s.voltage13, bms_voltages_13_s.voltage14, bms_voltages_13_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_13_s.voltage12, (long long unsigned int)bms_voltages_13_s.voltage13, (long long unsigned int)bms_voltages_13_s.voltage14, (long long unsigned int)bms_voltages_13_s.voltage15);
    
    bms_VOLTAGES_13* bms_voltages_13_d = (bms_VOLTAGES_13*)malloc(sizeof(bms_VOLTAGES_13));
    deserialize_bms_VOLTAGES_13(buffer_bms_voltages_13, bms_voltages_13_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_13_d->voltage12, (long long unsigned int)bms_voltages_13_d->voltage13, (long long unsigned int)bms_voltages_13_d->voltage14, (long long unsigned int)bms_voltages_13_d->voltage15);
    
    assert(memcmp(&bms_voltages_13_s, bms_voltages_13_d, sizeof(bms_VOLTAGES_13)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_14 */
    printf("bms_VOLTAGES_14:\n");
    uint8_t* buffer_bms_voltages_14 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_14));
    
    bms_VOLTAGES_14 bms_voltages_14_s = { 12486, 41796, 52720, 24447 };
    serialize_bms_VOLTAGES_14(buffer_bms_voltages_14, bms_voltages_14_s.voltage16, bms_voltages_14_s.voltage17, bms_voltages_14_s.max_voltage, bms_voltages_14_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_14_s.voltage16, (long long unsigned int)bms_voltages_14_s.voltage17, (long long unsigned int)bms_voltages_14_s.max_voltage, (long long unsigned int)bms_voltages_14_s.min_voltage);
    
    bms_VOLTAGES_14* bms_voltages_14_d = (bms_VOLTAGES_14*)malloc(sizeof(bms_VOLTAGES_14));
    deserialize_bms_VOLTAGES_14(buffer_bms_voltages_14, bms_voltages_14_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_14_d->voltage16, (long long unsigned int)bms_voltages_14_d->voltage17, (long long unsigned int)bms_voltages_14_d->max_voltage, (long long unsigned int)bms_voltages_14_d->min_voltage);
    
    assert(memcmp(&bms_voltages_14_s, bms_voltages_14_d, sizeof(bms_VOLTAGES_14)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_20 */
    printf("bms_VOLTAGES_20:\n");
    uint8_t* buffer_bms_voltages_20 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_20));
    
    bms_VOLTAGES_20 bms_voltages_20_s = { 22691, 19988, 21113, 8672 };
    serialize_bms_VOLTAGES_20(buffer_bms_voltages_20, bms_voltages_20_s.voltage0, bms_voltages_20_s.voltage1, bms_voltages_20_s.voltage2, bms_voltages_20_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_20_s.voltage0, (long long unsigned int)bms_voltages_20_s.voltage1, (long long unsigned int)bms_voltages_20_s.voltage2, (long long unsigned int)bms_voltages_20_s.voltage3);
    
    bms_VOLTAGES_20* bms_voltages_20_d = (bms_VOLTAGES_20*)malloc(sizeof(bms_VOLTAGES_20));
    deserialize_bms_VOLTAGES_20(buffer_bms_voltages_20, bms_voltages_20_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_20_d->voltage0, (long long unsigned int)bms_voltages_20_d->voltage1, (long long unsigned int)bms_voltages_20_d->voltage2, (long long unsigned int)bms_voltages_20_d->voltage3);
    
    assert(memcmp(&bms_voltages_20_s, bms_voltages_20_d, sizeof(bms_VOLTAGES_20)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_21 */
    printf("bms_VOLTAGES_21:\n");
    uint8_t* buffer_bms_voltages_21 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_21));
    
    bms_VOLTAGES_21 bms_voltages_21_s = { 16605, 25463, 29818, 59104 };
    serialize_bms_VOLTAGES_21(buffer_bms_voltages_21, bms_voltages_21_s.voltage4, bms_voltages_21_s.voltage5, bms_voltages_21_s.voltage6, bms_voltages_21_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_21_s.voltage4, (long long unsigned int)bms_voltages_21_s.voltage5, (long long unsigned int)bms_voltages_21_s.voltage6, (long long unsigned int)bms_voltages_21_s.voltage7);
    
    bms_VOLTAGES_21* bms_voltages_21_d = (bms_VOLTAGES_21*)malloc(sizeof(bms_VOLTAGES_21));
    deserialize_bms_VOLTAGES_21(buffer_bms_voltages_21, bms_voltages_21_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_21_d->voltage4, (long long unsigned int)bms_voltages_21_d->voltage5, (long long unsigned int)bms_voltages_21_d->voltage6, (long long unsigned int)bms_voltages_21_d->voltage7);
    
    assert(memcmp(&bms_voltages_21_s, bms_voltages_21_d, sizeof(bms_VOLTAGES_21)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_22 */
    printf("bms_VOLTAGES_22:\n");
    uint8_t* buffer_bms_voltages_22 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_22));
    
    bms_VOLTAGES_22 bms_voltages_22_s = { 6308, 10973, 42718, 8586 };
    serialize_bms_VOLTAGES_22(buffer_bms_voltages_22, bms_voltages_22_s.voltage8, bms_voltages_22_s.voltage9, bms_voltages_22_s.voltage10, bms_voltages_22_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_22_s.voltage8, (long long unsigned int)bms_voltages_22_s.voltage9, (long long unsigned int)bms_voltages_22_s.voltage10, (long long unsigned int)bms_voltages_22_s.voltage11);
    
    bms_VOLTAGES_22* bms_voltages_22_d = (bms_VOLTAGES_22*)malloc(sizeof(bms_VOLTAGES_22));
    deserialize_bms_VOLTAGES_22(buffer_bms_voltages_22, bms_voltages_22_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_22_d->voltage8, (long long unsigned int)bms_voltages_22_d->voltage9, (long long unsigned int)bms_voltages_22_d->voltage10, (long long unsigned int)bms_voltages_22_d->voltage11);
    
    assert(memcmp(&bms_voltages_22_s, bms_voltages_22_d, sizeof(bms_VOLTAGES_22)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_23 */
    printf("bms_VOLTAGES_23:\n");
    uint8_t* buffer_bms_voltages_23 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_23));
    
    bms_VOLTAGES_23 bms_voltages_23_s = { 56204, 30300, 47174, 42851 };
    serialize_bms_VOLTAGES_23(buffer_bms_voltages_23, bms_voltages_23_s.voltage12, bms_voltages_23_s.voltage13, bms_voltages_23_s.voltage14, bms_voltages_23_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_23_s.voltage12, (long long unsigned int)bms_voltages_23_s.voltage13, (long long unsigned int)bms_voltages_23_s.voltage14, (long long unsigned int)bms_voltages_23_s.voltage15);
    
    bms_VOLTAGES_23* bms_voltages_23_d = (bms_VOLTAGES_23*)malloc(sizeof(bms_VOLTAGES_23));
    deserialize_bms_VOLTAGES_23(buffer_bms_voltages_23, bms_voltages_23_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_23_d->voltage12, (long long unsigned int)bms_voltages_23_d->voltage13, (long long unsigned int)bms_voltages_23_d->voltage14, (long long unsigned int)bms_voltages_23_d->voltage15);
    
    assert(memcmp(&bms_voltages_23_s, bms_voltages_23_d, sizeof(bms_VOLTAGES_23)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_24 */
    printf("bms_VOLTAGES_24:\n");
    uint8_t* buffer_bms_voltages_24 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_24));
    
    bms_VOLTAGES_24 bms_voltages_24_s = { 861, 22272, 2679, 31961 };
    serialize_bms_VOLTAGES_24(buffer_bms_voltages_24, bms_voltages_24_s.voltage16, bms_voltages_24_s.voltage17, bms_voltages_24_s.max_voltage, bms_voltages_24_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_24_s.voltage16, (long long unsigned int)bms_voltages_24_s.voltage17, (long long unsigned int)bms_voltages_24_s.max_voltage, (long long unsigned int)bms_voltages_24_s.min_voltage);
    
    bms_VOLTAGES_24* bms_voltages_24_d = (bms_VOLTAGES_24*)malloc(sizeof(bms_VOLTAGES_24));
    deserialize_bms_VOLTAGES_24(buffer_bms_voltages_24, bms_voltages_24_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_24_d->voltage16, (long long unsigned int)bms_voltages_24_d->voltage17, (long long unsigned int)bms_voltages_24_d->max_voltage, (long long unsigned int)bms_voltages_24_d->min_voltage);
    
    assert(memcmp(&bms_voltages_24_s, bms_voltages_24_d, sizeof(bms_VOLTAGES_24)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_30 */
    printf("bms_VOLTAGES_30:\n");
    uint8_t* buffer_bms_voltages_30 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_30));
    
    bms_VOLTAGES_30 bms_voltages_30_s = { 8804, 44183, 9381, 44311 };
    serialize_bms_VOLTAGES_30(buffer_bms_voltages_30, bms_voltages_30_s.voltage0, bms_voltages_30_s.voltage1, bms_voltages_30_s.voltage2, bms_voltages_30_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_30_s.voltage0, (long long unsigned int)bms_voltages_30_s.voltage1, (long long unsigned int)bms_voltages_30_s.voltage2, (long long unsigned int)bms_voltages_30_s.voltage3);
    
    bms_VOLTAGES_30* bms_voltages_30_d = (bms_VOLTAGES_30*)malloc(sizeof(bms_VOLTAGES_30));
    deserialize_bms_VOLTAGES_30(buffer_bms_voltages_30, bms_voltages_30_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_30_d->voltage0, (long long unsigned int)bms_voltages_30_d->voltage1, (long long unsigned int)bms_voltages_30_d->voltage2, (long long unsigned int)bms_voltages_30_d->voltage3);
    
    assert(memcmp(&bms_voltages_30_s, bms_voltages_30_d, sizeof(bms_VOLTAGES_30)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_31 */
    printf("bms_VOLTAGES_31:\n");
    uint8_t* buffer_bms_voltages_31 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_31));
    
    bms_VOLTAGES_31 bms_voltages_31_s = { 16295, 1253, 5488, 36691 };
    serialize_bms_VOLTAGES_31(buffer_bms_voltages_31, bms_voltages_31_s.voltage4, bms_voltages_31_s.voltage5, bms_voltages_31_s.voltage6, bms_voltages_31_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_31_s.voltage4, (long long unsigned int)bms_voltages_31_s.voltage5, (long long unsigned int)bms_voltages_31_s.voltage6, (long long unsigned int)bms_voltages_31_s.voltage7);
    
    bms_VOLTAGES_31* bms_voltages_31_d = (bms_VOLTAGES_31*)malloc(sizeof(bms_VOLTAGES_31));
    deserialize_bms_VOLTAGES_31(buffer_bms_voltages_31, bms_voltages_31_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_31_d->voltage4, (long long unsigned int)bms_voltages_31_d->voltage5, (long long unsigned int)bms_voltages_31_d->voltage6, (long long unsigned int)bms_voltages_31_d->voltage7);
    
    assert(memcmp(&bms_voltages_31_s, bms_voltages_31_d, sizeof(bms_VOLTAGES_31)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_32 */
    printf("bms_VOLTAGES_32:\n");
    uint8_t* buffer_bms_voltages_32 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_32));
    
    bms_VOLTAGES_32 bms_voltages_32_s = { 50652, 461, 56203, 19487 };
    serialize_bms_VOLTAGES_32(buffer_bms_voltages_32, bms_voltages_32_s.voltage8, bms_voltages_32_s.voltage9, bms_voltages_32_s.voltage10, bms_voltages_32_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_32_s.voltage8, (long long unsigned int)bms_voltages_32_s.voltage9, (long long unsigned int)bms_voltages_32_s.voltage10, (long long unsigned int)bms_voltages_32_s.voltage11);
    
    bms_VOLTAGES_32* bms_voltages_32_d = (bms_VOLTAGES_32*)malloc(sizeof(bms_VOLTAGES_32));
    deserialize_bms_VOLTAGES_32(buffer_bms_voltages_32, bms_voltages_32_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_32_d->voltage8, (long long unsigned int)bms_voltages_32_d->voltage9, (long long unsigned int)bms_voltages_32_d->voltage10, (long long unsigned int)bms_voltages_32_d->voltage11);
    
    assert(memcmp(&bms_voltages_32_s, bms_voltages_32_d, sizeof(bms_VOLTAGES_32)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_33 */
    printf("bms_VOLTAGES_33:\n");
    uint8_t* buffer_bms_voltages_33 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_33));
    
    bms_VOLTAGES_33 bms_voltages_33_s = { 56493, 34519, 45615, 65323 };
    serialize_bms_VOLTAGES_33(buffer_bms_voltages_33, bms_voltages_33_s.voltage12, bms_voltages_33_s.voltage13, bms_voltages_33_s.voltage14, bms_voltages_33_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_33_s.voltage12, (long long unsigned int)bms_voltages_33_s.voltage13, (long long unsigned int)bms_voltages_33_s.voltage14, (long long unsigned int)bms_voltages_33_s.voltage15);
    
    bms_VOLTAGES_33* bms_voltages_33_d = (bms_VOLTAGES_33*)malloc(sizeof(bms_VOLTAGES_33));
    deserialize_bms_VOLTAGES_33(buffer_bms_voltages_33, bms_voltages_33_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_33_d->voltage12, (long long unsigned int)bms_voltages_33_d->voltage13, (long long unsigned int)bms_voltages_33_d->voltage14, (long long unsigned int)bms_voltages_33_d->voltage15);
    
    assert(memcmp(&bms_voltages_33_s, bms_voltages_33_d, sizeof(bms_VOLTAGES_33)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_34 */
    printf("bms_VOLTAGES_34:\n");
    uint8_t* buffer_bms_voltages_34 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_34));
    
    bms_VOLTAGES_34 bms_voltages_34_s = { 61683, 8136, 64226, 24633 };
    serialize_bms_VOLTAGES_34(buffer_bms_voltages_34, bms_voltages_34_s.voltage16, bms_voltages_34_s.voltage17, bms_voltages_34_s.max_voltage, bms_voltages_34_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_34_s.voltage16, (long long unsigned int)bms_voltages_34_s.voltage17, (long long unsigned int)bms_voltages_34_s.max_voltage, (long long unsigned int)bms_voltages_34_s.min_voltage);
    
    bms_VOLTAGES_34* bms_voltages_34_d = (bms_VOLTAGES_34*)malloc(sizeof(bms_VOLTAGES_34));
    deserialize_bms_VOLTAGES_34(buffer_bms_voltages_34, bms_voltages_34_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_34_d->voltage16, (long long unsigned int)bms_voltages_34_d->voltage17, (long long unsigned int)bms_voltages_34_d->max_voltage, (long long unsigned int)bms_voltages_34_d->min_voltage);
    
    assert(memcmp(&bms_voltages_34_s, bms_voltages_34_d, sizeof(bms_VOLTAGES_34)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_40 */
    printf("bms_VOLTAGES_40:\n");
    uint8_t* buffer_bms_voltages_40 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_40));
    
    bms_VOLTAGES_40 bms_voltages_40_s = { 7734, 9507, 54841, 25218 };
    serialize_bms_VOLTAGES_40(buffer_bms_voltages_40, bms_voltages_40_s.voltage0, bms_voltages_40_s.voltage1, bms_voltages_40_s.voltage2, bms_voltages_40_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_40_s.voltage0, (long long unsigned int)bms_voltages_40_s.voltage1, (long long unsigned int)bms_voltages_40_s.voltage2, (long long unsigned int)bms_voltages_40_s.voltage3);
    
    bms_VOLTAGES_40* bms_voltages_40_d = (bms_VOLTAGES_40*)malloc(sizeof(bms_VOLTAGES_40));
    deserialize_bms_VOLTAGES_40(buffer_bms_voltages_40, bms_voltages_40_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_40_d->voltage0, (long long unsigned int)bms_voltages_40_d->voltage1, (long long unsigned int)bms_voltages_40_d->voltage2, (long long unsigned int)bms_voltages_40_d->voltage3);
    
    assert(memcmp(&bms_voltages_40_s, bms_voltages_40_d, sizeof(bms_VOLTAGES_40)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_41 */
    printf("bms_VOLTAGES_41:\n");
    uint8_t* buffer_bms_voltages_41 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_41));
    
    bms_VOLTAGES_41 bms_voltages_41_s = { 15620, 22837, 7334, 44861 };
    serialize_bms_VOLTAGES_41(buffer_bms_voltages_41, bms_voltages_41_s.voltage4, bms_voltages_41_s.voltage5, bms_voltages_41_s.voltage6, bms_voltages_41_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_41_s.voltage4, (long long unsigned int)bms_voltages_41_s.voltage5, (long long unsigned int)bms_voltages_41_s.voltage6, (long long unsigned int)bms_voltages_41_s.voltage7);
    
    bms_VOLTAGES_41* bms_voltages_41_d = (bms_VOLTAGES_41*)malloc(sizeof(bms_VOLTAGES_41));
    deserialize_bms_VOLTAGES_41(buffer_bms_voltages_41, bms_voltages_41_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_41_d->voltage4, (long long unsigned int)bms_voltages_41_d->voltage5, (long long unsigned int)bms_voltages_41_d->voltage6, (long long unsigned int)bms_voltages_41_d->voltage7);
    
    assert(memcmp(&bms_voltages_41_s, bms_voltages_41_d, sizeof(bms_VOLTAGES_41)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_42 */
    printf("bms_VOLTAGES_42:\n");
    uint8_t* buffer_bms_voltages_42 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_42));
    
    bms_VOLTAGES_42 bms_voltages_42_s = { 23908, 3459, 7176, 22058 };
    serialize_bms_VOLTAGES_42(buffer_bms_voltages_42, bms_voltages_42_s.voltage8, bms_voltages_42_s.voltage9, bms_voltages_42_s.voltage10, bms_voltages_42_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_42_s.voltage8, (long long unsigned int)bms_voltages_42_s.voltage9, (long long unsigned int)bms_voltages_42_s.voltage10, (long long unsigned int)bms_voltages_42_s.voltage11);
    
    bms_VOLTAGES_42* bms_voltages_42_d = (bms_VOLTAGES_42*)malloc(sizeof(bms_VOLTAGES_42));
    deserialize_bms_VOLTAGES_42(buffer_bms_voltages_42, bms_voltages_42_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_42_d->voltage8, (long long unsigned int)bms_voltages_42_d->voltage9, (long long unsigned int)bms_voltages_42_d->voltage10, (long long unsigned int)bms_voltages_42_d->voltage11);
    
    assert(memcmp(&bms_voltages_42_s, bms_voltages_42_d, sizeof(bms_VOLTAGES_42)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_43 */
    printf("bms_VOLTAGES_43:\n");
    uint8_t* buffer_bms_voltages_43 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_43));
    
    bms_VOLTAGES_43 bms_voltages_43_s = { 5276, 9469, 5698, 53626 };
    serialize_bms_VOLTAGES_43(buffer_bms_voltages_43, bms_voltages_43_s.voltage12, bms_voltages_43_s.voltage13, bms_voltages_43_s.voltage14, bms_voltages_43_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_43_s.voltage12, (long long unsigned int)bms_voltages_43_s.voltage13, (long long unsigned int)bms_voltages_43_s.voltage14, (long long unsigned int)bms_voltages_43_s.voltage15);
    
    bms_VOLTAGES_43* bms_voltages_43_d = (bms_VOLTAGES_43*)malloc(sizeof(bms_VOLTAGES_43));
    deserialize_bms_VOLTAGES_43(buffer_bms_voltages_43, bms_voltages_43_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_43_d->voltage12, (long long unsigned int)bms_voltages_43_d->voltage13, (long long unsigned int)bms_voltages_43_d->voltage14, (long long unsigned int)bms_voltages_43_d->voltage15);
    
    assert(memcmp(&bms_voltages_43_s, bms_voltages_43_d, sizeof(bms_VOLTAGES_43)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_44 */
    printf("bms_VOLTAGES_44:\n");
    uint8_t* buffer_bms_voltages_44 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_44));
    
    bms_VOLTAGES_44 bms_voltages_44_s = { 5322, 40353, 4168, 13615 };
    serialize_bms_VOLTAGES_44(buffer_bms_voltages_44, bms_voltages_44_s.voltage16, bms_voltages_44_s.voltage17, bms_voltages_44_s.max_voltage, bms_voltages_44_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_44_s.voltage16, (long long unsigned int)bms_voltages_44_s.voltage17, (long long unsigned int)bms_voltages_44_s.max_voltage, (long long unsigned int)bms_voltages_44_s.min_voltage);
    
    bms_VOLTAGES_44* bms_voltages_44_d = (bms_VOLTAGES_44*)malloc(sizeof(bms_VOLTAGES_44));
    deserialize_bms_VOLTAGES_44(buffer_bms_voltages_44, bms_voltages_44_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_44_d->voltage16, (long long unsigned int)bms_voltages_44_d->voltage17, (long long unsigned int)bms_voltages_44_d->max_voltage, (long long unsigned int)bms_voltages_44_d->min_voltage);
    
    assert(memcmp(&bms_voltages_44_s, bms_voltages_44_d, sizeof(bms_VOLTAGES_44)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_50 */
    printf("bms_VOLTAGES_50:\n");
    uint8_t* buffer_bms_voltages_50 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_50));
    
    bms_VOLTAGES_50 bms_voltages_50_s = { 4959, 60227, 22836, 35093 };
    serialize_bms_VOLTAGES_50(buffer_bms_voltages_50, bms_voltages_50_s.voltage0, bms_voltages_50_s.voltage1, bms_voltages_50_s.voltage2, bms_voltages_50_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_50_s.voltage0, (long long unsigned int)bms_voltages_50_s.voltage1, (long long unsigned int)bms_voltages_50_s.voltage2, (long long unsigned int)bms_voltages_50_s.voltage3);
    
    bms_VOLTAGES_50* bms_voltages_50_d = (bms_VOLTAGES_50*)malloc(sizeof(bms_VOLTAGES_50));
    deserialize_bms_VOLTAGES_50(buffer_bms_voltages_50, bms_voltages_50_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_50_d->voltage0, (long long unsigned int)bms_voltages_50_d->voltage1, (long long unsigned int)bms_voltages_50_d->voltage2, (long long unsigned int)bms_voltages_50_d->voltage3);
    
    assert(memcmp(&bms_voltages_50_s, bms_voltages_50_d, sizeof(bms_VOLTAGES_50)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_51 */
    printf("bms_VOLTAGES_51:\n");
    uint8_t* buffer_bms_voltages_51 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_51));
    
    bms_VOLTAGES_51 bms_voltages_51_s = { 26683, 34009, 48901, 2663 };
    serialize_bms_VOLTAGES_51(buffer_bms_voltages_51, bms_voltages_51_s.voltage4, bms_voltages_51_s.voltage5, bms_voltages_51_s.voltage6, bms_voltages_51_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_51_s.voltage4, (long long unsigned int)bms_voltages_51_s.voltage5, (long long unsigned int)bms_voltages_51_s.voltage6, (long long unsigned int)bms_voltages_51_s.voltage7);
    
    bms_VOLTAGES_51* bms_voltages_51_d = (bms_VOLTAGES_51*)malloc(sizeof(bms_VOLTAGES_51));
    deserialize_bms_VOLTAGES_51(buffer_bms_voltages_51, bms_voltages_51_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_51_d->voltage4, (long long unsigned int)bms_voltages_51_d->voltage5, (long long unsigned int)bms_voltages_51_d->voltage6, (long long unsigned int)bms_voltages_51_d->voltage7);
    
    assert(memcmp(&bms_voltages_51_s, bms_voltages_51_d, sizeof(bms_VOLTAGES_51)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_52 */
    printf("bms_VOLTAGES_52:\n");
    uint8_t* buffer_bms_voltages_52 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_52));
    
    bms_VOLTAGES_52 bms_voltages_52_s = { 9668, 24531, 48741, 32281 };
    serialize_bms_VOLTAGES_52(buffer_bms_voltages_52, bms_voltages_52_s.voltage8, bms_voltages_52_s.voltage9, bms_voltages_52_s.voltage10, bms_voltages_52_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_52_s.voltage8, (long long unsigned int)bms_voltages_52_s.voltage9, (long long unsigned int)bms_voltages_52_s.voltage10, (long long unsigned int)bms_voltages_52_s.voltage11);
    
    bms_VOLTAGES_52* bms_voltages_52_d = (bms_VOLTAGES_52*)malloc(sizeof(bms_VOLTAGES_52));
    deserialize_bms_VOLTAGES_52(buffer_bms_voltages_52, bms_voltages_52_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_52_d->voltage8, (long long unsigned int)bms_voltages_52_d->voltage9, (long long unsigned int)bms_voltages_52_d->voltage10, (long long unsigned int)bms_voltages_52_d->voltage11);
    
    assert(memcmp(&bms_voltages_52_s, bms_voltages_52_d, sizeof(bms_VOLTAGES_52)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_53 */
    printf("bms_VOLTAGES_53:\n");
    uint8_t* buffer_bms_voltages_53 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_53));
    
    bms_VOLTAGES_53 bms_voltages_53_s = { 5448, 16151, 45654, 54269 };
    serialize_bms_VOLTAGES_53(buffer_bms_voltages_53, bms_voltages_53_s.voltage12, bms_voltages_53_s.voltage13, bms_voltages_53_s.voltage14, bms_voltages_53_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_53_s.voltage12, (long long unsigned int)bms_voltages_53_s.voltage13, (long long unsigned int)bms_voltages_53_s.voltage14, (long long unsigned int)bms_voltages_53_s.voltage15);
    
    bms_VOLTAGES_53* bms_voltages_53_d = (bms_VOLTAGES_53*)malloc(sizeof(bms_VOLTAGES_53));
    deserialize_bms_VOLTAGES_53(buffer_bms_voltages_53, bms_voltages_53_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_53_d->voltage12, (long long unsigned int)bms_voltages_53_d->voltage13, (long long unsigned int)bms_voltages_53_d->voltage14, (long long unsigned int)bms_voltages_53_d->voltage15);
    
    assert(memcmp(&bms_voltages_53_s, bms_voltages_53_d, sizeof(bms_VOLTAGES_53)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_54 */
    printf("bms_VOLTAGES_54:\n");
    uint8_t* buffer_bms_voltages_54 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_54));
    
    bms_VOLTAGES_54 bms_voltages_54_s = { 40558, 35104, 64905, 38045 };
    serialize_bms_VOLTAGES_54(buffer_bms_voltages_54, bms_voltages_54_s.voltage16, bms_voltages_54_s.voltage17, bms_voltages_54_s.max_voltage, bms_voltages_54_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_54_s.voltage16, (long long unsigned int)bms_voltages_54_s.voltage17, (long long unsigned int)bms_voltages_54_s.max_voltage, (long long unsigned int)bms_voltages_54_s.min_voltage);
    
    bms_VOLTAGES_54* bms_voltages_54_d = (bms_VOLTAGES_54*)malloc(sizeof(bms_VOLTAGES_54));
    deserialize_bms_VOLTAGES_54(buffer_bms_voltages_54, bms_voltages_54_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_54_d->voltage16, (long long unsigned int)bms_voltages_54_d->voltage17, (long long unsigned int)bms_voltages_54_d->max_voltage, (long long unsigned int)bms_voltages_54_d->min_voltage);
    
    assert(memcmp(&bms_voltages_54_s, bms_voltages_54_d, sizeof(bms_VOLTAGES_54)) == 0);
    puts("SUCCESS!\n");
        
}