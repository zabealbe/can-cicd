#ifndef ACUNSTEER_H
#define ACUNSTEER_H

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
#define __ACUNSTEER_ENDIAN_ORDER ('ABCD')
#if __ACUNSTEER_ENDIAN_ORDER==0x41424344UL 
    #define ACUNSTEER_LITTLE_ENDIAN
#elif __ACUNSTEER_ENDIAN_ORDER==0x44434241UL
    #define ACUNSTEER_BIG_ENDIAN
#elif __ACUNSTEER_ENDIAN_ORDER==0x42414443UL
    #define ACUNSTEER_PDP_ENDIAN
#else
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

#ifndef ACUNSTEER_LITTLE_ENDIAN
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

// assert float is 32bit and double is 64bit because not defined in the standard
// assert(sizeof(float) == 4) TODO: preprocessor
// assert(sizeof(double) == 8) TODO: preprocessor


typedef struct __is_packed {
	uint16_t pack_voltage;
	uint16_t bus_voltage;
	uint16_t max_cell_voltage;
	uint16_t min_cell_voltage;
} HV_VOLTAGE;
static_assert(sizeof(HV_VOLTAGE) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t current;
	int8_t power;
} HV_CURRENT;
static_assert(sizeof(HV_CURRENT) == 3, "struct size mismatch");

typedef struct __is_packed {
	uint16_t average_temp;
	uint16_t max_temp;
	uint16_t min_temp;
} HV_TEMP;
static_assert(sizeof(HV_TEMP) == 6, "struct size mismatch");

typedef struct __is_packed {
	uint8_t error_code;
	uint8_t error_index;
	uint8_t active;
} HV_ERROR;
static_assert(sizeof(HV_ERROR) == 3, "struct size mismatch");

void serialize_HV_VOLTAGE(HV_VOLTAGE* hv_voltage, uint8_t* buffer, size_t buf_len);
void serialize_HV_CURRENT(HV_CURRENT* hv_current, uint8_t* buffer, size_t buf_len);
void serialize_HV_TEMP(HV_TEMP* hv_temp, uint8_t* buffer, size_t buf_len);
void serialize_HV_ERROR(HV_ERROR* hv_error, uint8_t* buffer, size_t buf_len);

void deserialize_HV_VOLTAGE(uint8_t* buffer, size_t buf_len, HV_VOLTAGE* hv_voltage);
void deserialize_HV_CURRENT(uint8_t* buffer, size_t buf_len, HV_CURRENT* hv_current);
void deserialize_HV_TEMP(uint8_t* buffer, size_t buf_len, HV_TEMP* hv_temp);
void deserialize_HV_ERROR(uint8_t* buffer, size_t buf_len, HV_ERROR* hv_error);

#endif