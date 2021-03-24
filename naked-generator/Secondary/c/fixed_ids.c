#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "fixed_ids.h"

void serialize_IMU_ANGULAR_RATE(IMU_ANGULAR_RATE* imu_angular_rate, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IMU_ANGULAR_RATE));
	memcpy(buffer, imu_angular_rate, sizeof(STEER_STATUS));
}
void serialize_IMU_ACCELERATION(IMU_ACCELERATION* imu_acceleration, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IMU_ACCELERATION));
	memcpy(buffer, imu_acceleration, sizeof(STEER_STATUS));
}
void serialize_IRTS_FL_0(IRTS_FL_0* irts_fl_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_FL_0));
	memcpy(buffer, irts_fl_0, sizeof(STEER_STATUS));
}
void serialize_IRTS_FL_1(IRTS_FL_1* irts_fl_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_FL_1));
	memcpy(buffer, irts_fl_1, sizeof(STEER_STATUS));
}
void serialize_IRTS_FL_2(IRTS_FL_2* irts_fl_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_FL_2));
	memcpy(buffer, irts_fl_2, sizeof(STEER_STATUS));
}
void serialize_IRTS_FL_3(IRTS_FL_3* irts_fl_3, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_FL_3));
	memcpy(buffer, irts_fl_3, sizeof(STEER_STATUS));
}
void serialize_IRTS_FR_0(IRTS_FR_0* irts_fr_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_FR_0));
	memcpy(buffer, irts_fr_0, sizeof(STEER_STATUS));
}
void serialize_IRTS_FR_1(IRTS_FR_1* irts_fr_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_FR_1));
	memcpy(buffer, irts_fr_1, sizeof(STEER_STATUS));
}
void serialize_IRTS_FR_2(IRTS_FR_2* irts_fr_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_FR_2));
	memcpy(buffer, irts_fr_2, sizeof(STEER_STATUS));
}
void serialize_IRTS_FR_3(IRTS_FR_3* irts_fr_3, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_FR_3));
	memcpy(buffer, irts_fr_3, sizeof(STEER_STATUS));
}
void serialize_IRTS_RL_0(IRTS_RL_0* irts_rl_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_RL_0));
	memcpy(buffer, irts_rl_0, sizeof(STEER_STATUS));
}
void serialize_IRTS_RL_1(IRTS_RL_1* irts_rl_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_RL_1));
	memcpy(buffer, irts_rl_1, sizeof(STEER_STATUS));
}
void serialize_IRTS_RL_2(IRTS_RL_2* irts_rl_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_RL_2));
	memcpy(buffer, irts_rl_2, sizeof(STEER_STATUS));
}
void serialize_IRTS_RL_3(IRTS_RL_3* irts_rl_3, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_RL_3));
	memcpy(buffer, irts_rl_3, sizeof(STEER_STATUS));
}
void serialize_IRTS_RR_0(IRTS_RR_0* irts_rr_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_RR_0));
	memcpy(buffer, irts_rr_0, sizeof(STEER_STATUS));
}
void serialize_IRTS_RR_1(IRTS_RR_1* irts_rr_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_RR_1));
	memcpy(buffer, irts_rr_1, sizeof(STEER_STATUS));
}
void serialize_IRTS_RR_2(IRTS_RR_2* irts_rr_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_RR_2));
	memcpy(buffer, irts_rr_2, sizeof(STEER_STATUS));
}
void serialize_IRTS_RR_3(IRTS_RR_3* irts_rr_3, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(IRTS_RR_3));
	memcpy(buffer, irts_rr_3, sizeof(STEER_STATUS));
}

void deserialize_IMU_ANGULAR_RATE(uint8_t* buffer, size_t buf_len, IMU_ANGULAR_RATE* imu_angular_rate) {
	assert(buf_len >= sizeof(IMU_ANGULAR_RATE));
	memcpy(imu_angular_rate, buffer, sizeof(STEER_STATUS));
}
void deserialize_IMU_ACCELERATION(uint8_t* buffer, size_t buf_len, IMU_ACCELERATION* imu_acceleration) {
	assert(buf_len >= sizeof(IMU_ACCELERATION));
	memcpy(imu_acceleration, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_FL_0(uint8_t* buffer, size_t buf_len, IRTS_FL_0* irts_fl_0) {
	assert(buf_len >= sizeof(IRTS_FL_0));
	memcpy(irts_fl_0, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_FL_1(uint8_t* buffer, size_t buf_len, IRTS_FL_1* irts_fl_1) {
	assert(buf_len >= sizeof(IRTS_FL_1));
	memcpy(irts_fl_1, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_FL_2(uint8_t* buffer, size_t buf_len, IRTS_FL_2* irts_fl_2) {
	assert(buf_len >= sizeof(IRTS_FL_2));
	memcpy(irts_fl_2, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_FL_3(uint8_t* buffer, size_t buf_len, IRTS_FL_3* irts_fl_3) {
	assert(buf_len >= sizeof(IRTS_FL_3));
	memcpy(irts_fl_3, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_FR_0(uint8_t* buffer, size_t buf_len, IRTS_FR_0* irts_fr_0) {
	assert(buf_len >= sizeof(IRTS_FR_0));
	memcpy(irts_fr_0, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_FR_1(uint8_t* buffer, size_t buf_len, IRTS_FR_1* irts_fr_1) {
	assert(buf_len >= sizeof(IRTS_FR_1));
	memcpy(irts_fr_1, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_FR_2(uint8_t* buffer, size_t buf_len, IRTS_FR_2* irts_fr_2) {
	assert(buf_len >= sizeof(IRTS_FR_2));
	memcpy(irts_fr_2, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_FR_3(uint8_t* buffer, size_t buf_len, IRTS_FR_3* irts_fr_3) {
	assert(buf_len >= sizeof(IRTS_FR_3));
	memcpy(irts_fr_3, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_RL_0(uint8_t* buffer, size_t buf_len, IRTS_RL_0* irts_rl_0) {
	assert(buf_len >= sizeof(IRTS_RL_0));
	memcpy(irts_rl_0, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_RL_1(uint8_t* buffer, size_t buf_len, IRTS_RL_1* irts_rl_1) {
	assert(buf_len >= sizeof(IRTS_RL_1));
	memcpy(irts_rl_1, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_RL_2(uint8_t* buffer, size_t buf_len, IRTS_RL_2* irts_rl_2) {
	assert(buf_len >= sizeof(IRTS_RL_2));
	memcpy(irts_rl_2, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_RL_3(uint8_t* buffer, size_t buf_len, IRTS_RL_3* irts_rl_3) {
	assert(buf_len >= sizeof(IRTS_RL_3));
	memcpy(irts_rl_3, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_RR_0(uint8_t* buffer, size_t buf_len, IRTS_RR_0* irts_rr_0) {
	assert(buf_len >= sizeof(IRTS_RR_0));
	memcpy(irts_rr_0, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_RR_1(uint8_t* buffer, size_t buf_len, IRTS_RR_1* irts_rr_1) {
	assert(buf_len >= sizeof(IRTS_RR_1));
	memcpy(irts_rr_1, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_RR_2(uint8_t* buffer, size_t buf_len, IRTS_RR_2* irts_rr_2) {
	assert(buf_len >= sizeof(IRTS_RR_2));
	memcpy(irts_rr_2, buffer, sizeof(STEER_STATUS));
}
void deserialize_IRTS_RR_3(uint8_t* buffer, size_t buf_len, IRTS_RR_3* irts_rr_3) {
	assert(buf_len >= sizeof(IRTS_RR_3));
	memcpy(irts_rr_3, buffer, sizeof(STEER_STATUS));
}
