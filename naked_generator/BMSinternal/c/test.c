#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "BMSinternal.h"

int main() {

/* BMSinternal_VOLTAGES_CB0_0 */
    printf("BMSinternal_VOLTAGES_CB0_0:\n");
    uint8_t* buffer_bmsinternal_voltages_cb0_0 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB0_0));
    
    BMSinternal_VOLTAGES_CB0_0 bmsinternal_voltages_cb0_0_s = { 14340, 17620, 54339, 15141 };
    serialize_BMSinternal_VOLTAGES_CB0_0(buffer_bmsinternal_voltages_cb0_0, bmsinternal_voltages_cb0_0_s.voltage0, bmsinternal_voltages_cb0_0_s.voltage1, bmsinternal_voltages_cb0_0_s.voltage2, bmsinternal_voltages_cb0_0_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb0_0_s.voltage0, (long long unsigned int)bmsinternal_voltages_cb0_0_s.voltage1, (long long unsigned int)bmsinternal_voltages_cb0_0_s.voltage2, (long long unsigned int)bmsinternal_voltages_cb0_0_s.voltage3);
    
    BMSinternal_VOLTAGES_CB0_0* bmsinternal_voltages_cb0_0_d = (BMSinternal_VOLTAGES_CB0_0*)malloc(sizeof(BMSinternal_VOLTAGES_CB0_0));
    deserialize_BMSinternal_VOLTAGES_CB0_0(buffer_bmsinternal_voltages_cb0_0, bmsinternal_voltages_cb0_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb0_0_d->voltage0, (long long unsigned int)bmsinternal_voltages_cb0_0_d->voltage1, (long long unsigned int)bmsinternal_voltages_cb0_0_d->voltage2, (long long unsigned int)bmsinternal_voltages_cb0_0_d->voltage3);
    
    assert(memcmp(&bmsinternal_voltages_cb0_0_s, bmsinternal_voltages_cb0_0_d, sizeof(BMSinternal_VOLTAGES_CB0_0)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB0_1 */
    printf("BMSinternal_VOLTAGES_CB0_1:\n");
    uint8_t* buffer_bmsinternal_voltages_cb0_1 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB0_1));
    
    BMSinternal_VOLTAGES_CB0_1 bmsinternal_voltages_cb0_1_s = { 62888, 8870, 10483, 22990 };
    serialize_BMSinternal_VOLTAGES_CB0_1(buffer_bmsinternal_voltages_cb0_1, bmsinternal_voltages_cb0_1_s.voltage4, bmsinternal_voltages_cb0_1_s.voltage5, bmsinternal_voltages_cb0_1_s.voltage6, bmsinternal_voltages_cb0_1_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb0_1_s.voltage4, (long long unsigned int)bmsinternal_voltages_cb0_1_s.voltage5, (long long unsigned int)bmsinternal_voltages_cb0_1_s.voltage6, (long long unsigned int)bmsinternal_voltages_cb0_1_s.voltage7);
    
    BMSinternal_VOLTAGES_CB0_1* bmsinternal_voltages_cb0_1_d = (BMSinternal_VOLTAGES_CB0_1*)malloc(sizeof(BMSinternal_VOLTAGES_CB0_1));
    deserialize_BMSinternal_VOLTAGES_CB0_1(buffer_bmsinternal_voltages_cb0_1, bmsinternal_voltages_cb0_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb0_1_d->voltage4, (long long unsigned int)bmsinternal_voltages_cb0_1_d->voltage5, (long long unsigned int)bmsinternal_voltages_cb0_1_d->voltage6, (long long unsigned int)bmsinternal_voltages_cb0_1_d->voltage7);
    
    assert(memcmp(&bmsinternal_voltages_cb0_1_s, bmsinternal_voltages_cb0_1_d, sizeof(BMSinternal_VOLTAGES_CB0_1)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB0_2 */
    printf("BMSinternal_VOLTAGES_CB0_2:\n");
    uint8_t* buffer_bmsinternal_voltages_cb0_2 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB0_2));
    
    BMSinternal_VOLTAGES_CB0_2 bmsinternal_voltages_cb0_2_s = { 46411, 54156, 4536, 27517 };
    serialize_BMSinternal_VOLTAGES_CB0_2(buffer_bmsinternal_voltages_cb0_2, bmsinternal_voltages_cb0_2_s.voltage8, bmsinternal_voltages_cb0_2_s.voltage9, bmsinternal_voltages_cb0_2_s.voltage10, bmsinternal_voltages_cb0_2_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb0_2_s.voltage8, (long long unsigned int)bmsinternal_voltages_cb0_2_s.voltage9, (long long unsigned int)bmsinternal_voltages_cb0_2_s.voltage10, (long long unsigned int)bmsinternal_voltages_cb0_2_s.voltage11);
    
    BMSinternal_VOLTAGES_CB0_2* bmsinternal_voltages_cb0_2_d = (BMSinternal_VOLTAGES_CB0_2*)malloc(sizeof(BMSinternal_VOLTAGES_CB0_2));
    deserialize_BMSinternal_VOLTAGES_CB0_2(buffer_bmsinternal_voltages_cb0_2, bmsinternal_voltages_cb0_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb0_2_d->voltage8, (long long unsigned int)bmsinternal_voltages_cb0_2_d->voltage9, (long long unsigned int)bmsinternal_voltages_cb0_2_d->voltage10, (long long unsigned int)bmsinternal_voltages_cb0_2_d->voltage11);
    
    assert(memcmp(&bmsinternal_voltages_cb0_2_s, bmsinternal_voltages_cb0_2_d, sizeof(BMSinternal_VOLTAGES_CB0_2)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB0_3 */
    printf("BMSinternal_VOLTAGES_CB0_3:\n");
    uint8_t* buffer_bmsinternal_voltages_cb0_3 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB0_3));
    
    BMSinternal_VOLTAGES_CB0_3 bmsinternal_voltages_cb0_3_s = { 5484, 46744, 24104, 61123 };
    serialize_BMSinternal_VOLTAGES_CB0_3(buffer_bmsinternal_voltages_cb0_3, bmsinternal_voltages_cb0_3_s.voltage12, bmsinternal_voltages_cb0_3_s.voltage13, bmsinternal_voltages_cb0_3_s.voltage14, bmsinternal_voltages_cb0_3_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb0_3_s.voltage12, (long long unsigned int)bmsinternal_voltages_cb0_3_s.voltage13, (long long unsigned int)bmsinternal_voltages_cb0_3_s.voltage14, (long long unsigned int)bmsinternal_voltages_cb0_3_s.voltage15);
    
    BMSinternal_VOLTAGES_CB0_3* bmsinternal_voltages_cb0_3_d = (BMSinternal_VOLTAGES_CB0_3*)malloc(sizeof(BMSinternal_VOLTAGES_CB0_3));
    deserialize_BMSinternal_VOLTAGES_CB0_3(buffer_bmsinternal_voltages_cb0_3, bmsinternal_voltages_cb0_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb0_3_d->voltage12, (long long unsigned int)bmsinternal_voltages_cb0_3_d->voltage13, (long long unsigned int)bmsinternal_voltages_cb0_3_d->voltage14, (long long unsigned int)bmsinternal_voltages_cb0_3_d->voltage15);
    
    assert(memcmp(&bmsinternal_voltages_cb0_3_s, bmsinternal_voltages_cb0_3_d, sizeof(BMSinternal_VOLTAGES_CB0_3)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB0_4 */
    printf("BMSinternal_VOLTAGES_CB0_4:\n");
    uint8_t* buffer_bmsinternal_voltages_cb0_4 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB0_4));
    
    BMSinternal_VOLTAGES_CB0_4 bmsinternal_voltages_cb0_4_s = { 16664, 13437, 14273, 45750 };
    serialize_BMSinternal_VOLTAGES_CB0_4(buffer_bmsinternal_voltages_cb0_4, bmsinternal_voltages_cb0_4_s.voltage16, bmsinternal_voltages_cb0_4_s.voltage17, bmsinternal_voltages_cb0_4_s.max_voltage, bmsinternal_voltages_cb0_4_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb0_4_s.voltage16, (long long unsigned int)bmsinternal_voltages_cb0_4_s.voltage17, (long long unsigned int)bmsinternal_voltages_cb0_4_s.max_voltage, (long long unsigned int)bmsinternal_voltages_cb0_4_s.min_voltage);
    
    BMSinternal_VOLTAGES_CB0_4* bmsinternal_voltages_cb0_4_d = (BMSinternal_VOLTAGES_CB0_4*)malloc(sizeof(BMSinternal_VOLTAGES_CB0_4));
    deserialize_BMSinternal_VOLTAGES_CB0_4(buffer_bmsinternal_voltages_cb0_4, bmsinternal_voltages_cb0_4_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb0_4_d->voltage16, (long long unsigned int)bmsinternal_voltages_cb0_4_d->voltage17, (long long unsigned int)bmsinternal_voltages_cb0_4_d->max_voltage, (long long unsigned int)bmsinternal_voltages_cb0_4_d->min_voltage);
    
    assert(memcmp(&bmsinternal_voltages_cb0_4_s, bmsinternal_voltages_cb0_4_d, sizeof(BMSinternal_VOLTAGES_CB0_4)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB1_0 */
    printf("BMSinternal_VOLTAGES_CB1_0:\n");
    uint8_t* buffer_bmsinternal_voltages_cb1_0 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB1_0));
    
    BMSinternal_VOLTAGES_CB1_0 bmsinternal_voltages_cb1_0_s = { 27081, 29170, 26961, 17711 };
    serialize_BMSinternal_VOLTAGES_CB1_0(buffer_bmsinternal_voltages_cb1_0, bmsinternal_voltages_cb1_0_s.voltage0, bmsinternal_voltages_cb1_0_s.voltage1, bmsinternal_voltages_cb1_0_s.voltage2, bmsinternal_voltages_cb1_0_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb1_0_s.voltage0, (long long unsigned int)bmsinternal_voltages_cb1_0_s.voltage1, (long long unsigned int)bmsinternal_voltages_cb1_0_s.voltage2, (long long unsigned int)bmsinternal_voltages_cb1_0_s.voltage3);
    
    BMSinternal_VOLTAGES_CB1_0* bmsinternal_voltages_cb1_0_d = (BMSinternal_VOLTAGES_CB1_0*)malloc(sizeof(BMSinternal_VOLTAGES_CB1_0));
    deserialize_BMSinternal_VOLTAGES_CB1_0(buffer_bmsinternal_voltages_cb1_0, bmsinternal_voltages_cb1_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb1_0_d->voltage0, (long long unsigned int)bmsinternal_voltages_cb1_0_d->voltage1, (long long unsigned int)bmsinternal_voltages_cb1_0_d->voltage2, (long long unsigned int)bmsinternal_voltages_cb1_0_d->voltage3);
    
    assert(memcmp(&bmsinternal_voltages_cb1_0_s, bmsinternal_voltages_cb1_0_d, sizeof(BMSinternal_VOLTAGES_CB1_0)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB1_1 */
    printf("BMSinternal_VOLTAGES_CB1_1:\n");
    uint8_t* buffer_bmsinternal_voltages_cb1_1 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB1_1));
    
    BMSinternal_VOLTAGES_CB1_1 bmsinternal_voltages_cb1_1_s = { 14903, 7568, 47017, 567 };
    serialize_BMSinternal_VOLTAGES_CB1_1(buffer_bmsinternal_voltages_cb1_1, bmsinternal_voltages_cb1_1_s.voltage4, bmsinternal_voltages_cb1_1_s.voltage5, bmsinternal_voltages_cb1_1_s.voltage6, bmsinternal_voltages_cb1_1_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb1_1_s.voltage4, (long long unsigned int)bmsinternal_voltages_cb1_1_s.voltage5, (long long unsigned int)bmsinternal_voltages_cb1_1_s.voltage6, (long long unsigned int)bmsinternal_voltages_cb1_1_s.voltage7);
    
    BMSinternal_VOLTAGES_CB1_1* bmsinternal_voltages_cb1_1_d = (BMSinternal_VOLTAGES_CB1_1*)malloc(sizeof(BMSinternal_VOLTAGES_CB1_1));
    deserialize_BMSinternal_VOLTAGES_CB1_1(buffer_bmsinternal_voltages_cb1_1, bmsinternal_voltages_cb1_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb1_1_d->voltage4, (long long unsigned int)bmsinternal_voltages_cb1_1_d->voltage5, (long long unsigned int)bmsinternal_voltages_cb1_1_d->voltage6, (long long unsigned int)bmsinternal_voltages_cb1_1_d->voltage7);
    
    assert(memcmp(&bmsinternal_voltages_cb1_1_s, bmsinternal_voltages_cb1_1_d, sizeof(BMSinternal_VOLTAGES_CB1_1)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB1_2 */
    printf("BMSinternal_VOLTAGES_CB1_2:\n");
    uint8_t* buffer_bmsinternal_voltages_cb1_2 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB1_2));
    
    BMSinternal_VOLTAGES_CB1_2 bmsinternal_voltages_cb1_2_s = { 57031, 51896, 63629, 53376 };
    serialize_BMSinternal_VOLTAGES_CB1_2(buffer_bmsinternal_voltages_cb1_2, bmsinternal_voltages_cb1_2_s.voltage8, bmsinternal_voltages_cb1_2_s.voltage9, bmsinternal_voltages_cb1_2_s.voltage10, bmsinternal_voltages_cb1_2_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb1_2_s.voltage8, (long long unsigned int)bmsinternal_voltages_cb1_2_s.voltage9, (long long unsigned int)bmsinternal_voltages_cb1_2_s.voltage10, (long long unsigned int)bmsinternal_voltages_cb1_2_s.voltage11);
    
    BMSinternal_VOLTAGES_CB1_2* bmsinternal_voltages_cb1_2_d = (BMSinternal_VOLTAGES_CB1_2*)malloc(sizeof(BMSinternal_VOLTAGES_CB1_2));
    deserialize_BMSinternal_VOLTAGES_CB1_2(buffer_bmsinternal_voltages_cb1_2, bmsinternal_voltages_cb1_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb1_2_d->voltage8, (long long unsigned int)bmsinternal_voltages_cb1_2_d->voltage9, (long long unsigned int)bmsinternal_voltages_cb1_2_d->voltage10, (long long unsigned int)bmsinternal_voltages_cb1_2_d->voltage11);
    
    assert(memcmp(&bmsinternal_voltages_cb1_2_s, bmsinternal_voltages_cb1_2_d, sizeof(BMSinternal_VOLTAGES_CB1_2)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB1_3 */
    printf("BMSinternal_VOLTAGES_CB1_3:\n");
    uint8_t* buffer_bmsinternal_voltages_cb1_3 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB1_3));
    
    BMSinternal_VOLTAGES_CB1_3 bmsinternal_voltages_cb1_3_s = { 16185, 5500, 41165, 39193 };
    serialize_BMSinternal_VOLTAGES_CB1_3(buffer_bmsinternal_voltages_cb1_3, bmsinternal_voltages_cb1_3_s.voltage12, bmsinternal_voltages_cb1_3_s.voltage13, bmsinternal_voltages_cb1_3_s.voltage14, bmsinternal_voltages_cb1_3_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb1_3_s.voltage12, (long long unsigned int)bmsinternal_voltages_cb1_3_s.voltage13, (long long unsigned int)bmsinternal_voltages_cb1_3_s.voltage14, (long long unsigned int)bmsinternal_voltages_cb1_3_s.voltage15);
    
    BMSinternal_VOLTAGES_CB1_3* bmsinternal_voltages_cb1_3_d = (BMSinternal_VOLTAGES_CB1_3*)malloc(sizeof(BMSinternal_VOLTAGES_CB1_3));
    deserialize_BMSinternal_VOLTAGES_CB1_3(buffer_bmsinternal_voltages_cb1_3, bmsinternal_voltages_cb1_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb1_3_d->voltage12, (long long unsigned int)bmsinternal_voltages_cb1_3_d->voltage13, (long long unsigned int)bmsinternal_voltages_cb1_3_d->voltage14, (long long unsigned int)bmsinternal_voltages_cb1_3_d->voltage15);
    
    assert(memcmp(&bmsinternal_voltages_cb1_3_s, bmsinternal_voltages_cb1_3_d, sizeof(BMSinternal_VOLTAGES_CB1_3)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB1_4 */
    printf("BMSinternal_VOLTAGES_CB1_4:\n");
    uint8_t* buffer_bmsinternal_voltages_cb1_4 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB1_4));
    
    BMSinternal_VOLTAGES_CB1_4 bmsinternal_voltages_cb1_4_s = { 4325, 49251, 54201, 8210 };
    serialize_BMSinternal_VOLTAGES_CB1_4(buffer_bmsinternal_voltages_cb1_4, bmsinternal_voltages_cb1_4_s.voltage16, bmsinternal_voltages_cb1_4_s.voltage17, bmsinternal_voltages_cb1_4_s.max_voltage, bmsinternal_voltages_cb1_4_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb1_4_s.voltage16, (long long unsigned int)bmsinternal_voltages_cb1_4_s.voltage17, (long long unsigned int)bmsinternal_voltages_cb1_4_s.max_voltage, (long long unsigned int)bmsinternal_voltages_cb1_4_s.min_voltage);
    
    BMSinternal_VOLTAGES_CB1_4* bmsinternal_voltages_cb1_4_d = (BMSinternal_VOLTAGES_CB1_4*)malloc(sizeof(BMSinternal_VOLTAGES_CB1_4));
    deserialize_BMSinternal_VOLTAGES_CB1_4(buffer_bmsinternal_voltages_cb1_4, bmsinternal_voltages_cb1_4_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb1_4_d->voltage16, (long long unsigned int)bmsinternal_voltages_cb1_4_d->voltage17, (long long unsigned int)bmsinternal_voltages_cb1_4_d->max_voltage, (long long unsigned int)bmsinternal_voltages_cb1_4_d->min_voltage);
    
    assert(memcmp(&bmsinternal_voltages_cb1_4_s, bmsinternal_voltages_cb1_4_d, sizeof(BMSinternal_VOLTAGES_CB1_4)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB2_0 */
    printf("BMSinternal_VOLTAGES_CB2_0:\n");
    uint8_t* buffer_bmsinternal_voltages_cb2_0 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB2_0));
    
    BMSinternal_VOLTAGES_CB2_0 bmsinternal_voltages_cb2_0_s = { 30820, 23273, 4000, 34194 };
    serialize_BMSinternal_VOLTAGES_CB2_0(buffer_bmsinternal_voltages_cb2_0, bmsinternal_voltages_cb2_0_s.voltage0, bmsinternal_voltages_cb2_0_s.voltage1, bmsinternal_voltages_cb2_0_s.voltage2, bmsinternal_voltages_cb2_0_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb2_0_s.voltage0, (long long unsigned int)bmsinternal_voltages_cb2_0_s.voltage1, (long long unsigned int)bmsinternal_voltages_cb2_0_s.voltage2, (long long unsigned int)bmsinternal_voltages_cb2_0_s.voltage3);
    
    BMSinternal_VOLTAGES_CB2_0* bmsinternal_voltages_cb2_0_d = (BMSinternal_VOLTAGES_CB2_0*)malloc(sizeof(BMSinternal_VOLTAGES_CB2_0));
    deserialize_BMSinternal_VOLTAGES_CB2_0(buffer_bmsinternal_voltages_cb2_0, bmsinternal_voltages_cb2_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb2_0_d->voltage0, (long long unsigned int)bmsinternal_voltages_cb2_0_d->voltage1, (long long unsigned int)bmsinternal_voltages_cb2_0_d->voltage2, (long long unsigned int)bmsinternal_voltages_cb2_0_d->voltage3);
    
    assert(memcmp(&bmsinternal_voltages_cb2_0_s, bmsinternal_voltages_cb2_0_d, sizeof(BMSinternal_VOLTAGES_CB2_0)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB2_1 */
    printf("BMSinternal_VOLTAGES_CB2_1:\n");
    uint8_t* buffer_bmsinternal_voltages_cb2_1 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB2_1));
    
    BMSinternal_VOLTAGES_CB2_1 bmsinternal_voltages_cb2_1_s = { 45128, 60174, 28166, 57937 };
    serialize_BMSinternal_VOLTAGES_CB2_1(buffer_bmsinternal_voltages_cb2_1, bmsinternal_voltages_cb2_1_s.voltage4, bmsinternal_voltages_cb2_1_s.voltage5, bmsinternal_voltages_cb2_1_s.voltage6, bmsinternal_voltages_cb2_1_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb2_1_s.voltage4, (long long unsigned int)bmsinternal_voltages_cb2_1_s.voltage5, (long long unsigned int)bmsinternal_voltages_cb2_1_s.voltage6, (long long unsigned int)bmsinternal_voltages_cb2_1_s.voltage7);
    
    BMSinternal_VOLTAGES_CB2_1* bmsinternal_voltages_cb2_1_d = (BMSinternal_VOLTAGES_CB2_1*)malloc(sizeof(BMSinternal_VOLTAGES_CB2_1));
    deserialize_BMSinternal_VOLTAGES_CB2_1(buffer_bmsinternal_voltages_cb2_1, bmsinternal_voltages_cb2_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb2_1_d->voltage4, (long long unsigned int)bmsinternal_voltages_cb2_1_d->voltage5, (long long unsigned int)bmsinternal_voltages_cb2_1_d->voltage6, (long long unsigned int)bmsinternal_voltages_cb2_1_d->voltage7);
    
    assert(memcmp(&bmsinternal_voltages_cb2_1_s, bmsinternal_voltages_cb2_1_d, sizeof(BMSinternal_VOLTAGES_CB2_1)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB2_2 */
    printf("BMSinternal_VOLTAGES_CB2_2:\n");
    uint8_t* buffer_bmsinternal_voltages_cb2_2 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB2_2));
    
    BMSinternal_VOLTAGES_CB2_2 bmsinternal_voltages_cb2_2_s = { 58804, 2386, 15006, 16534 };
    serialize_BMSinternal_VOLTAGES_CB2_2(buffer_bmsinternal_voltages_cb2_2, bmsinternal_voltages_cb2_2_s.voltage8, bmsinternal_voltages_cb2_2_s.voltage9, bmsinternal_voltages_cb2_2_s.voltage10, bmsinternal_voltages_cb2_2_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb2_2_s.voltage8, (long long unsigned int)bmsinternal_voltages_cb2_2_s.voltage9, (long long unsigned int)bmsinternal_voltages_cb2_2_s.voltage10, (long long unsigned int)bmsinternal_voltages_cb2_2_s.voltage11);
    
    BMSinternal_VOLTAGES_CB2_2* bmsinternal_voltages_cb2_2_d = (BMSinternal_VOLTAGES_CB2_2*)malloc(sizeof(BMSinternal_VOLTAGES_CB2_2));
    deserialize_BMSinternal_VOLTAGES_CB2_2(buffer_bmsinternal_voltages_cb2_2, bmsinternal_voltages_cb2_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb2_2_d->voltage8, (long long unsigned int)bmsinternal_voltages_cb2_2_d->voltage9, (long long unsigned int)bmsinternal_voltages_cb2_2_d->voltage10, (long long unsigned int)bmsinternal_voltages_cb2_2_d->voltage11);
    
    assert(memcmp(&bmsinternal_voltages_cb2_2_s, bmsinternal_voltages_cb2_2_d, sizeof(BMSinternal_VOLTAGES_CB2_2)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB2_3 */
    printf("BMSinternal_VOLTAGES_CB2_3:\n");
    uint8_t* buffer_bmsinternal_voltages_cb2_3 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB2_3));
    
    BMSinternal_VOLTAGES_CB2_3 bmsinternal_voltages_cb2_3_s = { 51734, 36479, 19408, 40485 };
    serialize_BMSinternal_VOLTAGES_CB2_3(buffer_bmsinternal_voltages_cb2_3, bmsinternal_voltages_cb2_3_s.voltage12, bmsinternal_voltages_cb2_3_s.voltage13, bmsinternal_voltages_cb2_3_s.voltage14, bmsinternal_voltages_cb2_3_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb2_3_s.voltage12, (long long unsigned int)bmsinternal_voltages_cb2_3_s.voltage13, (long long unsigned int)bmsinternal_voltages_cb2_3_s.voltage14, (long long unsigned int)bmsinternal_voltages_cb2_3_s.voltage15);
    
    BMSinternal_VOLTAGES_CB2_3* bmsinternal_voltages_cb2_3_d = (BMSinternal_VOLTAGES_CB2_3*)malloc(sizeof(BMSinternal_VOLTAGES_CB2_3));
    deserialize_BMSinternal_VOLTAGES_CB2_3(buffer_bmsinternal_voltages_cb2_3, bmsinternal_voltages_cb2_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb2_3_d->voltage12, (long long unsigned int)bmsinternal_voltages_cb2_3_d->voltage13, (long long unsigned int)bmsinternal_voltages_cb2_3_d->voltage14, (long long unsigned int)bmsinternal_voltages_cb2_3_d->voltage15);
    
    assert(memcmp(&bmsinternal_voltages_cb2_3_s, bmsinternal_voltages_cb2_3_d, sizeof(BMSinternal_VOLTAGES_CB2_3)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB2_4 */
    printf("BMSinternal_VOLTAGES_CB2_4:\n");
    uint8_t* buffer_bmsinternal_voltages_cb2_4 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB2_4));
    
    BMSinternal_VOLTAGES_CB2_4 bmsinternal_voltages_cb2_4_s = { 40511, 52025, 37652, 23803 };
    serialize_BMSinternal_VOLTAGES_CB2_4(buffer_bmsinternal_voltages_cb2_4, bmsinternal_voltages_cb2_4_s.voltage16, bmsinternal_voltages_cb2_4_s.voltage17, bmsinternal_voltages_cb2_4_s.max_voltage, bmsinternal_voltages_cb2_4_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb2_4_s.voltage16, (long long unsigned int)bmsinternal_voltages_cb2_4_s.voltage17, (long long unsigned int)bmsinternal_voltages_cb2_4_s.max_voltage, (long long unsigned int)bmsinternal_voltages_cb2_4_s.min_voltage);
    
    BMSinternal_VOLTAGES_CB2_4* bmsinternal_voltages_cb2_4_d = (BMSinternal_VOLTAGES_CB2_4*)malloc(sizeof(BMSinternal_VOLTAGES_CB2_4));
    deserialize_BMSinternal_VOLTAGES_CB2_4(buffer_bmsinternal_voltages_cb2_4, bmsinternal_voltages_cb2_4_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb2_4_d->voltage16, (long long unsigned int)bmsinternal_voltages_cb2_4_d->voltage17, (long long unsigned int)bmsinternal_voltages_cb2_4_d->max_voltage, (long long unsigned int)bmsinternal_voltages_cb2_4_d->min_voltage);
    
    assert(memcmp(&bmsinternal_voltages_cb2_4_s, bmsinternal_voltages_cb2_4_d, sizeof(BMSinternal_VOLTAGES_CB2_4)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB3_0 */
    printf("BMSinternal_VOLTAGES_CB3_0:\n");
    uint8_t* buffer_bmsinternal_voltages_cb3_0 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB3_0));
    
    BMSinternal_VOLTAGES_CB3_0 bmsinternal_voltages_cb3_0_s = { 24547, 60352, 62981, 4680 };
    serialize_BMSinternal_VOLTAGES_CB3_0(buffer_bmsinternal_voltages_cb3_0, bmsinternal_voltages_cb3_0_s.voltage0, bmsinternal_voltages_cb3_0_s.voltage1, bmsinternal_voltages_cb3_0_s.voltage2, bmsinternal_voltages_cb3_0_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb3_0_s.voltage0, (long long unsigned int)bmsinternal_voltages_cb3_0_s.voltage1, (long long unsigned int)bmsinternal_voltages_cb3_0_s.voltage2, (long long unsigned int)bmsinternal_voltages_cb3_0_s.voltage3);
    
    BMSinternal_VOLTAGES_CB3_0* bmsinternal_voltages_cb3_0_d = (BMSinternal_VOLTAGES_CB3_0*)malloc(sizeof(BMSinternal_VOLTAGES_CB3_0));
    deserialize_BMSinternal_VOLTAGES_CB3_0(buffer_bmsinternal_voltages_cb3_0, bmsinternal_voltages_cb3_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb3_0_d->voltage0, (long long unsigned int)bmsinternal_voltages_cb3_0_d->voltage1, (long long unsigned int)bmsinternal_voltages_cb3_0_d->voltage2, (long long unsigned int)bmsinternal_voltages_cb3_0_d->voltage3);
    
    assert(memcmp(&bmsinternal_voltages_cb3_0_s, bmsinternal_voltages_cb3_0_d, sizeof(BMSinternal_VOLTAGES_CB3_0)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB3_1 */
    printf("BMSinternal_VOLTAGES_CB3_1:\n");
    uint8_t* buffer_bmsinternal_voltages_cb3_1 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB3_1));
    
    BMSinternal_VOLTAGES_CB3_1 bmsinternal_voltages_cb3_1_s = { 11173, 36279, 23686, 17014 };
    serialize_BMSinternal_VOLTAGES_CB3_1(buffer_bmsinternal_voltages_cb3_1, bmsinternal_voltages_cb3_1_s.voltage4, bmsinternal_voltages_cb3_1_s.voltage5, bmsinternal_voltages_cb3_1_s.voltage6, bmsinternal_voltages_cb3_1_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb3_1_s.voltage4, (long long unsigned int)bmsinternal_voltages_cb3_1_s.voltage5, (long long unsigned int)bmsinternal_voltages_cb3_1_s.voltage6, (long long unsigned int)bmsinternal_voltages_cb3_1_s.voltage7);
    
    BMSinternal_VOLTAGES_CB3_1* bmsinternal_voltages_cb3_1_d = (BMSinternal_VOLTAGES_CB3_1*)malloc(sizeof(BMSinternal_VOLTAGES_CB3_1));
    deserialize_BMSinternal_VOLTAGES_CB3_1(buffer_bmsinternal_voltages_cb3_1, bmsinternal_voltages_cb3_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb3_1_d->voltage4, (long long unsigned int)bmsinternal_voltages_cb3_1_d->voltage5, (long long unsigned int)bmsinternal_voltages_cb3_1_d->voltage6, (long long unsigned int)bmsinternal_voltages_cb3_1_d->voltage7);
    
    assert(memcmp(&bmsinternal_voltages_cb3_1_s, bmsinternal_voltages_cb3_1_d, sizeof(BMSinternal_VOLTAGES_CB3_1)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB3_2 */
    printf("BMSinternal_VOLTAGES_CB3_2:\n");
    uint8_t* buffer_bmsinternal_voltages_cb3_2 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB3_2));
    
    BMSinternal_VOLTAGES_CB3_2 bmsinternal_voltages_cb3_2_s = { 15365, 37730, 4654, 32339 };
    serialize_BMSinternal_VOLTAGES_CB3_2(buffer_bmsinternal_voltages_cb3_2, bmsinternal_voltages_cb3_2_s.voltage8, bmsinternal_voltages_cb3_2_s.voltage9, bmsinternal_voltages_cb3_2_s.voltage10, bmsinternal_voltages_cb3_2_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb3_2_s.voltage8, (long long unsigned int)bmsinternal_voltages_cb3_2_s.voltage9, (long long unsigned int)bmsinternal_voltages_cb3_2_s.voltage10, (long long unsigned int)bmsinternal_voltages_cb3_2_s.voltage11);
    
    BMSinternal_VOLTAGES_CB3_2* bmsinternal_voltages_cb3_2_d = (BMSinternal_VOLTAGES_CB3_2*)malloc(sizeof(BMSinternal_VOLTAGES_CB3_2));
    deserialize_BMSinternal_VOLTAGES_CB3_2(buffer_bmsinternal_voltages_cb3_2, bmsinternal_voltages_cb3_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb3_2_d->voltage8, (long long unsigned int)bmsinternal_voltages_cb3_2_d->voltage9, (long long unsigned int)bmsinternal_voltages_cb3_2_d->voltage10, (long long unsigned int)bmsinternal_voltages_cb3_2_d->voltage11);
    
    assert(memcmp(&bmsinternal_voltages_cb3_2_s, bmsinternal_voltages_cb3_2_d, sizeof(BMSinternal_VOLTAGES_CB3_2)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB3_3 */
    printf("BMSinternal_VOLTAGES_CB3_3:\n");
    uint8_t* buffer_bmsinternal_voltages_cb3_3 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB3_3));
    
    BMSinternal_VOLTAGES_CB3_3 bmsinternal_voltages_cb3_3_s = { 58729, 45549, 37992, 20550 };
    serialize_BMSinternal_VOLTAGES_CB3_3(buffer_bmsinternal_voltages_cb3_3, bmsinternal_voltages_cb3_3_s.voltage12, bmsinternal_voltages_cb3_3_s.voltage13, bmsinternal_voltages_cb3_3_s.voltage14, bmsinternal_voltages_cb3_3_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb3_3_s.voltage12, (long long unsigned int)bmsinternal_voltages_cb3_3_s.voltage13, (long long unsigned int)bmsinternal_voltages_cb3_3_s.voltage14, (long long unsigned int)bmsinternal_voltages_cb3_3_s.voltage15);
    
    BMSinternal_VOLTAGES_CB3_3* bmsinternal_voltages_cb3_3_d = (BMSinternal_VOLTAGES_CB3_3*)malloc(sizeof(BMSinternal_VOLTAGES_CB3_3));
    deserialize_BMSinternal_VOLTAGES_CB3_3(buffer_bmsinternal_voltages_cb3_3, bmsinternal_voltages_cb3_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb3_3_d->voltage12, (long long unsigned int)bmsinternal_voltages_cb3_3_d->voltage13, (long long unsigned int)bmsinternal_voltages_cb3_3_d->voltage14, (long long unsigned int)bmsinternal_voltages_cb3_3_d->voltage15);
    
    assert(memcmp(&bmsinternal_voltages_cb3_3_s, bmsinternal_voltages_cb3_3_d, sizeof(BMSinternal_VOLTAGES_CB3_3)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB3_4 */
    printf("BMSinternal_VOLTAGES_CB3_4:\n");
    uint8_t* buffer_bmsinternal_voltages_cb3_4 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB3_4));
    
    BMSinternal_VOLTAGES_CB3_4 bmsinternal_voltages_cb3_4_s = { 61758, 36528, 64057, 59343 };
    serialize_BMSinternal_VOLTAGES_CB3_4(buffer_bmsinternal_voltages_cb3_4, bmsinternal_voltages_cb3_4_s.voltage16, bmsinternal_voltages_cb3_4_s.voltage17, bmsinternal_voltages_cb3_4_s.max_voltage, bmsinternal_voltages_cb3_4_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb3_4_s.voltage16, (long long unsigned int)bmsinternal_voltages_cb3_4_s.voltage17, (long long unsigned int)bmsinternal_voltages_cb3_4_s.max_voltage, (long long unsigned int)bmsinternal_voltages_cb3_4_s.min_voltage);
    
    BMSinternal_VOLTAGES_CB3_4* bmsinternal_voltages_cb3_4_d = (BMSinternal_VOLTAGES_CB3_4*)malloc(sizeof(BMSinternal_VOLTAGES_CB3_4));
    deserialize_BMSinternal_VOLTAGES_CB3_4(buffer_bmsinternal_voltages_cb3_4, bmsinternal_voltages_cb3_4_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb3_4_d->voltage16, (long long unsigned int)bmsinternal_voltages_cb3_4_d->voltage17, (long long unsigned int)bmsinternal_voltages_cb3_4_d->max_voltage, (long long unsigned int)bmsinternal_voltages_cb3_4_d->min_voltage);
    
    assert(memcmp(&bmsinternal_voltages_cb3_4_s, bmsinternal_voltages_cb3_4_d, sizeof(BMSinternal_VOLTAGES_CB3_4)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB4_0 */
    printf("BMSinternal_VOLTAGES_CB4_0:\n");
    uint8_t* buffer_bmsinternal_voltages_cb4_0 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB4_0));
    
    BMSinternal_VOLTAGES_CB4_0 bmsinternal_voltages_cb4_0_s = { 54837, 23459, 5401, 38536 };
    serialize_BMSinternal_VOLTAGES_CB4_0(buffer_bmsinternal_voltages_cb4_0, bmsinternal_voltages_cb4_0_s.voltage0, bmsinternal_voltages_cb4_0_s.voltage1, bmsinternal_voltages_cb4_0_s.voltage2, bmsinternal_voltages_cb4_0_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb4_0_s.voltage0, (long long unsigned int)bmsinternal_voltages_cb4_0_s.voltage1, (long long unsigned int)bmsinternal_voltages_cb4_0_s.voltage2, (long long unsigned int)bmsinternal_voltages_cb4_0_s.voltage3);
    
    BMSinternal_VOLTAGES_CB4_0* bmsinternal_voltages_cb4_0_d = (BMSinternal_VOLTAGES_CB4_0*)malloc(sizeof(BMSinternal_VOLTAGES_CB4_0));
    deserialize_BMSinternal_VOLTAGES_CB4_0(buffer_bmsinternal_voltages_cb4_0, bmsinternal_voltages_cb4_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb4_0_d->voltage0, (long long unsigned int)bmsinternal_voltages_cb4_0_d->voltage1, (long long unsigned int)bmsinternal_voltages_cb4_0_d->voltage2, (long long unsigned int)bmsinternal_voltages_cb4_0_d->voltage3);
    
    assert(memcmp(&bmsinternal_voltages_cb4_0_s, bmsinternal_voltages_cb4_0_d, sizeof(BMSinternal_VOLTAGES_CB4_0)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB4_1 */
    printf("BMSinternal_VOLTAGES_CB4_1:\n");
    uint8_t* buffer_bmsinternal_voltages_cb4_1 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB4_1));
    
    BMSinternal_VOLTAGES_CB4_1 bmsinternal_voltages_cb4_1_s = { 23597, 14263, 56352, 27182 };
    serialize_BMSinternal_VOLTAGES_CB4_1(buffer_bmsinternal_voltages_cb4_1, bmsinternal_voltages_cb4_1_s.voltage4, bmsinternal_voltages_cb4_1_s.voltage5, bmsinternal_voltages_cb4_1_s.voltage6, bmsinternal_voltages_cb4_1_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb4_1_s.voltage4, (long long unsigned int)bmsinternal_voltages_cb4_1_s.voltage5, (long long unsigned int)bmsinternal_voltages_cb4_1_s.voltage6, (long long unsigned int)bmsinternal_voltages_cb4_1_s.voltage7);
    
    BMSinternal_VOLTAGES_CB4_1* bmsinternal_voltages_cb4_1_d = (BMSinternal_VOLTAGES_CB4_1*)malloc(sizeof(BMSinternal_VOLTAGES_CB4_1));
    deserialize_BMSinternal_VOLTAGES_CB4_1(buffer_bmsinternal_voltages_cb4_1, bmsinternal_voltages_cb4_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb4_1_d->voltage4, (long long unsigned int)bmsinternal_voltages_cb4_1_d->voltage5, (long long unsigned int)bmsinternal_voltages_cb4_1_d->voltage6, (long long unsigned int)bmsinternal_voltages_cb4_1_d->voltage7);
    
    assert(memcmp(&bmsinternal_voltages_cb4_1_s, bmsinternal_voltages_cb4_1_d, sizeof(BMSinternal_VOLTAGES_CB4_1)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB4_2 */
    printf("BMSinternal_VOLTAGES_CB4_2:\n");
    uint8_t* buffer_bmsinternal_voltages_cb4_2 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB4_2));
    
    BMSinternal_VOLTAGES_CB4_2 bmsinternal_voltages_cb4_2_s = { 12058, 13018, 19135, 58114 };
    serialize_BMSinternal_VOLTAGES_CB4_2(buffer_bmsinternal_voltages_cb4_2, bmsinternal_voltages_cb4_2_s.voltage8, bmsinternal_voltages_cb4_2_s.voltage9, bmsinternal_voltages_cb4_2_s.voltage10, bmsinternal_voltages_cb4_2_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb4_2_s.voltage8, (long long unsigned int)bmsinternal_voltages_cb4_2_s.voltage9, (long long unsigned int)bmsinternal_voltages_cb4_2_s.voltage10, (long long unsigned int)bmsinternal_voltages_cb4_2_s.voltage11);
    
    BMSinternal_VOLTAGES_CB4_2* bmsinternal_voltages_cb4_2_d = (BMSinternal_VOLTAGES_CB4_2*)malloc(sizeof(BMSinternal_VOLTAGES_CB4_2));
    deserialize_BMSinternal_VOLTAGES_CB4_2(buffer_bmsinternal_voltages_cb4_2, bmsinternal_voltages_cb4_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb4_2_d->voltage8, (long long unsigned int)bmsinternal_voltages_cb4_2_d->voltage9, (long long unsigned int)bmsinternal_voltages_cb4_2_d->voltage10, (long long unsigned int)bmsinternal_voltages_cb4_2_d->voltage11);
    
    assert(memcmp(&bmsinternal_voltages_cb4_2_s, bmsinternal_voltages_cb4_2_d, sizeof(BMSinternal_VOLTAGES_CB4_2)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB4_3 */
    printf("BMSinternal_VOLTAGES_CB4_3:\n");
    uint8_t* buffer_bmsinternal_voltages_cb4_3 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB4_3));
    
    BMSinternal_VOLTAGES_CB4_3 bmsinternal_voltages_cb4_3_s = { 61387, 43429, 15714, 54304 };
    serialize_BMSinternal_VOLTAGES_CB4_3(buffer_bmsinternal_voltages_cb4_3, bmsinternal_voltages_cb4_3_s.voltage12, bmsinternal_voltages_cb4_3_s.voltage13, bmsinternal_voltages_cb4_3_s.voltage14, bmsinternal_voltages_cb4_3_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb4_3_s.voltage12, (long long unsigned int)bmsinternal_voltages_cb4_3_s.voltage13, (long long unsigned int)bmsinternal_voltages_cb4_3_s.voltage14, (long long unsigned int)bmsinternal_voltages_cb4_3_s.voltage15);
    
    BMSinternal_VOLTAGES_CB4_3* bmsinternal_voltages_cb4_3_d = (BMSinternal_VOLTAGES_CB4_3*)malloc(sizeof(BMSinternal_VOLTAGES_CB4_3));
    deserialize_BMSinternal_VOLTAGES_CB4_3(buffer_bmsinternal_voltages_cb4_3, bmsinternal_voltages_cb4_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb4_3_d->voltage12, (long long unsigned int)bmsinternal_voltages_cb4_3_d->voltage13, (long long unsigned int)bmsinternal_voltages_cb4_3_d->voltage14, (long long unsigned int)bmsinternal_voltages_cb4_3_d->voltage15);
    
    assert(memcmp(&bmsinternal_voltages_cb4_3_s, bmsinternal_voltages_cb4_3_d, sizeof(BMSinternal_VOLTAGES_CB4_3)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB4_4 */
    printf("BMSinternal_VOLTAGES_CB4_4:\n");
    uint8_t* buffer_bmsinternal_voltages_cb4_4 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB4_4));
    
    BMSinternal_VOLTAGES_CB4_4 bmsinternal_voltages_cb4_4_s = { 4996, 36194, 23113, 58738 };
    serialize_BMSinternal_VOLTAGES_CB4_4(buffer_bmsinternal_voltages_cb4_4, bmsinternal_voltages_cb4_4_s.voltage16, bmsinternal_voltages_cb4_4_s.voltage17, bmsinternal_voltages_cb4_4_s.max_voltage, bmsinternal_voltages_cb4_4_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb4_4_s.voltage16, (long long unsigned int)bmsinternal_voltages_cb4_4_s.voltage17, (long long unsigned int)bmsinternal_voltages_cb4_4_s.max_voltage, (long long unsigned int)bmsinternal_voltages_cb4_4_s.min_voltage);
    
    BMSinternal_VOLTAGES_CB4_4* bmsinternal_voltages_cb4_4_d = (BMSinternal_VOLTAGES_CB4_4*)malloc(sizeof(BMSinternal_VOLTAGES_CB4_4));
    deserialize_BMSinternal_VOLTAGES_CB4_4(buffer_bmsinternal_voltages_cb4_4, bmsinternal_voltages_cb4_4_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb4_4_d->voltage16, (long long unsigned int)bmsinternal_voltages_cb4_4_d->voltage17, (long long unsigned int)bmsinternal_voltages_cb4_4_d->max_voltage, (long long unsigned int)bmsinternal_voltages_cb4_4_d->min_voltage);
    
    assert(memcmp(&bmsinternal_voltages_cb4_4_s, bmsinternal_voltages_cb4_4_d, sizeof(BMSinternal_VOLTAGES_CB4_4)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB5_0 */
    printf("BMSinternal_VOLTAGES_CB5_0:\n");
    uint8_t* buffer_bmsinternal_voltages_cb5_0 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB5_0));
    
    BMSinternal_VOLTAGES_CB5_0 bmsinternal_voltages_cb5_0_s = { 5453, 36230, 54485, 23378 };
    serialize_BMSinternal_VOLTAGES_CB5_0(buffer_bmsinternal_voltages_cb5_0, bmsinternal_voltages_cb5_0_s.voltage0, bmsinternal_voltages_cb5_0_s.voltage1, bmsinternal_voltages_cb5_0_s.voltage2, bmsinternal_voltages_cb5_0_s.voltage3);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb5_0_s.voltage0, (long long unsigned int)bmsinternal_voltages_cb5_0_s.voltage1, (long long unsigned int)bmsinternal_voltages_cb5_0_s.voltage2, (long long unsigned int)bmsinternal_voltages_cb5_0_s.voltage3);
    
    BMSinternal_VOLTAGES_CB5_0* bmsinternal_voltages_cb5_0_d = (BMSinternal_VOLTAGES_CB5_0*)malloc(sizeof(BMSinternal_VOLTAGES_CB5_0));
    deserialize_BMSinternal_VOLTAGES_CB5_0(buffer_bmsinternal_voltages_cb5_0, bmsinternal_voltages_cb5_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb5_0_d->voltage0, (long long unsigned int)bmsinternal_voltages_cb5_0_d->voltage1, (long long unsigned int)bmsinternal_voltages_cb5_0_d->voltage2, (long long unsigned int)bmsinternal_voltages_cb5_0_d->voltage3);
    
    assert(memcmp(&bmsinternal_voltages_cb5_0_s, bmsinternal_voltages_cb5_0_d, sizeof(BMSinternal_VOLTAGES_CB5_0)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB5_1 */
    printf("BMSinternal_VOLTAGES_CB5_1:\n");
    uint8_t* buffer_bmsinternal_voltages_cb5_1 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB5_1));
    
    BMSinternal_VOLTAGES_CB5_1 bmsinternal_voltages_cb5_1_s = { 35508, 19503, 4846, 10468 };
    serialize_BMSinternal_VOLTAGES_CB5_1(buffer_bmsinternal_voltages_cb5_1, bmsinternal_voltages_cb5_1_s.voltage4, bmsinternal_voltages_cb5_1_s.voltage5, bmsinternal_voltages_cb5_1_s.voltage6, bmsinternal_voltages_cb5_1_s.voltage7);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb5_1_s.voltage4, (long long unsigned int)bmsinternal_voltages_cb5_1_s.voltage5, (long long unsigned int)bmsinternal_voltages_cb5_1_s.voltage6, (long long unsigned int)bmsinternal_voltages_cb5_1_s.voltage7);
    
    BMSinternal_VOLTAGES_CB5_1* bmsinternal_voltages_cb5_1_d = (BMSinternal_VOLTAGES_CB5_1*)malloc(sizeof(BMSinternal_VOLTAGES_CB5_1));
    deserialize_BMSinternal_VOLTAGES_CB5_1(buffer_bmsinternal_voltages_cb5_1, bmsinternal_voltages_cb5_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb5_1_d->voltage4, (long long unsigned int)bmsinternal_voltages_cb5_1_d->voltage5, (long long unsigned int)bmsinternal_voltages_cb5_1_d->voltage6, (long long unsigned int)bmsinternal_voltages_cb5_1_d->voltage7);
    
    assert(memcmp(&bmsinternal_voltages_cb5_1_s, bmsinternal_voltages_cb5_1_d, sizeof(BMSinternal_VOLTAGES_CB5_1)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB5_2 */
    printf("BMSinternal_VOLTAGES_CB5_2:\n");
    uint8_t* buffer_bmsinternal_voltages_cb5_2 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB5_2));
    
    BMSinternal_VOLTAGES_CB5_2 bmsinternal_voltages_cb5_2_s = { 18557, 47516, 40440, 40639 };
    serialize_BMSinternal_VOLTAGES_CB5_2(buffer_bmsinternal_voltages_cb5_2, bmsinternal_voltages_cb5_2_s.voltage8, bmsinternal_voltages_cb5_2_s.voltage9, bmsinternal_voltages_cb5_2_s.voltage10, bmsinternal_voltages_cb5_2_s.voltage11);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb5_2_s.voltage8, (long long unsigned int)bmsinternal_voltages_cb5_2_s.voltage9, (long long unsigned int)bmsinternal_voltages_cb5_2_s.voltage10, (long long unsigned int)bmsinternal_voltages_cb5_2_s.voltage11);
    
    BMSinternal_VOLTAGES_CB5_2* bmsinternal_voltages_cb5_2_d = (BMSinternal_VOLTAGES_CB5_2*)malloc(sizeof(BMSinternal_VOLTAGES_CB5_2));
    deserialize_BMSinternal_VOLTAGES_CB5_2(buffer_bmsinternal_voltages_cb5_2, bmsinternal_voltages_cb5_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb5_2_d->voltage8, (long long unsigned int)bmsinternal_voltages_cb5_2_d->voltage9, (long long unsigned int)bmsinternal_voltages_cb5_2_d->voltage10, (long long unsigned int)bmsinternal_voltages_cb5_2_d->voltage11);
    
    assert(memcmp(&bmsinternal_voltages_cb5_2_s, bmsinternal_voltages_cb5_2_d, sizeof(BMSinternal_VOLTAGES_CB5_2)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB5_3 */
    printf("BMSinternal_VOLTAGES_CB5_3:\n");
    uint8_t* buffer_bmsinternal_voltages_cb5_3 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB5_3));
    
    BMSinternal_VOLTAGES_CB5_3 bmsinternal_voltages_cb5_3_s = { 33920, 46858, 34417, 9901 };
    serialize_BMSinternal_VOLTAGES_CB5_3(buffer_bmsinternal_voltages_cb5_3, bmsinternal_voltages_cb5_3_s.voltage12, bmsinternal_voltages_cb5_3_s.voltage13, bmsinternal_voltages_cb5_3_s.voltage14, bmsinternal_voltages_cb5_3_s.voltage15);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb5_3_s.voltage12, (long long unsigned int)bmsinternal_voltages_cb5_3_s.voltage13, (long long unsigned int)bmsinternal_voltages_cb5_3_s.voltage14, (long long unsigned int)bmsinternal_voltages_cb5_3_s.voltage15);
    
    BMSinternal_VOLTAGES_CB5_3* bmsinternal_voltages_cb5_3_d = (BMSinternal_VOLTAGES_CB5_3*)malloc(sizeof(BMSinternal_VOLTAGES_CB5_3));
    deserialize_BMSinternal_VOLTAGES_CB5_3(buffer_bmsinternal_voltages_cb5_3, bmsinternal_voltages_cb5_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb5_3_d->voltage12, (long long unsigned int)bmsinternal_voltages_cb5_3_d->voltage13, (long long unsigned int)bmsinternal_voltages_cb5_3_d->voltage14, (long long unsigned int)bmsinternal_voltages_cb5_3_d->voltage15);
    
    assert(memcmp(&bmsinternal_voltages_cb5_3_s, bmsinternal_voltages_cb5_3_d, sizeof(BMSinternal_VOLTAGES_CB5_3)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_VOLTAGES_CB5_4 */
    printf("BMSinternal_VOLTAGES_CB5_4:\n");
    uint8_t* buffer_bmsinternal_voltages_cb5_4 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB5_4));
    
    BMSinternal_VOLTAGES_CB5_4 bmsinternal_voltages_cb5_4_s = { 46181, 60937, 30229, 38997 };
    serialize_BMSinternal_VOLTAGES_CB5_4(buffer_bmsinternal_voltages_cb5_4, bmsinternal_voltages_cb5_4_s.voltage16, bmsinternal_voltages_cb5_4_s.voltage17, bmsinternal_voltages_cb5_4_s.max_voltage, bmsinternal_voltages_cb5_4_s.min_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb5_4_s.voltage16, (long long unsigned int)bmsinternal_voltages_cb5_4_s.voltage17, (long long unsigned int)bmsinternal_voltages_cb5_4_s.max_voltage, (long long unsigned int)bmsinternal_voltages_cb5_4_s.min_voltage);
    
    BMSinternal_VOLTAGES_CB5_4* bmsinternal_voltages_cb5_4_d = (BMSinternal_VOLTAGES_CB5_4*)malloc(sizeof(BMSinternal_VOLTAGES_CB5_4));
    deserialize_BMSinternal_VOLTAGES_CB5_4(buffer_bmsinternal_voltages_cb5_4, bmsinternal_voltages_cb5_4_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_voltages_cb5_4_d->voltage16, (long long unsigned int)bmsinternal_voltages_cb5_4_d->voltage17, (long long unsigned int)bmsinternal_voltages_cb5_4_d->max_voltage, (long long unsigned int)bmsinternal_voltages_cb5_4_d->min_voltage);
    
    assert(memcmp(&bmsinternal_voltages_cb5_4_s, bmsinternal_voltages_cb5_4_d, sizeof(BMSinternal_VOLTAGES_CB5_4)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB0_0 */
    printf("BMSinternal_TEMPERATURES_CB0_0:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb0_0 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB0_0));
    
    BMSinternal_TEMPERATURES_CB0_0 bmsinternal_temperatures_cb0_0_s = { 58, 193, 14, 223, 219, 10, 90, 128 };
    serialize_BMSinternal_TEMPERATURES_CB0_0(buffer_bmsinternal_temperatures_cb0_0, bmsinternal_temperatures_cb0_0_s.temperature0, bmsinternal_temperatures_cb0_0_s.temperature1, bmsinternal_temperatures_cb0_0_s.temperature2, bmsinternal_temperatures_cb0_0_s.temperature3, bmsinternal_temperatures_cb0_0_s.temperature4, bmsinternal_temperatures_cb0_0_s.temperature5, bmsinternal_temperatures_cb0_0_s.temperature6, bmsinternal_temperatures_cb0_0_s.temperature7);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb0_0_s.temperature0, (long long unsigned int)bmsinternal_temperatures_cb0_0_s.temperature1, (long long unsigned int)bmsinternal_temperatures_cb0_0_s.temperature2, (long long unsigned int)bmsinternal_temperatures_cb0_0_s.temperature3, (long long unsigned int)bmsinternal_temperatures_cb0_0_s.temperature4, (long long unsigned int)bmsinternal_temperatures_cb0_0_s.temperature5, (long long unsigned int)bmsinternal_temperatures_cb0_0_s.temperature6, (long long unsigned int)bmsinternal_temperatures_cb0_0_s.temperature7);
    
    BMSinternal_TEMPERATURES_CB0_0* bmsinternal_temperatures_cb0_0_d = (BMSinternal_TEMPERATURES_CB0_0*)malloc(sizeof(BMSinternal_TEMPERATURES_CB0_0));
    deserialize_BMSinternal_TEMPERATURES_CB0_0(buffer_bmsinternal_temperatures_cb0_0, bmsinternal_temperatures_cb0_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb0_0_d->temperature0, (long long unsigned int)bmsinternal_temperatures_cb0_0_d->temperature1, (long long unsigned int)bmsinternal_temperatures_cb0_0_d->temperature2, (long long unsigned int)bmsinternal_temperatures_cb0_0_d->temperature3, (long long unsigned int)bmsinternal_temperatures_cb0_0_d->temperature4, (long long unsigned int)bmsinternal_temperatures_cb0_0_d->temperature5, (long long unsigned int)bmsinternal_temperatures_cb0_0_d->temperature6, (long long unsigned int)bmsinternal_temperatures_cb0_0_d->temperature7);
    
    assert(memcmp(&bmsinternal_temperatures_cb0_0_s, bmsinternal_temperatures_cb0_0_d, sizeof(BMSinternal_TEMPERATURES_CB0_0)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB0_1 */
    printf("BMSinternal_TEMPERATURES_CB0_1:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb0_1 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB0_1));
    
    BMSinternal_TEMPERATURES_CB0_1 bmsinternal_temperatures_cb0_1_s = { 249, 58, 79, 50, 106, 84, 170, 110 };
    serialize_BMSinternal_TEMPERATURES_CB0_1(buffer_bmsinternal_temperatures_cb0_1, bmsinternal_temperatures_cb0_1_s.temperature8, bmsinternal_temperatures_cb0_1_s.temperature9, bmsinternal_temperatures_cb0_1_s.temperature10, bmsinternal_temperatures_cb0_1_s.temperature11, bmsinternal_temperatures_cb0_1_s.temperature12, bmsinternal_temperatures_cb0_1_s.temperature13, bmsinternal_temperatures_cb0_1_s.temperature14, bmsinternal_temperatures_cb0_1_s.temperature15);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb0_1_s.temperature8, (long long unsigned int)bmsinternal_temperatures_cb0_1_s.temperature9, (long long unsigned int)bmsinternal_temperatures_cb0_1_s.temperature10, (long long unsigned int)bmsinternal_temperatures_cb0_1_s.temperature11, (long long unsigned int)bmsinternal_temperatures_cb0_1_s.temperature12, (long long unsigned int)bmsinternal_temperatures_cb0_1_s.temperature13, (long long unsigned int)bmsinternal_temperatures_cb0_1_s.temperature14, (long long unsigned int)bmsinternal_temperatures_cb0_1_s.temperature15);
    
    BMSinternal_TEMPERATURES_CB0_1* bmsinternal_temperatures_cb0_1_d = (BMSinternal_TEMPERATURES_CB0_1*)malloc(sizeof(BMSinternal_TEMPERATURES_CB0_1));
    deserialize_BMSinternal_TEMPERATURES_CB0_1(buffer_bmsinternal_temperatures_cb0_1, bmsinternal_temperatures_cb0_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb0_1_d->temperature8, (long long unsigned int)bmsinternal_temperatures_cb0_1_d->temperature9, (long long unsigned int)bmsinternal_temperatures_cb0_1_d->temperature10, (long long unsigned int)bmsinternal_temperatures_cb0_1_d->temperature11, (long long unsigned int)bmsinternal_temperatures_cb0_1_d->temperature12, (long long unsigned int)bmsinternal_temperatures_cb0_1_d->temperature13, (long long unsigned int)bmsinternal_temperatures_cb0_1_d->temperature14, (long long unsigned int)bmsinternal_temperatures_cb0_1_d->temperature15);
    
    assert(memcmp(&bmsinternal_temperatures_cb0_1_s, bmsinternal_temperatures_cb0_1_d, sizeof(BMSinternal_TEMPERATURES_CB0_1)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB0_2 */
    printf("BMSinternal_TEMPERATURES_CB0_2:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb0_2 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB0_2));
    
    BMSinternal_TEMPERATURES_CB0_2 bmsinternal_temperatures_cb0_2_s = { 170, 23 };
    serialize_BMSinternal_TEMPERATURES_CB0_2(buffer_bmsinternal_temperatures_cb0_2, bmsinternal_temperatures_cb0_2_s.temperature16, bmsinternal_temperatures_cb0_2_s.temperature17);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb0_2_s.temperature16, (long long unsigned int)bmsinternal_temperatures_cb0_2_s.temperature17);
    
    BMSinternal_TEMPERATURES_CB0_2* bmsinternal_temperatures_cb0_2_d = (BMSinternal_TEMPERATURES_CB0_2*)malloc(sizeof(BMSinternal_TEMPERATURES_CB0_2));
    deserialize_BMSinternal_TEMPERATURES_CB0_2(buffer_bmsinternal_temperatures_cb0_2, bmsinternal_temperatures_cb0_2_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb0_2_d->temperature16, (long long unsigned int)bmsinternal_temperatures_cb0_2_d->temperature17);
    
    assert(memcmp(&bmsinternal_temperatures_cb0_2_s, bmsinternal_temperatures_cb0_2_d, sizeof(BMSinternal_TEMPERATURES_CB0_2)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB1_0 */
    printf("BMSinternal_TEMPERATURES_CB1_0:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb1_0 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB1_0));
    
    BMSinternal_TEMPERATURES_CB1_0 bmsinternal_temperatures_cb1_0_s = { 29, 187, 30, 55, 55, 8, 254, 245 };
    serialize_BMSinternal_TEMPERATURES_CB1_0(buffer_bmsinternal_temperatures_cb1_0, bmsinternal_temperatures_cb1_0_s.temperature0, bmsinternal_temperatures_cb1_0_s.temperature1, bmsinternal_temperatures_cb1_0_s.temperature2, bmsinternal_temperatures_cb1_0_s.temperature3, bmsinternal_temperatures_cb1_0_s.temperature4, bmsinternal_temperatures_cb1_0_s.temperature5, bmsinternal_temperatures_cb1_0_s.temperature6, bmsinternal_temperatures_cb1_0_s.temperature7);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb1_0_s.temperature0, (long long unsigned int)bmsinternal_temperatures_cb1_0_s.temperature1, (long long unsigned int)bmsinternal_temperatures_cb1_0_s.temperature2, (long long unsigned int)bmsinternal_temperatures_cb1_0_s.temperature3, (long long unsigned int)bmsinternal_temperatures_cb1_0_s.temperature4, (long long unsigned int)bmsinternal_temperatures_cb1_0_s.temperature5, (long long unsigned int)bmsinternal_temperatures_cb1_0_s.temperature6, (long long unsigned int)bmsinternal_temperatures_cb1_0_s.temperature7);
    
    BMSinternal_TEMPERATURES_CB1_0* bmsinternal_temperatures_cb1_0_d = (BMSinternal_TEMPERATURES_CB1_0*)malloc(sizeof(BMSinternal_TEMPERATURES_CB1_0));
    deserialize_BMSinternal_TEMPERATURES_CB1_0(buffer_bmsinternal_temperatures_cb1_0, bmsinternal_temperatures_cb1_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb1_0_d->temperature0, (long long unsigned int)bmsinternal_temperatures_cb1_0_d->temperature1, (long long unsigned int)bmsinternal_temperatures_cb1_0_d->temperature2, (long long unsigned int)bmsinternal_temperatures_cb1_0_d->temperature3, (long long unsigned int)bmsinternal_temperatures_cb1_0_d->temperature4, (long long unsigned int)bmsinternal_temperatures_cb1_0_d->temperature5, (long long unsigned int)bmsinternal_temperatures_cb1_0_d->temperature6, (long long unsigned int)bmsinternal_temperatures_cb1_0_d->temperature7);
    
    assert(memcmp(&bmsinternal_temperatures_cb1_0_s, bmsinternal_temperatures_cb1_0_d, sizeof(BMSinternal_TEMPERATURES_CB1_0)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB1_1 */
    printf("BMSinternal_TEMPERATURES_CB1_1:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb1_1 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB1_1));
    
    BMSinternal_TEMPERATURES_CB1_1 bmsinternal_temperatures_cb1_1_s = { 173, 127, 162, 24, 252, 110, 21, 148 };
    serialize_BMSinternal_TEMPERATURES_CB1_1(buffer_bmsinternal_temperatures_cb1_1, bmsinternal_temperatures_cb1_1_s.temperature8, bmsinternal_temperatures_cb1_1_s.temperature9, bmsinternal_temperatures_cb1_1_s.temperature10, bmsinternal_temperatures_cb1_1_s.temperature11, bmsinternal_temperatures_cb1_1_s.temperature12, bmsinternal_temperatures_cb1_1_s.temperature13, bmsinternal_temperatures_cb1_1_s.temperature14, bmsinternal_temperatures_cb1_1_s.temperature15);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb1_1_s.temperature8, (long long unsigned int)bmsinternal_temperatures_cb1_1_s.temperature9, (long long unsigned int)bmsinternal_temperatures_cb1_1_s.temperature10, (long long unsigned int)bmsinternal_temperatures_cb1_1_s.temperature11, (long long unsigned int)bmsinternal_temperatures_cb1_1_s.temperature12, (long long unsigned int)bmsinternal_temperatures_cb1_1_s.temperature13, (long long unsigned int)bmsinternal_temperatures_cb1_1_s.temperature14, (long long unsigned int)bmsinternal_temperatures_cb1_1_s.temperature15);
    
    BMSinternal_TEMPERATURES_CB1_1* bmsinternal_temperatures_cb1_1_d = (BMSinternal_TEMPERATURES_CB1_1*)malloc(sizeof(BMSinternal_TEMPERATURES_CB1_1));
    deserialize_BMSinternal_TEMPERATURES_CB1_1(buffer_bmsinternal_temperatures_cb1_1, bmsinternal_temperatures_cb1_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb1_1_d->temperature8, (long long unsigned int)bmsinternal_temperatures_cb1_1_d->temperature9, (long long unsigned int)bmsinternal_temperatures_cb1_1_d->temperature10, (long long unsigned int)bmsinternal_temperatures_cb1_1_d->temperature11, (long long unsigned int)bmsinternal_temperatures_cb1_1_d->temperature12, (long long unsigned int)bmsinternal_temperatures_cb1_1_d->temperature13, (long long unsigned int)bmsinternal_temperatures_cb1_1_d->temperature14, (long long unsigned int)bmsinternal_temperatures_cb1_1_d->temperature15);
    
    assert(memcmp(&bmsinternal_temperatures_cb1_1_s, bmsinternal_temperatures_cb1_1_d, sizeof(BMSinternal_TEMPERATURES_CB1_1)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB1_2 */
    printf("BMSinternal_TEMPERATURES_CB1_2:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb1_2 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB1_2));
    
    BMSinternal_TEMPERATURES_CB1_2 bmsinternal_temperatures_cb1_2_s = { 210, 194, 165, 175 };
    serialize_BMSinternal_TEMPERATURES_CB1_2(buffer_bmsinternal_temperatures_cb1_2, bmsinternal_temperatures_cb1_2_s.temperature16, bmsinternal_temperatures_cb1_2_s.temperature17, bmsinternal_temperatures_cb1_2_s.max_temperature, bmsinternal_temperatures_cb1_2_s.min_temperature);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb1_2_s.temperature16, (long long unsigned int)bmsinternal_temperatures_cb1_2_s.temperature17, (long long unsigned int)bmsinternal_temperatures_cb1_2_s.max_temperature, (long long unsigned int)bmsinternal_temperatures_cb1_2_s.min_temperature);
    
    BMSinternal_TEMPERATURES_CB1_2* bmsinternal_temperatures_cb1_2_d = (BMSinternal_TEMPERATURES_CB1_2*)malloc(sizeof(BMSinternal_TEMPERATURES_CB1_2));
    deserialize_BMSinternal_TEMPERATURES_CB1_2(buffer_bmsinternal_temperatures_cb1_2, bmsinternal_temperatures_cb1_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb1_2_d->temperature16, (long long unsigned int)bmsinternal_temperatures_cb1_2_d->temperature17, (long long unsigned int)bmsinternal_temperatures_cb1_2_d->max_temperature, (long long unsigned int)bmsinternal_temperatures_cb1_2_d->min_temperature);
    
    assert(memcmp(&bmsinternal_temperatures_cb1_2_s, bmsinternal_temperatures_cb1_2_d, sizeof(BMSinternal_TEMPERATURES_CB1_2)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB2_0 */
    printf("BMSinternal_TEMPERATURES_CB2_0:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb2_0 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB2_0));
    
    BMSinternal_TEMPERATURES_CB2_0 bmsinternal_temperatures_cb2_0_s = { 126, 247, 117, 233, 191, 197, 181, 254 };
    serialize_BMSinternal_TEMPERATURES_CB2_0(buffer_bmsinternal_temperatures_cb2_0, bmsinternal_temperatures_cb2_0_s.temperature0, bmsinternal_temperatures_cb2_0_s.temperature1, bmsinternal_temperatures_cb2_0_s.temperature2, bmsinternal_temperatures_cb2_0_s.temperature3, bmsinternal_temperatures_cb2_0_s.temperature4, bmsinternal_temperatures_cb2_0_s.temperature5, bmsinternal_temperatures_cb2_0_s.temperature6, bmsinternal_temperatures_cb2_0_s.temperature7);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb2_0_s.temperature0, (long long unsigned int)bmsinternal_temperatures_cb2_0_s.temperature1, (long long unsigned int)bmsinternal_temperatures_cb2_0_s.temperature2, (long long unsigned int)bmsinternal_temperatures_cb2_0_s.temperature3, (long long unsigned int)bmsinternal_temperatures_cb2_0_s.temperature4, (long long unsigned int)bmsinternal_temperatures_cb2_0_s.temperature5, (long long unsigned int)bmsinternal_temperatures_cb2_0_s.temperature6, (long long unsigned int)bmsinternal_temperatures_cb2_0_s.temperature7);
    
    BMSinternal_TEMPERATURES_CB2_0* bmsinternal_temperatures_cb2_0_d = (BMSinternal_TEMPERATURES_CB2_0*)malloc(sizeof(BMSinternal_TEMPERATURES_CB2_0));
    deserialize_BMSinternal_TEMPERATURES_CB2_0(buffer_bmsinternal_temperatures_cb2_0, bmsinternal_temperatures_cb2_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb2_0_d->temperature0, (long long unsigned int)bmsinternal_temperatures_cb2_0_d->temperature1, (long long unsigned int)bmsinternal_temperatures_cb2_0_d->temperature2, (long long unsigned int)bmsinternal_temperatures_cb2_0_d->temperature3, (long long unsigned int)bmsinternal_temperatures_cb2_0_d->temperature4, (long long unsigned int)bmsinternal_temperatures_cb2_0_d->temperature5, (long long unsigned int)bmsinternal_temperatures_cb2_0_d->temperature6, (long long unsigned int)bmsinternal_temperatures_cb2_0_d->temperature7);
    
    assert(memcmp(&bmsinternal_temperatures_cb2_0_s, bmsinternal_temperatures_cb2_0_d, sizeof(BMSinternal_TEMPERATURES_CB2_0)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB2_1 */
    printf("BMSinternal_TEMPERATURES_CB2_1:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb2_1 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB2_1));
    
    BMSinternal_TEMPERATURES_CB2_1 bmsinternal_temperatures_cb2_1_s = { 116, 151, 213, 70, 8, 84, 29, 171 };
    serialize_BMSinternal_TEMPERATURES_CB2_1(buffer_bmsinternal_temperatures_cb2_1, bmsinternal_temperatures_cb2_1_s.temperature8, bmsinternal_temperatures_cb2_1_s.temperature9, bmsinternal_temperatures_cb2_1_s.temperature10, bmsinternal_temperatures_cb2_1_s.temperature11, bmsinternal_temperatures_cb2_1_s.temperature12, bmsinternal_temperatures_cb2_1_s.temperature13, bmsinternal_temperatures_cb2_1_s.temperature14, bmsinternal_temperatures_cb2_1_s.temperature15);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb2_1_s.temperature8, (long long unsigned int)bmsinternal_temperatures_cb2_1_s.temperature9, (long long unsigned int)bmsinternal_temperatures_cb2_1_s.temperature10, (long long unsigned int)bmsinternal_temperatures_cb2_1_s.temperature11, (long long unsigned int)bmsinternal_temperatures_cb2_1_s.temperature12, (long long unsigned int)bmsinternal_temperatures_cb2_1_s.temperature13, (long long unsigned int)bmsinternal_temperatures_cb2_1_s.temperature14, (long long unsigned int)bmsinternal_temperatures_cb2_1_s.temperature15);
    
    BMSinternal_TEMPERATURES_CB2_1* bmsinternal_temperatures_cb2_1_d = (BMSinternal_TEMPERATURES_CB2_1*)malloc(sizeof(BMSinternal_TEMPERATURES_CB2_1));
    deserialize_BMSinternal_TEMPERATURES_CB2_1(buffer_bmsinternal_temperatures_cb2_1, bmsinternal_temperatures_cb2_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb2_1_d->temperature8, (long long unsigned int)bmsinternal_temperatures_cb2_1_d->temperature9, (long long unsigned int)bmsinternal_temperatures_cb2_1_d->temperature10, (long long unsigned int)bmsinternal_temperatures_cb2_1_d->temperature11, (long long unsigned int)bmsinternal_temperatures_cb2_1_d->temperature12, (long long unsigned int)bmsinternal_temperatures_cb2_1_d->temperature13, (long long unsigned int)bmsinternal_temperatures_cb2_1_d->temperature14, (long long unsigned int)bmsinternal_temperatures_cb2_1_d->temperature15);
    
    assert(memcmp(&bmsinternal_temperatures_cb2_1_s, bmsinternal_temperatures_cb2_1_d, sizeof(BMSinternal_TEMPERATURES_CB2_1)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB2_2 */
    printf("BMSinternal_TEMPERATURES_CB2_2:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb2_2 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB2_2));
    
    BMSinternal_TEMPERATURES_CB2_2 bmsinternal_temperatures_cb2_2_s = { 195, 202, 180, 215 };
    serialize_BMSinternal_TEMPERATURES_CB2_2(buffer_bmsinternal_temperatures_cb2_2, bmsinternal_temperatures_cb2_2_s.temperature16, bmsinternal_temperatures_cb2_2_s.temperature17, bmsinternal_temperatures_cb2_2_s.max_temperature, bmsinternal_temperatures_cb2_2_s.min_temperature);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb2_2_s.temperature16, (long long unsigned int)bmsinternal_temperatures_cb2_2_s.temperature17, (long long unsigned int)bmsinternal_temperatures_cb2_2_s.max_temperature, (long long unsigned int)bmsinternal_temperatures_cb2_2_s.min_temperature);
    
    BMSinternal_TEMPERATURES_CB2_2* bmsinternal_temperatures_cb2_2_d = (BMSinternal_TEMPERATURES_CB2_2*)malloc(sizeof(BMSinternal_TEMPERATURES_CB2_2));
    deserialize_BMSinternal_TEMPERATURES_CB2_2(buffer_bmsinternal_temperatures_cb2_2, bmsinternal_temperatures_cb2_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb2_2_d->temperature16, (long long unsigned int)bmsinternal_temperatures_cb2_2_d->temperature17, (long long unsigned int)bmsinternal_temperatures_cb2_2_d->max_temperature, (long long unsigned int)bmsinternal_temperatures_cb2_2_d->min_temperature);
    
    assert(memcmp(&bmsinternal_temperatures_cb2_2_s, bmsinternal_temperatures_cb2_2_d, sizeof(BMSinternal_TEMPERATURES_CB2_2)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB3_0 */
    printf("BMSinternal_TEMPERATURES_CB3_0:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb3_0 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB3_0));
    
    BMSinternal_TEMPERATURES_CB3_0 bmsinternal_temperatures_cb3_0_s = { 3, 140, 97, 235, 51, 44, 212, 206 };
    serialize_BMSinternal_TEMPERATURES_CB3_0(buffer_bmsinternal_temperatures_cb3_0, bmsinternal_temperatures_cb3_0_s.temperature0, bmsinternal_temperatures_cb3_0_s.temperature1, bmsinternal_temperatures_cb3_0_s.temperature2, bmsinternal_temperatures_cb3_0_s.temperature3, bmsinternal_temperatures_cb3_0_s.temperature4, bmsinternal_temperatures_cb3_0_s.temperature5, bmsinternal_temperatures_cb3_0_s.temperature6, bmsinternal_temperatures_cb3_0_s.temperature7);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb3_0_s.temperature0, (long long unsigned int)bmsinternal_temperatures_cb3_0_s.temperature1, (long long unsigned int)bmsinternal_temperatures_cb3_0_s.temperature2, (long long unsigned int)bmsinternal_temperatures_cb3_0_s.temperature3, (long long unsigned int)bmsinternal_temperatures_cb3_0_s.temperature4, (long long unsigned int)bmsinternal_temperatures_cb3_0_s.temperature5, (long long unsigned int)bmsinternal_temperatures_cb3_0_s.temperature6, (long long unsigned int)bmsinternal_temperatures_cb3_0_s.temperature7);
    
    BMSinternal_TEMPERATURES_CB3_0* bmsinternal_temperatures_cb3_0_d = (BMSinternal_TEMPERATURES_CB3_0*)malloc(sizeof(BMSinternal_TEMPERATURES_CB3_0));
    deserialize_BMSinternal_TEMPERATURES_CB3_0(buffer_bmsinternal_temperatures_cb3_0, bmsinternal_temperatures_cb3_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb3_0_d->temperature0, (long long unsigned int)bmsinternal_temperatures_cb3_0_d->temperature1, (long long unsigned int)bmsinternal_temperatures_cb3_0_d->temperature2, (long long unsigned int)bmsinternal_temperatures_cb3_0_d->temperature3, (long long unsigned int)bmsinternal_temperatures_cb3_0_d->temperature4, (long long unsigned int)bmsinternal_temperatures_cb3_0_d->temperature5, (long long unsigned int)bmsinternal_temperatures_cb3_0_d->temperature6, (long long unsigned int)bmsinternal_temperatures_cb3_0_d->temperature7);
    
    assert(memcmp(&bmsinternal_temperatures_cb3_0_s, bmsinternal_temperatures_cb3_0_d, sizeof(BMSinternal_TEMPERATURES_CB3_0)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB3_1 */
    printf("BMSinternal_TEMPERATURES_CB3_1:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb3_1 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB3_1));
    
    BMSinternal_TEMPERATURES_CB3_1 bmsinternal_temperatures_cb3_1_s = { 105, 179, 126, 74, 107, 217, 13, 127 };
    serialize_BMSinternal_TEMPERATURES_CB3_1(buffer_bmsinternal_temperatures_cb3_1, bmsinternal_temperatures_cb3_1_s.temperature8, bmsinternal_temperatures_cb3_1_s.temperature9, bmsinternal_temperatures_cb3_1_s.temperature10, bmsinternal_temperatures_cb3_1_s.temperature11, bmsinternal_temperatures_cb3_1_s.temperature12, bmsinternal_temperatures_cb3_1_s.temperature13, bmsinternal_temperatures_cb3_1_s.temperature14, bmsinternal_temperatures_cb3_1_s.temperature15);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb3_1_s.temperature8, (long long unsigned int)bmsinternal_temperatures_cb3_1_s.temperature9, (long long unsigned int)bmsinternal_temperatures_cb3_1_s.temperature10, (long long unsigned int)bmsinternal_temperatures_cb3_1_s.temperature11, (long long unsigned int)bmsinternal_temperatures_cb3_1_s.temperature12, (long long unsigned int)bmsinternal_temperatures_cb3_1_s.temperature13, (long long unsigned int)bmsinternal_temperatures_cb3_1_s.temperature14, (long long unsigned int)bmsinternal_temperatures_cb3_1_s.temperature15);
    
    BMSinternal_TEMPERATURES_CB3_1* bmsinternal_temperatures_cb3_1_d = (BMSinternal_TEMPERATURES_CB3_1*)malloc(sizeof(BMSinternal_TEMPERATURES_CB3_1));
    deserialize_BMSinternal_TEMPERATURES_CB3_1(buffer_bmsinternal_temperatures_cb3_1, bmsinternal_temperatures_cb3_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb3_1_d->temperature8, (long long unsigned int)bmsinternal_temperatures_cb3_1_d->temperature9, (long long unsigned int)bmsinternal_temperatures_cb3_1_d->temperature10, (long long unsigned int)bmsinternal_temperatures_cb3_1_d->temperature11, (long long unsigned int)bmsinternal_temperatures_cb3_1_d->temperature12, (long long unsigned int)bmsinternal_temperatures_cb3_1_d->temperature13, (long long unsigned int)bmsinternal_temperatures_cb3_1_d->temperature14, (long long unsigned int)bmsinternal_temperatures_cb3_1_d->temperature15);
    
    assert(memcmp(&bmsinternal_temperatures_cb3_1_s, bmsinternal_temperatures_cb3_1_d, sizeof(BMSinternal_TEMPERATURES_CB3_1)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB3_2 */
    printf("BMSinternal_TEMPERATURES_CB3_2:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb3_2 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB3_2));
    
    BMSinternal_TEMPERATURES_CB3_2 bmsinternal_temperatures_cb3_2_s = { 6, 15, 141, 148 };
    serialize_BMSinternal_TEMPERATURES_CB3_2(buffer_bmsinternal_temperatures_cb3_2, bmsinternal_temperatures_cb3_2_s.temperature16, bmsinternal_temperatures_cb3_2_s.temperature17, bmsinternal_temperatures_cb3_2_s.max_temperature, bmsinternal_temperatures_cb3_2_s.min_temperature);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb3_2_s.temperature16, (long long unsigned int)bmsinternal_temperatures_cb3_2_s.temperature17, (long long unsigned int)bmsinternal_temperatures_cb3_2_s.max_temperature, (long long unsigned int)bmsinternal_temperatures_cb3_2_s.min_temperature);
    
    BMSinternal_TEMPERATURES_CB3_2* bmsinternal_temperatures_cb3_2_d = (BMSinternal_TEMPERATURES_CB3_2*)malloc(sizeof(BMSinternal_TEMPERATURES_CB3_2));
    deserialize_BMSinternal_TEMPERATURES_CB3_2(buffer_bmsinternal_temperatures_cb3_2, bmsinternal_temperatures_cb3_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb3_2_d->temperature16, (long long unsigned int)bmsinternal_temperatures_cb3_2_d->temperature17, (long long unsigned int)bmsinternal_temperatures_cb3_2_d->max_temperature, (long long unsigned int)bmsinternal_temperatures_cb3_2_d->min_temperature);
    
    assert(memcmp(&bmsinternal_temperatures_cb3_2_s, bmsinternal_temperatures_cb3_2_d, sizeof(BMSinternal_TEMPERATURES_CB3_2)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB4_0 */
    printf("BMSinternal_TEMPERATURES_CB4_0:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb4_0 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB4_0));
    
    BMSinternal_TEMPERATURES_CB4_0 bmsinternal_temperatures_cb4_0_s = { 190, 163, 149, 10, 66, 125, 48, 163 };
    serialize_BMSinternal_TEMPERATURES_CB4_0(buffer_bmsinternal_temperatures_cb4_0, bmsinternal_temperatures_cb4_0_s.temperature0, bmsinternal_temperatures_cb4_0_s.temperature1, bmsinternal_temperatures_cb4_0_s.temperature2, bmsinternal_temperatures_cb4_0_s.temperature3, bmsinternal_temperatures_cb4_0_s.temperature4, bmsinternal_temperatures_cb4_0_s.temperature5, bmsinternal_temperatures_cb4_0_s.temperature6, bmsinternal_temperatures_cb4_0_s.temperature7);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb4_0_s.temperature0, (long long unsigned int)bmsinternal_temperatures_cb4_0_s.temperature1, (long long unsigned int)bmsinternal_temperatures_cb4_0_s.temperature2, (long long unsigned int)bmsinternal_temperatures_cb4_0_s.temperature3, (long long unsigned int)bmsinternal_temperatures_cb4_0_s.temperature4, (long long unsigned int)bmsinternal_temperatures_cb4_0_s.temperature5, (long long unsigned int)bmsinternal_temperatures_cb4_0_s.temperature6, (long long unsigned int)bmsinternal_temperatures_cb4_0_s.temperature7);
    
    BMSinternal_TEMPERATURES_CB4_0* bmsinternal_temperatures_cb4_0_d = (BMSinternal_TEMPERATURES_CB4_0*)malloc(sizeof(BMSinternal_TEMPERATURES_CB4_0));
    deserialize_BMSinternal_TEMPERATURES_CB4_0(buffer_bmsinternal_temperatures_cb4_0, bmsinternal_temperatures_cb4_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb4_0_d->temperature0, (long long unsigned int)bmsinternal_temperatures_cb4_0_d->temperature1, (long long unsigned int)bmsinternal_temperatures_cb4_0_d->temperature2, (long long unsigned int)bmsinternal_temperatures_cb4_0_d->temperature3, (long long unsigned int)bmsinternal_temperatures_cb4_0_d->temperature4, (long long unsigned int)bmsinternal_temperatures_cb4_0_d->temperature5, (long long unsigned int)bmsinternal_temperatures_cb4_0_d->temperature6, (long long unsigned int)bmsinternal_temperatures_cb4_0_d->temperature7);
    
    assert(memcmp(&bmsinternal_temperatures_cb4_0_s, bmsinternal_temperatures_cb4_0_d, sizeof(BMSinternal_TEMPERATURES_CB4_0)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB4_1 */
    printf("BMSinternal_TEMPERATURES_CB4_1:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb4_1 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB4_1));
    
    BMSinternal_TEMPERATURES_CB4_1 bmsinternal_temperatures_cb4_1_s = { 205, 95, 88, 78, 82, 33, 64, 99 };
    serialize_BMSinternal_TEMPERATURES_CB4_1(buffer_bmsinternal_temperatures_cb4_1, bmsinternal_temperatures_cb4_1_s.temperature8, bmsinternal_temperatures_cb4_1_s.temperature9, bmsinternal_temperatures_cb4_1_s.temperature10, bmsinternal_temperatures_cb4_1_s.temperature11, bmsinternal_temperatures_cb4_1_s.temperature12, bmsinternal_temperatures_cb4_1_s.temperature13, bmsinternal_temperatures_cb4_1_s.temperature14, bmsinternal_temperatures_cb4_1_s.temperature15);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb4_1_s.temperature8, (long long unsigned int)bmsinternal_temperatures_cb4_1_s.temperature9, (long long unsigned int)bmsinternal_temperatures_cb4_1_s.temperature10, (long long unsigned int)bmsinternal_temperatures_cb4_1_s.temperature11, (long long unsigned int)bmsinternal_temperatures_cb4_1_s.temperature12, (long long unsigned int)bmsinternal_temperatures_cb4_1_s.temperature13, (long long unsigned int)bmsinternal_temperatures_cb4_1_s.temperature14, (long long unsigned int)bmsinternal_temperatures_cb4_1_s.temperature15);
    
    BMSinternal_TEMPERATURES_CB4_1* bmsinternal_temperatures_cb4_1_d = (BMSinternal_TEMPERATURES_CB4_1*)malloc(sizeof(BMSinternal_TEMPERATURES_CB4_1));
    deserialize_BMSinternal_TEMPERATURES_CB4_1(buffer_bmsinternal_temperatures_cb4_1, bmsinternal_temperatures_cb4_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb4_1_d->temperature8, (long long unsigned int)bmsinternal_temperatures_cb4_1_d->temperature9, (long long unsigned int)bmsinternal_temperatures_cb4_1_d->temperature10, (long long unsigned int)bmsinternal_temperatures_cb4_1_d->temperature11, (long long unsigned int)bmsinternal_temperatures_cb4_1_d->temperature12, (long long unsigned int)bmsinternal_temperatures_cb4_1_d->temperature13, (long long unsigned int)bmsinternal_temperatures_cb4_1_d->temperature14, (long long unsigned int)bmsinternal_temperatures_cb4_1_d->temperature15);
    
    assert(memcmp(&bmsinternal_temperatures_cb4_1_s, bmsinternal_temperatures_cb4_1_d, sizeof(BMSinternal_TEMPERATURES_CB4_1)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB4_2 */
    printf("BMSinternal_TEMPERATURES_CB4_2:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb4_2 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB4_2));
    
    BMSinternal_TEMPERATURES_CB4_2 bmsinternal_temperatures_cb4_2_s = { 116, 230, 24, 42 };
    serialize_BMSinternal_TEMPERATURES_CB4_2(buffer_bmsinternal_temperatures_cb4_2, bmsinternal_temperatures_cb4_2_s.temperature16, bmsinternal_temperatures_cb4_2_s.temperature17, bmsinternal_temperatures_cb4_2_s.max_temperature, bmsinternal_temperatures_cb4_2_s.min_temperature);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb4_2_s.temperature16, (long long unsigned int)bmsinternal_temperatures_cb4_2_s.temperature17, (long long unsigned int)bmsinternal_temperatures_cb4_2_s.max_temperature, (long long unsigned int)bmsinternal_temperatures_cb4_2_s.min_temperature);
    
    BMSinternal_TEMPERATURES_CB4_2* bmsinternal_temperatures_cb4_2_d = (BMSinternal_TEMPERATURES_CB4_2*)malloc(sizeof(BMSinternal_TEMPERATURES_CB4_2));
    deserialize_BMSinternal_TEMPERATURES_CB4_2(buffer_bmsinternal_temperatures_cb4_2, bmsinternal_temperatures_cb4_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb4_2_d->temperature16, (long long unsigned int)bmsinternal_temperatures_cb4_2_d->temperature17, (long long unsigned int)bmsinternal_temperatures_cb4_2_d->max_temperature, (long long unsigned int)bmsinternal_temperatures_cb4_2_d->min_temperature);
    
    assert(memcmp(&bmsinternal_temperatures_cb4_2_s, bmsinternal_temperatures_cb4_2_d, sizeof(BMSinternal_TEMPERATURES_CB4_2)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB5_0 */
    printf("BMSinternal_TEMPERATURES_CB5_0:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb5_0 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB5_0));
    
    BMSinternal_TEMPERATURES_CB5_0 bmsinternal_temperatures_cb5_0_s = { 166, 33, 219, 118, 184, 167, 3, 87 };
    serialize_BMSinternal_TEMPERATURES_CB5_0(buffer_bmsinternal_temperatures_cb5_0, bmsinternal_temperatures_cb5_0_s.temperature0, bmsinternal_temperatures_cb5_0_s.temperature1, bmsinternal_temperatures_cb5_0_s.temperature2, bmsinternal_temperatures_cb5_0_s.temperature3, bmsinternal_temperatures_cb5_0_s.temperature4, bmsinternal_temperatures_cb5_0_s.temperature5, bmsinternal_temperatures_cb5_0_s.temperature6, bmsinternal_temperatures_cb5_0_s.temperature7);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb5_0_s.temperature0, (long long unsigned int)bmsinternal_temperatures_cb5_0_s.temperature1, (long long unsigned int)bmsinternal_temperatures_cb5_0_s.temperature2, (long long unsigned int)bmsinternal_temperatures_cb5_0_s.temperature3, (long long unsigned int)bmsinternal_temperatures_cb5_0_s.temperature4, (long long unsigned int)bmsinternal_temperatures_cb5_0_s.temperature5, (long long unsigned int)bmsinternal_temperatures_cb5_0_s.temperature6, (long long unsigned int)bmsinternal_temperatures_cb5_0_s.temperature7);
    
    BMSinternal_TEMPERATURES_CB5_0* bmsinternal_temperatures_cb5_0_d = (BMSinternal_TEMPERATURES_CB5_0*)malloc(sizeof(BMSinternal_TEMPERATURES_CB5_0));
    deserialize_BMSinternal_TEMPERATURES_CB5_0(buffer_bmsinternal_temperatures_cb5_0, bmsinternal_temperatures_cb5_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb5_0_d->temperature0, (long long unsigned int)bmsinternal_temperatures_cb5_0_d->temperature1, (long long unsigned int)bmsinternal_temperatures_cb5_0_d->temperature2, (long long unsigned int)bmsinternal_temperatures_cb5_0_d->temperature3, (long long unsigned int)bmsinternal_temperatures_cb5_0_d->temperature4, (long long unsigned int)bmsinternal_temperatures_cb5_0_d->temperature5, (long long unsigned int)bmsinternal_temperatures_cb5_0_d->temperature6, (long long unsigned int)bmsinternal_temperatures_cb5_0_d->temperature7);
    
    assert(memcmp(&bmsinternal_temperatures_cb5_0_s, bmsinternal_temperatures_cb5_0_d, sizeof(BMSinternal_TEMPERATURES_CB5_0)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB5_1 */
    printf("BMSinternal_TEMPERATURES_CB5_1:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb5_1 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB5_1));
    
    BMSinternal_TEMPERATURES_CB5_1 bmsinternal_temperatures_cb5_1_s = { 10, 124, 34, 172, 36, 173, 63, 4 };
    serialize_BMSinternal_TEMPERATURES_CB5_1(buffer_bmsinternal_temperatures_cb5_1, bmsinternal_temperatures_cb5_1_s.temperature8, bmsinternal_temperatures_cb5_1_s.temperature9, bmsinternal_temperatures_cb5_1_s.temperature10, bmsinternal_temperatures_cb5_1_s.temperature11, bmsinternal_temperatures_cb5_1_s.temperature12, bmsinternal_temperatures_cb5_1_s.temperature13, bmsinternal_temperatures_cb5_1_s.temperature14, bmsinternal_temperatures_cb5_1_s.temperature15);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb5_1_s.temperature8, (long long unsigned int)bmsinternal_temperatures_cb5_1_s.temperature9, (long long unsigned int)bmsinternal_temperatures_cb5_1_s.temperature10, (long long unsigned int)bmsinternal_temperatures_cb5_1_s.temperature11, (long long unsigned int)bmsinternal_temperatures_cb5_1_s.temperature12, (long long unsigned int)bmsinternal_temperatures_cb5_1_s.temperature13, (long long unsigned int)bmsinternal_temperatures_cb5_1_s.temperature14, (long long unsigned int)bmsinternal_temperatures_cb5_1_s.temperature15);
    
    BMSinternal_TEMPERATURES_CB5_1* bmsinternal_temperatures_cb5_1_d = (BMSinternal_TEMPERATURES_CB5_1*)malloc(sizeof(BMSinternal_TEMPERATURES_CB5_1));
    deserialize_BMSinternal_TEMPERATURES_CB5_1(buffer_bmsinternal_temperatures_cb5_1, bmsinternal_temperatures_cb5_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb5_1_d->temperature8, (long long unsigned int)bmsinternal_temperatures_cb5_1_d->temperature9, (long long unsigned int)bmsinternal_temperatures_cb5_1_d->temperature10, (long long unsigned int)bmsinternal_temperatures_cb5_1_d->temperature11, (long long unsigned int)bmsinternal_temperatures_cb5_1_d->temperature12, (long long unsigned int)bmsinternal_temperatures_cb5_1_d->temperature13, (long long unsigned int)bmsinternal_temperatures_cb5_1_d->temperature14, (long long unsigned int)bmsinternal_temperatures_cb5_1_d->temperature15);
    
    assert(memcmp(&bmsinternal_temperatures_cb5_1_s, bmsinternal_temperatures_cb5_1_d, sizeof(BMSinternal_TEMPERATURES_CB5_1)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_TEMPERATURES_CB5_2 */
    printf("BMSinternal_TEMPERATURES_CB5_2:\n");
    uint8_t* buffer_bmsinternal_temperatures_cb5_2 = (uint8_t*)malloc(sizeof(BMSinternal_TEMPERATURES_CB5_2));
    
    BMSinternal_TEMPERATURES_CB5_2 bmsinternal_temperatures_cb5_2_s = { 21, 143, 197, 1 };
    serialize_BMSinternal_TEMPERATURES_CB5_2(buffer_bmsinternal_temperatures_cb5_2, bmsinternal_temperatures_cb5_2_s.temperature16, bmsinternal_temperatures_cb5_2_s.temperature17, bmsinternal_temperatures_cb5_2_s.max_temperature, bmsinternal_temperatures_cb5_2_s.min_temperature);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb5_2_s.temperature16, (long long unsigned int)bmsinternal_temperatures_cb5_2_s.temperature17, (long long unsigned int)bmsinternal_temperatures_cb5_2_s.max_temperature, (long long unsigned int)bmsinternal_temperatures_cb5_2_s.min_temperature);
    
    BMSinternal_TEMPERATURES_CB5_2* bmsinternal_temperatures_cb5_2_d = (BMSinternal_TEMPERATURES_CB5_2*)malloc(sizeof(BMSinternal_TEMPERATURES_CB5_2));
    deserialize_BMSinternal_TEMPERATURES_CB5_2(buffer_bmsinternal_temperatures_cb5_2, bmsinternal_temperatures_cb5_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)bmsinternal_temperatures_cb5_2_d->temperature16, (long long unsigned int)bmsinternal_temperatures_cb5_2_d->temperature17, (long long unsigned int)bmsinternal_temperatures_cb5_2_d->max_temperature, (long long unsigned int)bmsinternal_temperatures_cb5_2_d->min_temperature);
    
    assert(memcmp(&bmsinternal_temperatures_cb5_2_s, bmsinternal_temperatures_cb5_2_d, sizeof(BMSinternal_TEMPERATURES_CB5_2)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_MASTER_SYNC */
    printf("BMSinternal_MASTER_SYNC:\n");
    uint8_t* buffer_bmsinternal_master_sync = (uint8_t*)malloc(sizeof(BMSinternal_MASTER_SYNC));
    
    BMSinternal_MASTER_SYNC bmsinternal_master_sync_s = { 3683361767 };
    serialize_BMSinternal_MASTER_SYNC(buffer_bmsinternal_master_sync, bmsinternal_master_sync_s.time);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)bmsinternal_master_sync_s.time);
    
    BMSinternal_MASTER_SYNC* bmsinternal_master_sync_d = (BMSinternal_MASTER_SYNC*)malloc(sizeof(BMSinternal_MASTER_SYNC));
    deserialize_BMSinternal_MASTER_SYNC(buffer_bmsinternal_master_sync, bmsinternal_master_sync_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)bmsinternal_master_sync_d->time);
    
    assert(memcmp(&bmsinternal_master_sync_s, bmsinternal_master_sync_d, sizeof(BMSinternal_MASTER_SYNC)) == 0);
    puts("SUCCESS!\n");
        

/* BMSinternal_CELLBOARD_TOKEN */
    printf("BMSinternal_CELLBOARD_TOKEN:\n");
    uint8_t* buffer_bmsinternal_cellboard_token = (uint8_t*)malloc(sizeof(BMSinternal_CELLBOARD_TOKEN));
    
    BMSinternal_CELLBOARD_TOKEN bmsinternal_cellboard_token_s = { 76, 0, 0, 0, 3702345007 };
    serialize_BMSinternal_CELLBOARD_TOKEN(buffer_bmsinternal_cellboard_token, bmsinternal_cellboard_token_s.sender_cellboard, bmsinternal_cellboard_token_s.time);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)bmsinternal_cellboard_token_s.sender_cellboard);
    
    BMSinternal_CELLBOARD_TOKEN* bmsinternal_cellboard_token_d = (BMSinternal_CELLBOARD_TOKEN*)malloc(sizeof(BMSinternal_CELLBOARD_TOKEN));
    deserialize_BMSinternal_CELLBOARD_TOKEN(buffer_bmsinternal_cellboard_token, bmsinternal_cellboard_token_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)bmsinternal_cellboard_token_d->sender_cellboard);
    
    assert(memcmp(&bmsinternal_cellboard_token_s, bmsinternal_cellboard_token_d, sizeof(BMSinternal_CELLBOARD_TOKEN)) == 0);
    puts("SUCCESS!\n");
        
}