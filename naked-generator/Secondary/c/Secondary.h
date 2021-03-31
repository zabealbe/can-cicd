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
    


/* Secondary_IMU_ANGULAR_RATE */
typedef struct __is_packed {
    uint16_t ang_rate_x;
    uint16_t ang_rate_y;
    uint16_t ang_rate_z;
} Secondary_IMU_ANGULAR_RATE;
static_assert(sizeof(Secondary_IMU_ANGULAR_RATE) == 6, "struct size mismatch");
    
void serialize_Secondary_IMU_ANGULAR_RATE(Secondary_IMU_ANGULAR_RATE* imu_angular_rate, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IMU_ANGULAR_RATE(uint8_t* buffer, size_t buf_len, Secondary_IMU_ANGULAR_RATE* imu_angular_rate);


/* Secondary_IMU_ACCELERATION */
typedef struct __is_packed {
    uint16_t accel_x;
    uint16_t accel_y;
    uint16_t accel_z;
} Secondary_IMU_ACCELERATION;
static_assert(sizeof(Secondary_IMU_ACCELERATION) == 6, "struct size mismatch");
    
void serialize_Secondary_IMU_ACCELERATION(Secondary_IMU_ACCELERATION* imu_acceleration, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IMU_ACCELERATION(uint8_t* buffer, size_t buf_len, Secondary_IMU_ACCELERATION* imu_acceleration);


/* Secondary_IRTS_FL_0 */
typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
} Secondary_IRTS_FL_0;
static_assert(sizeof(Secondary_IRTS_FL_0) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_FL_0(Secondary_IRTS_FL_0* irts_fl_0, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_FL_0(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FL_0* irts_fl_0);


/* Secondary_IRTS_FL_1 */
typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
} Secondary_IRTS_FL_1;
static_assert(sizeof(Secondary_IRTS_FL_1) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_FL_1(Secondary_IRTS_FL_1* irts_fl_1, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_FL_1(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FL_1* irts_fl_1);


/* Secondary_IRTS_FL_2 */
typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
} Secondary_IRTS_FL_2;
static_assert(sizeof(Secondary_IRTS_FL_2) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_FL_2(Secondary_IRTS_FL_2* irts_fl_2, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_FL_2(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FL_2* irts_fl_2);


/* Secondary_IRTS_FL_3 */
typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
} Secondary_IRTS_FL_3;
static_assert(sizeof(Secondary_IRTS_FL_3) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_FL_3(Secondary_IRTS_FL_3* irts_fl_3, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_FL_3(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FL_3* irts_fl_3);


/* Secondary_IRTS_FR_0 */
typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
} Secondary_IRTS_FR_0;
static_assert(sizeof(Secondary_IRTS_FR_0) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_FR_0(Secondary_IRTS_FR_0* irts_fr_0, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_FR_0(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FR_0* irts_fr_0);


/* Secondary_IRTS_FR_1 */
typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
} Secondary_IRTS_FR_1;
static_assert(sizeof(Secondary_IRTS_FR_1) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_FR_1(Secondary_IRTS_FR_1* irts_fr_1, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_FR_1(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FR_1* irts_fr_1);


/* Secondary_IRTS_FR_2 */
typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
} Secondary_IRTS_FR_2;
static_assert(sizeof(Secondary_IRTS_FR_2) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_FR_2(Secondary_IRTS_FR_2* irts_fr_2, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_FR_2(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FR_2* irts_fr_2);


/* Secondary_IRTS_FR_3 */
typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
} Secondary_IRTS_FR_3;
static_assert(sizeof(Secondary_IRTS_FR_3) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_FR_3(Secondary_IRTS_FR_3* irts_fr_3, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_FR_3(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FR_3* irts_fr_3);


/* Secondary_IRTS_RL_0 */
typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
} Secondary_IRTS_RL_0;
static_assert(sizeof(Secondary_IRTS_RL_0) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_RL_0(Secondary_IRTS_RL_0* irts_rl_0, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_RL_0(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RL_0* irts_rl_0);


/* Secondary_IRTS_RL_1 */
typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
} Secondary_IRTS_RL_1;
static_assert(sizeof(Secondary_IRTS_RL_1) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_RL_1(Secondary_IRTS_RL_1* irts_rl_1, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_RL_1(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RL_1* irts_rl_1);


/* Secondary_IRTS_RL_2 */
typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
} Secondary_IRTS_RL_2;
static_assert(sizeof(Secondary_IRTS_RL_2) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_RL_2(Secondary_IRTS_RL_2* irts_rl_2, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_RL_2(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RL_2* irts_rl_2);


/* Secondary_IRTS_RL_3 */
typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
} Secondary_IRTS_RL_3;
static_assert(sizeof(Secondary_IRTS_RL_3) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_RL_3(Secondary_IRTS_RL_3* irts_rl_3, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_RL_3(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RL_3* irts_rl_3);


/* Secondary_IRTS_RR_0 */
typedef struct __is_packed {
    uint16_t channel1;
    uint16_t channel2;
    uint16_t channel3;
    uint16_t channel4;
} Secondary_IRTS_RR_0;
static_assert(sizeof(Secondary_IRTS_RR_0) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_RR_0(Secondary_IRTS_RR_0* irts_rr_0, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_RR_0(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RR_0* irts_rr_0);


/* Secondary_IRTS_RR_1 */
typedef struct __is_packed {
    uint16_t channel5;
    uint16_t channel6;
    uint16_t channel7;
    uint16_t channel8;
} Secondary_IRTS_RR_1;
static_assert(sizeof(Secondary_IRTS_RR_1) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_RR_1(Secondary_IRTS_RR_1* irts_rr_1, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_RR_1(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RR_1* irts_rr_1);


/* Secondary_IRTS_RR_2 */
typedef struct __is_packed {
    uint16_t channel9;
    uint16_t channel10;
    uint16_t channel11;
    uint16_t channel12;
} Secondary_IRTS_RR_2;
static_assert(sizeof(Secondary_IRTS_RR_2) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_RR_2(Secondary_IRTS_RR_2* irts_rr_2, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_RR_2(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RR_2* irts_rr_2);


/* Secondary_IRTS_RR_3 */
typedef struct __is_packed {
    uint16_t channel13;
    uint16_t channel14;
    uint16_t channel15;
    uint16_t channel16;
} Secondary_IRTS_RR_3;
static_assert(sizeof(Secondary_IRTS_RR_3) == 8, "struct size mismatch");
    
void serialize_Secondary_IRTS_RR_3(Secondary_IRTS_RR_3* irts_rr_3, uint8_t* buffer, size_t buf_len);
void deserialize_Secondary_IRTS_RR_3(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RR_3* irts_rr_3);
#endif