#ifndef BMS_HV_H
#define BMS_HV_H

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
#define __BMS_HV_ENDIAN_ORDER ('ABCD')
#if __BMS_HV_ENDIAN_ORDER==0x41424344UL 
    #define BMS_HV_LITTLE_ENDIAN
#elif __BMS_HV_ENDIAN_ORDER==0x44434241UL
    #define BMS_HV_BIG_ENDIAN
#elif __BMS_HV_ENDIAN_ORDER==0x42414443UL
    #define BMS_HV_PDP_ENDIAN
#else
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

#ifndef BMS_HV_LITTLE_ENDIAN
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

// assert float is 32bit and double is 64bit because not defined in the standard
// assert(sizeof(float) == 4) TODO: preprocessor
// assert(sizeof(double) == 8) TODO: preprocessor


enum Ts_Status_Set __is_packed {
	Ts_Status_Set_OFF,
	Ts_Status_Set_ON,
};

typedef struct __is_packed {
	Ts_Status_Set ts_status_set;
} SET_TS_STATUS;
static_assert(sizeof(SET_TS_STATUS) == 1, "struct size mismatch");

void serialize_SET_TS_STATUS(SET_TS_STATUS* set_ts_status, uint8_t* buffer, size_t buf_len);

void deserialize_SET_TS_STATUS(uint8_t* buffer, size_t buf_len, SET_TS_STATUS* set_ts_status);

#endif