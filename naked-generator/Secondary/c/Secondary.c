#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "Secondary.h"


/* Secondary_SET_PEDALS_RANGE */
void serialize_Secondary_SET_PEDALS_RANGE(Secondary_SET_PEDALS_RANGE* set_pedals_range, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_SET_PEDALS_RANGE));
	memcpy(buffer, set_pedals_range, sizeof(Secondary_SET_PEDALS_RANGE));
} 
void deserialize_Secondary_SET_PEDALS_RANGE(uint8_t* buffer, size_t buf_len, Secondary_SET_PEDALS_RANGE* set_pedals_range) {
	assert(buf_len >= sizeof(Secondary_SET_PEDALS_RANGE));
	memcpy(set_pedals_range, buffer, sizeof(Secondary_SET_PEDALS_RANGE));
}


/* Secondary_ACCELERATOR_PEDAL_VAL */
void serialize_Secondary_ACCELERATOR_PEDAL_VAL(Secondary_ACCELERATOR_PEDAL_VAL* accelerator_pedal_val, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_ACCELERATOR_PEDAL_VAL));
	memcpy(buffer, accelerator_pedal_val, sizeof(Secondary_ACCELERATOR_PEDAL_VAL));
} 
void deserialize_Secondary_ACCELERATOR_PEDAL_VAL(uint8_t* buffer, size_t buf_len, Secondary_ACCELERATOR_PEDAL_VAL* accelerator_pedal_val) {
	assert(buf_len >= sizeof(Secondary_ACCELERATOR_PEDAL_VAL));
	memcpy(accelerator_pedal_val, buffer, sizeof(Secondary_ACCELERATOR_PEDAL_VAL));
}


/* Secondary_BRAKE_PEDAL_VAL */
void serialize_Secondary_BRAKE_PEDAL_VAL(Secondary_BRAKE_PEDAL_VAL* brake_pedal_val, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_BRAKE_PEDAL_VAL));
	memcpy(buffer, brake_pedal_val, sizeof(Secondary_BRAKE_PEDAL_VAL));
} 
void deserialize_Secondary_BRAKE_PEDAL_VAL(uint8_t* buffer, size_t buf_len, Secondary_BRAKE_PEDAL_VAL* brake_pedal_val) {
	assert(buf_len >= sizeof(Secondary_BRAKE_PEDAL_VAL));
	memcpy(brake_pedal_val, buffer, sizeof(Secondary_BRAKE_PEDAL_VAL));
}


/* Secondary_IMU_ANGULAR_RATE */
void serialize_Secondary_IMU_ANGULAR_RATE(Secondary_IMU_ANGULAR_RATE* imu_angular_rate, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IMU_ANGULAR_RATE));
	memcpy(buffer, imu_angular_rate, sizeof(Secondary_IMU_ANGULAR_RATE));
} 
void deserialize_Secondary_IMU_ANGULAR_RATE(uint8_t* buffer, size_t buf_len, Secondary_IMU_ANGULAR_RATE* imu_angular_rate) {
	assert(buf_len >= sizeof(Secondary_IMU_ANGULAR_RATE));
	memcpy(imu_angular_rate, buffer, sizeof(Secondary_IMU_ANGULAR_RATE));
}


/* Secondary_IMU_ACCELERATION */
void serialize_Secondary_IMU_ACCELERATION(Secondary_IMU_ACCELERATION* imu_acceleration, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IMU_ACCELERATION));
	memcpy(buffer, imu_acceleration, sizeof(Secondary_IMU_ACCELERATION));
} 
void deserialize_Secondary_IMU_ACCELERATION(uint8_t* buffer, size_t buf_len, Secondary_IMU_ACCELERATION* imu_acceleration) {
	assert(buf_len >= sizeof(Secondary_IMU_ACCELERATION));
	memcpy(imu_acceleration, buffer, sizeof(Secondary_IMU_ACCELERATION));
}


/* Secondary_IRTS_FL_0 */
void serialize_Secondary_IRTS_FL_0(Secondary_IRTS_FL_0* irts_fl_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_FL_0));
	memcpy(buffer, irts_fl_0, sizeof(Secondary_IRTS_FL_0));
} 
void deserialize_Secondary_IRTS_FL_0(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FL_0* irts_fl_0) {
	assert(buf_len >= sizeof(Secondary_IRTS_FL_0));
	memcpy(irts_fl_0, buffer, sizeof(Secondary_IRTS_FL_0));
}


