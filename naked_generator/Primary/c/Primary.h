#ifdef __cplusplus
extern "C" {
#endif

#ifndef PRIMARY_H
#define PRIMARY_H

#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include <stdio.h>

/*
*   NAKED SHARED 
*   Common functions, defines and checks between all the network.h files
*/
#ifndef __NAKED_SHARED
#define __NAKED_SHARED
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
    
    /*
    *   Floating point types size check
    *   the only supported sizes for now are 32 bits for float and 64 for double
    */
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
    
    /*
    *   Bitset setter/getter
    *   macros for reading/writing bitsets
    */
    #define setBit(bitset, index, value) \
    do { \
        (bitset)[(index)/8] &= ~( 1 << (index) % 8); \
        (bitset)[(index)/8] |=  ((value) << (index) % 8); \
    } while(0);
    #define flipBit(bitset, index) ((bitset)[(index)/8] ^= (1 << (index) % 8) )
    #define getBit(bitset, index)  ((bitset)[(index)/8] &  (1 << (index) % 8) )
#endif


typedef uint8_t Primary_pcu_flags[1]; // bitset
#define Primary_pcu_flags_default { 0 } // bitset filled with zeros
#define Primary_pcu_flags_IMPLAUSIBILITY 0
#define Primary_pcu_flags_ADC_ERROR 1
#define Primary_pcu_flags_UART_ERROR 2
#define Primary_pcu_flags_CALIBRATION_INCOMPLETE 3
#define Primary_pcu_flags_CAN_ERROR 4

typedef uint8_t Primary_Hv_Errors[2]; // bitset
#define Primary_Hv_Errors_default { 0, 0 } // bitset filled with zeros
#define Primary_Hv_Errors_LTC_PEC_ERROR 0
#define Primary_Hv_Errors_CELL_UNDER_VOLTAGE 1
#define Primary_Hv_Errors_CELL_OVER_VOLTAGE 2
#define Primary_Hv_Errors_CELL_OVER_TEMPERATURE 3
#define Primary_Hv_Errors_OVER_CURRENT 4
#define Primary_Hv_Errors_ADC_INIT 5
#define Primary_Hv_Errors_ADC_TIMEOUT 6
#define Primary_Hv_Errors_INT_VOLTAGE_MISMATCH 7
#define Primary_Hv_Errors_FEEDBACK_HARD 8
#define Primary_Hv_Errors_FEEDBACK_SOFT 9

typedef enum __is_packed {
    Primary_Sync_State_MAX_SET = 0,
    Primary_Sync_State_MIN_SET = 1,
} Primary_Sync_State;

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

/* Primary_SET_ACCELERATOR_RANGE */
typedef struct __is_packed {
    Primary_Sync_State sync_state;
} Primary_SET_ACCELERATOR_RANGE;
static_assert(sizeof(Primary_SET_ACCELERATOR_RANGE) == 1, "struct size mismatch");
    
size_t serialize_Primary_SET_ACCELERATOR_RANGE(uint8_t* buffer, Primary_Sync_State sync_state);
size_t deserialize_Primary_SET_ACCELERATOR_RANGE(uint8_t* buffer, Primary_SET_ACCELERATOR_RANGE* primary_set_accelerator_range);

/* Primary_PEDALS_ADC_RANGES */
typedef struct __is_packed {
    uint16_t accel1_raw_adc_min;
    uint16_t accel1_raw_adc_max;
    uint16_t accel2_raw_adc_min;
    uint16_t accel2_raw_adc_max;
} Primary_PEDALS_ADC_RANGES;
static_assert(sizeof(Primary_PEDALS_ADC_RANGES) == 8, "struct size mismatch");
    
size_t serialize_Primary_PEDALS_ADC_RANGES(uint8_t* buffer, uint16_t accel1_raw_adc_min, uint16_t accel1_raw_adc_max, uint16_t accel2_raw_adc_min, uint16_t accel2_raw_adc_max);
size_t deserialize_Primary_PEDALS_ADC_RANGES(uint8_t* buffer, Primary_PEDALS_ADC_RANGES* primary_pedals_adc_ranges);

/* Primary_ACCELERATOR_PEDAL_VAL */
typedef struct __is_packed {
    uint8_t level;
} Primary_ACCELERATOR_PEDAL_VAL;
static_assert(sizeof(Primary_ACCELERATOR_PEDAL_VAL) == 1, "struct size mismatch");
    
size_t serialize_Primary_ACCELERATOR_PEDAL_VAL(uint8_t* buffer, uint8_t level);
size_t deserialize_Primary_ACCELERATOR_PEDAL_VAL(uint8_t* buffer, Primary_ACCELERATOR_PEDAL_VAL* primary_accelerator_pedal_val);

/* Primary_BRAKE_PEDAL_VAL */
typedef struct __is_packed {
    uint8_t level;
} Primary_BRAKE_PEDAL_VAL;
static_assert(sizeof(Primary_BRAKE_PEDAL_VAL) == 1, "struct size mismatch");
    
size_t serialize_Primary_BRAKE_PEDAL_VAL(uint8_t* buffer, uint8_t level);
size_t deserialize_Primary_BRAKE_PEDAL_VAL(uint8_t* buffer, Primary_BRAKE_PEDAL_VAL* primary_brake_pedal_val);

/* Primary_PCU_STATUS */
typedef struct __is_packed {
    Primary_pcu_flags warnings;
    Primary_pcu_flags errors;
} Primary_PCU_STATUS;
static_assert(sizeof(Primary_PCU_STATUS) == 2, "struct size mismatch");
    
size_t serialize_Primary_PCU_STATUS(uint8_t* buffer, Primary_pcu_flags warnings, Primary_pcu_flags errors);
size_t deserialize_Primary_PCU_STATUS(uint8_t* buffer, Primary_PCU_STATUS* primary_pcu_status);

/* Primary_TIMESTAMP */
typedef struct __is_packed {
    uint32_t timestamp;
} Primary_TIMESTAMP;
static_assert(sizeof(Primary_TIMESTAMP) == 4, "struct size mismatch");
    
size_t serialize_Primary_TIMESTAMP(uint8_t* buffer, uint32_t timestamp);
size_t deserialize_Primary_TIMESTAMP(uint8_t* buffer, Primary_TIMESTAMP* primary_timestamp);

/* Primary_TLM_STATUS */
typedef struct __is_packed {
    Primary_Tlm_Status tlm_status;
    Primary_Race_Type race_type;
    uint8_t driver;
    uint8_t circuit;
} Primary_TLM_STATUS;
static_assert(sizeof(Primary_TLM_STATUS) == 4, "struct size mismatch");
    
size_t serialize_Primary_TLM_STATUS(uint8_t* buffer, Primary_Tlm_Status tlm_status, Primary_Race_Type race_type, uint8_t driver, uint8_t circuit);
size_t deserialize_Primary_TLM_STATUS(uint8_t* buffer, Primary_TLM_STATUS* primary_tlm_status);

/* Primary_CAR_STATUS */
typedef struct __is_packed {
    Primary_Car_Status car_status;
    Primary_Inverter_Status inverter_l;
    Primary_Inverter_Status inverter_r;
} Primary_CAR_STATUS;
static_assert(sizeof(Primary_CAR_STATUS) == 3, "struct size mismatch");
    
size_t serialize_Primary_CAR_STATUS(uint8_t* buffer, Primary_Car_Status car_status, Primary_Inverter_Status inverter_l, Primary_Inverter_Status inverter_r);
size_t deserialize_Primary_CAR_STATUS(uint8_t* buffer, Primary_CAR_STATUS* primary_car_status);

/* Primary_SET_TLM_STATUS */
typedef struct __is_packed {
    Primary_Tlm_Status tlm_status;
    Primary_Race_Type race_type;
    uint8_t driver;
    uint8_t circuit;
} Primary_SET_TLM_STATUS;
static_assert(sizeof(Primary_SET_TLM_STATUS) == 4, "struct size mismatch");
    
size_t serialize_Primary_SET_TLM_STATUS(uint8_t* buffer, Primary_Tlm_Status tlm_status, Primary_Race_Type race_type, uint8_t driver, uint8_t circuit);
size_t deserialize_Primary_SET_TLM_STATUS(uint8_t* buffer, Primary_SET_TLM_STATUS* primary_set_tlm_status);

/* Primary_GPS_COORDS */
typedef struct __is_packed {
    double latitude;
    double longitude;
} Primary_GPS_COORDS;
static_assert(sizeof(Primary_GPS_COORDS) == 16, "struct size mismatch");
    
size_t serialize_Primary_GPS_COORDS(uint8_t* buffer, double latitude, double longitude);
size_t deserialize_Primary_GPS_COORDS(uint8_t* buffer, Primary_GPS_COORDS* primary_gps_coords);

/* Primary_GPS_TIME */
typedef struct __is_packed {
    uint32_t time;
} Primary_GPS_TIME;
static_assert(sizeof(Primary_GPS_TIME) == 4, "struct size mismatch");
    
size_t serialize_Primary_GPS_TIME(uint8_t* buffer, uint32_t time);
size_t deserialize_Primary_GPS_TIME(uint8_t* buffer, Primary_GPS_TIME* primary_gps_time);

/* Primary_GPS_SPEED */
typedef struct __is_packed {
    double speed;
} Primary_GPS_SPEED;
static_assert(sizeof(Primary_GPS_SPEED) == 8, "struct size mismatch");
    
size_t serialize_Primary_GPS_SPEED(uint8_t* buffer, double speed);
size_t deserialize_Primary_GPS_SPEED(uint8_t* buffer, Primary_GPS_SPEED* primary_gps_speed);

/* Primary_HV_VOLTAGE */
typedef struct __is_packed {
    uint16_t pack_voltage;
    uint16_t bus_voltage;
    uint16_t max_cell_voltage;
    uint16_t min_cell_voltage;
} Primary_HV_VOLTAGE;
static_assert(sizeof(Primary_HV_VOLTAGE) == 8, "struct size mismatch");
    
size_t serialize_Primary_HV_VOLTAGE(uint8_t* buffer, uint16_t pack_voltage, uint16_t bus_voltage, uint16_t max_cell_voltage, uint16_t min_cell_voltage);
size_t deserialize_Primary_HV_VOLTAGE(uint8_t* buffer, Primary_HV_VOLTAGE* primary_hv_voltage);

/* Primary_HV_CURRENT */
typedef struct __is_packed {
    uint16_t current;
    int16_t power;
} Primary_HV_CURRENT;
static_assert(sizeof(Primary_HV_CURRENT) == 4, "struct size mismatch");
    
size_t serialize_Primary_HV_CURRENT(uint8_t* buffer, uint16_t current, int16_t power);
size_t deserialize_Primary_HV_CURRENT(uint8_t* buffer, Primary_HV_CURRENT* primary_hv_current);

/* Primary_HV_TEMP */
typedef struct __is_packed {
    uint16_t average_temp;
    uint16_t max_temp;
    uint16_t min_temp;
} Primary_HV_TEMP;
static_assert(sizeof(Primary_HV_TEMP) == 6, "struct size mismatch");
    
size_t serialize_Primary_HV_TEMP(uint8_t* buffer, uint16_t average_temp, uint16_t max_temp, uint16_t min_temp);
size_t deserialize_Primary_HV_TEMP(uint8_t* buffer, Primary_HV_TEMP* primary_hv_temp);

/* Primary_HV_ERRORS */
typedef struct __is_packed {
    Primary_Hv_Errors warnings;
    Primary_Hv_Errors errors;
} Primary_HV_ERRORS;
static_assert(sizeof(Primary_HV_ERRORS) == 4, "struct size mismatch");
    
size_t serialize_Primary_HV_ERRORS(uint8_t* buffer, Primary_Hv_Errors warnings, Primary_Hv_Errors errors);
size_t deserialize_Primary_HV_ERRORS(uint8_t* buffer, Primary_HV_ERRORS* primary_hv_errors);

/* Primary_TS_STATUS */
typedef struct __is_packed {
    Primary_Ts_Status ts_status;
} Primary_TS_STATUS;
static_assert(sizeof(Primary_TS_STATUS) == 1, "struct size mismatch");
    
size_t serialize_Primary_TS_STATUS(uint8_t* buffer, Primary_Ts_Status ts_status);
size_t deserialize_Primary_TS_STATUS(uint8_t* buffer, Primary_TS_STATUS* primary_ts_status);

/* Primary_SET_TS_STATUS */
typedef struct __is_packed {
    Primary_Ts_Status_Set ts_status_set;
} Primary_SET_TS_STATUS;
static_assert(sizeof(Primary_SET_TS_STATUS) == 1, "struct size mismatch");
    
size_t serialize_Primary_SET_TS_STATUS(uint8_t* buffer, Primary_Ts_Status_Set ts_status_set);
size_t deserialize_Primary_SET_TS_STATUS(uint8_t* buffer, Primary_SET_TS_STATUS* primary_set_ts_status);

/* Primary_STEER_STATUS */
typedef struct __is_packed {
    Primary_Traction_Control traction_control;
    Primary_Map map;
    bool radio_on;
} Primary_STEER_STATUS;
static_assert(sizeof(Primary_STEER_STATUS) == 3, "struct size mismatch");
    
size_t serialize_Primary_STEER_STATUS(uint8_t* buffer, Primary_Traction_Control traction_control, Primary_Map map, bool radio_on);
size_t deserialize_Primary_STEER_STATUS(uint8_t* buffer, Primary_STEER_STATUS* primary_steer_status);

/* Primary_SET_CAR_STATUS */
typedef struct __is_packed {
    Primary_Car_Status_Set car_status_set;
} Primary_SET_CAR_STATUS;
static_assert(sizeof(Primary_SET_CAR_STATUS) == 1, "struct size mismatch");
    
size_t serialize_Primary_SET_CAR_STATUS(uint8_t* buffer, Primary_Car_Status_Set car_status_set);
size_t deserialize_Primary_SET_CAR_STATUS(uint8_t* buffer, Primary_SET_CAR_STATUS* primary_set_car_status);

/* Primary_LV_CURRENT */
typedef struct __is_packed {
    uint8_t current;
} Primary_LV_CURRENT;
static_assert(sizeof(Primary_LV_CURRENT) == 1, "struct size mismatch");
    
size_t serialize_Primary_LV_CURRENT(uint8_t* buffer, uint8_t current);
size_t deserialize_Primary_LV_CURRENT(uint8_t* buffer, Primary_LV_CURRENT* primary_lv_current);

/* Primary_LV_VOLTAGE */
typedef struct __is_packed {
    uint8_t voltage_1;
    uint8_t voltage_2;
    uint8_t voltage_3;
    uint8_t voltage_4;
    uint16_t total_voltage;
} Primary_LV_VOLTAGE;
static_assert(sizeof(Primary_LV_VOLTAGE) == 6, "struct size mismatch");
    
size_t serialize_Primary_LV_VOLTAGE(uint8_t* buffer, uint8_t voltage_1, uint8_t voltage_2, uint8_t voltage_3, uint8_t voltage_4, uint16_t total_voltage);
size_t deserialize_Primary_LV_VOLTAGE(uint8_t* buffer, Primary_LV_VOLTAGE* primary_lv_voltage);

/* Primary_LV_TEMPERATURE */
typedef struct __is_packed {
    uint8_t dcdc_temperature;
    uint8_t __unused_padding_1;
    uint16_t battery_temperature;
} Primary_LV_TEMPERATURE;
static_assert(sizeof(Primary_LV_TEMPERATURE) == 4, "struct size mismatch");
    
size_t serialize_Primary_LV_TEMPERATURE(uint8_t* buffer, uint8_t dcdc_temperature, uint16_t battery_temperature);
size_t deserialize_Primary_LV_TEMPERATURE(uint8_t* buffer, Primary_LV_TEMPERATURE* primary_lv_temperature);

/* Primary_COOLING_STATUS */
typedef struct __is_packed {
    uint8_t hv_fan_speed;
    uint8_t lv_fan_speed;
    uint8_t pump_speed;
} Primary_COOLING_STATUS;
static_assert(sizeof(Primary_COOLING_STATUS) == 3, "struct size mismatch");
    
size_t serialize_Primary_COOLING_STATUS(uint8_t* buffer, uint8_t hv_fan_speed, uint8_t lv_fan_speed, uint8_t pump_speed);
size_t deserialize_Primary_COOLING_STATUS(uint8_t* buffer, Primary_COOLING_STATUS* primary_cooling_status);

/* Primary_HV_CELLS_VOLTAGE */
typedef struct __is_packed {
    uint8_t cell_index;
    uint8_t __unused_padding_1;
    uint16_t voltage_0;
    uint16_t voltage_1;
    uint16_t voltage_2;
} Primary_HV_CELLS_VOLTAGE;
static_assert(sizeof(Primary_HV_CELLS_VOLTAGE) == 8, "struct size mismatch");
    
size_t serialize_Primary_HV_CELLS_VOLTAGE(uint8_t* buffer, uint8_t cell_index, uint16_t voltage_0, uint16_t voltage_1, uint16_t voltage_2);
size_t deserialize_Primary_HV_CELLS_VOLTAGE(uint8_t* buffer, Primary_HV_CELLS_VOLTAGE* primary_hv_cells_voltage);

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
    
size_t serialize_Primary_HV_CELLS_TEMP(uint8_t* buffer, uint8_t cell_index, uint8_t temp_0, uint8_t temp_1, uint8_t temp_2, uint8_t temp_3, uint8_t temp_4, uint8_t temp_5, uint8_t temp_6);
size_t deserialize_Primary_HV_CELLS_TEMP(uint8_t* buffer, Primary_HV_CELLS_TEMP* primary_hv_cells_temp);

/* Primary_SET_CHG_POWER */
typedef struct __is_packed {
    uint16_t current;
    uint16_t voltage;
} Primary_SET_CHG_POWER;
static_assert(sizeof(Primary_SET_CHG_POWER) == 4, "struct size mismatch");
    
size_t serialize_Primary_SET_CHG_POWER(uint8_t* buffer, uint16_t current, uint16_t voltage);
size_t deserialize_Primary_SET_CHG_POWER(uint8_t* buffer, Primary_SET_CHG_POWER* primary_set_chg_power);

/* Primary_CHG_STATUS */
typedef struct __is_packed {
    Primary_Status status;
} Primary_CHG_STATUS;
static_assert(sizeof(Primary_CHG_STATUS) == 1, "struct size mismatch");
    
size_t serialize_Primary_CHG_STATUS(uint8_t* buffer, Primary_Status status);
size_t deserialize_Primary_CHG_STATUS(uint8_t* buffer, Primary_CHG_STATUS* primary_chg_status);

/* Primary_SET_CHG_STATUS */
typedef struct __is_packed {
    Primary_Status status;
} Primary_SET_CHG_STATUS;
static_assert(sizeof(Primary_SET_CHG_STATUS) == 1, "struct size mismatch");
    
size_t serialize_Primary_SET_CHG_STATUS(uint8_t* buffer, Primary_Status status);
size_t deserialize_Primary_SET_CHG_STATUS(uint8_t* buffer, Primary_SET_CHG_STATUS* primary_set_chg_status);

/* Primary_CHG_SETTINGS */
typedef struct __is_packed {
    uint8_t v_cutoff;
} Primary_CHG_SETTINGS;
static_assert(sizeof(Primary_CHG_SETTINGS) == 1, "struct size mismatch");
    
size_t serialize_Primary_CHG_SETTINGS(uint8_t* buffer, uint8_t v_cutoff);
size_t deserialize_Primary_CHG_SETTINGS(uint8_t* buffer, Primary_CHG_SETTINGS* primary_chg_settings);
#endif

#ifdef __cplusplus
}
#endif