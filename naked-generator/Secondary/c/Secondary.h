#ifndef SECONDARY_H
#define SECONDARY_H

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


typedef struct __is_packed {
	uint16_t ang_rate_x;
	uint16_t ang_rate_y;
	uint16_t ang_rate_z;
} IMU_ANGULAR_RATE;
static_assert(sizeof(IMU_ANGULAR_RATE) == 6, "struct size mismatch");

typedef struct __is_packed {
	uint16_t accel_x;
	uint16_t accel_y;
	uint16_t accel_z;
} IMU_ACCELERATION;
static_assert(sizeof(IMU_ACCELERATION) == 6, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel1;
	uint16_t channel2;
	uint16_t channel3;
	uint16_t channel4;
} IRTS_FL_0;
static_assert(sizeof(IRTS_FL_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel5;
	uint16_t channel6;
	uint16_t channel7;
	uint16_t channel8;
} IRTS_FL_1;
static_assert(sizeof(IRTS_FL_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel9;
	uint16_t channel10;
	uint16_t channel11;
	uint16_t channel12;
} IRTS_FL_2;
static_assert(sizeof(IRTS_FL_2) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel13;
	uint16_t channel14;
	uint16_t channel15;
	uint16_t channel16;
} IRTS_FL_3;
static_assert(sizeof(IRTS_FL_3) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel1;
	uint16_t channel2;
	uint16_t channel3;
	uint16_t channel4;
} IRTS_FR_0;
static_assert(sizeof(IRTS_FR_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel5;
	uint16_t channel6;
	uint16_t channel7;
	uint16_t channel8;
} IRTS_FR_1;
static_assert(sizeof(IRTS_FR_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel9;
	uint16_t channel10;
	uint16_t channel11;
	uint16_t channel12;
} IRTS_FR_2;
static_assert(sizeof(IRTS_FR_2) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel13;
	uint16_t channel14;
	uint16_t channel15;
	uint16_t channel16;
} IRTS_FR_3;
static_assert(sizeof(IRTS_FR_3) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel1;
	uint16_t channel2;
	uint16_t channel3;
	uint16_t channel4;
} IRTS_RL_0;
static_assert(sizeof(IRTS_RL_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel5;
	uint16_t channel6;
	uint16_t channel7;
	uint16_t channel8;
} IRTS_RL_1;
static_assert(sizeof(IRTS_RL_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel9;
	uint16_t channel10;
	uint16_t channel11;
	uint16_t channel12;
} IRTS_RL_2;
static_assert(sizeof(IRTS_RL_2) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel13;
	uint16_t channel14;
	uint16_t channel15;
	uint16_t channel16;
} IRTS_RL_3;
static_assert(sizeof(IRTS_RL_3) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel1;
	uint16_t channel2;
	uint16_t channel3;
	uint16_t channel4;
} IRTS_RR_0;
static_assert(sizeof(IRTS_RR_0) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel5;
	uint16_t channel6;
	uint16_t channel7;
	uint16_t channel8;
} IRTS_RR_1;
static_assert(sizeof(IRTS_RR_1) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel9;
	uint16_t channel10;
	uint16_t channel11;
	uint16_t channel12;
} IRTS_RR_2;
static_assert(sizeof(IRTS_RR_2) == 8, "struct size mismatch");

typedef struct __is_packed {
	uint16_t channel13;
	uint16_t channel14;
	uint16_t channel15;
	uint16_t channel16;
} IRTS_RR_3;
static_assert(sizeof(IRTS_RR_3) == 8, "struct size mismatch");

void serialize_IMU_ANGULAR_RATE(IMU_ANGULAR_RATE* imu_angular_rate, uint8_t* buffer, size_t buf_len);
void serialize_IMU_ACCELERATION(IMU_ACCELERATION* imu_acceleration, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_FL_0(IRTS_FL_0* irts_fl_0, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_FL_1(IRTS_FL_1* irts_fl_1, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_FL_2(IRTS_FL_2* irts_fl_2, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_FL_3(IRTS_FL_3* irts_fl_3, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_FR_0(IRTS_FR_0* irts_fr_0, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_FR_1(IRTS_FR_1* irts_fr_1, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_FR_2(IRTS_FR_2* irts_fr_2, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_FR_3(IRTS_FR_3* irts_fr_3, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_RL_0(IRTS_RL_0* irts_rl_0, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_RL_1(IRTS_RL_1* irts_rl_1, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_RL_2(IRTS_RL_2* irts_rl_2, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_RL_3(IRTS_RL_3* irts_rl_3, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_RR_0(IRTS_RR_0* irts_rr_0, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_RR_1(IRTS_RR_1* irts_rr_1, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_RR_2(IRTS_RR_2* irts_rr_2, uint8_t* buffer, size_t buf_len);
void serialize_IRTS_RR_3(IRTS_RR_3* irts_rr_3, uint8_t* buffer, size_t buf_len);

void deserialize_IMU_ANGULAR_RATE(uint8_t* buffer, size_t buf_len, IMU_ANGULAR_RATE* imu_angular_rate);
void deserialize_IMU_ACCELERATION(uint8_t* buffer, size_t buf_len, IMU_ACCELERATION* imu_acceleration);
void deserialize_IRTS_FL_0(uint8_t* buffer, size_t buf_len, IRTS_FL_0* irts_fl_0);
void deserialize_IRTS_FL_1(uint8_t* buffer, size_t buf_len, IRTS_FL_1* irts_fl_1);
void deserialize_IRTS_FL_2(uint8_t* buffer, size_t buf_len, IRTS_FL_2* irts_fl_2);
void deserialize_IRTS_FL_3(uint8_t* buffer, size_t buf_len, IRTS_FL_3* irts_fl_3);
void deserialize_IRTS_FR_0(uint8_t* buffer, size_t buf_len, IRTS_FR_0* irts_fr_0);
void deserialize_IRTS_FR_1(uint8_t* buffer, size_t buf_len, IRTS_FR_1* irts_fr_1);
void deserialize_IRTS_FR_2(uint8_t* buffer, size_t buf_len, IRTS_FR_2* irts_fr_2);
void deserialize_IRTS_FR_3(uint8_t* buffer, size_t buf_len, IRTS_FR_3* irts_fr_3);
void deserialize_IRTS_RL_0(uint8_t* buffer, size_t buf_len, IRTS_RL_0* irts_rl_0);
void deserialize_IRTS_RL_1(uint8_t* buffer, size_t buf_len, IRTS_RL_1* irts_rl_1);
void deserialize_IRTS_RL_2(uint8_t* buffer, size_t buf_len, IRTS_RL_2* irts_rl_2);
void deserialize_IRTS_RL_3(uint8_t* buffer, size_t buf_len, IRTS_RL_3* irts_rl_3);
void deserialize_IRTS_RR_0(uint8_t* buffer, size_t buf_len, IRTS_RR_0* irts_rr_0);
void deserialize_IRTS_RR_1(uint8_t* buffer, size_t buf_len, IRTS_RR_1* irts_rr_1);
void deserialize_IRTS_RR_2(uint8_t* buffer, size_t buf_len, IRTS_RR_2* irts_rr_2);
void deserialize_IRTS_RR_3(uint8_t* buffer, size_t buf_len, IRTS_RR_3* irts_rr_3);

#endif