/* Secondary_IRTS_FL_1 */
void serialize_Secondary_IRTS_FL_1(Secondary_IRTS_FL_1* irts_fl_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_FL_1));
	memcpy(buffer, irts_fl_1, sizeof(Secondary_IRTS_FL_1));
} 
void deserialize_Secondary_IRTS_FL_1(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FL_1* irts_fl_1) {
	assert(buf_len >= sizeof(Secondary_IRTS_FL_1));
	memcpy(irts_fl_1, buffer, sizeof(Secondary_IRTS_FL_1));
}


/* Secondary_IRTS_FL_2 */
void serialize_Secondary_IRTS_FL_2(Secondary_IRTS_FL_2* irts_fl_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_FL_2));
	memcpy(buffer, irts_fl_2, sizeof(Secondary_IRTS_FL_2));
} 
void deserialize_Secondary_IRTS_FL_2(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FL_2* irts_fl_2) {
	assert(buf_len >= sizeof(Secondary_IRTS_FL_2));
	memcpy(irts_fl_2, buffer, sizeof(Secondary_IRTS_FL_2));
}


/* Secondary_IRTS_FL_3 */
void serialize_Secondary_IRTS_FL_3(Secondary_IRTS_FL_3* irts_fl_3, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_FL_3));
	memcpy(buffer, irts_fl_3, sizeof(Secondary_IRTS_FL_3));
} 
void deserialize_Secondary_IRTS_FL_3(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FL_3* irts_fl_3) {
	assert(buf_len >= sizeof(Secondary_IRTS_FL_3));
	memcpy(irts_fl_3, buffer, sizeof(Secondary_IRTS_FL_3));
}


/* Secondary_IRTS_FR_0 */
void serialize_Secondary_IRTS_FR_0(Secondary_IRTS_FR_0* irts_fr_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_FR_0));
	memcpy(buffer, irts_fr_0, sizeof(Secondary_IRTS_FR_0));
} 
void deserialize_Secondary_IRTS_FR_0(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FR_0* irts_fr_0) {
	assert(buf_len >= sizeof(Secondary_IRTS_FR_0));
	memcpy(irts_fr_0, buffer, sizeof(Secondary_IRTS_FR_0));
}


/* Secondary_IRTS_FR_1 */
void serialize_Secondary_IRTS_FR_1(Secondary_IRTS_FR_1* irts_fr_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_FR_1));
	memcpy(buffer, irts_fr_1, sizeof(Secondary_IRTS_FR_1));
} 
void deserialize_Secondary_IRTS_FR_1(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FR_1* irts_fr_1) {
	assert(buf_len >= sizeof(Secondary_IRTS_FR_1));
	memcpy(irts_fr_1, buffer, sizeof(Secondary_IRTS_FR_1));
}


/* Secondary_IRTS_FR_2 */
void serialize_Secondary_IRTS_FR_2(Secondary_IRTS_FR_2* irts_fr_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_FR_2));
	memcpy(buffer, irts_fr_2, sizeof(Secondary_IRTS_FR_2));
} 
void deserialize_Secondary_IRTS_FR_2(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FR_2* irts_fr_2) {
	assert(buf_len >= sizeof(Secondary_IRTS_FR_2));
	memcpy(irts_fr_2, buffer, sizeof(Secondary_IRTS_FR_2));
}


/* Secondary_IRTS_FR_3 */
void serialize_Secondary_IRTS_FR_3(Secondary_IRTS_FR_3* irts_fr_3, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_FR_3));
	memcpy(buffer, irts_fr_3, sizeof(Secondary_IRTS_FR_3));
} 
void deserialize_Secondary_IRTS_FR_3(uint8_t* buffer, size_t buf_len, Secondary_IRTS_FR_3* irts_fr_3) {
	assert(buf_len >= sizeof(Secondary_IRTS_FR_3));
	memcpy(irts_fr_3, buffer, sizeof(Secondary_IRTS_FR_3));
}


