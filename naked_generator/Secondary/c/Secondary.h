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
        bitset[index/8] &= ~( 1 << index % 8); \
        bitset[index/8] |=  (value << index % 8); \
    } while(0);
    #define flipBit(bitset, index) ((bitset)[(index)/8] ^= (1 << (index) % 8) )
    #define getBit(bitset, index)  ((bitset)[(index)/8] &  (1 << (index) % 8) )
#endif


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