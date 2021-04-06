#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "Secondary.h"

/* Secondary_SET_PEDALS_RANGE */
void serialize_Secondary_SET_PEDALS_RANGE(Secondary_Sync_State sync_state, Secondary_Pedal pedal, uint8_t* buffer, size_t buf_len) {
    Secondary_SET_PEDALS_RANGE secondary_set_pedals_range = { sync_state, pedal };
	assert(buf_len >= sizeof(Secondary_SET_PEDALS_RANGE));
	memcpy(buffer, &secondary_set_pedals_range, sizeof(Secondary_SET_PEDALS_RANGE));
} 
void deserialize_Secondary_SET_PEDALS_RANGE(uint8_t* buffer, size_t buf_len, Secondary_SET_PEDALS_RANGE* secondary_set_pedals_range) {
	assert(buf_len >= sizeof(Secondary_SET_PEDALS_RANGE));
	memcpy(secondary_set_pedals_range, buffer, sizeof(Secondary_SET_PEDALS_RANGE));
}

/* Secondary_ACCELERATOR_PEDAL_VAL */
void serialize_Secondary_ACCELERATOR_PEDAL_VAL(uint8_t level, uint8_t* buffer, size_t buf_len) {
    Secondary_ACCELERATOR_PEDAL_VAL secondary_accelerator_pedal_val = { level };
	assert(buf_len >= sizeof(Secondary_ACCELERATOR_PEDAL_VAL));
	memcpy(buffer, &secondary_accelerator_pedal_val, sizeof(Secondary_ACCELERATOR_PEDAL_VAL));
} 
void deserialize_Secondary_ACCELERATOR_PEDAL_VAL(uint8_t* buffer, size_t buf_len, Secondary_ACCELERATOR_PEDAL_VAL* secondary_accelerator_pedal_val) {
	assert(buf_len >= sizeof(Secondary_ACCELERATOR_PEDAL_VAL));
	memcpy(secondary_accelerator_pedal_val, buffer, sizeof(Secondary_ACCELERATOR_PEDAL_VAL));
}

/* Secondary_BRAKE_PEDAL_VAL */
void serialize_Secondary_BRAKE_PEDAL_VAL(uint8_t level, uint8_t* buffer, size_t buf_len) {
    Secondary_BRAKE_PEDAL_VAL secondary_brake_pedal_val = { level };
	assert(buf_len >= sizeof(Secondary_BRAKE_PEDAL_VAL));
	memcpy(buffer, &secondary_brake_pedal_val, sizeof(Secondary_BRAKE_PEDAL_VAL));
} 
void deserialize_Secondary_BRAKE_PEDAL_VAL(uint8_t* buffer, size_t buf_len, Secondary_BRAKE_PEDAL_VAL* secondary_brake_pedal_val) {
	assert(buf_len >= sizeof(Secondary_BRAKE_PEDAL_VAL));
	memcpy(secondary_brake_pedal_val, buffer, sizeof(Secondary_BRAKE_PEDAL_VAL));
}

/* Secondary_IMU_ANGULAR_RATE */
void serialize_Secondary_IMU_ANGULAR_RATE(uint16_t ang_rate_x, uint16_t ang_rate_y, uint16_t ang_rate_z, uint8_t* buffer, size_t buf_len) {
    Secondary_IMU_ANGULAR_RATE secondary_imu_angular_rate = { ang_rate_x, ang_rate_y, ang_rate_z };
	assert(buf_len >= sizeof(Secondary_IMU_ANGULAR_RATE));
	memcpy(buffer, &secondary_imu_angular_rate, sizeof(Secondary_IMU_ANGULAR_RATE));
} 
void deserialize_Secondary_IMU_ANGULAR_RATE(uint8_t* buffer, size_t buf_len, Secondary_IMU_ANGULAR_RATE* secondary_imu_angular_rate) {
	assert(buf_len >= sizeof(Secondary_IMU_ANGULAR_RATE));
	memcpy(secondary_imu_angular_rate, buffer, sizeof(Secondary_IMU_ANGULAR_RATE));
}

