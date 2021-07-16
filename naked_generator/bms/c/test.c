#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "bms.h"

int main() {

/* bms_BOARD_STATUS */
    printf("bms_BOARD_STATUS:\n");
    uint8_t* buffer_bms_board_status = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS));
    
    bms_BOARD_STATUS bms_board_status_s = { {254}, 34 };
    serialize_bms_BOARD_STATUS(buffer_bms_board_status, bms_board_status_s.errors, bms_board_status_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_s.errors[0], (long long int)bms_board_status_s.balancing_status);
    
    bms_BOARD_STATUS* bms_board_status_d = (bms_BOARD_STATUS*)malloc(sizeof(bms_BOARD_STATUS));
    deserialize_bms_BOARD_STATUS(buffer_bms_board_status, bms_board_status_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_d->errors[0], (long long int)bms_board_status_d->balancing_status);
    
    assert(memcmp(&bms_board_status_s, bms_board_status_d, sizeof(bms_BOARD_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS */
    printf("bms_TEMP_STATS:\n");
    uint8_t* buffer_bms_temp_stats = (uint8_t*)malloc(sizeof(bms_TEMP_STATS));
    
    bms_TEMP_STATS bms_temp_stats_s = { 24, 252, 110, 21 };
    serialize_bms_TEMP_STATS(buffer_bms_temp_stats, bms_temp_stats_s.board_id, bms_temp_stats_s.average, bms_temp_stats_s.max, bms_temp_stats_s.min);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_s.board_id, (long long unsigned int)bms_temp_stats_s.average, (long long unsigned int)bms_temp_stats_s.max, (long long unsigned int)bms_temp_stats_s.min);
    
    bms_TEMP_STATS* bms_temp_stats_d = (bms_TEMP_STATS*)malloc(sizeof(bms_TEMP_STATS));
    deserialize_bms_TEMP_STATS(buffer_bms_temp_stats, bms_temp_stats_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_d->board_id, (long long unsigned int)bms_temp_stats_d->average, (long long unsigned int)bms_temp_stats_d->max, (long long unsigned int)bms_temp_stats_d->min);
    
    assert(memcmp(&bms_temp_stats_s, bms_temp_stats_d, sizeof(bms_TEMP_STATS)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMPERATURES_CB0_0 */
    printf("bms_TEMPERATURES_CB0_0:\n");
    uint8_t* buffer_bms_temperatures_cb0_0 = (uint8_t*)malloc(sizeof(bms_TEMPERATURES_CB0_0));
    
    bms_TEMPERATURES_CB0_0 bms_temperatures_cb0_0_s = { 148, 210, 194, 165, 175, 126, 247, 117 };
    serialize_bms_TEMPERATURES_CB0_0(buffer_bms_temperatures_cb0_0, bms_temperatures_cb0_0_s.temperature0, bms_temperatures_cb0_0_s.temperature1, bms_temperatures_cb0_0_s.temperature2, bms_temperatures_cb0_0_s.temperature3, bms_temperatures_cb0_0_s.temperature4, bms_temperatures_cb0_0_s.temperature5, bms_temperatures_cb0_0_s.temperature6, bms_temperatures_cb0_0_s.temperature7);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temperatures_cb0_0_s.temperature0, (long long unsigned int)bms_temperatures_cb0_0_s.temperature1, (long long unsigned int)bms_temperatures_cb0_0_s.temperature2, (long long unsigned int)bms_temperatures_cb0_0_s.temperature3, (long long unsigned int)bms_temperatures_cb0_0_s.temperature4, (long long unsigned int)bms_temperatures_cb0_0_s.temperature5, (long long unsigned int)bms_temperatures_cb0_0_s.temperature6, (long long unsigned int)bms_temperatures_cb0_0_s.temperature7);
    
    bms_TEMPERATURES_CB0_0* bms_temperatures_cb0_0_d = (bms_TEMPERATURES_CB0_0*)malloc(sizeof(bms_TEMPERATURES_CB0_0));
    deserialize_bms_TEMPERATURES_CB0_0(buffer_bms_temperatures_cb0_0, bms_temperatures_cb0_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temperatures_cb0_0_d->temperature0, (long long unsigned int)bms_temperatures_cb0_0_d->temperature1, (long long unsigned int)bms_temperatures_cb0_0_d->temperature2, (long long unsigned int)bms_temperatures_cb0_0_d->temperature3, (long long unsigned int)bms_temperatures_cb0_0_d->temperature4, (long long unsigned int)bms_temperatures_cb0_0_d->temperature5, (long long unsigned int)bms_temperatures_cb0_0_d->temperature6, (long long unsigned int)bms_temperatures_cb0_0_d->temperature7);
    
    assert(memcmp(&bms_temperatures_cb0_0_s, bms_temperatures_cb0_0_d, sizeof(bms_TEMPERATURES_CB0_0)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMPERATURES_CB0_1 */
    printf("bms_TEMPERATURES_CB0_1:\n");
    uint8_t* buffer_bms_temperatures_cb0_1 = (uint8_t*)malloc(sizeof(bms_TEMPERATURES_CB0_1));
    
    bms_TEMPERATURES_CB0_1 bms_temperatures_cb0_1_s = { 233, 191, 197, 181, 254, 116, 151, 213 };
    serialize_bms_TEMPERATURES_CB0_1(buffer_bms_temperatures_cb0_1, bms_temperatures_cb0_1_s.temperature8, bms_temperatures_cb0_1_s.temperature9, bms_temperatures_cb0_1_s.temperature10, bms_temperatures_cb0_1_s.temperature11, bms_temperatures_cb0_1_s.temperature12, bms_temperatures_cb0_1_s.temperature13, bms_temperatures_cb0_1_s.temperature14, bms_temperatures_cb0_1_s.temperature15);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temperatures_cb0_1_s.temperature8, (long long unsigned int)bms_temperatures_cb0_1_s.temperature9, (long long unsigned int)bms_temperatures_cb0_1_s.temperature10, (long long unsigned int)bms_temperatures_cb0_1_s.temperature11, (long long unsigned int)bms_temperatures_cb0_1_s.temperature12, (long long unsigned int)bms_temperatures_cb0_1_s.temperature13, (long long unsigned int)bms_temperatures_cb0_1_s.temperature14, (long long unsigned int)bms_temperatures_cb0_1_s.temperature15);
    
    bms_TEMPERATURES_CB0_1* bms_temperatures_cb0_1_d = (bms_TEMPERATURES_CB0_1*)malloc(sizeof(bms_TEMPERATURES_CB0_1));
    deserialize_bms_TEMPERATURES_CB0_1(buffer_bms_temperatures_cb0_1, bms_temperatures_cb0_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temperatures_cb0_1_d->temperature8, (long long unsigned int)bms_temperatures_cb0_1_d->temperature9, (long long unsigned int)bms_temperatures_cb0_1_d->temperature10, (long long unsigned int)bms_temperatures_cb0_1_d->temperature11, (long long unsigned int)bms_temperatures_cb0_1_d->temperature12, (long long unsigned int)bms_temperatures_cb0_1_d->temperature13, (long long unsigned int)bms_temperatures_cb0_1_d->temperature14, (long long unsigned int)bms_temperatures_cb0_1_d->temperature15);
    
    assert(memcmp(&bms_temperatures_cb0_1_s, bms_temperatures_cb0_1_d, sizeof(bms_TEMPERATURES_CB0_1)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMPERATURES_CB0_2 */
    printf("bms_TEMPERATURES_CB0_2:\n");
    uint8_t* buffer_bms_temperatures_cb0_2 = (uint8_t*)malloc(sizeof(bms_TEMPERATURES_CB0_2));
    
    bms_TEMPERATURES_CB0_2 bms_temperatures_cb0_2_s = { 70, 8 };
    serialize_bms_TEMPERATURES_CB0_2(buffer_bms_temperatures_cb0_2, bms_temperatures_cb0_2_s.temperature16, bms_temperatures_cb0_2_s.temperature17);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)bms_temperatures_cb0_2_s.temperature16, (long long unsigned int)bms_temperatures_cb0_2_s.temperature17);
    
    bms_TEMPERATURES_CB0_2* bms_temperatures_cb0_2_d = (bms_TEMPERATURES_CB0_2*)malloc(sizeof(bms_TEMPERATURES_CB0_2));
    deserialize_bms_TEMPERATURES_CB0_2(buffer_bms_temperatures_cb0_2, bms_temperatures_cb0_2_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)bms_temperatures_cb0_2_d->temperature16, (long long unsigned int)bms_temperatures_cb0_2_d->temperature17);
    
    assert(memcmp(&bms_temperatures_cb0_2_s, bms_temperatures_cb0_2_d, sizeof(bms_TEMPERATURES_CB0_2)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BALANCING */
    printf("bms_BALANCING:\n");
    uint8_t* buffer_bms_balancing = (uint8_t*)malloc(sizeof(bms_BALANCING));
    
    bms_BALANCING bms_balancing_s = { 84, {59, 7, 195} };
    serialize_bms_BALANCING(buffer_bms_balancing, bms_balancing_s.board_id, bms_balancing_s.cells);
    printf("\tSerialized\n\t%llu %hhx.%hhx.%hhx\n", (long long unsigned int)bms_balancing_s.board_id, (long long unsigned int)bms_balancing_s.cells[0], (long long unsigned int)bms_balancing_s.cells[1], (long long unsigned int)bms_balancing_s.cells[2]);
    
    bms_BALANCING* bms_balancing_d = (bms_BALANCING*)malloc(sizeof(bms_BALANCING));
    deserialize_bms_BALANCING(buffer_bms_balancing, bms_balancing_d);
    printf("\tDeserialized\n\t%llu %hhx.%hhx.%hhx\n", (long long unsigned int)bms_balancing_d->board_id, (long long unsigned int)bms_balancing_d->cells[0], (long long unsigned int)bms_balancing_d->cells[1], (long long unsigned int)bms_balancing_d->cells[2]);
    
    assert(memcmp(&bms_balancing_s, bms_balancing_d, sizeof(bms_BALANCING)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_CB0_0 */
    printf("bms_VOLTAGES_CB0_0:\n");
    uint8_t* buffer_bms_voltages_cb0_0 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_CB0_0));
    
    bms_VOLTAGES_CB0_0 bms_voltages_cb0_0_s = { 60329, 13158, 11397, 54440 };
    serialize_bms_VOLTAGES_CB0_0(buffer_bms_voltages_cb0_0, bms_voltages_cb0_0_s.voltage0, bms_voltages_cb0_0_s.voltage1, bms_voltages_cb0_0_s.voltage2, bms_voltages_cb0_0_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb0_0_s.voltage0, (long long unsigned int)bms_voltages_cb0_0_s.voltage1, (long long unsigned int)bms_voltages_cb0_0_s.voltage2, (long long unsigned int)bms_voltages_cb0_0_s.voltage3);
    
    bms_VOLTAGES_CB0_0* bms_voltages_cb0_0_d = (bms_VOLTAGES_CB0_0*)malloc(sizeof(bms_VOLTAGES_CB0_0));
    deserialize_bms_VOLTAGES_CB0_0(buffer_bms_voltages_cb0_0, bms_voltages_cb0_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb0_0_d->voltage0, (long long unsigned int)bms_voltages_cb0_0_d->voltage1, (long long unsigned int)bms_voltages_cb0_0_d->voltage2, (long long unsigned int)bms_voltages_cb0_0_d->voltage3);
    
    assert(memcmp(&bms_voltages_cb0_0_s, bms_voltages_cb0_0_d, sizeof(bms_VOLTAGES_CB0_0)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_CB0_1 */
    printf("bms_VOLTAGES_CB0_1:\n");
    uint8_t* buffer_bms_voltages_cb0_1 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_CB0_1));
    
    bms_VOLTAGES_CB0_1 bms_voltages_cb0_1_s = { 52791, 27110, 46067, 32474 };
    serialize_bms_VOLTAGES_CB0_1(buffer_bms_voltages_cb0_1, bms_voltages_cb0_1_s.voltage4, bms_voltages_cb0_1_s.voltage5, bms_voltages_cb0_1_s.voltage6, bms_voltages_cb0_1_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb0_1_s.voltage4, (long long unsigned int)bms_voltages_cb0_1_s.voltage5, (long long unsigned int)bms_voltages_cb0_1_s.voltage6, (long long unsigned int)bms_voltages_cb0_1_s.voltage7);
    
    bms_VOLTAGES_CB0_1* bms_voltages_cb0_1_d = (bms_VOLTAGES_CB0_1*)malloc(sizeof(bms_VOLTAGES_CB0_1));
    deserialize_bms_VOLTAGES_CB0_1(buffer_bms_voltages_cb0_1, bms_voltages_cb0_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb0_1_d->voltage4, (long long unsigned int)bms_voltages_cb0_1_d->voltage5, (long long unsigned int)bms_voltages_cb0_1_d->voltage6, (long long unsigned int)bms_voltages_cb0_1_d->voltage7);
    
    assert(memcmp(&bms_voltages_cb0_1_s, bms_voltages_cb0_1_d, sizeof(bms_VOLTAGES_CB0_1)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_CB0_2 */
    printf("bms_VOLTAGES_CB0_2:\n");
    uint8_t* buffer_bms_voltages_cb0_2 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_CB0_2));
    
    bms_VOLTAGES_CB0_2 bms_voltages_cb0_2_s = { 19164, 27432, 55646, 3533 };
    serialize_bms_VOLTAGES_CB0_2(buffer_bms_voltages_cb0_2, bms_voltages_cb0_2_s.voltage8, bms_voltages_cb0_2_s.voltage9, bms_voltages_cb0_2_s.voltage10, bms_voltages_cb0_2_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb0_2_s.voltage8, (long long unsigned int)bms_voltages_cb0_2_s.voltage9, (long long unsigned int)bms_voltages_cb0_2_s.voltage10, (long long unsigned int)bms_voltages_cb0_2_s.voltage11);
    
    bms_VOLTAGES_CB0_2* bms_voltages_cb0_2_d = (bms_VOLTAGES_CB0_2*)malloc(sizeof(bms_VOLTAGES_CB0_2));
    deserialize_bms_VOLTAGES_CB0_2(buffer_bms_voltages_cb0_2, bms_voltages_cb0_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb0_2_d->voltage8, (long long unsigned int)bms_voltages_cb0_2_d->voltage9, (long long unsigned int)bms_voltages_cb0_2_d->voltage10, (long long unsigned int)bms_voltages_cb0_2_d->voltage11);
    
    assert(memcmp(&bms_voltages_cb0_2_s, bms_voltages_cb0_2_d, sizeof(bms_VOLTAGES_CB0_2)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_CB0_3 */
    printf("bms_VOLTAGES_CB0_3:\n");
    uint8_t* buffer_bms_voltages_cb0_3 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_CB0_3));
    
    bms_VOLTAGES_CB0_3 bms_voltages_cb0_3_s = { 32660, 1775, 4006, 36313 };
    serialize_bms_VOLTAGES_CB0_3(buffer_bms_voltages_cb0_3, bms_voltages_cb0_3_s.voltage12, bms_voltages_cb0_3_s.voltage13, bms_voltages_cb0_3_s.voltage14, bms_voltages_cb0_3_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb0_3_s.voltage12, (long long unsigned int)bms_voltages_cb0_3_s.voltage13, (long long unsigned int)bms_voltages_cb0_3_s.voltage14, (long long unsigned int)bms_voltages_cb0_3_s.voltage15);
    
    bms_VOLTAGES_CB0_3* bms_voltages_cb0_3_d = (bms_VOLTAGES_CB0_3*)malloc(sizeof(bms_VOLTAGES_CB0_3));
    deserialize_bms_VOLTAGES_CB0_3(buffer_bms_voltages_cb0_3, bms_voltages_cb0_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb0_3_d->voltage12, (long long unsigned int)bms_voltages_cb0_3_d->voltage13, (long long unsigned int)bms_voltages_cb0_3_d->voltage14, (long long unsigned int)bms_voltages_cb0_3_d->voltage15);
    
    assert(memcmp(&bms_voltages_cb0_3_s, bms_voltages_cb0_3_d, sizeof(bms_VOLTAGES_CB0_3)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_CB0_4 */
    printf("bms_VOLTAGES_CB0_4:\n");
    uint8_t* buffer_bms_voltages_cb0_4 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_CB0_4));
    
    bms_VOLTAGES_CB0_4 bms_voltages_cb0_4_s = { 37998, 48856, 41816, 38297 };
    serialize_bms_VOLTAGES_CB0_4(buffer_bms_voltages_cb0_4, bms_voltages_cb0_4_s.voltage16, bms_voltages_cb0_4_s.voltage17, bms_voltages_cb0_4_s.max_voltage, bms_voltages_cb0_4_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb0_4_s.voltage16, (long long unsigned int)bms_voltages_cb0_4_s.voltage17, (long long unsigned int)bms_voltages_cb0_4_s.max_voltage, (long long unsigned int)bms_voltages_cb0_4_s.min_voltage);
    
    bms_VOLTAGES_CB0_4* bms_voltages_cb0_4_d = (bms_VOLTAGES_CB0_4*)malloc(sizeof(bms_VOLTAGES_CB0_4));
    deserialize_bms_VOLTAGES_CB0_4(buffer_bms_voltages_cb0_4, bms_voltages_cb0_4_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb0_4_d->voltage16, (long long unsigned int)bms_voltages_cb0_4_d->voltage17, (long long unsigned int)bms_voltages_cb0_4_d->max_voltage, (long long unsigned int)bms_voltages_cb0_4_d->min_voltage);
    
    assert(memcmp(&bms_voltages_cb0_4_s, bms_voltages_cb0_4_d, sizeof(bms_VOLTAGES_CB0_4)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_CB1_0 */
    printf("bms_VOLTAGES_CB1_0:\n");
    uint8_t* buffer_bms_voltages_cb1_0 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_CB1_0));
    
    bms_VOLTAGES_CB1_0 bms_voltages_cb1_0_s = { 2640, 16963, 32184, 12486 };
    serialize_bms_VOLTAGES_CB1_0(buffer_bms_voltages_cb1_0, bms_voltages_cb1_0_s.voltage0, bms_voltages_cb1_0_s.voltage1, bms_voltages_cb1_0_s.voltage2, bms_voltages_cb1_0_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb1_0_s.voltage0, (long long unsigned int)bms_voltages_cb1_0_s.voltage1, (long long unsigned int)bms_voltages_cb1_0_s.voltage2, (long long unsigned int)bms_voltages_cb1_0_s.voltage3);
    
    bms_VOLTAGES_CB1_0* bms_voltages_cb1_0_d = (bms_VOLTAGES_CB1_0*)malloc(sizeof(bms_VOLTAGES_CB1_0));
    deserialize_bms_VOLTAGES_CB1_0(buffer_bms_voltages_cb1_0, bms_voltages_cb1_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb1_0_d->voltage0, (long long unsigned int)bms_voltages_cb1_0_d->voltage1, (long long unsigned int)bms_voltages_cb1_0_d->voltage2, (long long unsigned int)bms_voltages_cb1_0_d->voltage3);
    
    assert(memcmp(&bms_voltages_cb1_0_s, bms_voltages_cb1_0_d, sizeof(bms_VOLTAGES_CB1_0)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_CB1_1 */
    printf("bms_VOLTAGES_CB1_1:\n");
    uint8_t* buffer_bms_voltages_cb1_1 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_CB1_1));
    
    bms_VOLTAGES_CB1_1 bms_voltages_cb1_1_s = { 41796, 52720, 24447, 22691 };
    serialize_bms_VOLTAGES_CB1_1(buffer_bms_voltages_cb1_1, bms_voltages_cb1_1_s.voltage4, bms_voltages_cb1_1_s.voltage5, bms_voltages_cb1_1_s.voltage6, bms_voltages_cb1_1_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb1_1_s.voltage4, (long long unsigned int)bms_voltages_cb1_1_s.voltage5, (long long unsigned int)bms_voltages_cb1_1_s.voltage6, (long long unsigned int)bms_voltages_cb1_1_s.voltage7);
    
    bms_VOLTAGES_CB1_1* bms_voltages_cb1_1_d = (bms_VOLTAGES_CB1_1*)malloc(sizeof(bms_VOLTAGES_CB1_1));
    deserialize_bms_VOLTAGES_CB1_1(buffer_bms_voltages_cb1_1, bms_voltages_cb1_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb1_1_d->voltage4, (long long unsigned int)bms_voltages_cb1_1_d->voltage5, (long long unsigned int)bms_voltages_cb1_1_d->voltage6, (long long unsigned int)bms_voltages_cb1_1_d->voltage7);
    
    assert(memcmp(&bms_voltages_cb1_1_s, bms_voltages_cb1_1_d, sizeof(bms_VOLTAGES_CB1_1)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_CB1_2 */
    printf("bms_VOLTAGES_CB1_2:\n");
    uint8_t* buffer_bms_voltages_cb1_2 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_CB1_2));
    
    bms_VOLTAGES_CB1_2 bms_voltages_cb1_2_s = { 19988, 21113, 8672, 16605 };
    serialize_bms_VOLTAGES_CB1_2(buffer_bms_voltages_cb1_2, bms_voltages_cb1_2_s.voltage8, bms_voltages_cb1_2_s.voltage9, bms_voltages_cb1_2_s.voltage10, bms_voltages_cb1_2_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb1_2_s.voltage8, (long long unsigned int)bms_voltages_cb1_2_s.voltage9, (long long unsigned int)bms_voltages_cb1_2_s.voltage10, (long long unsigned int)bms_voltages_cb1_2_s.voltage11);
    
    bms_VOLTAGES_CB1_2* bms_voltages_cb1_2_d = (bms_VOLTAGES_CB1_2*)malloc(sizeof(bms_VOLTAGES_CB1_2));
    deserialize_bms_VOLTAGES_CB1_2(buffer_bms_voltages_cb1_2, bms_voltages_cb1_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb1_2_d->voltage8, (long long unsigned int)bms_voltages_cb1_2_d->voltage9, (long long unsigned int)bms_voltages_cb1_2_d->voltage10, (long long unsigned int)bms_voltages_cb1_2_d->voltage11);
    
    assert(memcmp(&bms_voltages_cb1_2_s, bms_voltages_cb1_2_d, sizeof(bms_VOLTAGES_CB1_2)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_CB1_3 */
    printf("bms_VOLTAGES_CB1_3:\n");
    uint8_t* buffer_bms_voltages_cb1_3 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_CB1_3));
    
    bms_VOLTAGES_CB1_3 bms_voltages_cb1_3_s = { 25463, 29818, 59104, 6308 };
    serialize_bms_VOLTAGES_CB1_3(buffer_bms_voltages_cb1_3, bms_voltages_cb1_3_s.voltage12, bms_voltages_cb1_3_s.voltage13, bms_voltages_cb1_3_s.voltage14, bms_voltages_cb1_3_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb1_3_s.voltage12, (long long unsigned int)bms_voltages_cb1_3_s.voltage13, (long long unsigned int)bms_voltages_cb1_3_s.voltage14, (long long unsigned int)bms_voltages_cb1_3_s.voltage15);
    
    bms_VOLTAGES_CB1_3* bms_voltages_cb1_3_d = (bms_VOLTAGES_CB1_3*)malloc(sizeof(bms_VOLTAGES_CB1_3));
    deserialize_bms_VOLTAGES_CB1_3(buffer_bms_voltages_cb1_3, bms_voltages_cb1_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb1_3_d->voltage12, (long long unsigned int)bms_voltages_cb1_3_d->voltage13, (long long unsigned int)bms_voltages_cb1_3_d->voltage14, (long long unsigned int)bms_voltages_cb1_3_d->voltage15);
    
    assert(memcmp(&bms_voltages_cb1_3_s, bms_voltages_cb1_3_d, sizeof(bms_VOLTAGES_CB1_3)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_CB1_4 */
    printf("bms_VOLTAGES_CB1_4:\n");
    uint8_t* buffer_bms_voltages_cb1_4 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_CB1_4));
    
    bms_VOLTAGES_CB1_4 bms_voltages_cb1_4_s = { 10973, 42718, 8586, 56204 };
    serialize_bms_VOLTAGES_CB1_4(buffer_bms_voltages_cb1_4, bms_voltages_cb1_4_s.voltage16, bms_voltages_cb1_4_s.voltage17, bms_voltages_cb1_4_s.max_voltage, bms_voltages_cb1_4_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb1_4_s.voltage16, (long long unsigned int)bms_voltages_cb1_4_s.voltage17, (long long unsigned int)bms_voltages_cb1_4_s.max_voltage, (long long unsigned int)bms_voltages_cb1_4_s.min_voltage);
    
    bms_VOLTAGES_CB1_4* bms_voltages_cb1_4_d = (bms_VOLTAGES_CB1_4*)malloc(sizeof(bms_VOLTAGES_CB1_4));
    deserialize_bms_VOLTAGES_CB1_4(buffer_bms_voltages_cb1_4, bms_voltages_cb1_4_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_cb1_4_d->voltage16, (long long unsigned int)bms_voltages_cb1_4_d->voltage17, (long long unsigned int)bms_voltages_cb1_4_d->max_voltage, (long long unsigned int)bms_voltages_cb1_4_d->min_voltage);
    
    assert(memcmp(&bms_voltages_cb1_4_s, bms_voltages_cb1_4_d, sizeof(bms_VOLTAGES_CB1_4)) == 0);
    puts("SUCCESS!\n");
        

/* bms_MASTER_SYNC */
    printf("bms_MASTER_SYNC:\n");
    uint8_t* buffer_bms_master_sync = (uint8_t*)malloc(sizeof(bms_MASTER_SYNC));
    
    bms_MASTER_SYNC bms_master_sync_s = { 1985750422 };
    serialize_bms_MASTER_SYNC(buffer_bms_master_sync, bms_master_sync_s.time);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)bms_master_sync_s.time);
    
    bms_MASTER_SYNC* bms_master_sync_d = (bms_MASTER_SYNC*)malloc(sizeof(bms_MASTER_SYNC));
    deserialize_bms_MASTER_SYNC(buffer_bms_master_sync, bms_master_sync_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)bms_master_sync_d->time);
    
    assert(memcmp(&bms_master_sync_s, bms_master_sync_d, sizeof(bms_MASTER_SYNC)) == 0);
    puts("SUCCESS!\n");
        
}