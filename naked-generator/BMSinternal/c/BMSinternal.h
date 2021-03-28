#ifndef BMSINTERNAL_H
#define BMSINTERNAL_H

#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include <stdio.h>

/*
*   Assert macro
*   macro for static assertion
*   source: https://en.wikipedia.org/wiki/Assertion_(software_development)#Static_assertions
*/

/*
*   Packed macro
*   macro for packed structs on multiple compilers
*/
#if defined(__MINGW32__)
    #define __is_packed       __attribute__((__gcc_struct__, __packed__, __aligned__(1)))
#else
    #define __is_packed       __attribute__((__packed__, __aligned__(1)))
#endif

/*
*   Endianness check
*   static check for supported endianness
*/
#ifndef __NAKED_ENDIAN_ORDER
    #define __NAKED_ENDIAN_ORDER ('ABCD')
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


typedef struct __is_packed {
	uint16_t voltage0;
	uint16_t voltage1;
	uint16_t voltage2;
	uint16_t voltage3;
} VOLTAGES_CB0_0;
static_assert(sizeof(VOLTAGES_CB0_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage4;
	uint16_t voltage5;
	uint16_t voltage6;
	uint16_t voltage7;
} VOLTAGES_CB0_1;
static_assert(sizeof(VOLTAGES_CB0_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage8;
	uint16_t voltage9;
	uint16_t voltage10;
	uint16_t voltage11;
} VOLTAGES_CB0_2;
static_assert(sizeof(VOLTAGES_CB0_2) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage12;
	uint16_t voltage13;
	uint16_t voltage14;
	uint16_t voltage15;
} VOLTAGES_CB0_3;
static_assert(sizeof(VOLTAGES_CB0_3) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage16;
	uint16_t voltage17;
	uint16_t max_voltage;
	uint16_t min_voltage;
} VOLTAGES_CB0_4;
static_assert(sizeof(VOLTAGES_CB0_4) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage0;
	uint16_t voltage1;
	uint16_t voltage2;
	uint16_t voltage3;
} VOLTAGES_CB1_0;
static_assert(sizeof(VOLTAGES_CB1_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage4;
	uint16_t voltage5;
	uint16_t voltage6;
	uint16_t voltage7;
} VOLTAGES_CB1_1;
static_assert(sizeof(VOLTAGES_CB1_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage8;
	uint16_t voltage9;
	uint16_t voltage10;
	uint16_t voltage11;
} VOLTAGES_CB1_2;
static_assert(sizeof(VOLTAGES_CB1_2) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage12;
	uint16_t voltage13;
	uint16_t voltage14;
	uint16_t voltage15;
} VOLTAGES_CB1_3;
static_assert(sizeof(VOLTAGES_CB1_3) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage16;
	uint16_t voltage17;
	uint16_t max_voltage;
	uint16_t min_voltage;
} VOLTAGES_CB1_4;
static_assert(sizeof(VOLTAGES_CB1_4) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage0;
	uint16_t voltage1;
	uint16_t voltage2;
	uint16_t voltage3;
} VOLTAGES_CB2_0;
static_assert(sizeof(VOLTAGES_CB2_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage4;
	uint16_t voltage5;
	uint16_t voltage6;
	uint16_t voltage7;
} VOLTAGES_CB2_1;
static_assert(sizeof(VOLTAGES_CB2_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage8;
	uint16_t voltage9;
	uint16_t voltage10;
	uint16_t voltage11;
} VOLTAGES_CB2_2;
static_assert(sizeof(VOLTAGES_CB2_2) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage12;
	uint16_t voltage13;
	uint16_t voltage14;
	uint16_t voltage15;
} VOLTAGES_CB2_3;
static_assert(sizeof(VOLTAGES_CB2_3) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage16;
	uint16_t voltage17;
	uint16_t max_voltage;
	uint16_t min_voltage;
} VOLTAGES_CB2_4;
static_assert(sizeof(VOLTAGES_CB2_4) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage0;
	uint16_t voltage1;
	uint16_t voltage2;
	uint16_t voltage3;
} VOLTAGES_CB3_0;
static_assert(sizeof(VOLTAGES_CB3_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage4;
	uint16_t voltage5;
	uint16_t voltage6;
	uint16_t voltage7;
} VOLTAGES_CB3_1;
static_assert(sizeof(VOLTAGES_CB3_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage8;
	uint16_t voltage9;
	uint16_t voltage10;
	uint16_t voltage11;
} VOLTAGES_CB3_2;
static_assert(sizeof(VOLTAGES_CB3_2) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage12;
	uint16_t voltage13;
	uint16_t voltage14;
	uint16_t voltage15;
} VOLTAGES_CB3_3;
static_assert(sizeof(VOLTAGES_CB3_3) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage16;
	uint16_t voltage17;
	uint16_t max_voltage;
	uint16_t min_voltage;
} VOLTAGES_CB3_4;
static_assert(sizeof(VOLTAGES_CB3_4) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage0;
	uint16_t voltage1;
	uint16_t voltage2;
	uint16_t voltage3;
} VOLTAGES_CB4_0;
static_assert(sizeof(VOLTAGES_CB4_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage4;
	uint16_t voltage5;
	uint16_t voltage6;
	uint16_t voltage7;
} VOLTAGES_CB4_1;
static_assert(sizeof(VOLTAGES_CB4_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage8;
	uint16_t voltage9;
	uint16_t voltage10;
	uint16_t voltage11;
} VOLTAGES_CB4_2;
static_assert(sizeof(VOLTAGES_CB4_2) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage12;
	uint16_t voltage13;
	uint16_t voltage14;
	uint16_t voltage15;
} VOLTAGES_CB4_3;
static_assert(sizeof(VOLTAGES_CB4_3) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage16;
	uint16_t voltage17;
	uint16_t max_voltage;
	uint16_t min_voltage;
} VOLTAGES_CB4_4;
static_assert(sizeof(VOLTAGES_CB4_4) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage0;
	uint16_t voltage1;
	uint16_t voltage2;
	uint16_t voltage3;
} VOLTAGES_CB5_0;
static_assert(sizeof(VOLTAGES_CB5_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage4;
	uint16_t voltage5;
	uint16_t voltage6;
	uint16_t voltage7;
} VOLTAGES_CB5_1;
static_assert(sizeof(VOLTAGES_CB5_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage8;
	uint16_t voltage9;
	uint16_t voltage10;
	uint16_t voltage11;
} VOLTAGES_CB5_2;
static_assert(sizeof(VOLTAGES_CB5_2) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage12;
	uint16_t voltage13;
	uint16_t voltage14;
	uint16_t voltage15;
} VOLTAGES_CB5_3;
static_assert(sizeof(VOLTAGES_CB5_3) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t voltage16;
	uint16_t voltage17;
	uint16_t max_voltage;
	uint16_t min_voltage;
} VOLTAGES_CB5_4;
static_assert(sizeof(VOLTAGES_CB5_4) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature0;
	uint8_t temperature1;
	uint8_t temperature2;
	uint8_t temperature3;
	uint8_t temperature4;
	uint8_t temperature5;
	uint8_t temperature6;
	uint8_t temperature7;
} TEMPERATURES_CB0_0;
static_assert(sizeof(TEMPERATURES_CB0_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature8;
	uint8_t temperature9;
	uint8_t temperature10;
	uint8_t temperature11;
	uint8_t temperature12;
	uint8_t temperature13;
	uint8_t temperature14;
	uint8_t temperature15;
} TEMPERATURES_CB0_1;
static_assert(sizeof(TEMPERATURES_CB0_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature16;
	uint8_t temperature17;
} TEMPERATURES_CB0_2;
static_assert(sizeof(TEMPERATURES_CB0_2) == 2, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature0;
	uint8_t temperature1;
	uint8_t temperature2;
	uint8_t temperature3;
	uint8_t temperature4;
	uint8_t temperature5;
	uint8_t temperature6;
	uint8_t temperature7;
} TEMPERATURES_CB1_0;
static_assert(sizeof(TEMPERATURES_CB1_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature8;
	uint8_t temperature9;
	uint8_t temperature10;
	uint8_t temperature11;
	uint8_t temperature12;
	uint8_t temperature13;
	uint8_t temperature14;
	uint8_t temperature15;
} TEMPERATURES_CB1_1;
static_assert(sizeof(TEMPERATURES_CB1_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature16;
	uint8_t temperature17;
	uint8_t max_temperature;
	uint8_t min_temperature;
} TEMPERATURES_CB1_2;
static_assert(sizeof(TEMPERATURES_CB1_2) == 4, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature0;
	uint8_t temperature1;
	uint8_t temperature2;
	uint8_t temperature3;
	uint8_t temperature4;
	uint8_t temperature5;
	uint8_t temperature6;
	uint8_t temperature7;
} TEMPERATURES_CB2_0;
static_assert(sizeof(TEMPERATURES_CB2_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature8;
	uint8_t temperature9;
	uint8_t temperature10;
	uint8_t temperature11;
	uint8_t temperature12;
	uint8_t temperature13;
	uint8_t temperature14;
	uint8_t temperature15;
} TEMPERATURES_CB2_1;
static_assert(sizeof(TEMPERATURES_CB2_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature16;
	uint8_t temperature17;
	uint8_t max_temperature;
	uint8_t min_temperature;
} TEMPERATURES_CB2_2;
static_assert(sizeof(TEMPERATURES_CB2_2) == 4, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature0;
	uint8_t temperature1;
	uint8_t temperature2;
	uint8_t temperature3;
	uint8_t temperature4;
	uint8_t temperature5;
	uint8_t temperature6;
	uint8_t temperature7;
} TEMPERATURES_CB3_0;
static_assert(sizeof(TEMPERATURES_CB3_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature8;
	uint8_t temperature9;
	uint8_t temperature10;
	uint8_t temperature11;
	uint8_t temperature12;
	uint8_t temperature13;
	uint8_t temperature14;
	uint8_t temperature15;
} TEMPERATURES_CB3_1;
static_assert(sizeof(TEMPERATURES_CB3_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature16;
	uint8_t temperature17;
	uint8_t max_temperature;
	uint8_t min_temperature;
} TEMPERATURES_CB3_2;
static_assert(sizeof(TEMPERATURES_CB3_2) == 4, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature0;
	uint8_t temperature1;
	uint8_t temperature2;
	uint8_t temperature3;
	uint8_t temperature4;
	uint8_t temperature5;
	uint8_t temperature6;
	uint8_t temperature7;
} TEMPERATURES_CB4_0;
static_assert(sizeof(TEMPERATURES_CB4_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature8;
	uint8_t temperature9;
	uint8_t temperature10;
	uint8_t temperature11;
	uint8_t temperature12;
	uint8_t temperature13;
	uint8_t temperature14;
	uint8_t temperature15;
} TEMPERATURES_CB4_1;
static_assert(sizeof(TEMPERATURES_CB4_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature16;
	uint8_t temperature17;
	uint8_t max_temperature;
	uint8_t min_temperature;
} TEMPERATURES_CB4_2;
static_assert(sizeof(TEMPERATURES_CB4_2) == 4, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature0;
	uint8_t temperature1;
	uint8_t temperature2;
	uint8_t temperature3;
	uint8_t temperature4;
	uint8_t temperature5;
	uint8_t temperature6;
	uint8_t temperature7;
} TEMPERATURES_CB5_0;
static_assert(sizeof(TEMPERATURES_CB5_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature8;
	uint8_t temperature9;
	uint8_t temperature10;
	uint8_t temperature11;
	uint8_t temperature12;
	uint8_t temperature13;
	uint8_t temperature14;
	uint8_t temperature15;
} TEMPERATURES_CB5_1;
static_assert(sizeof(TEMPERATURES_CB5_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint8_t temperature16;
	uint8_t temperature17;
	uint8_t max_temperature;
	uint8_t min_temperature;
} TEMPERATURES_CB5_2;
static_assert(sizeof(TEMPERATURES_CB5_2) == 4, "struct size mismatch");

typedef struct __is_packed {
	uint32_t time;
} MASTER_SYNC;
static_assert(sizeof(MASTER_SYNC) == 4, "struct size mismatch");

typedef struct __is_packed {
	uint8_t sender_cellboard;
	int8_t __unused_padding_1;
	int8_t __unused_padding_2;
	int8_t __unused_padding_3;
	uint32_t time;
} CELLBOARD_TOKEN;
static_assert(sizeof(CELLBOARD_TOKEN) == 8, "struct size mismatch");

void serialize_VOLTAGES_CB0_0(VOLTAGES_CB0_0* voltages_cb0_0, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB0_1(VOLTAGES_CB0_1* voltages_cb0_1, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB0_2(VOLTAGES_CB0_2* voltages_cb0_2, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB0_3(VOLTAGES_CB0_3* voltages_cb0_3, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB0_4(VOLTAGES_CB0_4* voltages_cb0_4, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB1_0(VOLTAGES_CB1_0* voltages_cb1_0, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB1_1(VOLTAGES_CB1_1* voltages_cb1_1, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB1_2(VOLTAGES_CB1_2* voltages_cb1_2, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB1_3(VOLTAGES_CB1_3* voltages_cb1_3, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB1_4(VOLTAGES_CB1_4* voltages_cb1_4, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB2_0(VOLTAGES_CB2_0* voltages_cb2_0, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB2_1(VOLTAGES_CB2_1* voltages_cb2_1, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB2_2(VOLTAGES_CB2_2* voltages_cb2_2, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB2_3(VOLTAGES_CB2_3* voltages_cb2_3, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB2_4(VOLTAGES_CB2_4* voltages_cb2_4, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB3_0(VOLTAGES_CB3_0* voltages_cb3_0, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB3_1(VOLTAGES_CB3_1* voltages_cb3_1, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB3_2(VOLTAGES_CB3_2* voltages_cb3_2, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB3_3(VOLTAGES_CB3_3* voltages_cb3_3, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB3_4(VOLTAGES_CB3_4* voltages_cb3_4, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB4_0(VOLTAGES_CB4_0* voltages_cb4_0, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB4_1(VOLTAGES_CB4_1* voltages_cb4_1, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB4_2(VOLTAGES_CB4_2* voltages_cb4_2, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB4_3(VOLTAGES_CB4_3* voltages_cb4_3, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB4_4(VOLTAGES_CB4_4* voltages_cb4_4, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB5_0(VOLTAGES_CB5_0* voltages_cb5_0, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB5_1(VOLTAGES_CB5_1* voltages_cb5_1, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB5_2(VOLTAGES_CB5_2* voltages_cb5_2, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB5_3(VOLTAGES_CB5_3* voltages_cb5_3, uint8_t* buffer, size_t buf_len);
void serialize_VOLTAGES_CB5_4(VOLTAGES_CB5_4* voltages_cb5_4, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB0_0(TEMPERATURES_CB0_0* temperatures_cb0_0, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB0_1(TEMPERATURES_CB0_1* temperatures_cb0_1, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB0_2(TEMPERATURES_CB0_2* temperatures_cb0_2, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB1_0(TEMPERATURES_CB1_0* temperatures_cb1_0, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB1_1(TEMPERATURES_CB1_1* temperatures_cb1_1, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB1_2(TEMPERATURES_CB1_2* temperatures_cb1_2, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB2_0(TEMPERATURES_CB2_0* temperatures_cb2_0, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB2_1(TEMPERATURES_CB2_1* temperatures_cb2_1, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB2_2(TEMPERATURES_CB2_2* temperatures_cb2_2, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB3_0(TEMPERATURES_CB3_0* temperatures_cb3_0, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB3_1(TEMPERATURES_CB3_1* temperatures_cb3_1, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB3_2(TEMPERATURES_CB3_2* temperatures_cb3_2, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB4_0(TEMPERATURES_CB4_0* temperatures_cb4_0, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB4_1(TEMPERATURES_CB4_1* temperatures_cb4_1, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB4_2(TEMPERATURES_CB4_2* temperatures_cb4_2, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB5_0(TEMPERATURES_CB5_0* temperatures_cb5_0, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB5_1(TEMPERATURES_CB5_1* temperatures_cb5_1, uint8_t* buffer, size_t buf_len);
void serialize_TEMPERATURES_CB5_2(TEMPERATURES_CB5_2* temperatures_cb5_2, uint8_t* buffer, size_t buf_len);
void serialize_MASTER_SYNC(MASTER_SYNC* master_sync, uint8_t* buffer, size_t buf_len);
void serialize_CELLBOARD_TOKEN(CELLBOARD_TOKEN* cellboard_token, uint8_t* buffer, size_t buf_len);

void deserialize_VOLTAGES_CB0_0(uint8_t* buffer, size_t buf_len, VOLTAGES_CB0_0* voltages_cb0_0);
void deserialize_VOLTAGES_CB0_1(uint8_t* buffer, size_t buf_len, VOLTAGES_CB0_1* voltages_cb0_1);
void deserialize_VOLTAGES_CB0_2(uint8_t* buffer, size_t buf_len, VOLTAGES_CB0_2* voltages_cb0_2);
void deserialize_VOLTAGES_CB0_3(uint8_t* buffer, size_t buf_len, VOLTAGES_CB0_3* voltages_cb0_3);
void deserialize_VOLTAGES_CB0_4(uint8_t* buffer, size_t buf_len, VOLTAGES_CB0_4* voltages_cb0_4);
void deserialize_VOLTAGES_CB1_0(uint8_t* buffer, size_t buf_len, VOLTAGES_CB1_0* voltages_cb1_0);
void deserialize_VOLTAGES_CB1_1(uint8_t* buffer, size_t buf_len, VOLTAGES_CB1_1* voltages_cb1_1);
void deserialize_VOLTAGES_CB1_2(uint8_t* buffer, size_t buf_len, VOLTAGES_CB1_2* voltages_cb1_2);
void deserialize_VOLTAGES_CB1_3(uint8_t* buffer, size_t buf_len, VOLTAGES_CB1_3* voltages_cb1_3);
void deserialize_VOLTAGES_CB1_4(uint8_t* buffer, size_t buf_len, VOLTAGES_CB1_4* voltages_cb1_4);
void deserialize_VOLTAGES_CB2_0(uint8_t* buffer, size_t buf_len, VOLTAGES_CB2_0* voltages_cb2_0);
void deserialize_VOLTAGES_CB2_1(uint8_t* buffer, size_t buf_len, VOLTAGES_CB2_1* voltages_cb2_1);
void deserialize_VOLTAGES_CB2_2(uint8_t* buffer, size_t buf_len, VOLTAGES_CB2_2* voltages_cb2_2);
void deserialize_VOLTAGES_CB2_3(uint8_t* buffer, size_t buf_len, VOLTAGES_CB2_3* voltages_cb2_3);
void deserialize_VOLTAGES_CB2_4(uint8_t* buffer, size_t buf_len, VOLTAGES_CB2_4* voltages_cb2_4);
void deserialize_VOLTAGES_CB3_0(uint8_t* buffer, size_t buf_len, VOLTAGES_CB3_0* voltages_cb3_0);
void deserialize_VOLTAGES_CB3_1(uint8_t* buffer, size_t buf_len, VOLTAGES_CB3_1* voltages_cb3_1);
void deserialize_VOLTAGES_CB3_2(uint8_t* buffer, size_t buf_len, VOLTAGES_CB3_2* voltages_cb3_2);
void deserialize_VOLTAGES_CB3_3(uint8_t* buffer, size_t buf_len, VOLTAGES_CB3_3* voltages_cb3_3);
void deserialize_VOLTAGES_CB3_4(uint8_t* buffer, size_t buf_len, VOLTAGES_CB3_4* voltages_cb3_4);
void deserialize_VOLTAGES_CB4_0(uint8_t* buffer, size_t buf_len, VOLTAGES_CB4_0* voltages_cb4_0);
void deserialize_VOLTAGES_CB4_1(uint8_t* buffer, size_t buf_len, VOLTAGES_CB4_1* voltages_cb4_1);
void deserialize_VOLTAGES_CB4_2(uint8_t* buffer, size_t buf_len, VOLTAGES_CB4_2* voltages_cb4_2);
void deserialize_VOLTAGES_CB4_3(uint8_t* buffer, size_t buf_len, VOLTAGES_CB4_3* voltages_cb4_3);
void deserialize_VOLTAGES_CB4_4(uint8_t* buffer, size_t buf_len, VOLTAGES_CB4_4* voltages_cb4_4);
void deserialize_VOLTAGES_CB5_0(uint8_t* buffer, size_t buf_len, VOLTAGES_CB5_0* voltages_cb5_0);
void deserialize_VOLTAGES_CB5_1(uint8_t* buffer, size_t buf_len, VOLTAGES_CB5_1* voltages_cb5_1);
void deserialize_VOLTAGES_CB5_2(uint8_t* buffer, size_t buf_len, VOLTAGES_CB5_2* voltages_cb5_2);
void deserialize_VOLTAGES_CB5_3(uint8_t* buffer, size_t buf_len, VOLTAGES_CB5_3* voltages_cb5_3);
void deserialize_VOLTAGES_CB5_4(uint8_t* buffer, size_t buf_len, VOLTAGES_CB5_4* voltages_cb5_4);
void deserialize_TEMPERATURES_CB0_0(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB0_0* temperatures_cb0_0);
void deserialize_TEMPERATURES_CB0_1(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB0_1* temperatures_cb0_1);
void deserialize_TEMPERATURES_CB0_2(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB0_2* temperatures_cb0_2);
void deserialize_TEMPERATURES_CB1_0(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB1_0* temperatures_cb1_0);
void deserialize_TEMPERATURES_CB1_1(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB1_1* temperatures_cb1_1);
void deserialize_TEMPERATURES_CB1_2(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB1_2* temperatures_cb1_2);
void deserialize_TEMPERATURES_CB2_0(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB2_0* temperatures_cb2_0);
void deserialize_TEMPERATURES_CB2_1(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB2_1* temperatures_cb2_1);
void deserialize_TEMPERATURES_CB2_2(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB2_2* temperatures_cb2_2);
void deserialize_TEMPERATURES_CB3_0(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB3_0* temperatures_cb3_0);
void deserialize_TEMPERATURES_CB3_1(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB3_1* temperatures_cb3_1);
void deserialize_TEMPERATURES_CB3_2(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB3_2* temperatures_cb3_2);
void deserialize_TEMPERATURES_CB4_0(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB4_0* temperatures_cb4_0);
void deserialize_TEMPERATURES_CB4_1(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB4_1* temperatures_cb4_1);
void deserialize_TEMPERATURES_CB4_2(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB4_2* temperatures_cb4_2);
void deserialize_TEMPERATURES_CB5_0(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB5_0* temperatures_cb5_0);
void deserialize_TEMPERATURES_CB5_1(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB5_1* temperatures_cb5_1);
void deserialize_TEMPERATURES_CB5_2(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB5_2* temperatures_cb5_2);
void deserialize_MASTER_SYNC(uint8_t* buffer, size_t buf_len, MASTER_SYNC* master_sync);
void deserialize_CELLBOARD_TOKEN(uint8_t* buffer, size_t buf_len, CELLBOARD_TOKEN* cellboard_token);

#endif