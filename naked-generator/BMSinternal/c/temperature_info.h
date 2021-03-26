#ifndef TEMPERATURE_INFO_H
#define TEMPERATURE_INFO_H

#include <stdbool.h>
#include <stdint.h>

/*
* TODO: document
*/
#if defined(__MINGW32__)
#   define __is_packed       __attribute__((__gcc_struct__, __packed__, __aligned__(1)))
#else
#   define __is_packed       __attribute__((__packed__, __aligned__(1)))
#endif

/*
* TODO: document
*/
#define __TEMPERATURE_INFO_ENDIAN_ORDER ('ABCD')
#if __TEMPERATURE_INFO_ENDIAN_ORDER==0x41424344UL 
    #define TEMPERATURE_INFO_LITTLE_ENDIAN
#elif __TEMPERATURE_INFO_ENDIAN_ORDER==0x44434241UL
    #define TEMPERATURE_INFO_BIG_ENDIAN
#elif __TEMPERATURE_INFO_ENDIAN_ORDER==0x42414443UL
    #define TEMPERATURE_INFO_PDP_ENDIAN
#else
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

#ifndef TEMPERATURE_INFO_LITTLE_ENDIAN
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

// assert float is 32bit and double is 64bit because not defined in the standard
// assert(sizeof(float) == 4) TODO: preprocessor
// assert(sizeof(double) == 8) TODO: preprocessor


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

#endif