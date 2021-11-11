#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "bms.h"

int main() {

/* bms_BOARD_STATUS_0 */
    printf("bms_BOARD_STATUS_0:\n");
    uint8_t* buffer_bms_board_status_0 = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS_0));
    
    bms_BOARD_STATUS_0 bms_board_status_0_s = { {112}, -60 };
    serialize_bms_BOARD_STATUS_0(buffer_bms_board_status_0, bms_board_status_0_s.errors, bms_board_status_0_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_0_s.errors[0], (long long int)bms_board_status_0_s.balancing_status);
    
    bms_BOARD_STATUS_0* bms_board_status_0_d = (bms_BOARD_STATUS_0*)malloc(sizeof(bms_BOARD_STATUS_0));
    deserialize_bms_BOARD_STATUS_0(buffer_bms_board_status_0, bms_board_status_0_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_0_d->errors[0], (long long int)bms_board_status_0_d->balancing_status);
    
    assert(memcmp(&bms_board_status_0_s, bms_board_status_0_d, sizeof(bms_BOARD_STATUS_0)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BOARD_STATUS_1 */
    printf("bms_BOARD_STATUS_1:\n");
    uint8_t* buffer_bms_board_status_1 = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS_1));
    
    bms_BOARD_STATUS_1 bms_board_status_1_s = { {118}, 117 };
    serialize_bms_BOARD_STATUS_1(buffer_bms_board_status_1, bms_board_status_1_s.errors, bms_board_status_1_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_1_s.errors[0], (long long int)bms_board_status_1_s.balancing_status);
    
    bms_BOARD_STATUS_1* bms_board_status_1_d = (bms_BOARD_STATUS_1*)malloc(sizeof(bms_BOARD_STATUS_1));
    deserialize_bms_BOARD_STATUS_1(buffer_bms_board_status_1, bms_board_status_1_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_1_d->errors[0], (long long int)bms_board_status_1_d->balancing_status);
    
    assert(memcmp(&bms_board_status_1_s, bms_board_status_1_d, sizeof(bms_BOARD_STATUS_1)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BOARD_STATUS_2 */
    printf("bms_BOARD_STATUS_2:\n");
    uint8_t* buffer_bms_board_status_2 = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS_2));
    
    bms_BOARD_STATUS_2 bms_board_status_2_s = { {69}, -88 };
    serialize_bms_BOARD_STATUS_2(buffer_bms_board_status_2, bms_board_status_2_s.errors, bms_board_status_2_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_2_s.errors[0], (long long int)bms_board_status_2_s.balancing_status);
    
    bms_BOARD_STATUS_2* bms_board_status_2_d = (bms_BOARD_STATUS_2*)malloc(sizeof(bms_BOARD_STATUS_2));
    deserialize_bms_BOARD_STATUS_2(buffer_bms_board_status_2, bms_board_status_2_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_2_d->errors[0], (long long int)bms_board_status_2_d->balancing_status);
    
    assert(memcmp(&bms_board_status_2_s, bms_board_status_2_d, sizeof(bms_BOARD_STATUS_2)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BOARD_STATUS_3 */
    printf("bms_BOARD_STATUS_3:\n");
    uint8_t* buffer_bms_board_status_3 = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS_3));
    
    bms_BOARD_STATUS_3 bms_board_status_3_s = { {179}, 53 };
    serialize_bms_BOARD_STATUS_3(buffer_bms_board_status_3, bms_board_status_3_s.errors, bms_board_status_3_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_3_s.errors[0], (long long int)bms_board_status_3_s.balancing_status);
    
    bms_BOARD_STATUS_3* bms_board_status_3_d = (bms_BOARD_STATUS_3*)malloc(sizeof(bms_BOARD_STATUS_3));
    deserialize_bms_BOARD_STATUS_3(buffer_bms_board_status_3, bms_board_status_3_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_3_d->errors[0], (long long int)bms_board_status_3_d->balancing_status);
    
    assert(memcmp(&bms_board_status_3_s, bms_board_status_3_d, sizeof(bms_BOARD_STATUS_3)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BOARD_STATUS_4 */
    printf("bms_BOARD_STATUS_4:\n");
    uint8_t* buffer_bms_board_status_4 = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS_4));
    
    bms_BOARD_STATUS_4 bms_board_status_4_s = { {35}, -21 };
    serialize_bms_BOARD_STATUS_4(buffer_bms_board_status_4, bms_board_status_4_s.errors, bms_board_status_4_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_4_s.errors[0], (long long int)bms_board_status_4_s.balancing_status);
    
    bms_BOARD_STATUS_4* bms_board_status_4_d = (bms_BOARD_STATUS_4*)malloc(sizeof(bms_BOARD_STATUS_4));
    deserialize_bms_BOARD_STATUS_4(buffer_bms_board_status_4, bms_board_status_4_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_4_d->errors[0], (long long int)bms_board_status_4_d->balancing_status);
    
    assert(memcmp(&bms_board_status_4_s, bms_board_status_4_d, sizeof(bms_BOARD_STATUS_4)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BOARD_STATUS_5 */
    printf("bms_BOARD_STATUS_5:\n");
    uint8_t* buffer_bms_board_status_5 = (uint8_t*)malloc(sizeof(bms_BOARD_STATUS_5));
    
    bms_BOARD_STATUS_5 bms_board_status_5_s = { {42}, 54 };
    serialize_bms_BOARD_STATUS_5(buffer_bms_board_status_5, bms_board_status_5_s.errors, bms_board_status_5_s.balancing_status);
    printf("\tSerialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_5_s.errors[0], (long long int)bms_board_status_5_s.balancing_status);
    
    bms_BOARD_STATUS_5* bms_board_status_5_d = (bms_BOARD_STATUS_5*)malloc(sizeof(bms_BOARD_STATUS_5));
    deserialize_bms_BOARD_STATUS_5(buffer_bms_board_status_5, bms_board_status_5_d);
    printf("\tDeserialized\n\t%hhx %lld\n", (long long unsigned int)bms_board_status_5_d->errors[0], (long long int)bms_board_status_5_d->balancing_status);
    
    assert(memcmp(&bms_board_status_5_s, bms_board_status_5_d, sizeof(bms_BOARD_STATUS_5)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS_0 */
    printf("bms_TEMP_STATS_0:\n");
    uint8_t* buffer_bms_temp_stats_0 = (uint8_t*)malloc(sizeof(bms_TEMP_STATS_0));
    
    bms_TEMP_STATS_0 bms_temp_stats_0_s = { 94.0, 238.0, 65.0, 52.0, 55.0, 178.0, 105.0 };
    serialize_bms_TEMP_STATS_0(buffer_bms_temp_stats_0, bms_temp_stats_0_s.start_index, bms_temp_stats_0_s.temp0, bms_temp_stats_0_s.temp1, bms_temp_stats_0_s.temp2, bms_temp_stats_0_s.temp3, bms_temp_stats_0_s.temp4, bms_temp_stats_0_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_0_s.start_index, (long long unsigned int)bms_temp_stats_0_s.temp0, (long long unsigned int)bms_temp_stats_0_s.temp1, (long long unsigned int)bms_temp_stats_0_s.temp2, (long long unsigned int)bms_temp_stats_0_s.temp3, (long long unsigned int)bms_temp_stats_0_s.temp4, (long long unsigned int)bms_temp_stats_0_s.temp5);
    
    bms_TEMP_STATS_0* bms_temp_stats_0_d = (bms_TEMP_STATS_0*)malloc(sizeof(bms_TEMP_STATS_0));
    deserialize_bms_TEMP_STATS_0(buffer_bms_temp_stats_0, bms_temp_stats_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_0_d->start_index, (long long unsigned int)bms_temp_stats_0_d->temp0, (long long unsigned int)bms_temp_stats_0_d->temp1, (long long unsigned int)bms_temp_stats_0_d->temp2, (long long unsigned int)bms_temp_stats_0_d->temp3, (long long unsigned int)bms_temp_stats_0_d->temp4, (long long unsigned int)bms_temp_stats_0_d->temp5);
    
    assert(memcmp(&bms_temp_stats_0_s, bms_temp_stats_0_d, sizeof(bms_TEMP_STATS_0)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS_1 */
    printf("bms_TEMP_STATS_1:\n");
    uint8_t* buffer_bms_temp_stats_1 = (uint8_t*)malloc(sizeof(bms_TEMP_STATS_1));
    
    bms_TEMP_STATS_1 bms_temp_stats_1_s = { 113.0, 105.0, 69.0, 58.0, 29.0, 183.0, 2.0 };
    serialize_bms_TEMP_STATS_1(buffer_bms_temp_stats_1, bms_temp_stats_1_s.start_index, bms_temp_stats_1_s.temp0, bms_temp_stats_1_s.temp1, bms_temp_stats_1_s.temp2, bms_temp_stats_1_s.temp3, bms_temp_stats_1_s.temp4, bms_temp_stats_1_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_1_s.start_index, (long long unsigned int)bms_temp_stats_1_s.temp0, (long long unsigned int)bms_temp_stats_1_s.temp1, (long long unsigned int)bms_temp_stats_1_s.temp2, (long long unsigned int)bms_temp_stats_1_s.temp3, (long long unsigned int)bms_temp_stats_1_s.temp4, (long long unsigned int)bms_temp_stats_1_s.temp5);
    
    bms_TEMP_STATS_1* bms_temp_stats_1_d = (bms_TEMP_STATS_1*)malloc(sizeof(bms_TEMP_STATS_1));
    deserialize_bms_TEMP_STATS_1(buffer_bms_temp_stats_1, bms_temp_stats_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_1_d->start_index, (long long unsigned int)bms_temp_stats_1_d->temp0, (long long unsigned int)bms_temp_stats_1_d->temp1, (long long unsigned int)bms_temp_stats_1_d->temp2, (long long unsigned int)bms_temp_stats_1_d->temp3, (long long unsigned int)bms_temp_stats_1_d->temp4, (long long unsigned int)bms_temp_stats_1_d->temp5);
    
    assert(memcmp(&bms_temp_stats_1_s, bms_temp_stats_1_d, sizeof(bms_TEMP_STATS_1)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS_2 */
    printf("bms_TEMP_STATS_2:\n");
    uint8_t* buffer_bms_temp_stats_2 = (uint8_t*)malloc(sizeof(bms_TEMP_STATS_2));
    
    bms_TEMP_STATS_2 bms_temp_stats_2_s = { 222.0, 202.0, 248.0, 208.0, 63.0, 21.0, 160.0 };
    serialize_bms_TEMP_STATS_2(buffer_bms_temp_stats_2, bms_temp_stats_2_s.start_index, bms_temp_stats_2_s.temp0, bms_temp_stats_2_s.temp1, bms_temp_stats_2_s.temp2, bms_temp_stats_2_s.temp3, bms_temp_stats_2_s.temp4, bms_temp_stats_2_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_2_s.start_index, (long long unsigned int)bms_temp_stats_2_s.temp0, (long long unsigned int)bms_temp_stats_2_s.temp1, (long long unsigned int)bms_temp_stats_2_s.temp2, (long long unsigned int)bms_temp_stats_2_s.temp3, (long long unsigned int)bms_temp_stats_2_s.temp4, (long long unsigned int)bms_temp_stats_2_s.temp5);
    
    bms_TEMP_STATS_2* bms_temp_stats_2_d = (bms_TEMP_STATS_2*)malloc(sizeof(bms_TEMP_STATS_2));
    deserialize_bms_TEMP_STATS_2(buffer_bms_temp_stats_2, bms_temp_stats_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_2_d->start_index, (long long unsigned int)bms_temp_stats_2_d->temp0, (long long unsigned int)bms_temp_stats_2_d->temp1, (long long unsigned int)bms_temp_stats_2_d->temp2, (long long unsigned int)bms_temp_stats_2_d->temp3, (long long unsigned int)bms_temp_stats_2_d->temp4, (long long unsigned int)bms_temp_stats_2_d->temp5);
    
    assert(memcmp(&bms_temp_stats_2_s, bms_temp_stats_2_d, sizeof(bms_TEMP_STATS_2)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS_3 */
    printf("bms_TEMP_STATS_3:\n");
    uint8_t* buffer_bms_temp_stats_3 = (uint8_t*)malloc(sizeof(bms_TEMP_STATS_3));
    
    bms_TEMP_STATS_3 bms_temp_stats_3_s = { 153.0, 16.0, 192.0, 211.0, 32.0, 120.0, 90.0 };
    serialize_bms_TEMP_STATS_3(buffer_bms_temp_stats_3, bms_temp_stats_3_s.start_index, bms_temp_stats_3_s.temp0, bms_temp_stats_3_s.temp1, bms_temp_stats_3_s.temp2, bms_temp_stats_3_s.temp3, bms_temp_stats_3_s.temp4, bms_temp_stats_3_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_3_s.start_index, (long long unsigned int)bms_temp_stats_3_s.temp0, (long long unsigned int)bms_temp_stats_3_s.temp1, (long long unsigned int)bms_temp_stats_3_s.temp2, (long long unsigned int)bms_temp_stats_3_s.temp3, (long long unsigned int)bms_temp_stats_3_s.temp4, (long long unsigned int)bms_temp_stats_3_s.temp5);
    
    bms_TEMP_STATS_3* bms_temp_stats_3_d = (bms_TEMP_STATS_3*)malloc(sizeof(bms_TEMP_STATS_3));
    deserialize_bms_TEMP_STATS_3(buffer_bms_temp_stats_3, bms_temp_stats_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_3_d->start_index, (long long unsigned int)bms_temp_stats_3_d->temp0, (long long unsigned int)bms_temp_stats_3_d->temp1, (long long unsigned int)bms_temp_stats_3_d->temp2, (long long unsigned int)bms_temp_stats_3_d->temp3, (long long unsigned int)bms_temp_stats_3_d->temp4, (long long unsigned int)bms_temp_stats_3_d->temp5);
    
    assert(memcmp(&bms_temp_stats_3_s, bms_temp_stats_3_d, sizeof(bms_TEMP_STATS_3)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS_4 */
    printf("bms_TEMP_STATS_4:\n");
    uint8_t* buffer_bms_temp_stats_4 = (uint8_t*)malloc(sizeof(bms_TEMP_STATS_4));
    
    bms_TEMP_STATS_4 bms_temp_stats_4_s = { 15.0, 133.0, 176.0, 235.0, 110.0, 226.0, 229.0 };
    serialize_bms_TEMP_STATS_4(buffer_bms_temp_stats_4, bms_temp_stats_4_s.start_index, bms_temp_stats_4_s.temp0, bms_temp_stats_4_s.temp1, bms_temp_stats_4_s.temp2, bms_temp_stats_4_s.temp3, bms_temp_stats_4_s.temp4, bms_temp_stats_4_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_4_s.start_index, (long long unsigned int)bms_temp_stats_4_s.temp0, (long long unsigned int)bms_temp_stats_4_s.temp1, (long long unsigned int)bms_temp_stats_4_s.temp2, (long long unsigned int)bms_temp_stats_4_s.temp3, (long long unsigned int)bms_temp_stats_4_s.temp4, (long long unsigned int)bms_temp_stats_4_s.temp5);
    
    bms_TEMP_STATS_4* bms_temp_stats_4_d = (bms_TEMP_STATS_4*)malloc(sizeof(bms_TEMP_STATS_4));
    deserialize_bms_TEMP_STATS_4(buffer_bms_temp_stats_4, bms_temp_stats_4_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_4_d->start_index, (long long unsigned int)bms_temp_stats_4_d->temp0, (long long unsigned int)bms_temp_stats_4_d->temp1, (long long unsigned int)bms_temp_stats_4_d->temp2, (long long unsigned int)bms_temp_stats_4_d->temp3, (long long unsigned int)bms_temp_stats_4_d->temp4, (long long unsigned int)bms_temp_stats_4_d->temp5);
    
    assert(memcmp(&bms_temp_stats_4_s, bms_temp_stats_4_d, sizeof(bms_TEMP_STATS_4)) == 0);
    puts("SUCCESS!\n");
        

/* bms_TEMP_STATS_5 */
    printf("bms_TEMP_STATS_5:\n");
    uint8_t* buffer_bms_temp_stats_5 = (uint8_t*)malloc(sizeof(bms_TEMP_STATS_5));
    
    bms_TEMP_STATS_5 bms_temp_stats_5_s = { 9.0, 58.0, 64.0, 202.0, 142.0, 75.0, 158.0 };
    serialize_bms_TEMP_STATS_5(buffer_bms_temp_stats_5, bms_temp_stats_5_s.start_index, bms_temp_stats_5_s.temp0, bms_temp_stats_5_s.temp1, bms_temp_stats_5_s.temp2, bms_temp_stats_5_s.temp3, bms_temp_stats_5_s.temp4, bms_temp_stats_5_s.temp5);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_5_s.start_index, (long long unsigned int)bms_temp_stats_5_s.temp0, (long long unsigned int)bms_temp_stats_5_s.temp1, (long long unsigned int)bms_temp_stats_5_s.temp2, (long long unsigned int)bms_temp_stats_5_s.temp3, (long long unsigned int)bms_temp_stats_5_s.temp4, (long long unsigned int)bms_temp_stats_5_s.temp5);
    
    bms_TEMP_STATS_5* bms_temp_stats_5_d = (bms_TEMP_STATS_5*)malloc(sizeof(bms_TEMP_STATS_5));
    deserialize_bms_TEMP_STATS_5(buffer_bms_temp_stats_5, bms_temp_stats_5_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bms_temp_stats_5_d->start_index, (long long unsigned int)bms_temp_stats_5_d->temp0, (long long unsigned int)bms_temp_stats_5_d->temp1, (long long unsigned int)bms_temp_stats_5_d->temp2, (long long unsigned int)bms_temp_stats_5_d->temp3, (long long unsigned int)bms_temp_stats_5_d->temp4, (long long unsigned int)bms_temp_stats_5_d->temp5);
    
    assert(memcmp(&bms_temp_stats_5_s, bms_temp_stats_5_d, sizeof(bms_TEMP_STATS_5)) == 0);
    puts("SUCCESS!\n");
        

/* bms_BALANCING */
    printf("bms_BALANCING:\n");
    uint8_t* buffer_bms_balancing = (uint8_t*)malloc(sizeof(bms_BALANCING));
    
    bms_BALANCING bms_balancing_s = { 158.0, {185, 191, 36} };
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
    
    bms_MASTER_SYNC bms_master_sync_s = { 732234110.0 };
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
    
    bms_VOLTAGES_0 bms_voltages_0_s = { 141.0, 0, 23686.0, 17014.0, 15365.0 };
    serialize_bms_VOLTAGES_0(buffer_bms_voltages_0, bms_voltages_0_s.start_index, bms_voltages_0_s.voltage0, bms_voltages_0_s.voltage1, bms_voltages_0_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_0_s.start_index, (long long unsigned int)bms_voltages_0_s.voltage0, (long long unsigned int)bms_voltages_0_s.voltage1);
    
    bms_VOLTAGES_0* bms_voltages_0_d = (bms_VOLTAGES_0*)malloc(sizeof(bms_VOLTAGES_0));
    deserialize_bms_VOLTAGES_0(buffer_bms_voltages_0, bms_voltages_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_0_d->start_index, (long long unsigned int)bms_voltages_0_d->voltage0, (long long unsigned int)bms_voltages_0_d->voltage1);
    
    assert(memcmp(&bms_voltages_0_s, bms_voltages_0_d, sizeof(bms_VOLTAGES_0)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_1 */
    printf("bms_VOLTAGES_1:\n");
    uint8_t* buffer_bms_voltages_1 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_1));
    
    bms_VOLTAGES_1 bms_voltages_1_s = { 147.0, 0, 4654.0, 32339.0, 58729.0 };
    serialize_bms_VOLTAGES_1(buffer_bms_voltages_1, bms_voltages_1_s.start_index, bms_voltages_1_s.voltage0, bms_voltages_1_s.voltage1, bms_voltages_1_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_1_s.start_index, (long long unsigned int)bms_voltages_1_s.voltage0, (long long unsigned int)bms_voltages_1_s.voltage1);
    
    bms_VOLTAGES_1* bms_voltages_1_d = (bms_VOLTAGES_1*)malloc(sizeof(bms_VOLTAGES_1));
    deserialize_bms_VOLTAGES_1(buffer_bms_voltages_1, bms_voltages_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_1_d->start_index, (long long unsigned int)bms_voltages_1_d->voltage0, (long long unsigned int)bms_voltages_1_d->voltage1);
    
    assert(memcmp(&bms_voltages_1_s, bms_voltages_1_d, sizeof(bms_VOLTAGES_1)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_2 */
    printf("bms_VOLTAGES_2:\n");
    uint8_t* buffer_bms_voltages_2 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_2));
    
    bms_VOLTAGES_2 bms_voltages_2_s = { 177.0, 0, 37992.0, 20550.0, 61758.0 };
    serialize_bms_VOLTAGES_2(buffer_bms_voltages_2, bms_voltages_2_s.start_index, bms_voltages_2_s.voltage0, bms_voltages_2_s.voltage1, bms_voltages_2_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_2_s.start_index, (long long unsigned int)bms_voltages_2_s.voltage0, (long long unsigned int)bms_voltages_2_s.voltage1);
    
    bms_VOLTAGES_2* bms_voltages_2_d = (bms_VOLTAGES_2*)malloc(sizeof(bms_VOLTAGES_2));
    deserialize_bms_VOLTAGES_2(buffer_bms_voltages_2, bms_voltages_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_2_d->start_index, (long long unsigned int)bms_voltages_2_d->voltage0, (long long unsigned int)bms_voltages_2_d->voltage1);
    
    assert(memcmp(&bms_voltages_2_s, bms_voltages_2_d, sizeof(bms_VOLTAGES_2)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_3 */
    printf("bms_VOLTAGES_3:\n");
    uint8_t* buffer_bms_voltages_3 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_3));
    
    bms_VOLTAGES_3 bms_voltages_3_s = { 142.0, 0, 64057.0, 59343.0, 54837.0 };
    serialize_bms_VOLTAGES_3(buffer_bms_voltages_3, bms_voltages_3_s.start_index, bms_voltages_3_s.voltage0, bms_voltages_3_s.voltage1, bms_voltages_3_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_3_s.start_index, (long long unsigned int)bms_voltages_3_s.voltage0, (long long unsigned int)bms_voltages_3_s.voltage1);
    
    bms_VOLTAGES_3* bms_voltages_3_d = (bms_VOLTAGES_3*)malloc(sizeof(bms_VOLTAGES_3));
    deserialize_bms_VOLTAGES_3(buffer_bms_voltages_3, bms_voltages_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_3_d->start_index, (long long unsigned int)bms_voltages_3_d->voltage0, (long long unsigned int)bms_voltages_3_d->voltage1);
    
    assert(memcmp(&bms_voltages_3_s, bms_voltages_3_d, sizeof(bms_VOLTAGES_3)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_4 */
    printf("bms_VOLTAGES_4:\n");
    uint8_t* buffer_bms_voltages_4 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_4));
    
    bms_VOLTAGES_4 bms_voltages_4_s = { 91.0, 0, 5401.0, 38536.0, 23597.0 };
    serialize_bms_VOLTAGES_4(buffer_bms_voltages_4, bms_voltages_4_s.start_index, bms_voltages_4_s.voltage0, bms_voltages_4_s.voltage1, bms_voltages_4_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_4_s.start_index, (long long unsigned int)bms_voltages_4_s.voltage0, (long long unsigned int)bms_voltages_4_s.voltage1);
    
    bms_VOLTAGES_4* bms_voltages_4_d = (bms_VOLTAGES_4*)malloc(sizeof(bms_VOLTAGES_4));
    deserialize_bms_VOLTAGES_4(buffer_bms_voltages_4, bms_voltages_4_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_4_d->start_index, (long long unsigned int)bms_voltages_4_d->voltage0, (long long unsigned int)bms_voltages_4_d->voltage1);
    
    assert(memcmp(&bms_voltages_4_s, bms_voltages_4_d, sizeof(bms_VOLTAGES_4)) == 0);
    puts("SUCCESS!\n");
        

/* bms_VOLTAGES_5 */
    printf("bms_VOLTAGES_5:\n");
    uint8_t* buffer_bms_voltages_5 = (uint8_t*)malloc(sizeof(bms_VOLTAGES_5));
    
    bms_VOLTAGES_5 bms_voltages_5_s = { 55.0, 0, 56352.0, 27182.0, 12058.0 };
    serialize_bms_VOLTAGES_5(buffer_bms_voltages_5, bms_voltages_5_s.start_index, bms_voltages_5_s.voltage0, bms_voltages_5_s.voltage1, bms_voltages_5_s.voltage2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_5_s.start_index, (long long unsigned int)bms_voltages_5_s.voltage0, (long long unsigned int)bms_voltages_5_s.voltage1);
    
    bms_VOLTAGES_5* bms_voltages_5_d = (bms_VOLTAGES_5*)malloc(sizeof(bms_VOLTAGES_5));
    deserialize_bms_VOLTAGES_5(buffer_bms_voltages_5, bms_voltages_5_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bms_voltages_5_d->start_index, (long long unsigned int)bms_voltages_5_d->voltage0, (long long unsigned int)bms_voltages_5_d->voltage1);
    
    assert(memcmp(&bms_voltages_5_s, bms_voltages_5_d, sizeof(bms_VOLTAGES_5)) == 0);
    puts("SUCCESS!\n");
        
}