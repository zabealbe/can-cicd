#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "Secondary.h"

int main() {

/* Secondary_SET_PEDALS_RANGE */
    printf("Secondary_SET_PEDALS_RANGE:\n");
    uint8_t* buffer_secondary_set_pedals_range = (uint8_t*)malloc(sizeof(Secondary_SET_PEDALS_RANGE));
    
    Secondary_SET_PEDALS_RANGE secondary_set_pedals_range_s = { 118, -110 };
    serialize_Secondary_SET_PEDALS_RANGE((long long int)secondary_set_pedals_range_s.sync_state, (long long int)secondary_set_pedals_range_s.pedal, buffer_secondary_set_pedals_range, sizeof(Secondary_SET_PEDALS_RANGE));
    printf("\tSerialized\n\t%lld %lld\n", (long long int)secondary_set_pedals_range_s.sync_state, (long long int)secondary_set_pedals_range_s.pedal);
    
    Secondary_SET_PEDALS_RANGE* secondary_set_pedals_range_d = (Secondary_SET_PEDALS_RANGE*)malloc(sizeof(Secondary_SET_PEDALS_RANGE));
    deserialize_Secondary_SET_PEDALS_RANGE(buffer_secondary_set_pedals_range, sizeof(Secondary_SET_PEDALS_RANGE), secondary_set_pedals_range_d);
    printf("\tDeserialized\n\t%lld %lld\n", (long long int)secondary_set_pedals_range_d->sync_state, (long long int)secondary_set_pedals_range_d->pedal);
    
    assert(memcmp(&secondary_set_pedals_range_s, secondary_set_pedals_range_d, sizeof(Secondary_SET_PEDALS_RANGE)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_ACCELERATOR_PEDAL_VAL */
    printf("Secondary_ACCELERATOR_PEDAL_VAL:\n");
    uint8_t* buffer_secondary_accelerator_pedal_val = (uint8_t*)malloc(sizeof(Secondary_ACCELERATOR_PEDAL_VAL));
    
    Secondary_ACCELERATOR_PEDAL_VAL secondary_accelerator_pedal_val_s = { 43 };
    serialize_Secondary_ACCELERATOR_PEDAL_VAL((long long unsigned int)secondary_accelerator_pedal_val_s.level, buffer_secondary_accelerator_pedal_val, sizeof(Secondary_ACCELERATOR_PEDAL_VAL));
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)secondary_accelerator_pedal_val_s.level);
    
    Secondary_ACCELERATOR_PEDAL_VAL* secondary_accelerator_pedal_val_d = (Secondary_ACCELERATOR_PEDAL_VAL*)malloc(sizeof(Secondary_ACCELERATOR_PEDAL_VAL));
    deserialize_Secondary_ACCELERATOR_PEDAL_VAL(buffer_secondary_accelerator_pedal_val, sizeof(Secondary_ACCELERATOR_PEDAL_VAL), secondary_accelerator_pedal_val_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)secondary_accelerator_pedal_val_d->level);
    
    assert(memcmp(&secondary_accelerator_pedal_val_s, secondary_accelerator_pedal_val_d, sizeof(Secondary_ACCELERATOR_PEDAL_VAL)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_BRAKE_PEDAL_VAL */
    printf("Secondary_BRAKE_PEDAL_VAL:\n");
    uint8_t* buffer_secondary_brake_pedal_val = (uint8_t*)malloc(sizeof(Secondary_BRAKE_PEDAL_VAL));
    
    Secondary_BRAKE_PEDAL_VAL secondary_brake_pedal_val_s = { 141 };
    serialize_Secondary_BRAKE_PEDAL_VAL((long long unsigned int)secondary_brake_pedal_val_s.level, buffer_secondary_brake_pedal_val, sizeof(Secondary_BRAKE_PEDAL_VAL));
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)secondary_brake_pedal_val_s.level);
    
    Secondary_BRAKE_PEDAL_VAL* secondary_brake_pedal_val_d = (Secondary_BRAKE_PEDAL_VAL*)malloc(sizeof(Secondary_BRAKE_PEDAL_VAL));
    deserialize_Secondary_BRAKE_PEDAL_VAL(buffer_secondary_brake_pedal_val, sizeof(Secondary_BRAKE_PEDAL_VAL), secondary_brake_pedal_val_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)secondary_brake_pedal_val_d->level);
    
    assert(memcmp(&secondary_brake_pedal_val_s, secondary_brake_pedal_val_d, sizeof(Secondary_BRAKE_PEDAL_VAL)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IMU_ANGULAR_RATE */
    printf("Secondary_IMU_ANGULAR_RATE:\n");
    uint8_t* buffer_secondary_imu_angular_rate = (uint8_t*)malloc(sizeof(Secondary_IMU_ANGULAR_RATE));
    
    Secondary_IMU_ANGULAR_RATE secondary_imu_angular_rate_s = { 23686, 17014, 15365 };
    serialize_Secondary_IMU_ANGULAR_RATE((long long unsigned int)secondary_imu_angular_rate_s.ang_rate_x, (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_y, (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_z, buffer_secondary_imu_angular_rate, sizeof(Secondary_IMU_ANGULAR_RATE));
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_x, (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_y, (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_z);
    
    Secondary_IMU_ANGULAR_RATE* secondary_imu_angular_rate_d = (Secondary_IMU_ANGULAR_RATE*)malloc(sizeof(Secondary_IMU_ANGULAR_RATE));
    deserialize_Secondary_IMU_ANGULAR_RATE(buffer_secondary_imu_angular_rate, sizeof(Secondary_IMU_ANGULAR_RATE), secondary_imu_angular_rate_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_angular_rate_d->ang_rate_x, (long long unsigned int)secondary_imu_angular_rate_d->ang_rate_y, (long long unsigned int)secondary_imu_angular_rate_d->ang_rate_z);
    
    assert(memcmp(&secondary_imu_angular_rate_s, secondary_imu_angular_rate_d, sizeof(Secondary_IMU_ANGULAR_RATE)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IMU_ACCELERATION */
    printf("Secondary_IMU_ACCELERATION:\n");
    uint8_t* buffer_secondary_imu_acceleration = (uint8_t*)malloc(sizeof(Secondary_IMU_ACCELERATION));
    
    Secondary_IMU_ACCELERATION secondary_imu_acceleration_s = { 37730, 4654, 32339 };
    serialize_Secondary_IMU_ACCELERATION((long long unsigned int)secondary_imu_acceleration_s.accel_x, (long long unsigned int)secondary_imu_acceleration_s.accel_y, (long long unsigned int)secondary_imu_acceleration_s.accel_z, buffer_secondary_imu_acceleration, sizeof(Secondary_IMU_ACCELERATION));
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_acceleration_s.accel_x, (long long unsigned int)secondary_imu_acceleration_s.accel_y, (long long unsigned int)secondary_imu_acceleration_s.accel_z);
    
    Secondary_IMU_ACCELERATION* secondary_imu_acceleration_d = (Secondary_IMU_ACCELERATION*)malloc(sizeof(Secondary_IMU_ACCELERATION));
    deserialize_Secondary_IMU_ACCELERATION(buffer_secondary_imu_acceleration, sizeof(Secondary_IMU_ACCELERATION), secondary_imu_acceleration_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_acceleration_d->accel_x, (long long unsigned int)secondary_imu_acceleration_d->accel_y, (long long unsigned int)secondary_imu_acceleration_d->accel_z);
    
    assert(memcmp(&secondary_imu_acceleration_s, secondary_imu_acceleration_d, sizeof(Secondary_IMU_ACCELERATION)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FL_0 */
    printf("Secondary_IRTS_FL_0:\n");
    uint8_t* buffer_secondary_irts_fl_0 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FL_0));
    
    Secondary_IRTS_FL_0 secondary_irts_fl_0_s = { 58729, 45549, 37992, 20550 };
    serialize_Secondary_IRTS_FL_0((long long unsigned int)secondary_irts_fl_0_s.channel1, (long long unsigned int)secondary_irts_fl_0_s.channel2, (long long unsigned int)secondary_irts_fl_0_s.channel3, (long long unsigned int)secondary_irts_fl_0_s.channel4, buffer_secondary_irts_fl_0, sizeof(Secondary_IRTS_FL_0));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_0_s.channel1, (long long unsigned int)secondary_irts_fl_0_s.channel2, (long long unsigned int)secondary_irts_fl_0_s.channel3, (long long unsigned int)secondary_irts_fl_0_s.channel4);
    
    Secondary_IRTS_FL_0* secondary_irts_fl_0_d = (Secondary_IRTS_FL_0*)malloc(sizeof(Secondary_IRTS_FL_0));
    deserialize_Secondary_IRTS_FL_0(buffer_secondary_irts_fl_0, sizeof(Secondary_IRTS_FL_0), secondary_irts_fl_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_0_d->channel1, (long long unsigned int)secondary_irts_fl_0_d->channel2, (long long unsigned int)secondary_irts_fl_0_d->channel3, (long long unsigned int)secondary_irts_fl_0_d->channel4);
    
    assert(memcmp(&secondary_irts_fl_0_s, secondary_irts_fl_0_d, sizeof(Secondary_IRTS_FL_0)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FL_1 */
    printf("Secondary_IRTS_FL_1:\n");
    uint8_t* buffer_secondary_irts_fl_1 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FL_1));
    
    Secondary_IRTS_FL_1 secondary_irts_fl_1_s = { 61758, 36528, 64057, 59343 };
    serialize_Secondary_IRTS_FL_1((long long unsigned int)secondary_irts_fl_1_s.channel5, (long long unsigned int)secondary_irts_fl_1_s.channel6, (long long unsigned int)secondary_irts_fl_1_s.channel7, (long long unsigned int)secondary_irts_fl_1_s.channel8, buffer_secondary_irts_fl_1, sizeof(Secondary_IRTS_FL_1));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_1_s.channel5, (long long unsigned int)secondary_irts_fl_1_s.channel6, (long long unsigned int)secondary_irts_fl_1_s.channel7, (long long unsigned int)secondary_irts_fl_1_s.channel8);
    
    Secondary_IRTS_FL_1* secondary_irts_fl_1_d = (Secondary_IRTS_FL_1*)malloc(sizeof(Secondary_IRTS_FL_1));
    deserialize_Secondary_IRTS_FL_1(buffer_secondary_irts_fl_1, sizeof(Secondary_IRTS_FL_1), secondary_irts_fl_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_1_d->channel5, (long long unsigned int)secondary_irts_fl_1_d->channel6, (long long unsigned int)secondary_irts_fl_1_d->channel7, (long long unsigned int)secondary_irts_fl_1_d->channel8);
    
    assert(memcmp(&secondary_irts_fl_1_s, secondary_irts_fl_1_d, sizeof(Secondary_IRTS_FL_1)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FL_2 */
    printf("Secondary_IRTS_FL_2:\n");
    uint8_t* buffer_secondary_irts_fl_2 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FL_2));
    
    Secondary_IRTS_FL_2 secondary_irts_fl_2_s = { 54837, 23459, 5401, 38536 };
    serialize_Secondary_IRTS_FL_2((long long unsigned int)secondary_irts_fl_2_s.channel9, (long long unsigned int)secondary_irts_fl_2_s.channel10, (long long unsigned int)secondary_irts_fl_2_s.channel11, (long long unsigned int)secondary_irts_fl_2_s.channel12, buffer_secondary_irts_fl_2, sizeof(Secondary_IRTS_FL_2));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_2_s.channel9, (long long unsigned int)secondary_irts_fl_2_s.channel10, (long long unsigned int)secondary_irts_fl_2_s.channel11, (long long unsigned int)secondary_irts_fl_2_s.channel12);
    
    Secondary_IRTS_FL_2* secondary_irts_fl_2_d = (Secondary_IRTS_FL_2*)malloc(sizeof(Secondary_IRTS_FL_2));
    deserialize_Secondary_IRTS_FL_2(buffer_secondary_irts_fl_2, sizeof(Secondary_IRTS_FL_2), secondary_irts_fl_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_2_d->channel9, (long long unsigned int)secondary_irts_fl_2_d->channel10, (long long unsigned int)secondary_irts_fl_2_d->channel11, (long long unsigned int)secondary_irts_fl_2_d->channel12);
    
    assert(memcmp(&secondary_irts_fl_2_s, secondary_irts_fl_2_d, sizeof(Secondary_IRTS_FL_2)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FL_3 */
    printf("Secondary_IRTS_FL_3:\n");
    uint8_t* buffer_secondary_irts_fl_3 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FL_3));
    
    Secondary_IRTS_FL_3 secondary_irts_fl_3_s = { 23597, 14263, 56352, 27182 };
    serialize_Secondary_IRTS_FL_3((long long unsigned int)secondary_irts_fl_3_s.channel13, (long long unsigned int)secondary_irts_fl_3_s.channel14, (long long unsigned int)secondary_irts_fl_3_s.channel15, (long long unsigned int)secondary_irts_fl_3_s.channel16, buffer_secondary_irts_fl_3, sizeof(Secondary_IRTS_FL_3));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_3_s.channel13, (long long unsigned int)secondary_irts_fl_3_s.channel14, (long long unsigned int)secondary_irts_fl_3_s.channel15, (long long unsigned int)secondary_irts_fl_3_s.channel16);
    
    Secondary_IRTS_FL_3* secondary_irts_fl_3_d = (Secondary_IRTS_FL_3*)malloc(sizeof(Secondary_IRTS_FL_3));
    deserialize_Secondary_IRTS_FL_3(buffer_secondary_irts_fl_3, sizeof(Secondary_IRTS_FL_3), secondary_irts_fl_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_3_d->channel13, (long long unsigned int)secondary_irts_fl_3_d->channel14, (long long unsigned int)secondary_irts_fl_3_d->channel15, (long long unsigned int)secondary_irts_fl_3_d->channel16);
    
    assert(memcmp(&secondary_irts_fl_3_s, secondary_irts_fl_3_d, sizeof(Secondary_IRTS_FL_3)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FR_0 */
    printf("Secondary_IRTS_FR_0:\n");
    uint8_t* buffer_secondary_irts_fr_0 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FR_0));
    
    Secondary_IRTS_FR_0 secondary_irts_fr_0_s = { 12058, 13018, 19135, 58114 };
    serialize_Secondary_IRTS_FR_0((long long unsigned int)secondary_irts_fr_0_s.channel1, (long long unsigned int)secondary_irts_fr_0_s.channel2, (long long unsigned int)secondary_irts_fr_0_s.channel3, (long long unsigned int)secondary_irts_fr_0_s.channel4, buffer_secondary_irts_fr_0, sizeof(Secondary_IRTS_FR_0));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_0_s.channel1, (long long unsigned int)secondary_irts_fr_0_s.channel2, (long long unsigned int)secondary_irts_fr_0_s.channel3, (long long unsigned int)secondary_irts_fr_0_s.channel4);
    
    Secondary_IRTS_FR_0* secondary_irts_fr_0_d = (Secondary_IRTS_FR_0*)malloc(sizeof(Secondary_IRTS_FR_0));
    deserialize_Secondary_IRTS_FR_0(buffer_secondary_irts_fr_0, sizeof(Secondary_IRTS_FR_0), secondary_irts_fr_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_0_d->channel1, (long long unsigned int)secondary_irts_fr_0_d->channel2, (long long unsigned int)secondary_irts_fr_0_d->channel3, (long long unsigned int)secondary_irts_fr_0_d->channel4);
    
    assert(memcmp(&secondary_irts_fr_0_s, secondary_irts_fr_0_d, sizeof(Secondary_IRTS_FR_0)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FR_1 */
    printf("Secondary_IRTS_FR_1:\n");
    uint8_t* buffer_secondary_irts_fr_1 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FR_1));
    
    Secondary_IRTS_FR_1 secondary_irts_fr_1_s = { 61387, 43429, 15714, 54304 };
    serialize_Secondary_IRTS_FR_1((long long unsigned int)secondary_irts_fr_1_s.channel5, (long long unsigned int)secondary_irts_fr_1_s.channel6, (long long unsigned int)secondary_irts_fr_1_s.channel7, (long long unsigned int)secondary_irts_fr_1_s.channel8, buffer_secondary_irts_fr_1, sizeof(Secondary_IRTS_FR_1));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_1_s.channel5, (long long unsigned int)secondary_irts_fr_1_s.channel6, (long long unsigned int)secondary_irts_fr_1_s.channel7, (long long unsigned int)secondary_irts_fr_1_s.channel8);
    
    Secondary_IRTS_FR_1* secondary_irts_fr_1_d = (Secondary_IRTS_FR_1*)malloc(sizeof(Secondary_IRTS_FR_1));
    deserialize_Secondary_IRTS_FR_1(buffer_secondary_irts_fr_1, sizeof(Secondary_IRTS_FR_1), secondary_irts_fr_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_1_d->channel5, (long long unsigned int)secondary_irts_fr_1_d->channel6, (long long unsigned int)secondary_irts_fr_1_d->channel7, (long long unsigned int)secondary_irts_fr_1_d->channel8);
    
    assert(memcmp(&secondary_irts_fr_1_s, secondary_irts_fr_1_d, sizeof(Secondary_IRTS_FR_1)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FR_2 */
    printf("Secondary_IRTS_FR_2:\n");
    uint8_t* buffer_secondary_irts_fr_2 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FR_2));
    
    Secondary_IRTS_FR_2 secondary_irts_fr_2_s = { 4996, 36194, 23113, 58738 };
    serialize_Secondary_IRTS_FR_2((long long unsigned int)secondary_irts_fr_2_s.channel9, (long long unsigned int)secondary_irts_fr_2_s.channel10, (long long unsigned int)secondary_irts_fr_2_s.channel11, (long long unsigned int)secondary_irts_fr_2_s.channel12, buffer_secondary_irts_fr_2, sizeof(Secondary_IRTS_FR_2));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_2_s.channel9, (long long unsigned int)secondary_irts_fr_2_s.channel10, (long long unsigned int)secondary_irts_fr_2_s.channel11, (long long unsigned int)secondary_irts_fr_2_s.channel12);
    
    Secondary_IRTS_FR_2* secondary_irts_fr_2_d = (Secondary_IRTS_FR_2*)malloc(sizeof(Secondary_IRTS_FR_2));
    deserialize_Secondary_IRTS_FR_2(buffer_secondary_irts_fr_2, sizeof(Secondary_IRTS_FR_2), secondary_irts_fr_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_2_d->channel9, (long long unsigned int)secondary_irts_fr_2_d->channel10, (long long unsigned int)secondary_irts_fr_2_d->channel11, (long long unsigned int)secondary_irts_fr_2_d->channel12);
    
    assert(memcmp(&secondary_irts_fr_2_s, secondary_irts_fr_2_d, sizeof(Secondary_IRTS_FR_2)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FR_3 */
    printf("Secondary_IRTS_FR_3:\n");
    uint8_t* buffer_secondary_irts_fr_3 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FR_3));
    
    Secondary_IRTS_FR_3 secondary_irts_fr_3_s = { 5453, 36230, 54485, 23378 };
    serialize_Secondary_IRTS_FR_3((long long unsigned int)secondary_irts_fr_3_s.channel13, (long long unsigned int)secondary_irts_fr_3_s.channel14, (long long unsigned int)secondary_irts_fr_3_s.channel15, (long long unsigned int)secondary_irts_fr_3_s.channel16, buffer_secondary_irts_fr_3, sizeof(Secondary_IRTS_FR_3));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_3_s.channel13, (long long unsigned int)secondary_irts_fr_3_s.channel14, (long long unsigned int)secondary_irts_fr_3_s.channel15, (long long unsigned int)secondary_irts_fr_3_s.channel16);
    
    Secondary_IRTS_FR_3* secondary_irts_fr_3_d = (Secondary_IRTS_FR_3*)malloc(sizeof(Secondary_IRTS_FR_3));
    deserialize_Secondary_IRTS_FR_3(buffer_secondary_irts_fr_3, sizeof(Secondary_IRTS_FR_3), secondary_irts_fr_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_3_d->channel13, (long long unsigned int)secondary_irts_fr_3_d->channel14, (long long unsigned int)secondary_irts_fr_3_d->channel15, (long long unsigned int)secondary_irts_fr_3_d->channel16);
    
    assert(memcmp(&secondary_irts_fr_3_s, secondary_irts_fr_3_d, sizeof(Secondary_IRTS_FR_3)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RL_0 */
    printf("Secondary_IRTS_RL_0:\n");
    uint8_t* buffer_secondary_irts_rl_0 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RL_0));
    
    Secondary_IRTS_RL_0 secondary_irts_rl_0_s = { 35508, 19503, 4846, 10468 };
    serialize_Secondary_IRTS_RL_0((long long unsigned int)secondary_irts_rl_0_s.channel1, (long long unsigned int)secondary_irts_rl_0_s.channel2, (long long unsigned int)secondary_irts_rl_0_s.channel3, (long long unsigned int)secondary_irts_rl_0_s.channel4, buffer_secondary_irts_rl_0, sizeof(Secondary_IRTS_RL_0));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_0_s.channel1, (long long unsigned int)secondary_irts_rl_0_s.channel2, (long long unsigned int)secondary_irts_rl_0_s.channel3, (long long unsigned int)secondary_irts_rl_0_s.channel4);
    
    Secondary_IRTS_RL_0* secondary_irts_rl_0_d = (Secondary_IRTS_RL_0*)malloc(sizeof(Secondary_IRTS_RL_0));
    deserialize_Secondary_IRTS_RL_0(buffer_secondary_irts_rl_0, sizeof(Secondary_IRTS_RL_0), secondary_irts_rl_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_0_d->channel1, (long long unsigned int)secondary_irts_rl_0_d->channel2, (long long unsigned int)secondary_irts_rl_0_d->channel3, (long long unsigned int)secondary_irts_rl_0_d->channel4);
    
    assert(memcmp(&secondary_irts_rl_0_s, secondary_irts_rl_0_d, sizeof(Secondary_IRTS_RL_0)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RL_1 */
    printf("Secondary_IRTS_RL_1:\n");
    uint8_t* buffer_secondary_irts_rl_1 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RL_1));
    
    Secondary_IRTS_RL_1 secondary_irts_rl_1_s = { 18557, 47516, 40440, 40639 };
    serialize_Secondary_IRTS_RL_1((long long unsigned int)secondary_irts_rl_1_s.channel5, (long long unsigned int)secondary_irts_rl_1_s.channel6, (long long unsigned int)secondary_irts_rl_1_s.channel7, (long long unsigned int)secondary_irts_rl_1_s.channel8, buffer_secondary_irts_rl_1, sizeof(Secondary_IRTS_RL_1));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_1_s.channel5, (long long unsigned int)secondary_irts_rl_1_s.channel6, (long long unsigned int)secondary_irts_rl_1_s.channel7, (long long unsigned int)secondary_irts_rl_1_s.channel8);
    
    Secondary_IRTS_RL_1* secondary_irts_rl_1_d = (Secondary_IRTS_RL_1*)malloc(sizeof(Secondary_IRTS_RL_1));
    deserialize_Secondary_IRTS_RL_1(buffer_secondary_irts_rl_1, sizeof(Secondary_IRTS_RL_1), secondary_irts_rl_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_1_d->channel5, (long long unsigned int)secondary_irts_rl_1_d->channel6, (long long unsigned int)secondary_irts_rl_1_d->channel7, (long long unsigned int)secondary_irts_rl_1_d->channel8);
    
    assert(memcmp(&secondary_irts_rl_1_s, secondary_irts_rl_1_d, sizeof(Secondary_IRTS_RL_1)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RL_2 */
    printf("Secondary_IRTS_RL_2:\n");
    uint8_t* buffer_secondary_irts_rl_2 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RL_2));
    
    Secondary_IRTS_RL_2 secondary_irts_rl_2_s = { 33920, 46858, 34417, 9901 };
    serialize_Secondary_IRTS_RL_2((long long unsigned int)secondary_irts_rl_2_s.channel9, (long long unsigned int)secondary_irts_rl_2_s.channel10, (long long unsigned int)secondary_irts_rl_2_s.channel11, (long long unsigned int)secondary_irts_rl_2_s.channel12, buffer_secondary_irts_rl_2, sizeof(Secondary_IRTS_RL_2));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_2_s.channel9, (long long unsigned int)secondary_irts_rl_2_s.channel10, (long long unsigned int)secondary_irts_rl_2_s.channel11, (long long unsigned int)secondary_irts_rl_2_s.channel12);
    
    Secondary_IRTS_RL_2* secondary_irts_rl_2_d = (Secondary_IRTS_RL_2*)malloc(sizeof(Secondary_IRTS_RL_2));
    deserialize_Secondary_IRTS_RL_2(buffer_secondary_irts_rl_2, sizeof(Secondary_IRTS_RL_2), secondary_irts_rl_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_2_d->channel9, (long long unsigned int)secondary_irts_rl_2_d->channel10, (long long unsigned int)secondary_irts_rl_2_d->channel11, (long long unsigned int)secondary_irts_rl_2_d->channel12);
    
    assert(memcmp(&secondary_irts_rl_2_s, secondary_irts_rl_2_d, sizeof(Secondary_IRTS_RL_2)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RL_3 */
    printf("Secondary_IRTS_RL_3:\n");
    uint8_t* buffer_secondary_irts_rl_3 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RL_3));
    
    Secondary_IRTS_RL_3 secondary_irts_rl_3_s = { 46181, 60937, 30229, 38997 };
    serialize_Secondary_IRTS_RL_3((long long unsigned int)secondary_irts_rl_3_s.channel13, (long long unsigned int)secondary_irts_rl_3_s.channel14, (long long unsigned int)secondary_irts_rl_3_s.channel15, (long long unsigned int)secondary_irts_rl_3_s.channel16, buffer_secondary_irts_rl_3, sizeof(Secondary_IRTS_RL_3));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_3_s.channel13, (long long unsigned int)secondary_irts_rl_3_s.channel14, (long long unsigned int)secondary_irts_rl_3_s.channel15, (long long unsigned int)secondary_irts_rl_3_s.channel16);
    
    Secondary_IRTS_RL_3* secondary_irts_rl_3_d = (Secondary_IRTS_RL_3*)malloc(sizeof(Secondary_IRTS_RL_3));
    deserialize_Secondary_IRTS_RL_3(buffer_secondary_irts_rl_3, sizeof(Secondary_IRTS_RL_3), secondary_irts_rl_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_3_d->channel13, (long long unsigned int)secondary_irts_rl_3_d->channel14, (long long unsigned int)secondary_irts_rl_3_d->channel15, (long long unsigned int)secondary_irts_rl_3_d->channel16);
    
    assert(memcmp(&secondary_irts_rl_3_s, secondary_irts_rl_3_d, sizeof(Secondary_IRTS_RL_3)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RR_0 */
    printf("Secondary_IRTS_RR_0:\n");
    uint8_t* buffer_secondary_irts_rr_0 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RR_0));
    
    Secondary_IRTS_RR_0 secondary_irts_rr_0_s = { 15015, 49509, 3589, 57094 };
    serialize_Secondary_IRTS_RR_0((long long unsigned int)secondary_irts_rr_0_s.channel1, (long long unsigned int)secondary_irts_rr_0_s.channel2, (long long unsigned int)secondary_irts_rr_0_s.channel3, (long long unsigned int)secondary_irts_rr_0_s.channel4, buffer_secondary_irts_rr_0, sizeof(Secondary_IRTS_RR_0));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_0_s.channel1, (long long unsigned int)secondary_irts_rr_0_s.channel2, (long long unsigned int)secondary_irts_rr_0_s.channel3, (long long unsigned int)secondary_irts_rr_0_s.channel4);
    
    Secondary_IRTS_RR_0* secondary_irts_rr_0_d = (Secondary_IRTS_RR_0*)malloc(sizeof(Secondary_IRTS_RR_0));
    deserialize_Secondary_IRTS_RR_0(buffer_secondary_irts_rr_0, sizeof(Secondary_IRTS_RR_0), secondary_irts_rr_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_0_d->channel1, (long long unsigned int)secondary_irts_rr_0_d->channel2, (long long unsigned int)secondary_irts_rr_0_d->channel3, (long long unsigned int)secondary_irts_rr_0_d->channel4);
    
    assert(memcmp(&secondary_irts_rr_0_s, secondary_irts_rr_0_d, sizeof(Secondary_IRTS_RR_0)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RR_1 */
    printf("Secondary_IRTS_RR_1:\n");
    uint8_t* buffer_secondary_irts_rr_1 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RR_1));
    
    Secondary_IRTS_RR_1 secondary_irts_rr_1_s = { 56304, 2588, 23060, 32828 };
    serialize_Secondary_IRTS_RR_1((long long unsigned int)secondary_irts_rr_1_s.channel5, (long long unsigned int)secondary_irts_rr_1_s.channel6, (long long unsigned int)secondary_irts_rr_1_s.channel7, (long long unsigned int)secondary_irts_rr_1_s.channel8, buffer_secondary_irts_rr_1, sizeof(Secondary_IRTS_RR_1));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_1_s.channel5, (long long unsigned int)secondary_irts_rr_1_s.channel6, (long long unsigned int)secondary_irts_rr_1_s.channel7, (long long unsigned int)secondary_irts_rr_1_s.channel8);
    
    Secondary_IRTS_RR_1* secondary_irts_rr_1_d = (Secondary_IRTS_RR_1*)malloc(sizeof(Secondary_IRTS_RR_1));
    deserialize_Secondary_IRTS_RR_1(buffer_secondary_irts_rr_1, sizeof(Secondary_IRTS_RR_1), secondary_irts_rr_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_1_d->channel5, (long long unsigned int)secondary_irts_rr_1_d->channel6, (long long unsigned int)secondary_irts_rr_1_d->channel7, (long long unsigned int)secondary_irts_rr_1_d->channel8);
    
    assert(memcmp(&secondary_irts_rr_1_s, secondary_irts_rr_1_d, sizeof(Secondary_IRTS_RR_1)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RR_2 */
    printf("Secondary_IRTS_RR_2:\n");
    uint8_t* buffer_secondary_irts_rr_2 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RR_2));
    
    Secondary_IRTS_RR_2 secondary_irts_rr_2_s = { 63897, 14978, 20292, 12917 };
    serialize_Secondary_IRTS_RR_2((long long unsigned int)secondary_irts_rr_2_s.channel9, (long long unsigned int)secondary_irts_rr_2_s.channel10, (long long unsigned int)secondary_irts_rr_2_s.channel11, (long long unsigned int)secondary_irts_rr_2_s.channel12, buffer_secondary_irts_rr_2, sizeof(Secondary_IRTS_RR_2));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_2_s.channel9, (long long unsigned int)secondary_irts_rr_2_s.channel10, (long long unsigned int)secondary_irts_rr_2_s.channel11, (long long unsigned int)secondary_irts_rr_2_s.channel12);
    
    Secondary_IRTS_RR_2* secondary_irts_rr_2_d = (Secondary_IRTS_RR_2*)malloc(sizeof(Secondary_IRTS_RR_2));
    deserialize_Secondary_IRTS_RR_2(buffer_secondary_irts_rr_2, sizeof(Secondary_IRTS_RR_2), secondary_irts_rr_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_2_d->channel9, (long long unsigned int)secondary_irts_rr_2_d->channel10, (long long unsigned int)secondary_irts_rr_2_d->channel11, (long long unsigned int)secondary_irts_rr_2_d->channel12);
    
    assert(memcmp(&secondary_irts_rr_2_s, secondary_irts_rr_2_d, sizeof(Secondary_IRTS_RR_2)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RR_3 */
    printf("Secondary_IRTS_RR_3:\n");
    uint8_t* buffer_secondary_irts_rr_3 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RR_3));
    
    Secondary_IRTS_RR_3 secondary_irts_rr_3_s = { 27165, 21588, 43743, 28203 };
    serialize_Secondary_IRTS_RR_3((long long unsigned int)secondary_irts_rr_3_s.channel13, (long long unsigned int)secondary_irts_rr_3_s.channel14, (long long unsigned int)secondary_irts_rr_3_s.channel15, (long long unsigned int)secondary_irts_rr_3_s.channel16, buffer_secondary_irts_rr_3, sizeof(Secondary_IRTS_RR_3));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_3_s.channel13, (long long unsigned int)secondary_irts_rr_3_s.channel14, (long long unsigned int)secondary_irts_rr_3_s.channel15, (long long unsigned int)secondary_irts_rr_3_s.channel16);
    
    Secondary_IRTS_RR_3* secondary_irts_rr_3_d = (Secondary_IRTS_RR_3*)malloc(sizeof(Secondary_IRTS_RR_3));
    deserialize_Secondary_IRTS_RR_3(buffer_secondary_irts_rr_3, sizeof(Secondary_IRTS_RR_3), secondary_irts_rr_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_3_d->channel13, (long long unsigned int)secondary_irts_rr_3_d->channel14, (long long unsigned int)secondary_irts_rr_3_d->channel15, (long long unsigned int)secondary_irts_rr_3_d->channel16);
    
    assert(memcmp(&secondary_irts_rr_3_s, secondary_irts_rr_3_d, sizeof(Secondary_IRTS_RR_3)) == 0);
    puts("SUCCESS!\n");
        
}