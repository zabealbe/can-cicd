#ifdef __cplusplus
extern "C" {
#endif

#ifndef BMSINTERNAL_H
#define BMSINTERNAL_H

#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include <stdio.h>

/*
*   STDC Version check
*   check if STDC version is greater or equal than the minimum version required
*/
#define NAKED_STDC_MIN_VERSION 201112L
#if __STDC_VERSION__ < NAKED_STDC_MIN_VERSION
    #error "** STDC VERSION NOT SUPPORTED **"
#endif

/*
*   Endianness check
*   static check for supported endianness
*/
#ifndef __NAKED_ENDIAN_ORDER
    #define __NAKED_ENDIAN_ORDER 1094861636L // "ABCD"
#endif
#if !defined(__NAKED_LITTLE_ENDIAN) && !defined(__NAKED_BIG_ENDIAN) && !defined(__NAKED_PDP_ENDIAN)
    #if __NAKED_ENDIAN_ORDER==0x41424344UL 
        #define __NAKED_LITTLE_ENDIAN
    #elif __NAKED_ENDIAN_ORDER==0x44434241UL
        #define __NAKED_BIG_ENDIAN
    #elif __NAKED_ENDIAN_ORDER==0x42414443UL
        #define __NAKED_PDP_ENDIAN
    #else
        #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
    #endif
#endif

#ifndef __NAKED_LITTLE_ENDIAN
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

// assert float is 32bit and double is 64bit because not defined in the standard
static_assert(sizeof(float) == 4,"** THIS ARCHITECTURE DOESN'T MATCH THE EXPECTED SIZE FOR 'float' OF 4 BYTES **");
static_assert(sizeof(double) == 8, "** THIS ARCHITECTURE DOESN'T MATCH THE EXPECTED SIZE FOR 'double' OF 8 BYTES **");

/*
*   Packed macro
*   macro for packed structs on multiple compilers
*/
#if defined(__MINGW32__)
    #define __is_packed __attribute__((__gcc_struct__, __packed__)) // , __aligned__(1)))
#else
    #define __is_packed __attribute__((__packed__)) // , __aligned__(1)))
#endif

#define setBit(bitset, index, value) \
do { \
    bitset[index/8] &= ~( 1 << index % 8); \
    bitset[index/8] |=  (value << index % 8); \
} while(0);
#define flipBit(bitset, index) (bitset[index/8] ^= (1 << index % 8) )
#define getBit(bitset, index)  (bitset[index/8] &  (1 << index % 8) )


/* BMSinternal_VOLTAGES_CB0_0 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} BMSinternal_VOLTAGES_CB0_0;
static_assert(sizeof(BMSinternal_VOLTAGES_CB0_0) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB0_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_BMSinternal_VOLTAGES_CB0_0(uint8_t* buffer, BMSinternal_VOLTAGES_CB0_0* bmsinternal_voltages_cb0_0);

/* BMSinternal_VOLTAGES_CB0_1 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} BMSinternal_VOLTAGES_CB0_1;
static_assert(sizeof(BMSinternal_VOLTAGES_CB0_1) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB0_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_BMSinternal_VOLTAGES_CB0_1(uint8_t* buffer, BMSinternal_VOLTAGES_CB0_1* bmsinternal_voltages_cb0_1);

/* BMSinternal_VOLTAGES_CB0_2 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} BMSinternal_VOLTAGES_CB0_2;
static_assert(sizeof(BMSinternal_VOLTAGES_CB0_2) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB0_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_BMSinternal_VOLTAGES_CB0_2(uint8_t* buffer, BMSinternal_VOLTAGES_CB0_2* bmsinternal_voltages_cb0_2);

/* BMSinternal_VOLTAGES_CB0_3 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} BMSinternal_VOLTAGES_CB0_3;
static_assert(sizeof(BMSinternal_VOLTAGES_CB0_3) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB0_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_BMSinternal_VOLTAGES_CB0_3(uint8_t* buffer, BMSinternal_VOLTAGES_CB0_3* bmsinternal_voltages_cb0_3);

/* BMSinternal_VOLTAGES_CB0_4 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} BMSinternal_VOLTAGES_CB0_4;
static_assert(sizeof(BMSinternal_VOLTAGES_CB0_4) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB0_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_BMSinternal_VOLTAGES_CB0_4(uint8_t* buffer, BMSinternal_VOLTAGES_CB0_4* bmsinternal_voltages_cb0_4);

/* BMSinternal_VOLTAGES_CB1_0 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} BMSinternal_VOLTAGES_CB1_0;
static_assert(sizeof(BMSinternal_VOLTAGES_CB1_0) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB1_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_BMSinternal_VOLTAGES_CB1_0(uint8_t* buffer, BMSinternal_VOLTAGES_CB1_0* bmsinternal_voltages_cb1_0);

/* BMSinternal_VOLTAGES_CB1_1 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} BMSinternal_VOLTAGES_CB1_1;
static_assert(sizeof(BMSinternal_VOLTAGES_CB1_1) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB1_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_BMSinternal_VOLTAGES_CB1_1(uint8_t* buffer, BMSinternal_VOLTAGES_CB1_1* bmsinternal_voltages_cb1_1);

/* BMSinternal_VOLTAGES_CB1_2 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} BMSinternal_VOLTAGES_CB1_2;
static_assert(sizeof(BMSinternal_VOLTAGES_CB1_2) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB1_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_BMSinternal_VOLTAGES_CB1_2(uint8_t* buffer, BMSinternal_VOLTAGES_CB1_2* bmsinternal_voltages_cb1_2);

/* BMSinternal_VOLTAGES_CB1_3 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} BMSinternal_VOLTAGES_CB1_3;
static_assert(sizeof(BMSinternal_VOLTAGES_CB1_3) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB1_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_BMSinternal_VOLTAGES_CB1_3(uint8_t* buffer, BMSinternal_VOLTAGES_CB1_3* bmsinternal_voltages_cb1_3);

/* BMSinternal_VOLTAGES_CB1_4 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} BMSinternal_VOLTAGES_CB1_4;
static_assert(sizeof(BMSinternal_VOLTAGES_CB1_4) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB1_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_BMSinternal_VOLTAGES_CB1_4(uint8_t* buffer, BMSinternal_VOLTAGES_CB1_4* bmsinternal_voltages_cb1_4);

/* BMSinternal_VOLTAGES_CB2_0 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} BMSinternal_VOLTAGES_CB2_0;
static_assert(sizeof(BMSinternal_VOLTAGES_CB2_0) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB2_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_BMSinternal_VOLTAGES_CB2_0(uint8_t* buffer, BMSinternal_VOLTAGES_CB2_0* bmsinternal_voltages_cb2_0);

/* BMSinternal_VOLTAGES_CB2_1 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} BMSinternal_VOLTAGES_CB2_1;
static_assert(sizeof(BMSinternal_VOLTAGES_CB2_1) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB2_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_BMSinternal_VOLTAGES_CB2_1(uint8_t* buffer, BMSinternal_VOLTAGES_CB2_1* bmsinternal_voltages_cb2_1);

/* BMSinternal_VOLTAGES_CB2_2 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} BMSinternal_VOLTAGES_CB2_2;
static_assert(sizeof(BMSinternal_VOLTAGES_CB2_2) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB2_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_BMSinternal_VOLTAGES_CB2_2(uint8_t* buffer, BMSinternal_VOLTAGES_CB2_2* bmsinternal_voltages_cb2_2);

/* BMSinternal_VOLTAGES_CB2_3 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} BMSinternal_VOLTAGES_CB2_3;
static_assert(sizeof(BMSinternal_VOLTAGES_CB2_3) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB2_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_BMSinternal_VOLTAGES_CB2_3(uint8_t* buffer, BMSinternal_VOLTAGES_CB2_3* bmsinternal_voltages_cb2_3);

/* BMSinternal_VOLTAGES_CB2_4 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} BMSinternal_VOLTAGES_CB2_4;
static_assert(sizeof(BMSinternal_VOLTAGES_CB2_4) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB2_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_BMSinternal_VOLTAGES_CB2_4(uint8_t* buffer, BMSinternal_VOLTAGES_CB2_4* bmsinternal_voltages_cb2_4);

/* BMSinternal_VOLTAGES_CB3_0 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} BMSinternal_VOLTAGES_CB3_0;
static_assert(sizeof(BMSinternal_VOLTAGES_CB3_0) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB3_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_BMSinternal_VOLTAGES_CB3_0(uint8_t* buffer, BMSinternal_VOLTAGES_CB3_0* bmsinternal_voltages_cb3_0);

/* BMSinternal_VOLTAGES_CB3_1 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} BMSinternal_VOLTAGES_CB3_1;
static_assert(sizeof(BMSinternal_VOLTAGES_CB3_1) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB3_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_BMSinternal_VOLTAGES_CB3_1(uint8_t* buffer, BMSinternal_VOLTAGES_CB3_1* bmsinternal_voltages_cb3_1);

/* BMSinternal_VOLTAGES_CB3_2 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} BMSinternal_VOLTAGES_CB3_2;
static_assert(sizeof(BMSinternal_VOLTAGES_CB3_2) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB3_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_BMSinternal_VOLTAGES_CB3_2(uint8_t* buffer, BMSinternal_VOLTAGES_CB3_2* bmsinternal_voltages_cb3_2);

/* BMSinternal_VOLTAGES_CB3_3 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} BMSinternal_VOLTAGES_CB3_3;
static_assert(sizeof(BMSinternal_VOLTAGES_CB3_3) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB3_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_BMSinternal_VOLTAGES_CB3_3(uint8_t* buffer, BMSinternal_VOLTAGES_CB3_3* bmsinternal_voltages_cb3_3);

/* BMSinternal_VOLTAGES_CB3_4 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} BMSinternal_VOLTAGES_CB3_4;
static_assert(sizeof(BMSinternal_VOLTAGES_CB3_4) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB3_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_BMSinternal_VOLTAGES_CB3_4(uint8_t* buffer, BMSinternal_VOLTAGES_CB3_4* bmsinternal_voltages_cb3_4);

/* BMSinternal_VOLTAGES_CB4_0 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} BMSinternal_VOLTAGES_CB4_0;
static_assert(sizeof(BMSinternal_VOLTAGES_CB4_0) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB4_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_BMSinternal_VOLTAGES_CB4_0(uint8_t* buffer, BMSinternal_VOLTAGES_CB4_0* bmsinternal_voltages_cb4_0);

/* BMSinternal_VOLTAGES_CB4_1 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} BMSinternal_VOLTAGES_CB4_1;
static_assert(sizeof(BMSinternal_VOLTAGES_CB4_1) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB4_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_BMSinternal_VOLTAGES_CB4_1(uint8_t* buffer, BMSinternal_VOLTAGES_CB4_1* bmsinternal_voltages_cb4_1);

/* BMSinternal_VOLTAGES_CB4_2 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} BMSinternal_VOLTAGES_CB4_2;
static_assert(sizeof(BMSinternal_VOLTAGES_CB4_2) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB4_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_BMSinternal_VOLTAGES_CB4_2(uint8_t* buffer, BMSinternal_VOLTAGES_CB4_2* bmsinternal_voltages_cb4_2);

/* BMSinternal_VOLTAGES_CB4_3 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} BMSinternal_VOLTAGES_CB4_3;
static_assert(sizeof(BMSinternal_VOLTAGES_CB4_3) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB4_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_BMSinternal_VOLTAGES_CB4_3(uint8_t* buffer, BMSinternal_VOLTAGES_CB4_3* bmsinternal_voltages_cb4_3);

/* BMSinternal_VOLTAGES_CB4_4 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} BMSinternal_VOLTAGES_CB4_4;
static_assert(sizeof(BMSinternal_VOLTAGES_CB4_4) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB4_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_BMSinternal_VOLTAGES_CB4_4(uint8_t* buffer, BMSinternal_VOLTAGES_CB4_4* bmsinternal_voltages_cb4_4);

/* BMSinternal_VOLTAGES_CB5_0 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} BMSinternal_VOLTAGES_CB5_0;
static_assert(sizeof(BMSinternal_VOLTAGES_CB5_0) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB5_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_BMSinternal_VOLTAGES_CB5_0(uint8_t* buffer, BMSinternal_VOLTAGES_CB5_0* bmsinternal_voltages_cb5_0);

/* BMSinternal_VOLTAGES_CB5_1 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} BMSinternal_VOLTAGES_CB5_1;
static_assert(sizeof(BMSinternal_VOLTAGES_CB5_1) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB5_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_BMSinternal_VOLTAGES_CB5_1(uint8_t* buffer, BMSinternal_VOLTAGES_CB5_1* bmsinternal_voltages_cb5_1);

/* BMSinternal_VOLTAGES_CB5_2 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} BMSinternal_VOLTAGES_CB5_2;
static_assert(sizeof(BMSinternal_VOLTAGES_CB5_2) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB5_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_BMSinternal_VOLTAGES_CB5_2(uint8_t* buffer, BMSinternal_VOLTAGES_CB5_2* bmsinternal_voltages_cb5_2);

/* BMSinternal_VOLTAGES_CB5_3 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} BMSinternal_VOLTAGES_CB5_3;
static_assert(sizeof(BMSinternal_VOLTAGES_CB5_3) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB5_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_BMSinternal_VOLTAGES_CB5_3(uint8_t* buffer, BMSinternal_VOLTAGES_CB5_3* bmsinternal_voltages_cb5_3);

/* BMSinternal_VOLTAGES_CB5_4 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} BMSinternal_VOLTAGES_CB5_4;
static_assert(sizeof(BMSinternal_VOLTAGES_CB5_4) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_VOLTAGES_CB5_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_BMSinternal_VOLTAGES_CB5_4(uint8_t* buffer, BMSinternal_VOLTAGES_CB5_4* bmsinternal_voltages_cb5_4);

/* BMSinternal_TEMPERATURES_CB0_0 */
typedef struct __is_packed {
    uint8_t temperature0;
    uint8_t temperature1;
    uint8_t temperature2;
    uint8_t temperature3;
    uint8_t temperature4;
    uint8_t temperature5;
    uint8_t temperature6;
    uint8_t temperature7;
} BMSinternal_TEMPERATURES_CB0_0;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB0_0) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB0_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7);
size_t deserialize_BMSinternal_TEMPERATURES_CB0_0(uint8_t* buffer, BMSinternal_TEMPERATURES_CB0_0* bmsinternal_temperatures_cb0_0);