/* Secondary_IMU_ACCELERATION */
void serialize_Secondary_IMU_ACCELERATION(uint16_t accel_x, uint16_t accel_y, uint16_t accel_z, uint8_t* buffer, size_t buf_len) {
    Secondary_IMU_ACCELERATION secondary_imu_acceleration = { accel_x, accel_y, accel_z };
	assert(buf_len >= sizeof(Secondary_IMU_ACCELERATION));
	memcpy(buffer, &secondary_imu_acceleration, sizeof(Secondary_IMU_ACCELERATION));
} 
void deserialize_Secondary_IMU_ACCELERATION(uint8_t* buffer, size_t buf_len, Secondary_IMU_ACCELERATION* secondary_imu_acceleration) {
	assert(buf_len >= sizeof(Secondary_IMU_ACCELERATION));
	memcpy(secondary_imu_acceleration, buffer, sizeof(Secondary_IMU_ACCELERATION));
}

/* Secondary_IRTS_FL_0 */
void serialize_Secondary_IRTS_FL_0(uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_FL_0 secondary_irts_fl_0 = { channel1, channel2, channel3, channel4 };
	assert(buf_len >= sizeof(Secondary_IRTS_FL_0));
	memcpy(buffer, &secondary_irts_fl_0, sizeof(Secondary_IRTS_FL_0));
} 
void deserialize_Secondary_IRTS_FL_0(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FL_0* secondary_irts_fl_0) {
	assert(buf_len >= sizeof(Secondary_IRTS_FL_0));
	memcpy(secondary_irts_fl_0, buffer, sizeof(Secondary_IRTS_FL_0));
}

/* Secondary_IRTS_FL_1 */
void serialize_Secondary_IRTS_FL_1(uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_FL_1 secondary_irts_fl_1 = { channel5, channel6, channel7, channel8 };
	assert(buf_len >= sizeof(Secondary_IRTS_FL_1));
	memcpy(buffer, &secondary_irts_fl_1, sizeof(Secondary_IRTS_FL_1));
} 
void deserialize_Secondary_IRTS_FL_1(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FL_1* secondary_irts_fl_1) {
	assert(buf_len >= sizeof(Secondary_IRTS_FL_1));
	memcpy(secondary_irts_fl_1, buffer, sizeof(Secondary_IRTS_FL_1));
}

/* Secondary_IRTS_FL_2 */
void serialize_Secondary_IRTS_FL_2(uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_FL_2 secondary_irts_fl_2 = { channel9, channel10, channel11, channel12 };
	assert(buf_len >= sizeof(Secondary_IRTS_FL_2));
	memcpy(buffer, &secondary_irts_fl_2, sizeof(Secondary_IRTS_FL_2));
} 
void deserialize_Secondary_IRTS_FL_2(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FL_2* secondary_irts_fl_2) {
	assert(buf_len >= sizeof(Secondary_IRTS_FL_2));
	memcpy(secondary_irts_fl_2, buffer, sizeof(Secondary_IRTS_FL_2));
}

/* Secondary_IRTS_FL_3 */
void serialize_Secondary_IRTS_FL_3(uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_FL_3 secondary_irts_fl_3 = { channel13, channel14, channel15, channel16 };
	assert(buf_len >= sizeof(Secondary_IRTS_FL_3));
	memcpy(buffer, &secondary_irts_fl_3, sizeof(Secondary_IRTS_FL_3));
} 
void deserialize_Secondary_IRTS_FL_3(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FL_3* secondary_irts_fl_3) {
	assert(buf_len >= sizeof(Secondary_IRTS_FL_3));
	memcpy(secondary_irts_fl_3, buffer, sizeof(Secondary_IRTS_FL_3));
}

/* Secondary_IRTS_FR_0 */
void serialize_Secondary_IRTS_FR_0(uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_FR_0 secondary_irts_fr_0 = { channel1, channel2, channel3, channel4 };
	assert(buf_len >= sizeof(Secondary_IRTS_FR_0));
	memcpy(buffer, &secondary_irts_fr_0, sizeof(Secondary_IRTS_FR_0));
} 
void deserialize_Secondary_IRTS_FR_0(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FR_0* secondary_irts_fr_0) {
	assert(buf_len >= sizeof(Secondary_IRTS_FR_0));
	memcpy(secondary_irts_fr_0, buffer, sizeof(Secondary_IRTS_FR_0));
}

