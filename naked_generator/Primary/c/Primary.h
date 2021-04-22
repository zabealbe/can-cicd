#ifndef PRIMARY_H
#define PRIMARY_H

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
    

typedef enum __is_packed {
    Primary_Tlm_Status_ON = 0,
    Primary_Tlm_Status_OFF = 1,
} Primary_Tlm_Status;

typedef enum __is_packed {
    Primary_Race_Type_ACCELERATION = 0,
    Primary_Race_Type_SKIDPAD = 1,
    Primary_Race_Type_AUTOCROSS = 2,
    Primary_Race_Type_ENDURANCE = 3,
} Primary_Race_Type;

typedef enum __is_packed {
    Primary_Car_Status_IDLE = 0,
    Primary_Car_Status_SETUP = 1,
    Primary_Car_Status_RUN = 2,
} Primary_Car_Status;

typedef enum __is_packed {
    Primary_Inverter_Status_OFF = 0,
    Primary_Inverter_Status_IDLE = 1,
    Primary_Inverter_Status_ON = 2,
} Primary_Inverter_Status;

typedef enum __is_packed {
    Primary_Ts_Status_OFF = 0,
    Primary_Ts_Status_PRECHARGE = 1,
    Primary_Ts_Status_ON = 2,
    Primary_Ts_Status_FATAL = 3,
} Primary_Ts_Status;

typedef enum __is_packed {
    Primary_Ts_Status_Set_OFF = 0,
    Primary_Ts_Status_Set_ON = 1,
} Primary_Ts_Status_Set;

typedef enum __is_packed {
    Primary_Traction_Control_OFF = 0,
    Primary_Traction_Control_SLIP_CONTROL = 1,
    Primary_Traction_Control_TORQUE_VECTORING = 2,
    Primary_Traction_Control_COMPLETE = 3,
} Primary_Traction_Control;

typedef enum __is_packed {
    Primary_Map_R = 0,
    Primary_Map_D20 = 1,
    Primary_Map_D40 = 2,
    Primary_Map_D60 = 3,
    Primary_Map_D80 = 4,
    Primary_Map_D100 = 5,
} Primary_Map;

typedef enum __is_packed {
    Primary_Car_Status_Set_IDLE = 0,
    Primary_Car_Status_Set_RUN = 1,
} Primary_Car_Status_Set;

typedef enum __is_packed {
    Primary_Status_CHG_OFF = 0,
    Primary_Status_CHG_TC = 1,
    Primary_Status_CHG_CC = 2,
    Primary_Status_CHG_CV = 3,
} Primary_Status;

/* Primary_TIMESTAMP */
typedef struct __is_packed {
    uint32_t timestamp;
} Primary_TIMESTAMP;
static_assert(sizeof(Primary_TIMESTAMP) == 4, "struct size mismatch");
    