/* BMSinternal_TEMPERATURES_CB0_1 */
typedef struct __is_packed {
    uint8_t temperature8;
    uint8_t temperature9;
    uint8_t temperature10;
    uint8_t temperature11;
    uint8_t temperature12;
    uint8_t temperature13;
    uint8_t temperature14;
    uint8_t temperature15;
} BMSinternal_TEMPERATURES_CB0_1;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB0_1) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB0_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15);
size_t deserialize_BMSinternal_TEMPERATURES_CB0_1(uint8_t* buffer, BMSinternal_TEMPERATURES_CB0_1* bmsinternal_temperatures_cb0_1);

/* BMSinternal_TEMPERATURES_CB0_2 */
typedef struct __is_packed {
    uint8_t temperature16;
    uint8_t temperature17;
} BMSinternal_TEMPERATURES_CB0_2;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB0_2) == 2, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB0_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17);
size_t deserialize_BMSinternal_TEMPERATURES_CB0_2(uint8_t* buffer, BMSinternal_TEMPERATURES_CB0_2* bmsinternal_temperatures_cb0_2);

/* BMSinternal_TEMPERATURES_CB1_0 */
typedef struct __is_packed {
    uint8_t temperature0;
    uint8_t temperature1;
    uint8_t temperature2;
    uint8_t temperature3;
    uint8_t temperature4;
    uint8_t temperature5;
    uint8_t temperature6;
    uint8_t temperature7;
} BMSinternal_TEMPERATURES_CB1_0;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB1_0) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB1_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7);
size_t deserialize_BMSinternal_TEMPERATURES_CB1_0(uint8_t* buffer, BMSinternal_TEMPERATURES_CB1_0* bmsinternal_temperatures_cb1_0);