/* Secondary_IRTS_FR_1 */
void serialize_Secondary_IRTS_FR_1(uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_FR_1 secondary_irts_fr_1 = { channel5, channel6, channel7, channel8 };
	assert(buf_len >= sizeof(Secondary_IRTS_FR_1));
	memcpy(buffer, &secondary_irts_fr_1, sizeof(Secondary_IRTS_FR_1));
} 
void deserialize_Secondary_IRTS_FR_1(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FR_1* secondary_irts_fr_1) {
	assert(buf_len >= sizeof(Secondary_IRTS_FR_1));
	memcpy(secondary_irts_fr_1, buffer, sizeof(Secondary_IRTS_FR_1));
}

/* Secondary_IRTS_FR_2 */
void serialize_Secondary_IRTS_FR_2(uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_FR_2 secondary_irts_fr_2 = { channel9, channel10, channel11, channel12 };
	assert(buf_len >= sizeof(Secondary_IRTS_FR_2));
	memcpy(buffer, &secondary_irts_fr_2, sizeof(Secondary_IRTS_FR_2));
} 
void deserialize_Secondary_IRTS_FR_2(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FR_2* secondary_irts_fr_2) {
	assert(buf_len >= sizeof(Secondary_IRTS_FR_2));
	memcpy(secondary_irts_fr_2, buffer, sizeof(Secondary_IRTS_FR_2));
}

/* Secondary_IRTS_FR_3 */
void serialize_Secondary_IRTS_FR_3(uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_FR_3 secondary_irts_fr_3 = { channel13, channel14, channel15, channel16 };
	assert(buf_len >= sizeof(Secondary_IRTS_FR_3));
	memcpy(buffer, &secondary_irts_fr_3, sizeof(Secondary_IRTS_FR_3));
} 
void deserialize_Secondary_IRTS_FR_3(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FR_3* secondary_irts_fr_3) {
	assert(buf_len >= sizeof(Secondary_IRTS_FR_3));
	memcpy(secondary_irts_fr_3, buffer, sizeof(Secondary_IRTS_FR_3));
}

/* Secondary_IRTS_RL_0 */
void serialize_Secondary_IRTS_RL_0(uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_RL_0 secondary_irts_rl_0 = { channel1, channel2, channel3, channel4 };
	assert(buf_len >= sizeof(Secondary_IRTS_RL_0));
	memcpy(buffer, &secondary_irts_rl_0, sizeof(Secondary_IRTS_RL_0));
} 
void deserialize_Secondary_IRTS_RL_0(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RL_0* secondary_irts_rl_0) {
	assert(buf_len >= sizeof(Secondary_IRTS_RL_0));
	memcpy(secondary_irts_rl_0, buffer, sizeof(Secondary_IRTS_RL_0));
}

/* Secondary_IRTS_RL_1 */
void serialize_Secondary_IRTS_RL_1(uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_RL_1 secondary_irts_rl_1 = { channel5, channel6, channel7, channel8 };
	assert(buf_len >= sizeof(Secondary_IRTS_RL_1));
	memcpy(buffer, &secondary_irts_rl_1, sizeof(Secondary_IRTS_RL_1));
} 
void deserialize_Secondary_IRTS_RL_1(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RL_1* secondary_irts_rl_1) {
	assert(buf_len >= sizeof(Secondary_IRTS_RL_1));
	memcpy(secondary_irts_rl_1, buffer, sizeof(Secondary_IRTS_RL_1));
}

/* Secondary_IRTS_RL_2 */
void serialize_Secondary_IRTS_RL_2(uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_RL_2 secondary_irts_rl_2 = { channel9, channel10, channel11, channel12 };
	assert(buf_len >= sizeof(Secondary_IRTS_RL_2));
	memcpy(buffer, &secondary_irts_rl_2, sizeof(Secondary_IRTS_RL_2));
} 
void deserialize_Secondary_IRTS_RL_2(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RL_2* secondary_irts_rl_2) {
	assert(buf_len >= sizeof(Secondary_IRTS_RL_2));
	memcpy(secondary_irts_rl_2, buffer, sizeof(Secondary_IRTS_RL_2));
}

