#ifdef __cplusplus
extern "C" {
#endif

#ifndef SECONDARY_H
#define SECONDARY_H

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

/*
*   Bitset
*   macros for read/write bitsets
*/
#define setBit(bitset, index, value) \
do { \
    bitset[index/8] &= ~( 1 << index % 8); \
    bitset[index/8] |=  (value << index % 8); \
} while(0);
#define flipBit(bitset, index) (bitset[index/8] ^= (1 << index % 8) )
#define getBit(bitset, index)  (bitset[index/8] &  (1 << index % 8) )


typedef uint8_t Secondary_pcu_flags[1]; // bitset
#define Secondary_pcu_flags_default { 0 } // bitset filled with zeros
#define Secondary_pcu_flags_IMPLAUSIBILITY 0
#define Secondary_pcu_flags_ADC_ERROR 1
#define Secondary_pcu_flags_UART_ERROR 2
#define Secondary_pcu_flags_CALIBRATION_INCOMPLETE 3
#define Secondary_pcu_flags_CAN_ERROR 4

typedef enum __is_packed {
    Secondary_Sync_State_MAX_SET = 0,
    Secondary_Sync_State_MIN_SET = 1,
} Secondary_Sync_State;

typedef enum __is_packed {
    Secondary_Pedal_ACCELERATOR = 0,
    Secondary_Pedal_BRAKE = 1,
    Secondary_Pedal_ALL = 2,
} Secondary_Pedal;

/* Secondary_SET_PEDALS_RANGE */
typedef struct __is_packed {
    Secondary_Sync_State sync_state;
    Secondary_Pedal pedal;
} Secondary_SET_PEDALS_RANGE;
static_assert(sizeof(Secondary_SET_PEDALS_RANGE) == 2, "struct size mismatch");
    
size_t serialize_Secondary_SET_PEDALS_RANGE(uint8_t* buffer, Secondary_Sync_State sync_state, Secondary_Pedal pedal);
size_t deserialize_Secondary_SET_PEDALS_RANGE(uint8_t* buffer, Secondary_SET_PEDALS_RANGE* secondary_set_pedals_range);

/* Secondary_PEDALS_ADC_RANGES */
typedef struct __is_packed {
    uint16_t brake_raw_adc_min;
    uint16_t brake_raw_adc_max;
    uint16_t accelerator_raw_adc_min;
    uint16_t accelerator_raw_adc_max;
} Secondary_PEDALS_ADC_RANGES;
static_assert(sizeof(Secondary_PEDALS_ADC_RANGES) == 8, "struct size mismatch");
    
size_t serialize_Secondary_PEDALS_ADC_RANGES(uint8_t* buffer, uint16_t brake_raw_adc_min, uint16_t brake_raw_adc_max, uint16_t accelerator_raw_adc_min, uint16_t accelerator_raw_adc_max);
size_t deserialize_Secondary_PEDALS_ADC_RANGES(uint8_t* buffer, Secondary_PEDALS_ADC_RANGES* secondary_pedals_adc_ranges);

/* Secondary_ACCELERATOR_PEDAL_VAL */
typedef struct __is_packed {
    uint8_t level;
} Secondary_ACCELERATOR_PEDAL_VAL;
static_assert(sizeof(Secondary_ACCELERATOR_PEDAL_VAL) == 1, "struct size mismatch");
    
size_t serialize_Secondary_ACCELERATOR_PEDAL_VAL(uint8_t* buffer, uint8_t level);
size_t deserialize_Secondary_ACCELERATOR_PEDAL_VAL(uint8_t* buffer, Secondary_ACCELERATOR_PEDAL_VAL* secondary_accelerator_pedal_val);

/* Secondary_BRAKE_PEDAL_VAL */
typedef struct __is_packed {
    uint8_t level;
} Secondary_BRAKE_PEDAL_VAL;
static_assert(sizeof(Secondary_BRAKE_PEDAL_VAL) == 1, "struct size mismatch");
    
size_t serialize_Secondary_BRAKE_PEDAL_VAL(uint8_t* buffer, uint8_t level);
size_t deserialize_Secondary_BRAKE_PEDAL_VAL(uint8_t* buffer, Secondary_BRAKE_PEDAL_VAL* secondary_brake_pedal_val);

/* Secondary_PCU_STATUS */
typedef struct __is_packed {
    Secondary_pcu_flags warnings;
    Secondary_pcu_flags errors;
} Secondary_PCU_STATUS;
static_assert(sizeof(Secondary_PCU_STATUS) == 2, "struct size mismatch");
    
size_t serialize_Secondary_PCU_STATUS(uint8_t* buffer, Secondary_pcu_flags warnings, Secondary_pcu_flags errors);
size_t deserialize_Secondary_PCU_STATUS(uint8_t* buffer, Secondary_PCU_STATUS* secondary_pcu_status);

/* Secondary_IMU_ANGULAR_RATE */
typedef struct __is_packed {
    uint16_t ang_rate_x;
    uint16_t ang_rate_y;
    uint16_t ang_rate_z;
} Secondary_IMU_ANGULAR_RATE;
static_assert(sizeof(Secondary_IMU_ANGULAR_RATE) == 6, "struct size mismatch");
    
size_t serialize_Secondary_IMU_ANGULAR_RATE(uint8_t* buffer, uint16_t ang_rate_x, uint16_t ang_rate_y, uint16_t ang_rate_z);
size_t deserialize_Secondary_IMU_ANGULAR_RATE(uint8_t* buffer, Secondary_IMU_ANGULAR_RATE* secondary_imu_angular_rate);

/* Secondary_IMU_ACCELERATION */
typedef struct __is_packed {
    uint16_t accel_x;
    uint16_t accel_y;
    uint16_t accel_z;
} Secondary_IMU_ACCELERATION;
static_assert(sizeof(Secondary_IMU_ACCELERATION) == 6, "struct size mismatch");
    
size_t serialize_Secondary_IMU_ACCELERATION(uint8_t* buffer, uint16_t accel_x, uint16_t accel_y, uint16_t accel_z);
size_t deserialize_Secondary_IMU_ACCELERATION(uint8_t* buffer, Secondary_IMU_ACCELERATION* secondary_imu_acceleration);

/* Secondary_IRTS_FL_0 */
typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
} Secondary_IRTS_FL_0;
static_assert(sizeof(Secondary_IRTS_FL_0) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_FL_0(uint8_t* buffer, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4);
size_t deserialize_Secondary_IRTS_FL_0(uint8_t* buffer, Secondary_IRTS_FL_0* secondary_irts_fl_0);

/* Secondary_IRTS_FL_1 */
typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
} Secondary_IRTS_FL_1;
static_assert(sizeof(Secondary_IRTS_FL_1) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_FL_1(uint8_t* buffer, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8);
size_t deserialize_Secondary_IRTS_FL_1(uint8_t* buffer, Secondary_IRTS_FL_1* secondary_irts_fl_1);

/* Secondary_IRTS_FL_2 */
typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
} Secondary_IRTS_FL_2;
static_assert(sizeof(Secondary_IRTS_FL_2) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_FL_2(uint8_t* buffer, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12);
size_t deserialize_Secondary_IRTS_FL_2(uint8_t* buffer, Secondary_IRTS_FL_2* secondary_irts_fl_2);

/* Secondary_IRTS_FL_3 */
typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
} Secondary_IRTS_FL_3;
static_assert(sizeof(Secondary_IRTS_FL_3) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_FL_3(uint8_t* buffer, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16);
size_t deserialize_Secondary_IRTS_FL_3(uint8_t* buffer, Secondary_IRTS_FL_3* secondary_irts_fl_3);

/* Secondary_IRTS_FR_0 */
typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
} Secondary_IRTS_FR_0;
static_assert(sizeof(Secondary_IRTS_FR_0) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_FR_0(uint8_t* buffer, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4);
size_t deserialize_Secondary_IRTS_FR_0(uint8_t* buffer, Secondary_IRTS_FR_0* secondary_irts_fr_0);

/* Secondary_IRTS_FR_1 */
typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
} Secondary_IRTS_FR_1;
static_assert(sizeof(Secondary_IRTS_FR_1) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_FR_1(uint8_t* buffer, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8);
size_t deserialize_Secondary_IRTS_FR_1(uint8_t* buffer, Secondary_IRTS_FR_1* secondary_irts_fr_1);

/* Secondary_IRTS_FR_2 */
typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
} Secondary_IRTS_FR_2;
static_assert(sizeof(Secondary_IRTS_FR_2) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_FR_2(uint8_t* buffer, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12);
size_t deserialize_Secondary_IRTS_FR_2(uint8_t* buffer, Secondary_IRTS_FR_2* secondary_irts_fr_2);

/* Secondary_IRTS_FR_3 */
typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
} Secondary_IRTS_FR_3;
static_assert(sizeof(Secondary_IRTS_FR_3) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_FR_3(uint8_t* buffer, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16);
size_t deserialize_Secondary_IRTS_FR_3(uint8_t* buffer, Secondary_IRTS_FR_3* secondary_irts_fr_3);

/* Secondary_IRTS_RL_0 */
typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
} Secondary_IRTS_RL_0;
static_assert(sizeof(Secondary_IRTS_RL_0) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_RL_0(uint8_t* buffer, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4);
size_t deserialize_Secondary_IRTS_RL_0(uint8_t* buffer, Secondary_IRTS_RL_0* secondary_irts_rl_0);

/* Secondary_IRTS_RL_1 */
typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
} Secondary_IRTS_RL_1;
static_assert(sizeof(Secondary_IRTS_RL_1) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_RL_1(uint8_t* buffer, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8);
size_t deserialize_Secondary_IRTS_RL_1(uint8_t* buffer, Secondary_IRTS_RL_1* secondary_irts_rl_1);

/* Secondary_IRTS_RL_2 */
typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
} Secondary_IRTS_RL_2;
static_assert(sizeof(Secondary_IRTS_RL_2) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_RL_2(uint8_t* buffer, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12);
size_t deserialize_Secondary_IRTS_RL_2(uint8_t* buffer, Secondary_IRTS_RL_2* secondary_irts_rl_2);

/* Secondary_IRTS_RL_3 */
typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
} Secondary_IRTS_RL_3;
static_assert(sizeof(Secondary_IRTS_RL_3) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_RL_3(uint8_t* buffer, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16);
size_t deserialize_Secondary_IRTS_RL_3(uint8_t* buffer, Secondary_IRTS_RL_3* secondary_irts_rl_3);

/* Secondary_IRTS_RR_0 */
typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
} Secondary_IRTS_RR_0;
static_assert(sizeof(Secondary_IRTS_RR_0) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_RR_0(uint8_t* buffer, uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4);
size_t deserialize_Secondary_IRTS_RR_0(uint8_t* buffer, Secondary_IRTS_RR_0* secondary_irts_rr_0);

/* Secondary_IRTS_RR_1 */
typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
} Secondary_IRTS_RR_1;
static_assert(sizeof(Secondary_IRTS_RR_1) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_RR_1(uint8_t* buffer, uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8);
size_t deserialize_Secondary_IRTS_RR_1(uint8_t* buffer, Secondary_IRTS_RR_1* secondary_irts_rr_1);

/* Secondary_IRTS_RR_2 */
typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
} Secondary_IRTS_RR_2;
static_assert(sizeof(Secondary_IRTS_RR_2) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_RR_2(uint8_t* buffer, uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12);
size_t deserialize_Secondary_IRTS_RR_2(uint8_t* buffer, Secondary_IRTS_RR_2* secondary_irts_rr_2);

/* Secondary_IRTS_RR_3 */
typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
} Secondary_IRTS_RR_3;
static_assert(sizeof(Secondary_IRTS_RR_3) == 8, "struct size mismatch");
    
size_t serialize_Secondary_IRTS_RR_3(uint8_t* buffer, uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16);
size_t deserialize_Secondary_IRTS_RR_3(uint8_t* buffer, Secondary_IRTS_RR_3* secondary_irts_rr_3);
#endif

#ifdef __cplusplus
}
#endif