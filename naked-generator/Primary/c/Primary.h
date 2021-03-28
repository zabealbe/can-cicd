#ifndef PRIMARY_H
#define PRIMARY_H

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


typedef enum __is_packed {
	Tlm_Status_ON,
	Tlm_Status_OFF,
} Tlm_Status;

typedef enum __is_packed {
	Race_Type_ACCELERATION,
	Race_Type_SKIDPAD,
	Race_Type_AUTOCROSS,
	Race_Type_ENDURANCE,
} Race_Type;

typedef enum __is_packed {
	Car_Status_IDLE,
	Car_Status_SETUP,
	Car_Status_RUN,
} Car_Status;

typedef enum __is_packed {
	Inverter_Status_OFF,
	Inverter_Status_IDLE,
	Inverter_Status_ON,
} Inverter_Status;

typedef enum __is_packed {
	Ts_Status_OFF,
	Ts_Status_PRECHARGE,
	Ts_Status_ON,
	Ts_Status_FATAL,
} Ts_Status;

typedef enum __is_packed {
	Traction_Control_OFF,
	Traction_Control_SLIP_CONTROL,
	Traction_Control_TORQUE_VECTORING,
	Traction_Control_COMPLETE,
} Traction_Control;

typedef enum __is_packed {
	Map_R,
	Map_D20,
	Map_D40,
	Map_D60,
	Map_D80,
	Map_D100,
} Map;

typedef enum __is_packed {
	Car_Status_Set_IDLE,
	Car_Status_Set_RUN,
} Car_Status_Set;

typedef enum __is_packed {
	Ts_Status_Set_OFF,
	Ts_Status_Set_ON,
} Ts_Status_Set;

typedef struct __is_packed {
	Tlm_Status tlm_status;
	Race_Type race_type;
	uint8_t driver;
	uint8_t circuit;
} TLM_STATUS;
static_assert(sizeof(TLM_STATUS) == 4, "struct size mismatch");

typedef struct __is_packed {
	Car_Status car_status;
	Inverter_Status inverter_l;
	Inverter_Status inverter_r;
} CAR_STATUS;
static_assert(sizeof(CAR_STATUS) == 3, "struct size mismatch");

typedef struct __is_packed {
	Tlm_Status tlm_status;
	Race_Type race_type;
	uint8_t driver;
	uint8_t circuit;
} SET_TLM_STATUS;
static_assert(sizeof(SET_TLM_STATUS) == 4, "struct size mismatch");

typedef struct __is_packed {
	uint16_t pack_voltage;
	uint16_t bus_voltage;
	uint16_t max_cell_voltage;
	uint16_t min_cell_voltage;
} HV_VOLTAGE;
static_assert(sizeof(HV_VOLTAGE) == 8, "struct size mismatch");

typedef struct __is_packed {
	int8_t power;
	int8_t __unused_padding_1;
	uint16_t current;
} HV_CURRENT;
static_assert(sizeof(HV_CURRENT) == 4, "struct size mismatch");

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

typedef struct __is_packed {
	Ts_Status ts_status;
} TS_STATUS;
static_assert(sizeof(TS_STATUS) == 1, "struct size mismatch");

typedef struct __is_packed {
	Traction_Control traction_control;
	Map map;
	bool radio_on;
} STEER_STATUS;
static_assert(sizeof(STEER_STATUS) == 3, "struct size mismatch");

typedef struct __is_packed {
	Car_Status_Set car_status_set;
} SET_CAR_STATUS;
static_assert(sizeof(SET_CAR_STATUS) == 1, "struct size mismatch");

typedef struct __is_packed {
	Ts_Status_Set ts_status_set;
} SET_TS_STATUS;
static_assert(sizeof(SET_TS_STATUS) == 1, "struct size mismatch");

void serialize_TLM_STATUS(TLM_STATUS* tlm_status, uint8_t* buffer, size_t buf_len);
void serialize_CAR_STATUS(CAR_STATUS* car_status, uint8_t* buffer, size_t buf_len);
void serialize_SET_TLM_STATUS(SET_TLM_STATUS* set_tlm_status, uint8_t* buffer, size_t buf_len);
void serialize_HV_VOLTAGE(HV_VOLTAGE* hv_voltage, uint8_t* buffer, size_t buf_len);
void serialize_HV_CURRENT(HV_CURRENT* hv_current, uint8_t* buffer, size_t buf_len);
void serialize_HV_TEMP(HV_TEMP* hv_temp, uint8_t* buffer, size_t buf_len);
void serialize_HV_ERROR(HV_ERROR* hv_error, uint8_t* buffer, size_t buf_len);
void serialize_TS_STATUS(TS_STATUS* ts_status, uint8_t* buffer, size_t buf_len);
void serialize_STEER_STATUS(STEER_STATUS* steer_status, uint8_t* buffer, size_t buf_len);
void serialize_SET_CAR_STATUS(SET_CAR_STATUS* set_car_status, uint8_t* buffer, size_t buf_len);
void serialize_SET_TS_STATUS(SET_TS_STATUS* set_ts_status, uint8_t* buffer, size_t buf_len);

void deserialize_TLM_STATUS(uint8_t* buffer, size_t buf_len, TLM_STATUS* tlm_status);
void deserialize_CAR_STATUS(uint8_t* buffer, size_t buf_len, CAR_STATUS* car_status);
void deserialize_SET_TLM_STATUS(uint8_t* buffer, size_t buf_len, SET_TLM_STATUS* set_tlm_status);
void deserialize_HV_VOLTAGE(uint8_t* buffer, size_t buf_len, HV_VOLTAGE* hv_voltage);
void deserialize_HV_CURRENT(uint8_t* buffer, size_t buf_len, HV_CURRENT* hv_current);
void deserialize_HV_TEMP(uint8_t* buffer, size_t buf_len, HV_TEMP* hv_temp);
void deserialize_HV_ERROR(uint8_t* buffer, size_t buf_len, HV_ERROR* hv_error);
void deserialize_TS_STATUS(uint8_t* buffer, size_t buf_len, TS_STATUS* ts_status);
void deserialize_STEER_STATUS(uint8_t* buffer, size_t buf_len, STEER_STATUS* steer_status);
void deserialize_SET_CAR_STATUS(uint8_t* buffer, size_t buf_len, SET_CAR_STATUS* set_car_status);
void deserialize_SET_TS_STATUS(uint8_t* buffer, size_t buf_len, SET_TS_STATUS* set_ts_status);

#endif