/* Secondary_IRTS_RL_3 */
void serialize_Secondary_IRTS_RL_3(uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_RL_3 secondary_irts_rl_3 = { channel13, channel14, channel15, channel16 };
	assert(buf_len >= sizeof(Secondary_IRTS_RL_3));
	memcpy(buffer, &secondary_irts_rl_3, sizeof(Secondary_IRTS_RL_3));
} 
void deserialize_Secondary_IRTS_RL_3(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RL_3* secondary_irts_rl_3) {
	assert(buf_len >= sizeof(Secondary_IRTS_RL_3));
	memcpy(secondary_irts_rl_3, buffer, sizeof(Secondary_IRTS_RL_3));
}

/* Secondary_IRTS_RR_0 */
void serialize_Secondary_IRTS_RR_0(uint16_t channel1, uint16_t channel2, uint16_t channel3, uint16_t channel4, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_RR_0 secondary_irts_rr_0 = { channel1, channel2, channel3, channel4 };
	assert(buf_len >= sizeof(Secondary_IRTS_RR_0));
	memcpy(buffer, &secondary_irts_rr_0, sizeof(Secondary_IRTS_RR_0));
} 
void deserialize_Secondary_IRTS_RR_0(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RR_0* secondary_irts_rr_0) {
	assert(buf_len >= sizeof(Secondary_IRTS_RR_0));
	memcpy(secondary_irts_rr_0, buffer, sizeof(Secondary_IRTS_RR_0));
}

/* Secondary_IRTS_RR_1 */
void serialize_Secondary_IRTS_RR_1(uint16_t channel5, uint16_t channel6, uint16_t channel7, uint16_t channel8, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_RR_1 secondary_irts_rr_1 = { channel5, channel6, channel7, channel8 };
	assert(buf_len >= sizeof(Secondary_IRTS_RR_1));
	memcpy(buffer, &secondary_irts_rr_1, sizeof(Secondary_IRTS_RR_1));
} 
void deserialize_Secondary_IRTS_RR_1(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RR_1* secondary_irts_rr_1) {
	assert(buf_len >= sizeof(Secondary_IRTS_RR_1));
	memcpy(secondary_irts_rr_1, buffer, sizeof(Secondary_IRTS_RR_1));
}

/* Secondary_IRTS_RR_2 */
void serialize_Secondary_IRTS_RR_2(uint16_t channel9, uint16_t channel10, uint16_t channel11, uint16_t channel12, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_RR_2 secondary_irts_rr_2 = { channel9, channel10, channel11, channel12 };
	assert(buf_len >= sizeof(Secondary_IRTS_RR_2));
	memcpy(buffer, &secondary_irts_rr_2, sizeof(Secondary_IRTS_RR_2));
} 
void deserialize_Secondary_IRTS_RR_2(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RR_2* secondary_irts_rr_2) {
	assert(buf_len >= sizeof(Secondary_IRTS_RR_2));
	memcpy(secondary_irts_rr_2, buffer, sizeof(Secondary_IRTS_RR_2));
}

/* Secondary_IRTS_RR_3 */
void serialize_Secondary_IRTS_RR_3(uint16_t channel13, uint16_t channel14, uint16_t channel15, uint16_t channel16, uint8_t* buffer, size_t buf_len) {
    Secondary_IRTS_RR_3 secondary_irts_rr_3 = { channel13, channel14, channel15, channel16 };
	assert(buf_len >= sizeof(Secondary_IRTS_RR_3));
	memcpy(buffer, &secondary_irts_rr_3, sizeof(Secondary_IRTS_RR_3));
} 
void deserialize_Secondary_IRTS_RR_3(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RR_3* secondary_irts_rr_3) {
	assert(buf_len >= sizeof(Secondary_IRTS_RR_3));
	memcpy(secondary_irts_rr_3, buffer, sizeof(Secondary_IRTS_RR_3));
}