/* BMSinternal_TEMPERATURES_CB1_1 */
typedef struct __is_packed {
    uint8_t temperature8;
    uint8_t temperature9;
    uint8_t temperature10;
    uint8_t temperature11;
    uint8_t temperature12;
    uint8_t temperature13;
    uint8_t temperature14;
    uint8_t temperature15;
} BMSinternal_TEMPERATURES_CB1_1;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB1_1) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB1_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15);
size_t deserialize_BMSinternal_TEMPERATURES_CB1_1(uint8_t* buffer, BMSinternal_TEMPERATURES_CB1_1* bmsinternal_temperatures_cb1_1);

/* BMSinternal_TEMPERATURES_CB1_2 */
typedef struct __is_packed {
    uint8_t temperature16;
    uint8_t temperature17;
    uint8_t max_temperature;
    uint8_t min_temperature;
} BMSinternal_TEMPERATURES_CB1_2;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB1_2) == 4, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB1_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17, uint8_t max_temperature, uint8_t min_temperature);
size_t deserialize_BMSinternal_TEMPERATURES_CB1_2(uint8_t* buffer, BMSinternal_TEMPERATURES_CB1_2* bmsinternal_temperatures_cb1_2);

/* BMSinternal_TEMPERATURES_CB2_0 */
typedef struct __is_packed {
    uint8_t temperature0;
    uint8_t temperature1;
    uint8_t temperature2;
    uint8_t temperature3;
    uint8_t temperature4;
    uint8_t temperature5;
    uint8_t temperature6;
    uint8_t temperature7;
} BMSinternal_TEMPERATURES_CB2_0;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB2_0) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB2_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7);
size_t deserialize_BMSinternal_TEMPERATURES_CB2_0(uint8_t* buffer, BMSinternal_TEMPERATURES_CB2_0* bmsinternal_temperatures_cb2_0);