/* Secondary_IRTS_RL_0 */
void serialize_Secondary_IRTS_RL_0(Secondary_IRTS_RL_0* irts_rl_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_RL_0));
	memcpy(buffer, irts_rl_0, sizeof(Secondary_IRTS_RL_0));
} 
void deserialize_Secondary_IRTS_RL_0(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RL_0* irts_rl_0) {
	assert(buf_len >= sizeof(Secondary_IRTS_RL_0));
	memcpy(irts_rl_0, buffer, sizeof(Secondary_IRTS_RL_0));
}


/* Secondary_IRTS_RL_1 */
void serialize_Secondary_IRTS_RL_1(Secondary_IRTS_RL_1* irts_rl_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_RL_1));
	memcpy(buffer, irts_rl_1, sizeof(Secondary_IRTS_RL_1));
} 
void deserialize_Secondary_IRTS_RL_1(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RL_1* irts_rl_1) {
	assert(buf_len >= sizeof(Secondary_IRTS_RL_1));
	memcpy(irts_rl_1, buffer, sizeof(Secondary_IRTS_RL_1));
}


/* Secondary_IRTS_RL_2 */
void serialize_Secondary_IRTS_RL_2(Secondary_IRTS_RL_2* irts_rl_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_RL_2));
	memcpy(buffer, irts_rl_2, sizeof(Secondary_IRTS_RL_2));
} 
void deserialize_Secondary_IRTS_RL_2(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RL_2* irts_rl_2) {
	assert(buf_len >= sizeof(Secondary_IRTS_RL_2));
	memcpy(irts_rl_2, buffer, sizeof(Secondary_IRTS_RL_2));
}


/* Secondary_IRTS_RL_3 */
void serialize_Secondary_IRTS_RL_3(Secondary_IRTS_RL_3* irts_rl_3, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_RL_3));
	memcpy(buffer, irts_rl_3, sizeof(Secondary_IRTS_RL_3));
} 
void deserialize_Secondary_IRTS_RL_3(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RL_3* irts_rl_3) {
	assert(buf_len >= sizeof(Secondary_IRTS_RL_3));
	memcpy(irts_rl_3, buffer, sizeof(Secondary_IRTS_RL_3));
}


/* Secondary_IRTS_RR_0 */
void serialize_Secondary_IRTS_RR_0(Secondary_IRTS_RR_0* irts_rr_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_RR_0));
	memcpy(buffer, irts_rr_0, sizeof(Secondary_IRTS_RR_0));
} 
void deserialize_Secondary_IRTS_RR_0(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RR_0* irts_rr_0) {
	assert(buf_len >= sizeof(Secondary_IRTS_RR_0));
	memcpy(irts_rr_0, buffer, sizeof(Secondary_IRTS_RR_0));
}


/* Secondary_IRTS_RR_1 */
void serialize_Secondary_IRTS_RR_1(Secondary_IRTS_RR_1* irts_rr_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_RR_1));
	memcpy(buffer, irts_rr_1, sizeof(Secondary_IRTS_RR_1));
} 
void deserialize_Secondary_IRTS_RR_1(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RR_1* irts_rr_1) {
	assert(buf_len >= sizeof(Secondary_IRTS_RR_1));
	memcpy(irts_rr_1, buffer, sizeof(Secondary_IRTS_RR_1));
}


/* Secondary_IRTS_RR_2 */
void serialize_Secondary_IRTS_RR_2(Secondary_IRTS_RR_2* irts_rr_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_RR_2));
	memcpy(buffer, irts_rr_2, sizeof(Secondary_IRTS_RR_2));
} 
void deserialize_Secondary_IRTS_RR_2(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RR_2* irts_rr_2) {
	assert(buf_len >= sizeof(Secondary_IRTS_RR_2));
	memcpy(irts_rr_2, buffer, sizeof(Secondary_IRTS_RR_2));
}


/* Secondary_IRTS_RR_3 */
void serialize_Secondary_IRTS_RR_3(Secondary_IRTS_RR_3* irts_rr_3, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(Secondary_IRTS_RR_3));
	memcpy(buffer, irts_rr_3, sizeof(Secondary_IRTS_RR_3));
} 
void deserialize_Secondary_IRTS_RR_3(uint8_t* buffer, size_t buf_len, Secondary_IRTS_RR_3* irts_rr_3) {
	assert(buf_len >= sizeof(Secondary_IRTS_RR_3));
	memcpy(irts_rr_3, buffer, sizeof(Secondary_IRTS_RR_3));
}
