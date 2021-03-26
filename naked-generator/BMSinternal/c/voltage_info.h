#ifndef VOLTAGE_INFO_H
#define VOLTAGE_INFO_H

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
#define __VOLTAGE_INFO_ENDIAN_ORDER ('ABCD')
#if __VOLTAGE_INFO_ENDIAN_ORDER==0x41424344UL 
    #define VOLTAGE_INFO_LITTLE_ENDIAN
#elif __VOLTAGE_INFO_ENDIAN_ORDER==0x44434241UL
    #define VOLTAGE_INFO_BIG_ENDIAN
#elif __VOLTAGE_INFO_ENDIAN_ORDER==0x42414443UL
    #define VOLTAGE_INFO_PDP_ENDIAN
#else
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

#ifndef VOLTAGE_INFO_LITTLE_ENDIAN
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

// assert float is 32bit and double is 64bit because not defined in the standard
// assert(sizeof(float) == 4) TODO: preprocessor
// assert(sizeof(double) == 8) TODO: preprocessor


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

#endif