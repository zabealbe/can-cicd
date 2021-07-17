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
        

/* bms_VOLTAGES_0 */
    printf("bms_VOLTAGES_0:\n");
    uint8_t* buffer_bms_voltages_0 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_0));
    
    bms_VOLTAGES_0 bms_voltages_0_s = { 213, 0, 17927, 2296, 21730 };
    serialize_bms_VOLTAGES_0(buffer_bms_voltages_0, bms_voltages_0_s.board_index, bms_voltages_0_s.voltage0, bms_voltages_0_s.voltage1, bms_voltages_0_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_0_s.board_index, (long long unsigned int)bms_voltages_0_s.voltage0, (long long unsigned int)bms_voltages_0_s.voltage1);
    
    bms_VOLTAGES_0* bms_voltages_0_d = (bms_VOLTAGES_0*)malloc(sizeof(bms_VOLTAGES_0));
    deserialize_bms_VOLTAGES_0(buffer_bms_voltages_0, bms_voltages_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_0_d->board_index, (long long unsigned int)bms_voltages_0_d->voltage0, (long long unsigned int)bms_voltages_0_d->voltage1);
    
    assert(memcmp(&bms_voltages_0_s, bms_voltages_0_d, sizeof(bms_VOLTAGES_0)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_1 */
    printf("bms_VOLTAGES_1:\n");
    uint8_t* buffer_bms_voltages_1 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_1));
    
    bms_VOLTAGES_1 bms_voltages_1_s = { 29, 0, 43906, 49986, 51888 };
    serialize_bms_VOLTAGES_1(buffer_bms_voltages_1, bms_voltages_1_s.board_index, bms_voltages_1_s.voltage3, bms_voltages_1_s.voltage4, bms_voltages_1_s.voltage5);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_1_s.board_index, (long long unsigned int)bms_voltages_1_s.voltage3, (long long unsigned int)bms_voltages_1_s.voltage4);
    
    bms_VOLTAGES_1* bms_voltages_1_d = (bms_VOLTAGES_1*)malloc(sizeof(bms_VOLTAGES_1));
    deserialize_bms_VOLTAGES_1(buffer_bms_voltages_1, bms_voltages_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_1_d->board_index, (long long unsigned int)bms_voltages_1_d->voltage3, (long long unsigned int)bms_voltages_1_d->voltage4);
    
    assert(memcmp(&bms_voltages_1_s, bms_voltages_1_d, sizeof(bms_VOLTAGES_1)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_2 */
    printf("bms_VOLTAGES_2:\n");
    uint8_t* buffer_bms_voltages_2 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_2));
    
    bms_VOLTAGES_2 bms_voltages_2_s = { 180, 0, 55257, 908, 35842 };
    serialize_bms_VOLTAGES_2(buffer_bms_voltages_2, bms_voltages_2_s.board_index, bms_voltages_2_s.voltage6, bms_voltages_2_s.voltage7, bms_voltages_2_s.voltage8);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_2_s.board_index, (long long unsigned int)bms_voltages_2_s.voltage6, (long long unsigned int)bms_voltages_2_s.voltage7);
    
    bms_VOLTAGES_2* bms_voltages_2_d = (bms_VOLTAGES_2*)malloc(sizeof(bms_VOLTAGES_2));
    deserialize_bms_VOLTAGES_2(buffer_bms_voltages_2, bms_voltages_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_2_d->board_index, (long long unsigned int)bms_voltages_2_d->voltage6, (long long unsigned int)bms_voltages_2_d->voltage7);
    
    assert(memcmp(&bms_voltages_2_s, bms_voltages_2_d, sizeof(bms_VOLTAGES_2)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_3 */
    printf("bms_VOLTAGES_3:\n");
    uint8_t* buffer_bms_voltages_3 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_3));
    
    bms_VOLTAGES_3 bms_voltages_3_s = { 97, 0, 60329, 13158, 11397 };
    serialize_bms_VOLTAGES_3(buffer_bms_voltages_3, bms_voltages_3_s.board_index, bms_voltages_3_s.voltage9, bms_voltages_3_s.voltage10, bms_voltages_3_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_3_s.board_index, (long long unsigned int)bms_voltages_3_s.voltage9, (long long unsigned int)bms_voltages_3_s.voltage10);
    
    bms_VOLTAGES_3* bms_voltages_3_d = (bms_VOLTAGES_3*)malloc(sizeof(bms_VOLTAGES_3));
    deserialize_bms_VOLTAGES_3(buffer_bms_voltages_3, bms_voltages_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_3_d->board_index, (long long unsigned int)bms_voltages_3_d->voltage9, (long long unsigned int)bms_voltages_3_d->voltage10);
    
    assert(memcmp(&bms_voltages_3_s, bms_voltages_3_d, sizeof(bms_VOLTAGES_3)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_4 */
    printf("bms_VOLTAGES_4:\n");
    uint8_t* buffer_bms_voltages_4 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_4));
    
    bms_VOLTAGES_4 bms_voltages_4_s = { 212, 0, 52791, 27110, 46067 };
    serialize_bms_VOLTAGES_4(buffer_bms_voltages_4, bms_voltages_4_s.board_index, bms_voltages_4_s.voltage12, bms_voltages_4_s.voltage13, bms_voltages_4_s.voltage14);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_4_s.board_index, (long long unsigned int)bms_voltages_4_s.voltage12, (long long unsigned int)bms_voltages_4_s.voltage13);
    
    bms_VOLTAGES_4* bms_voltages_4_d = (bms_VOLTAGES_4*)malloc(sizeof(bms_VOLTAGES_4));
    deserialize_bms_VOLTAGES_4(buffer_bms_voltages_4, bms_voltages_4_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_4_d->board_index, (long long unsigned int)bms_voltages_4_d->voltage12, (long long unsigned int)bms_voltages_4_d->voltage13);
    
    assert(memcmp(&bms_voltages_4_s, bms_voltages_4_d, sizeof(bms_VOLTAGES_4)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_5 */
    printf("bms_VOLTAGES_5:\n");
    uint8_t* buffer_bms_voltages_5 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_5));
    
    bms_VOLTAGES_5 bms_voltages_5_s = { 126, 0, 19164, 27432, 55646 };
    serialize_bms_VOLTAGES_5(buffer_bms_voltages_5, bms_voltages_5_s.board_index, bms_voltages_5_s.voltage15, bms_voltages_5_s.voltage16, bms_voltages_5_s.voltage17);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_5_s.board_index, (long long unsigned int)bms_voltages_5_s.voltage15, (long long unsigned int)bms_voltages_5_s.voltage16);
    
    bms_VOLTAGES_5* bms_voltages_5_d = (bms_VOLTAGES_5*)malloc(sizeof(bms_VOLTAGES_5));
    deserialize_bms_VOLTAGES_5(buffer_bms_voltages_5, bms_voltages_5_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_5_d->board_index, (long long unsigned int)bms_voltages_5_d->voltage15, (long long unsigned int)bms_voltages_5_d->voltage16);
    
    assert(memcmp(&bms_voltages_5_s, bms_voltages_5_d, sizeof(bms_VOLTAGES_5)) == 0);
    puts("SUCCESS!\n");
        
}