#ifndef STEER_H
#define STEER_H

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
#define __STEER_ENDIAN_ORDER ('ABCD')
#if __STEER_ENDIAN_ORDER==0x41424344UL 
    #define STEER_LITTLE_ENDIAN
#elif __STEER_ENDIAN_ORDER==0x44434241UL
    #define STEER_BIG_ENDIAN
#elif __STEER_ENDIAN_ORDER==0x42414443UL
    #define STEER_PDP_ENDIAN
#else
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

#ifndef STEER_LITTLE_ENDIAN
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

enum Car_Status __is_packed {
	Car_Status_IDLE,
	Car_Status_SETUP,
	Car_Status_RUN,
};

enum Inverter_Status: Inverter_L __is_packed {
	Inverter_Status: Inverter_L_OFF,
	Inverter_Status: Inverter_L_IDLE,
	Inverter_Status: Inverter_L_ON,
};

enum Inverter_Status: Inverter_R __is_packed {
	Inverter_Status: Inverter_R_OFF,
	Inverter_Status: Inverter_R_IDLE,
	Inverter_Status: Inverter_R_ON,
};

typedef struct __is_packed {
	Tlm_Status tlm_status;
	Race_Type race_type;
	uint8_t driver;
	uint8_t circuit;
} TLM_STATUS;

typedef struct __is_packed {
	Car_Status car_status;
	Inverter_Status: Inverter_L Inverter_status: inverter_l;
	Inverter_Status: Inverter_R Inverter_status: inverter_r;
} CAR_STATUS;

void serialize_TLM_STATUS(TLM_STATUS* tlm_status, uint8_t* buffer, size_t buf_len);
void serialize_CAR_STATUS(CAR_STATUS* car_status, uint8_t* buffer, size_t buf_len);

void deserialize_TLM_STATUS(uint8_t* buffer, size_t buf_len, TLM_STATUS* tlm_status);
void deserialize_CAR_STATUS(uint8_t* buffer, size_t buf_len, CAR_STATUS* car_status);

#endif