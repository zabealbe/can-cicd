#ifndef FIXED_IDS_H
#define FIXED_IDS_H

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
#define __FIXED_IDS_ENDIAN_ORDER ('ABCD')
#if __FIXED_IDS_ENDIAN_ORDER==0x41424344UL 
    #define FIXED_IDS_LITTLE_ENDIAN
#elif __FIXED_IDS_ENDIAN_ORDER==0x44434241UL
    #define FIXED_IDS_BIG_ENDIAN
#elif __FIXED_IDS_ENDIAN_ORDER==0x42414443UL
    #define FIXED_IDS_PDP_ENDIAN
#else
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

#ifndef FIXED_IDS_LITTLE_ENDIAN
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

// assert float is 32bit and double is 64bit because not defined in the standard
// assert(sizeof(float) == 4) TODO: preprocessor
// assert(sizeof(double) == 8) TODO: preprocessor


typedef struct __is_packed {
	uint16_t ang_rate_x;
	uint16_t ang_rate_y;
	uint16_t ang_rate_z;
} IMU_ANGULAR_RATE;

typedef struct __is_packed {
	uint16_t accel_x;
	uint16_t accel_y;
	uint16_t accel_z;
} IMU_ACCELERATION;

typedef struct __is_packed {
	uint16_t channel1;
	uint16_t channel2;
	uint16_t channel3;
	uint16_t channel4;
} IRTS_FL_0;

typedef struct __is_packed {
	uint16_t channel5;
	uint16_t channel6;
	uint16_t channel7;
	uint16_t channel8;
} IRTS_FL_1;

typedef struct __is_packed {
	uint16_t channel9;
	uint16_t channel10;
	uint16_t channel11;
	uint16_t channel12;
} IRTS_FL_2;

typedef struct __is_packed {
	uint16_t channel13;
	uint16_t channel14;
	uint16_t channel15;
	uint16_t channel16;
} IRTS_FL_3;

typedef struct __is_packed {
	uint16_t channel1;
	uint16_t channel2;
	uint16_t channel3;
	uint16_t channel4;
} IRTS_FR_0;

typedef struct __is_packed {
	uint16_t channel5;
	uint16_t channel6;
	uint16_t channel7;
	uint16_t channel8;
} IRTS_FR_1;

typedef struct __is_packed {
	uint16_t channel9;
	uint16_t channel10;
	uint16_t channel11;
	uint16_t channel12;
} IRTS_FR_2;

typedef struct __is_packed {
	uint16_t channel13;
	uint16_t channel14;
	uint16_t channel15;
	uint16_t channel16;
} IRTS_FR_3;

typedef struct __is_packed {
	uint16_t channel1;
	uint16_t channel2;
	uint16_t channel3;
	uint16_t channel4;
} IRTS_RL_0;

typedef struct __is_packed {
	uint16_t channel5;
	uint16_t channel6;
	uint16_t channel7;
	uint16_t channel8;
} IRTS_RL_1;

typedef struct __is_packed {
	uint16_t channel9;
	uint16_t channel10;
	uint16_t channel11;
	uint16_t channel12;
} IRTS_RL_2;

typedef struct __is_packed {
	uint16_t channel13;
	uint16_t channel14;
	uint16_t channel15;
	uint16_t channel16;
} IRTS_RL_3;

typedef struct __is_packed {
	uint16_t channel1;
	uint16_t channel2;
	uint16_t channel3;
	uint16_t channel4;
} IRTS_RR_0;

typedef struct __is_packed {
	uint16_t channel5;
	uint16_t channel6;
	uint16_t channel7;
	uint16_t channel8;
} IRTS_RR_1;

typedef struct __is_packed {
	uint16_t channel9;
	uint16_t channel10;
	uint16_t channel11;
	uint16_t channel12;
} IRTS_RR_2;

typedef struct __is_packed {
	uint16_t channel13;
	uint16_t channel14;
	uint16_t channel15;
	uint16_t channel16;
} IRTS_RR_3;

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