/* BMSinternal_TEMPERATURES_CB2_1 */
typedef struct __is_packed {
    uint8_t temperature8;
    uint8_t temperature9;
    uint8_t temperature10;
    uint8_t temperature11;
    uint8_t temperature12;
    uint8_t temperature13;
    uint8_t temperature14;
    uint8_t temperature15;
} BMSinternal_TEMPERATURES_CB2_1;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB2_1) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB2_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15);
size_t deserialize_BMSinternal_TEMPERATURES_CB2_1(uint8_t* buffer, BMSinternal_TEMPERATURES_CB2_1* bmsinternal_temperatures_cb2_1);

/* BMSinternal_TEMPERATURES_CB2_2 */
typedef struct __is_packed {
    uint8_t temperature16;
    uint8_t temperature17;
    uint8_t max_temperature;
    uint8_t min_temperature;
} BMSinternal_TEMPERATURES_CB2_2;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB2_2) == 4, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB2_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17, uint8_t max_temperature, uint8_t min_temperature);
size_t deserialize_BMSinternal_TEMPERATURES_CB2_2(uint8_t* buffer, BMSinternal_TEMPERATURES_CB2_2* bmsinternal_temperatures_cb2_2);

/* BMSinternal_TEMPERATURES_CB3_0 */
typedef struct __is_packed {
    uint8_t temperature0;
    uint8_t temperature1;
    uint8_t temperature2;
    uint8_t temperature3;
    uint8_t temperature4;
    uint8_t temperature5;
    uint8_t temperature6;
    uint8_t temperature7;
} BMSinternal_TEMPERATURES_CB3_0;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB3_0) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB3_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7);
size_t deserialize_BMSinternal_TEMPERATURES_CB3_0(uint8_t* buffer, BMSinternal_TEMPERATURES_CB3_0* bmsinternal_temperatures_cb3_0);