void serialize_Primary_TIMESTAMP(uint32_t timestamp, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_TIMESTAMP(uint8_t* buffer, size_t buf_len, Primary_TIMESTAMP* primary_timestamp);

/* Primary_TLM_STATUS */
typedef struct __is_packed {
    Primary_Tlm_Status tlm_status;
    Primary_Race_Type race_type;
    uint8_t driver;
    uint8_t circuit;
} Primary_TLM_STATUS;
static_assert(sizeof(Primary_TLM_STATUS) == 4, "struct size mismatch");
    
void serialize_Primary_TLM_STATUS(Primary_Tlm_Status tlm_status, Primary_Race_Type race_type, uint8_t driver, uint8_t circuit, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_TLM_STATUS(uint8_t* buffer, size_t buf_len, Primary_TLM_STATUS* primary_tlm_status);

/* Primary_CAR_STATUS */
typedef struct __is_packed {
    Primary_Car_Status car_status;
    Primary_Inverter_Status inverter_l;
    Primary_Inverter_Status inverter_r;
} Primary_CAR_STATUS;
static_assert(sizeof(Primary_CAR_STATUS) == 3, "struct size mismatch");
    
void serialize_Primary_CAR_STATUS(Primary_Car_Status car_status, Primary_Inverter_Status inverter_l, Primary_Inverter_Status inverter_r, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_CAR_STATUS(uint8_t* buffer, size_t buf_len, Primary_CAR_STATUS* primary_car_status);

/* Primary_SET_TLM_STATUS */
typedef struct __is_packed {
    Primary_Tlm_Status tlm_status;
    Primary_Race_Type race_type;
    uint8_t driver;
    uint8_t circuit;
} Primary_SET_TLM_STATUS;
static_assert(sizeof(Primary_SET_TLM_STATUS) == 4, "struct size mismatch");
    
void serialize_Primary_SET_TLM_STATUS(Primary_Tlm_Status tlm_status, Primary_Race_Type race_type, uint8_t driver, uint8_t circuit, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_SET_TLM_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_TLM_STATUS* primary_set_tlm_status);

/* Primary_HV_VOLTAGE */
typedef struct __is_packed {
    uint16_t pack_voltage;
    uint16_t bus_voltage;
    uint16_t max_cell_voltage;
    uint16_t min_cell_voltage;
} Primary_HV_VOLTAGE;
static_assert(sizeof(Primary_HV_VOLTAGE) == 8, "struct size mismatch");
    
void serialize_Primary_HV_VOLTAGE(uint16_t pack_voltage, uint16_t bus_voltage, uint16_t max_cell_voltage, uint16_t min_cell_voltage, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_HV_VOLTAGE(uint8_t* buffer, size_t buf_len, Primary_HV_VOLTAGE* primary_hv_voltage);

/* Primary_HV_CURRENT */
typedef struct __is_packed {
    uint16_t current;
    int16_t power;
} Primary_HV_CURRENT;
static_assert(sizeof(Primary_HV_CURRENT) == 4, "struct size mismatch");
    
void serialize_Primary_HV_CURRENT(uint16_t current, int16_t power, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_HV_CURRENT(uint8_t* buffer, size_t buf_len, Primary_HV_CURRENT* primary_hv_current);

/* Primary_HV_TEMP */
typedef struct __is_packed {
    uint16_t average_temp;
    uint16_t max_temp;
    uint16_t min_temp;
} Primary_HV_TEMP;
static_assert(sizeof(Primary_HV_TEMP) == 6, "struct size mismatch");
    
void serialize_Primary_HV_TEMP(uint16_t average_temp, uint16_t max_temp, uint16_t min_temp, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_HV_TEMP(uint8_t* buffer, size_t buf_len, Primary_HV_TEMP* primary_hv_temp);

/* Primary_HV_ERROR */
typedef struct __is_packed {
    uint8_t error_code;
    uint8_t error_index;
    uint8_t active;
} Primary_HV_ERROR;
static_assert(sizeof(Primary_HV_ERROR) == 3, "struct size mismatch");
    
void serialize_Primary_HV_ERROR(uint8_t error_code, uint8_t error_index, uint8_t active, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_HV_ERROR(uint8_t* buffer, size_t buf_len, Primary_HV_ERROR* primary_hv_error);

/* Primary_TS_STATUS */
typedef struct __is_packed {
    Primary_Ts_Status ts_status;
} Primary_TS_STATUS;
static_assert(sizeof(Primary_TS_STATUS) == 1, "struct size mismatch");
    
void serialize_Primary_TS_STATUS(Primary_Ts_Status ts_status, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_TS_STATUS(uint8_t* buffer, size_t buf_len, Primary_TS_STATUS* primary_ts_status);

/* Primary_SET_TS_STATUS */
typedef struct __is_packed {
    Primary_Ts_Status_Set ts_status_set;
} Primary_SET_TS_STATUS;
static_assert(sizeof(Primary_SET_TS_STATUS) == 1, "struct size mismatch");
    
void serialize_Primary_SET_TS_STATUS(Primary_Ts_Status_Set ts_status_set, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_SET_TS_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_TS_STATUS* primary_set_ts_status);

/* Primary_STEER_STATUS */
typedef struct __is_packed {
    Primary_Traction_Control traction_control;
    Primary_Map map;
    bool radio_on;
} Primary_STEER_STATUS;
static_assert(sizeof(Primary_STEER_STATUS) == 3, "struct size mismatch");
    
void serialize_Primary_STEER_STATUS(Primary_Traction_Control traction_control, Primary_Map map, bool radio_on, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_STEER_STATUS(uint8_t* buffer, size_t buf_len, Primary_STEER_STATUS* primary_steer_status);

/* Primary_SET_CAR_STATUS */
typedef struct __is_packed {
    Primary_Car_Status_Set car_status_set;
} Primary_SET_CAR_STATUS;
static_assert(sizeof(Primary_SET_CAR_STATUS) == 1, "struct size mismatch");
    
void serialize_Primary_SET_CAR_STATUS(Primary_Car_Status_Set car_status_set, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_SET_CAR_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_CAR_STATUS* primary_set_car_status);

/* Primary_LV_CURRENT */
typedef struct __is_packed {
    uint8_t current;
} Primary_LV_CURRENT;
static_assert(sizeof(Primary_LV_CURRENT) == 1, "struct size mismatch");
    
void serialize_Primary_LV_CURRENT(uint8_t current, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_LV_CURRENT(uint8_t* buffer, size_t buf_len, Primary_LV_CURRENT* primary_lv_current);

/* Primary_LV_VOLTAGE */
typedef struct __is_packed {
    uint8_t voltage_1;
    uint8_t voltage_2;
    uint8_t voltage_3;
    uint8_t voltage_4;
    uint16_t total_voltage;
} Primary_LV_VOLTAGE;
static_assert(sizeof(Primary_LV_VOLTAGE) == 6, "struct size mismatch");
    
void serialize_Primary_LV_VOLTAGE(uint8_t voltage_1, uint8_t voltage_2, uint8_t voltage_3, uint8_t voltage_4, uint16_t total_voltage, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_LV_VOLTAGE(uint8_t* buffer, size_t buf_len, Primary_LV_VOLTAGE* primary_lv_voltage);

/* Primary_LV_TEMPERATURE */
typedef struct __is_packed {
    uint8_t dcdc_temperature;
    uint8_t __unused_padding_1;
    uint16_t battery_temperature;
} Primary_LV_TEMPERATURE;
static_assert(sizeof(Primary_LV_TEMPERATURE) == 4, "struct size mismatch");
    
void serialize_Primary_LV_TEMPERATURE(uint8_t dcdc_temperature, uint16_t battery_temperature, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_LV_TEMPERATURE(uint8_t* buffer, size_t buf_len, Primary_LV_TEMPERATURE* primary_lv_temperature);

/* Primary_COOLING_STATUS */
typedef struct __is_packed {
    uint8_t hv_fan_speed;
    uint8_t lv_fan_speed;
    uint8_t pump_speed;
} Primary_COOLING_STATUS;
static_assert(sizeof(Primary_COOLING_STATUS) == 3, "struct size mismatch");
    
void serialize_Primary_COOLING_STATUS(uint8_t hv_fan_speed, uint8_t lv_fan_speed, uint8_t pump_speed, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_COOLING_STATUS(uint8_t* buffer, size_t buf_len, Primary_COOLING_STATUS* primary_cooling_status);

/* Primary_HV_CELLS_VOLTAGE */
typedef struct __is_packed {
    uint8_t cell_index;
    uint8_t __unused_padding_1;
    uint16_t voltage_0;
    uint16_t voltage_1;
    uint16_t voltage_2;
} Primary_HV_CELLS_VOLTAGE;
static_assert(sizeof(Primary_HV_CELLS_VOLTAGE) == 8, "struct size mismatch");
    
void serialize_Primary_HV_CELLS_VOLTAGE(uint8_t cell_index, uint16_t voltage_0, uint16_t voltage_1, uint16_t voltage_2, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_HV_CELLS_VOLTAGE(uint8_t* buffer, size_t buf_len, Primary_HV_CELLS_VOLTAGE* primary_hv_cells_voltage);

/* Primary_HV_CELLS_TEMP */
typedef struct __is_packed {
    uint8_t cell_index;
    uint8_t temp_0;
    uint8_t temp_1;
    uint8_t temp_2;
    uint8_t temp_3;
    uint8_t temp_4;
    uint8_t temp_5;
    uint8_t temp_6;
} Primary_HV_CELLS_TEMP;
static_assert(sizeof(Primary_HV_CELLS_TEMP) == 8, "struct size mismatch");
    
void serialize_Primary_HV_CELLS_TEMP(uint8_t cell_index, uint8_t temp_0, uint8_t temp_1, uint8_t temp_2, uint8_t temp_3, uint8_t temp_4, uint8_t temp_5, uint8_t temp_6, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_HV_CELLS_TEMP(uint8_t* buffer, size_t buf_len, Primary_HV_CELLS_TEMP* primary_hv_cells_temp);

/* Primary_SET_CHG_POWER */
typedef struct __is_packed {
    uint16_t current;
    uint16_t voltage;
} Primary_SET_CHG_POWER;
static_assert(sizeof(Primary_SET_CHG_POWER) == 4, "struct size mismatch");
    
void serialize_Primary_SET_CHG_POWER(uint16_t current, uint16_t voltage, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_SET_CHG_POWER(uint8_t* buffer, size_t buf_len, Primary_SET_CHG_POWER* primary_set_chg_power);

/* Primary_CHG_STATUS */
typedef struct __is_packed {
    Primary_Status status;
} Primary_CHG_STATUS;
static_assert(sizeof(Primary_CHG_STATUS) == 1, "struct size mismatch");
    
void serialize_Primary_CHG_STATUS(Primary_Status status, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_CHG_STATUS(uint8_t* buffer, size_t buf_len, Primary_CHG_STATUS* primary_chg_status);

/* Primary_SET_CHG_STATUS */
typedef struct __is_packed {
    Primary_Status status;
} Primary_SET_CHG_STATUS;
static_assert(sizeof(Primary_SET_CHG_STATUS) == 1, "struct size mismatch");
    
void serialize_Primary_SET_CHG_STATUS(Primary_Status status, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_SET_CHG_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_CHG_STATUS* primary_set_chg_status);

/* Primary_CHG_SETTINGS */
typedef struct __is_packed {
    uint8_t v_cutoff;
} Primary_CHG_SETTINGS;
static_assert(sizeof(Primary_CHG_SETTINGS) == 1, "struct size mismatch");
    
void serialize_Primary_CHG_SETTINGS(uint8_t v_cutoff, uint8_t* buffer, size_t buf_len);
void deserialize_Primary_CHG_SETTINGS(uint8_t* buffer, size_t buf_len, Primary_CHG_SETTINGS* primary_chg_settings);
#endif