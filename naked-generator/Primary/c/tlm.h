#ifndef TLM_H
#define TLM_H

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
#define __TLM_ENDIAN_ORDER ('ABCD')
#if __TLM_ENDIAN_ORDER==0x41424344UL 
    #define TLM_LITTLE_ENDIAN
#elif __TLM_ENDIAN_ORDER==0x44434241UL
    #define TLM_BIG_ENDIAN
#elif __TLM_ENDIAN_ORDER==0x42414443UL
    #define TLM_PDP_ENDIAN
#else
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

#ifndef TLM_LITTLE_ENDIAN
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

// assert float is 32bit and double is 64bit because not defined in the standard
// assert(sizeof(float) == 4) TODO: preprocessor
// assert(sizeof(double) == 8) TODO: preprocessor


enum Tlm_Status __is_packed {
	Tlm_Status_ON,
	Tlm_Status_OFF,
};

enum Race_Type __is_packed {
	Race_Type_ACCELERATION,
	Race_Type_SKIDPAD,
	Race_Type_AUTOCROSS,
	Race_Type_ENDURANCE,
};

typedef struct __is_packed {
	Tlm_Status tlm_status;
	Race_Type race_type;
	uint8_t driver;
	uint8_t circuit;
} SET_TLM_STATUS;
static_assert(sizeof(SET_TLM_STATUS) == 4, "struct size mismatch");

void serialize_SET_TLM_STATUS(SET_TLM_STATUS* set_tlm_status, uint8_t* buffer, size_t buf_len);

void deserialize_SET_TLM_STATUS(uint8_t* buffer, size_t buf_len, SET_TLM_STATUS* set_tlm_status);

#endif