/* BMSinternal_TEMPERATURES_CB3_1 */
typedef struct __is_packed {
    uint8_t temperature8;
    uint8_t temperature9;
    uint8_t temperature10;
    uint8_t temperature11;
    uint8_t temperature12;
    uint8_t temperature13;
    uint8_t temperature14;
    uint8_t temperature15;
} BMSinternal_TEMPERATURES_CB3_1;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB3_1) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB3_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15);
size_t deserialize_BMSinternal_TEMPERATURES_CB3_1(uint8_t* buffer, BMSinternal_TEMPERATURES_CB3_1* bmsinternal_temperatures_cb3_1);

/* BMSinternal_TEMPERATURES_CB3_2 */
typedef struct __is_packed {
    uint8_t temperature16;
    uint8_t temperature17;
    uint8_t max_temperature;
    uint8_t min_temperature;
} BMSinternal_TEMPERATURES_CB3_2;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB3_2) == 4, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB3_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17, uint8_t max_temperature, uint8_t min_temperature);
size_t deserialize_BMSinternal_TEMPERATURES_CB3_2(uint8_t* buffer, BMSinternal_TEMPERATURES_CB3_2* bmsinternal_temperatures_cb3_2);

/* BMSinternal_TEMPERATURES_CB4_0 */
typedef struct __is_packed {
    uint8_t temperature0;
    uint8_t temperature1;
    uint8_t temperature2;
    uint8_t temperature3;
    uint8_t temperature4;
    uint8_t temperature5;
    uint8_t temperature6;
    uint8_t temperature7;
} BMSinternal_TEMPERATURES_CB4_0;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB4_0) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB4_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7);
size_t deserialize_BMSinternal_TEMPERATURES_CB4_0(uint8_t* buffer, BMSinternal_TEMPERATURES_CB4_0* bmsinternal_temperatures_cb4_0);

