#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "BMSinternal.h"

int main() {

/* BMSinternal_VOLTAGES_CB0_0 */
    printf("BMSinternal_VOLTAGES_CB0_0:\n");
    uint8_t* buffer_bmsinternal_voltages_cb0_0 = (uint8_t*)malloc(sizeof(BMSinternal_VOLTAGES_CB0_0));
    
    BMSinternal_VOLTAGES_CB0_0 bmsinternal_voltages_cb0_0_s = { 62758, 44371, 32590, 41640 };
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
    
    BMSinternal_VOLTAGES_CB0_1 bmsinternal_voltages_cb0_1_s = { 6347, 64715, 28363, 5522 };
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
    
    BMSinternal_VOLTAGES_CB0_2 bmsinternal_voltages_cb0_2_s = { 37943, 53915, 49725, 42317 };
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
    
    BMSinternal_VOLTAGES_CB0_3 bmsinternal_voltages_cb0_3_s = { 45006, 32298, 63458, 30021 };
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
    
    BMSinternal_VOLTAGES_CB0_4 bmsinternal_voltages_cb0_4_s = { 59738, 48986, 50563, 46585 };
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
    
    BMSinternal_VOLTAGES_CB1_0 bmsinternal_voltages_cb1_0_s = { 65027, 29783, 38715, 54676 };
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
    
    BMSinternal_VOLTAGES_CB1_1 bmsinternal_voltages_cb1_1_s = { 17927, 2296, 21730, 7609 };
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
    
    BMSinternal_VOLTAGES_CB1_2 bmsinternal_voltages_cb1_2_s = { 43906, 49986, 51888, 46131 };
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
    
    BMSinternal_VOLTAGES_CB1_3 bmsinternal_voltages_cb1_3_s = { 55257, 908, 35842, 25053 };
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
    
    BMSinternal_VOLTAGES_CB1_4 bmsinternal_voltages_cb1_4_s = { 60329, 13158, 11397, 54440 };
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
    
    BMSinternal_VOLTAGES_CB2_0 bmsinternal_voltages_cb2_0_s = { 52791, 27110, 46067, 32474 };
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
    
    BMSinternal_VOLTAGES_CB2_1 bmsinternal_voltages_cb2_1_s = { 19164, 27432, 55646, 3533 };
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
    
    BMSinternal_VOLTAGES_CB2_2 bmsinternal_voltages_cb2_2_s = { 32660, 1775, 4006, 36313 };
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
    
    BMSinternal_VOLTAGES_CB2_3 bmsinternal_voltages_cb2_3_s = { 37998, 48856, 41816, 38297 };
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
    
    BMSinternal_VOLTAGES_CB2_4 bmsinternal_voltages_cb2_4_s = { 2640, 16963, 32184, 12486 };
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
    
    BMSinternal_VOLTAGES_CB3_0 bmsinternal_voltages_cb3_0_s = { 41796, 52720, 24447, 22691 };
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
    
    BMSinternal_VOLTAGES_CB3_1 bmsinternal_voltages_cb3_1_s = { 19988, 21113, 8672, 16605 };
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
    
    BMSinternal_VOLTAGES_CB3_2 bmsinternal_voltages_cb3_2_s = { 25463, 29818, 59104, 6308 };
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
    
    BMSinternal_VOLTAGES_CB3_3 bmsinternal_voltages_cb3_3_s = { 10973, 42718, 8586, 56204 };
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
    
    BMSinternal_VOLTAGES_CB3_4 bmsinternal_voltages_cb3_4_s = { 30300, 47174, 42851, 861 };
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
    
    BMSinternal_VOLTAGES_CB4_0 bmsinternal_voltages_cb4_0_s = { 22272, 2679, 31961, 8804 };
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
    
    BMSinternal_VOLTAGES_CB4_1 bmsinternal_voltages_cb4_1_s = { 44183, 9381, 44311, 16295 };
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
    
    BMSinternal_VOLTAGES_CB4_2 bmsinternal_voltages_cb4_2_s = { 1253, 5488, 36691, 50652 };
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
    
    BMSinternal_VOLTAGES_CB4_3 bmsinternal_voltages_cb4_3_s = { 461, 56203, 19487, 56493 };
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
    
    BMSinternal_VOLTAGES_CB4_4 bmsinternal_voltages_cb4_4_s = { 34519, 45615, 65323, 61683 };
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
    
    BMSinternal_VOLTAGES_CB5_0 bmsinternal_voltages_cb5_0_s = { 8136, 64226, 24633, 7734 };
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
    
    BMSinternal_VOLTAGES_CB5_1 bmsinternal_voltages_cb5_1_s = { 9507, 54841, 25218, 15620 };
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
    
    BMSinternal_VOLTAGES_CB5_2 bmsinternal_voltages_cb5_2_s = { 22837, 7334, 44861, 23908 };
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
    
    BMSinternal_VOLTAGES_CB5_3 bmsinternal_voltages_cb5_3_s = { 3459, 7176, 22058, 5276 };
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
    
    BMSinternal_VOLTAGES_CB5_4 bmsinternal_voltages_cb5_4_s = { 9469, 5698, 53626, 5322 };
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
    
    BMSinternal_TEMPERATURES_CB0_0 bmsinternal_temperatures_cb0_0_s = { 157, 16, 53, 19, 235, 89, 137, 104 };
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
    
    BMSinternal_TEMPERATURES_CB0_1 bmsinternal_temperatures_cb0_1_s = { 132, 191, 10, 37, 95, 190, 126, 21 };
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
    
    BMSinternal_TEMPERATURES_CB0_2 bmsinternal_temperatures_cb0_2_s = { 63, 178 };
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
    
    BMSinternal_TEMPERATURES_CB1_0 bmsinternal_temperatures_cb1_0_s = { 211, 158, 137, 253, 148, 87, 179, 44 };
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
    
    BMSinternal_TEMPERATURES_CB1_1 bmsinternal_temperatures_cb1_1_s = { 211, 207, 64, 205, 250, 2, 3, 23 };
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
    
    BMSinternal_TEMPERATURES_CB1_2 bmsinternal_temperatures_cb1_2_s = { 198, 142, 188, 7 };
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
    
    BMSinternal_TEMPERATURES_CB2_0 bmsinternal_temperatures_cb2_0_s = { 219, 142, 89, 98, 82, 95, 123, 77 };
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
    
    BMSinternal_TEMPERATURES_CB2_1 bmsinternal_temperatures_cb2_1_s = { 27, 79, 246, 224, 186, 251, 48, 222 };
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
    
    BMSinternal_TEMPERATURES_CB2_2 bmsinternal_temperatures_cb2_2_s = { 15, 25, 88, 150 };
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
    
    BMSinternal_TEMPERATURES_CB3_0 bmsinternal_temperatures_cb3_0_s = { 127, 61, 86, 192, 92, 41, 31, 74 };
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
    
    BMSinternal_TEMPERATURES_CB3_1 bmsinternal_temperatures_cb3_1_s = { 216, 94, 37, 90, 179, 204, 119, 198 };
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
    
    BMSinternal_TEMPERATURES_CB3_2 bmsinternal_temperatures_cb3_2_s = { 210, 83, 32, 175 };
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
    
    BMSinternal_TEMPERATURES_CB4_0 bmsinternal_temperatures_cb4_0_s = { 74, 79, 198, 47, 63, 202, 173, 19 };
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
    
    BMSinternal_TEMPERATURES_CB4_1 bmsinternal_temperatures_cb4_1_s = { 80, 39, 215, 184, 107, 212, 154, 249 };
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
    
    BMSinternal_TEMPERATURES_CB4_2 bmsinternal_temperatures_cb4_2_s = { 231, 214, 132, 167 };
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
    
    BMSinternal_TEMPERATURES_CB5_0 bmsinternal_temperatures_cb5_0_s = { 243, 192, 129, 186, 49, 89, 31, 107 };
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
    
    BMSinternal_TEMPERATURES_CB5_1 bmsinternal_temperatures_cb5_1_s = { 203, 55, 106, 142, 207, 141, 231, 107 };
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
    
    BMSinternal_TEMPERATURES_CB5_2 bmsinternal_temperatures_cb5_2_s = { 202, 229, 241, 127 };
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
    
    BMSinternal_MASTER_SYNC bmsinternal_master_sync_s = { 2812171437 };
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
    
    BMSinternal_CELLBOARD_TOKEN bmsinternal_cellboard_token_s = { 72, 0, 0, 0, 277460588 };
    serialize_BMSinternal_CELLBOARD_TOKEN(buffer_bmsinternal_cellboard_token, bmsinternal_cellboard_token_s.sender_cellboard, bmsinternal_cellboard_token_s.time);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)bmsinternal_cellboard_token_s.sender_cellboard);
    
    BMSinternal_CELLBOARD_TOKEN* bmsinternal_cellboard_token_d = (BMSinternal_CELLBOARD_TOKEN*)malloc(sizeof(BMSinternal_CELLBOARD_TOKEN));
    deserialize_BMSinternal_CELLBOARD_TOKEN(buffer_bmsinternal_cellboard_token, bmsinternal_cellboard_token_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)bmsinternal_cellboard_token_d->sender_cellboard);
    
    assert(memcmp(&bmsinternal_cellboard_token_s, bmsinternal_cellboard_token_d, sizeof(BMSinternal_CELLBOARD_TOKEN)) == 0);
    puts("SUCCESS!\n");
        
}