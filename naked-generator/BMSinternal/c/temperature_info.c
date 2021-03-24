#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "temperature_info.h"

void serialize_TEMPERATURES_CB0_0(TEMPERATURES_CB0_0* temperatures_cb0_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB0_0));
	memcpy(buffer, temperatures_cb0_0, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB0_1(TEMPERATURES_CB0_1* temperatures_cb0_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB0_1));
	memcpy(buffer, temperatures_cb0_1, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB0_2(TEMPERATURES_CB0_2* temperatures_cb0_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB0_2));
	memcpy(buffer, temperatures_cb0_2, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB1_0(TEMPERATURES_CB1_0* temperatures_cb1_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB1_0));
	memcpy(buffer, temperatures_cb1_0, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB1_1(TEMPERATURES_CB1_1* temperatures_cb1_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB1_1));
	memcpy(buffer, temperatures_cb1_1, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB1_2(TEMPERATURES_CB1_2* temperatures_cb1_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB1_2));
	memcpy(buffer, temperatures_cb1_2, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB2_0(TEMPERATURES_CB2_0* temperatures_cb2_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB2_0));
	memcpy(buffer, temperatures_cb2_0, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB2_1(TEMPERATURES_CB2_1* temperatures_cb2_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB2_1));
	memcpy(buffer, temperatures_cb2_1, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB2_2(TEMPERATURES_CB2_2* temperatures_cb2_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB2_2));
	memcpy(buffer, temperatures_cb2_2, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB3_0(TEMPERATURES_CB3_0* temperatures_cb3_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB3_0));
	memcpy(buffer, temperatures_cb3_0, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB3_1(TEMPERATURES_CB3_1* temperatures_cb3_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB3_1));
	memcpy(buffer, temperatures_cb3_1, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB3_2(TEMPERATURES_CB3_2* temperatures_cb3_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB3_2));
	memcpy(buffer, temperatures_cb3_2, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB4_0(TEMPERATURES_CB4_0* temperatures_cb4_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB4_0));
	memcpy(buffer, temperatures_cb4_0, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB4_1(TEMPERATURES_CB4_1* temperatures_cb4_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB4_1));
	memcpy(buffer, temperatures_cb4_1, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB4_2(TEMPERATURES_CB4_2* temperatures_cb4_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB4_2));
	memcpy(buffer, temperatures_cb4_2, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB5_0(TEMPERATURES_CB5_0* temperatures_cb5_0, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB5_0));
	memcpy(buffer, temperatures_cb5_0, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB5_1(TEMPERATURES_CB5_1* temperatures_cb5_1, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB5_1));
	memcpy(buffer, temperatures_cb5_1, sizeof(STEER_STATUS));
}
void serialize_TEMPERATURES_CB5_2(TEMPERATURES_CB5_2* temperatures_cb5_2, uint8_t* buffer, size_t buf_len) {
	assert(buf_len >= sizeof(TEMPERATURES_CB5_2));
	memcpy(buffer, temperatures_cb5_2, sizeof(STEER_STATUS));
}

void deserialize_TEMPERATURES_CB0_0(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB0_0* temperatures_cb0_0) {
	assert(buf_len >= sizeof(TEMPERATURES_CB0_0));
	memcpy(temperatures_cb0_0, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB0_1(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB0_1* temperatures_cb0_1) {
	assert(buf_len >= sizeof(TEMPERATURES_CB0_1));
	memcpy(temperatures_cb0_1, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB0_2(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB0_2* temperatures_cb0_2) {
	assert(buf_len >= sizeof(TEMPERATURES_CB0_2));
	memcpy(temperatures_cb0_2, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB1_0(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB1_0* temperatures_cb1_0) {
	assert(buf_len >= sizeof(TEMPERATURES_CB1_0));
	memcpy(temperatures_cb1_0, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB1_1(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB1_1* temperatures_cb1_1) {
	assert(buf_len >= sizeof(TEMPERATURES_CB1_1));
	memcpy(temperatures_cb1_1, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB1_2(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB1_2* temperatures_cb1_2) {
	assert(buf_len >= sizeof(TEMPERATURES_CB1_2));
	memcpy(temperatures_cb1_2, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB2_0(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB2_0* temperatures_cb2_0) {
	assert(buf_len >= sizeof(TEMPERATURES_CB2_0));
	memcpy(temperatures_cb2_0, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB2_1(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB2_1* temperatures_cb2_1) {
	assert(buf_len >= sizeof(TEMPERATURES_CB2_1));
	memcpy(temperatures_cb2_1, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB2_2(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB2_2* temperatures_cb2_2) {
	assert(buf_len >= sizeof(TEMPERATURES_CB2_2));
	memcpy(temperatures_cb2_2, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB3_0(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB3_0* temperatures_cb3_0) {
	assert(buf_len >= sizeof(TEMPERATURES_CB3_0));
	memcpy(temperatures_cb3_0, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB3_1(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB3_1* temperatures_cb3_1) {
	assert(buf_len >= sizeof(TEMPERATURES_CB3_1));
	memcpy(temperatures_cb3_1, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB3_2(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB3_2* temperatures_cb3_2) {
	assert(buf_len >= sizeof(TEMPERATURES_CB3_2));
	memcpy(temperatures_cb3_2, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB4_0(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB4_0* temperatures_cb4_0) {
	assert(buf_len >= sizeof(TEMPERATURES_CB4_0));
	memcpy(temperatures_cb4_0, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB4_1(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB4_1* temperatures_cb4_1) {
	assert(buf_len >= sizeof(TEMPERATURES_CB4_1));
	memcpy(temperatures_cb4_1, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB4_2(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB4_2* temperatures_cb4_2) {
	assert(buf_len >= sizeof(TEMPERATURES_CB4_2));
	memcpy(temperatures_cb4_2, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB5_0(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB5_0* temperatures_cb5_0) {
	assert(buf_len >= sizeof(TEMPERATURES_CB5_0));
	memcpy(temperatures_cb5_0, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB5_1(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB5_1* temperatures_cb5_1) {
	assert(buf_len >= sizeof(TEMPERATURES_CB5_1));
	memcpy(temperatures_cb5_1, buffer, sizeof(STEER_STATUS));
}
void deserialize_TEMPERATURES_CB5_2(uint8_t* buffer, size_t buf_len, TEMPERATURES_CB5_2* temperatures_cb5_2) {
	assert(buf_len >= sizeof(TEMPERATURES_CB5_2));
	memcpy(temperatures_cb5_2, buffer, sizeof(STEER_STATUS));
}