/* BMSinternal_TEMPERATURES_CB4_1 */
typedef struct __is_packed {
    uint8_t temperature8;
    uint8_t temperature9;
    uint8_t temperature10;
    uint8_t temperature11;
    uint8_t temperature12;
    uint8_t temperature13;
    uint8_t temperature14;
    uint8_t temperature15;
} BMSinternal_TEMPERATURES_CB4_1;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB4_1) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB4_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15);
size_t deserialize_BMSinternal_TEMPERATURES_CB4_1(uint8_t* buffer, BMSinternal_TEMPERATURES_CB4_1* bmsinternal_temperatures_cb4_1);

/* BMSinternal_TEMPERATURES_CB4_2 */
typedef struct __is_packed {
    uint8_t temperature16;
    uint8_t temperature17;
    uint8_t max_temperature;
    uint8_t min_temperature;
} BMSinternal_TEMPERATURES_CB4_2;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB4_2) == 4, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB4_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17, uint8_t max_temperature, uint8_t min_temperature);
size_t deserialize_BMSinternal_TEMPERATURES_CB4_2(uint8_t* buffer, BMSinternal_TEMPERATURES_CB4_2* bmsinternal_temperatures_cb4_2);

/* BMSinternal_TEMPERATURES_CB5_0 */
typedef struct __is_packed {
    uint8_t temperature0;
    uint8_t temperature1;
    uint8_t temperature2;
    uint8_t temperature3;
    uint8_t temperature4;
    uint8_t temperature5;
    uint8_t temperature6;
    uint8_t temperature7;
} BMSinternal_TEMPERATURES_CB5_0;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB5_0) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB5_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7);
size_t deserialize_BMSinternal_TEMPERATURES_CB5_0(uint8_t* buffer, BMSinternal_TEMPERATURES_CB5_0* bmsinternal_temperatures_cb5_0);

/* BMSinternal_TEMPERATURES_CB5_1 */
typedef struct __is_packed {
    uint8_t temperature8;
    uint8_t temperature9;
    uint8_t temperature10;
    uint8_t temperature11;
    uint8_t temperature12;
    uint8_t temperature13;
    uint8_t temperature14;
    uint8_t temperature15;
} BMSinternal_TEMPERATURES_CB5_1;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB5_1) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB5_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15);
size_t deserialize_BMSinternal_TEMPERATURES_CB5_1(uint8_t* buffer, BMSinternal_TEMPERATURES_CB5_1* bmsinternal_temperatures_cb5_1);

/* BMSinternal_TEMPERATURES_CB5_2 */
typedef struct __is_packed {
    uint8_t temperature16;
    uint8_t temperature17;
    uint8_t max_temperature;
    uint8_t min_temperature;
} BMSinternal_TEMPERATURES_CB5_2;
static_assert(sizeof(BMSinternal_TEMPERATURES_CB5_2) == 4, "struct size mismatch");
    
size_t serialize_BMSinternal_TEMPERATURES_CB5_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17, uint8_t max_temperature, uint8_t min_temperature);
size_t deserialize_BMSinternal_TEMPERATURES_CB5_2(uint8_t* buffer, BMSinternal_TEMPERATURES_CB5_2* bmsinternal_temperatures_cb5_2);

/* BMSinternal_MASTER_SYNC */
typedef struct __is_packed {
    uint32_t time;
} BMSinternal_MASTER_SYNC;
static_assert(sizeof(BMSinternal_MASTER_SYNC) == 4, "struct size mismatch");
    
size_t serialize_BMSinternal_MASTER_SYNC(uint8_t* buffer, uint32_t time);
size_t deserialize_BMSinternal_MASTER_SYNC(uint8_t* buffer, BMSinternal_MASTER_SYNC* bmsinternal_master_sync);

/* BMSinternal_CELLBOARD_TOKEN */
typedef struct __is_packed {
    uint8_t sender_cellboard;
    uint8_t __unused_padding_1;
    uint8_t __unused_padding_2;
    uint8_t __unused_padding_3;
    uint32_t time;
} BMSinternal_CELLBOARD_TOKEN;
static_assert(sizeof(BMSinternal_CELLBOARD_TOKEN) == 8, "struct size mismatch");
    
size_t serialize_BMSinternal_CELLBOARD_TOKEN(uint8_t* buffer, uint8_t sender_cellboard, uint32_t time);
size_t deserialize_BMSinternal_CELLBOARD_TOKEN(uint8_t* buffer, BMSinternal_CELLBOARD_TOKEN* bmsinternal_cellboard_token);
#endif

#ifdef __cplusplus
}
#endif