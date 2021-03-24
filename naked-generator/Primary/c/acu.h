#ifndef ACU_H
#define ACU_H

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
#define __ACU_ENDIAN_ORDER ('ABCD')
#if __ACU_ENDIAN_ORDER==0x41424344UL 
    #define ACU_LITTLE_ENDIAN
#elif __ACU_ENDIAN_ORDER==0x44434241UL
    #define ACU_BIG_ENDIAN
#elif __ACU_ENDIAN_ORDER==0x42414443UL
    #define ACU_PDP_ENDIAN
#else
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

#ifndef ACU_LITTLE_ENDIAN
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

// assert float is 32bit and double is 64bit because not defined in the standard
// assert(sizeof(float) == 4) TODO: preprocessor
// assert(sizeof(double) == 8) TODO: preprocessor


enum Ts_Status __is_packed {
	Ts_Status_OFF,
	Ts_Status_PRECHARGE,
	Ts_Status_ON,
	Ts_Status_FATAL,
};

enum Traction_Control __is_packed {
	Traction_Control_OFF,
	Traction_Control_SLIP_CONTROL,
	Traction_Control_TORQUE_VECTORING,
	Traction_Control_COMPLETE,
};

enum Map __is_packed {
	Map_R,
	Map_D20,
	Map_D40,
	Map_D60,
	Map_D80,
	Map_D100,
};

enum Car_Status_Set __is_packed {
	Car_Status_Set_IDLE,
	Car_Status_Set_RUN,
};

typedef struct __is_packed {
	Ts_Status ts_status;
} TS_STATUS;

typedef struct __is_packed {
	Traction_Control traction_control;
	Map map;
	bool radio_on;
} STEER_STATUS;

typedef struct __is_packed {
	Car_Status_Set car_status_set;
} SET_CAR_STATUS;

void serialize_TS_STATUS(TS_STATUS* ts_status, uint8_t* buffer, size_t buf_len);
void serialize_STEER_STATUS(STEER_STATUS* steer_status, uint8_t* buffer, size_t buf_len);
void serialize_SET_CAR_STATUS(SET_CAR_STATUS* set_car_status, uint8_t* buffer, size_t buf_len);

void deserialize_TS_STATUS(uint8_t* buffer, size_t buf_len, TS_STATUS* ts_status);
void deserialize_STEER_STATUS(uint8_t* buffer, size_t buf_len, STEER_STATUS* steer_status);
void deserialize_SET_CAR_STATUS(uint8_t* buffer, size_t buf_len, SET_CAR_STATUS* set_car_status);

#endif