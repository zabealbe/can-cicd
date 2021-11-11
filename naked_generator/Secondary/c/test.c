#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "Secondary.h"

int main() {

/* Secondary_IMU_ANGULAR_RATE */
    printf("Secondary_IMU_ANGULAR_RATE:\n");
    uint8_t* buffer_secondary_imu_angular_rate = (uint8_t*)malloc(sizeof(Secondary_IMU_ANGULAR_RATE));
    
    Secondary_IMU_ANGULAR_RATE secondary_imu_angular_rate_s = { 65027.0, 29783.0, 38715.0 };
    serialize_Secondary_IMU_ANGULAR_RATE(buffer_secondary_imu_angular_rate, secondary_imu_angular_rate_s.ang_rate_x, secondary_imu_angular_rate_s.ang_rate_y, secondary_imu_angular_rate_s.ang_rate_z);
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_x, (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_y, (long long unsigned int)secondary_imu_angular_rate_s.ang_rate_z);
    
    Secondary_IMU_ANGULAR_RATE* secondary_imu_angular_rate_d = (Secondary_IMU_ANGULAR_RATE*)malloc(sizeof(Secondary_IMU_ANGULAR_RATE));
    deserialize_Secondary_IMU_ANGULAR_RATE(buffer_secondary_imu_angular_rate, secondary_imu_angular_rate_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_angular_rate_d->ang_rate_x, (long long unsigned int)secondary_imu_angular_rate_d->ang_rate_y, (long long unsigned int)secondary_imu_angular_rate_d->ang_rate_z);
    
    assert(memcmp(&secondary_imu_angular_rate_s, secondary_imu_angular_rate_d, sizeof(Secondary_IMU_ANGULAR_RATE)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IMU_ACCELERATION */
    printf("Secondary_IMU_ACCELERATION:\n");
    uint8_t* buffer_secondary_imu_acceleration = (uint8_t*)malloc(sizeof(Secondary_IMU_ACCELERATION));
    
    Secondary_IMU_ACCELERATION secondary_imu_acceleration_s = { 54676.0, 17927.0, 2296.0 };
    serialize_Secondary_IMU_ACCELERATION(buffer_secondary_imu_acceleration, secondary_imu_acceleration_s.accel_x, secondary_imu_acceleration_s.accel_y, secondary_imu_acceleration_s.accel_z);
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_acceleration_s.accel_x, (long long unsigned int)secondary_imu_acceleration_s.accel_y, (long long unsigned int)secondary_imu_acceleration_s.accel_z);
    
    Secondary_IMU_ACCELERATION* secondary_imu_acceleration_d = (Secondary_IMU_ACCELERATION*)malloc(sizeof(Secondary_IMU_ACCELERATION));
    deserialize_Secondary_IMU_ACCELERATION(buffer_secondary_imu_acceleration, secondary_imu_acceleration_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)secondary_imu_acceleration_d->accel_x, (long long unsigned int)secondary_imu_acceleration_d->accel_y, (long long unsigned int)secondary_imu_acceleration_d->accel_z);
    
    assert(memcmp(&secondary_imu_acceleration_s, secondary_imu_acceleration_d, sizeof(Secondary_IMU_ACCELERATION)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FL_0 */
    printf("Secondary_IRTS_FL_0:\n");
    uint8_t* buffer_secondary_irts_fl_0 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FL_0));
    
    Secondary_IRTS_FL_0 secondary_irts_fl_0_s = { 21730.0, 7609.0, 43906.0, 49986.0 };
    serialize_Secondary_IRTS_FL_0(buffer_secondary_irts_fl_0, secondary_irts_fl_0_s.channel1, secondary_irts_fl_0_s.channel2, secondary_irts_fl_0_s.channel3, secondary_irts_fl_0_s.channel4);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_0_s.channel1, (long long unsigned int)secondary_irts_fl_0_s.channel2, (long long unsigned int)secondary_irts_fl_0_s.channel3, (long long unsigned int)secondary_irts_fl_0_s.channel4);
    
    Secondary_IRTS_FL_0* secondary_irts_fl_0_d = (Secondary_IRTS_FL_0*)malloc(sizeof(Secondary_IRTS_FL_0));
    deserialize_Secondary_IRTS_FL_0(buffer_secondary_irts_fl_0, secondary_irts_fl_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_0_d->channel1, (long long unsigned int)secondary_irts_fl_0_d->channel2, (long long unsigned int)secondary_irts_fl_0_d->channel3, (long long unsigned int)secondary_irts_fl_0_d->channel4);
    
    assert(memcmp(&secondary_irts_fl_0_s, secondary_irts_fl_0_d, sizeof(Secondary_IRTS_FL_0)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FL_1 */
    printf("Secondary_IRTS_FL_1:\n");
    uint8_t* buffer_secondary_irts_fl_1 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FL_1));
    
    Secondary_IRTS_FL_1 secondary_irts_fl_1_s = { 51888.0, 46131.0, 55257.0, 908.0 };
    serialize_Secondary_IRTS_FL_1(buffer_secondary_irts_fl_1, secondary_irts_fl_1_s.channel5, secondary_irts_fl_1_s.channel6, secondary_irts_fl_1_s.channel7, secondary_irts_fl_1_s.channel8);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_1_s.channel5, (long long unsigned int)secondary_irts_fl_1_s.channel6, (long long unsigned int)secondary_irts_fl_1_s.channel7, (long long unsigned int)secondary_irts_fl_1_s.channel8);
    
    Secondary_IRTS_FL_1* secondary_irts_fl_1_d = (Secondary_IRTS_FL_1*)malloc(sizeof(Secondary_IRTS_FL_1));
    deserialize_Secondary_IRTS_FL_1(buffer_secondary_irts_fl_1, secondary_irts_fl_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_1_d->channel5, (long long unsigned int)secondary_irts_fl_1_d->channel6, (long long unsigned int)secondary_irts_fl_1_d->channel7, (long long unsigned int)secondary_irts_fl_1_d->channel8);
    
    assert(memcmp(&secondary_irts_fl_1_s, secondary_irts_fl_1_d, sizeof(Secondary_IRTS_FL_1)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FL_2 */
    printf("Secondary_IRTS_FL_2:\n");
    uint8_t* buffer_secondary_irts_fl_2 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FL_2));
    
    Secondary_IRTS_FL_2 secondary_irts_fl_2_s = { 35842.0, 25053.0, 60329.0, 13158.0 };
    serialize_Secondary_IRTS_FL_2(buffer_secondary_irts_fl_2, secondary_irts_fl_2_s.channel9, secondary_irts_fl_2_s.channel10, secondary_irts_fl_2_s.channel11, secondary_irts_fl_2_s.channel12);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_2_s.channel9, (long long unsigned int)secondary_irts_fl_2_s.channel10, (long long unsigned int)secondary_irts_fl_2_s.channel11, (long long unsigned int)secondary_irts_fl_2_s.channel12);
    
    Secondary_IRTS_FL_2* secondary_irts_fl_2_d = (Secondary_IRTS_FL_2*)malloc(sizeof(Secondary_IRTS_FL_2));
    deserialize_Secondary_IRTS_FL_2(buffer_secondary_irts_fl_2, secondary_irts_fl_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_2_d->channel9, (long long unsigned int)secondary_irts_fl_2_d->channel10, (long long unsigned int)secondary_irts_fl_2_d->channel11, (long long unsigned int)secondary_irts_fl_2_d->channel12);
    
    assert(memcmp(&secondary_irts_fl_2_s, secondary_irts_fl_2_d, sizeof(Secondary_IRTS_FL_2)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FL_3 */
    printf("Secondary_IRTS_FL_3:\n");
    uint8_t* buffer_secondary_irts_fl_3 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FL_3));
    
    Secondary_IRTS_FL_3 secondary_irts_fl_3_s = { 11397.0, 54440.0, 52791.0, 27110.0 };
    serialize_Secondary_IRTS_FL_3(buffer_secondary_irts_fl_3, secondary_irts_fl_3_s.channel13, secondary_irts_fl_3_s.channel14, secondary_irts_fl_3_s.channel15, secondary_irts_fl_3_s.channel16);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_3_s.channel13, (long long unsigned int)secondary_irts_fl_3_s.channel14, (long long unsigned int)secondary_irts_fl_3_s.channel15, (long long unsigned int)secondary_irts_fl_3_s.channel16);
    
    Secondary_IRTS_FL_3* secondary_irts_fl_3_d = (Secondary_IRTS_FL_3*)malloc(sizeof(Secondary_IRTS_FL_3));
    deserialize_Secondary_IRTS_FL_3(buffer_secondary_irts_fl_3, secondary_irts_fl_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fl_3_d->channel13, (long long unsigned int)secondary_irts_fl_3_d->channel14, (long long unsigned int)secondary_irts_fl_3_d->channel15, (long long unsigned int)secondary_irts_fl_3_d->channel16);
    
    assert(memcmp(&secondary_irts_fl_3_s, secondary_irts_fl_3_d, sizeof(Secondary_IRTS_FL_3)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FR_0 */
    printf("Secondary_IRTS_FR_0:\n");
    uint8_t* buffer_secondary_irts_fr_0 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FR_0));
    
    Secondary_IRTS_FR_0 secondary_irts_fr_0_s = { 46067.0, 32474.0, 19164.0, 27432.0 };
    serialize_Secondary_IRTS_FR_0(buffer_secondary_irts_fr_0, secondary_irts_fr_0_s.channel1, secondary_irts_fr_0_s.channel2, secondary_irts_fr_0_s.channel3, secondary_irts_fr_0_s.channel4);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_0_s.channel1, (long long unsigned int)secondary_irts_fr_0_s.channel2, (long long unsigned int)secondary_irts_fr_0_s.channel3, (long long unsigned int)secondary_irts_fr_0_s.channel4);
    
    Secondary_IRTS_FR_0* secondary_irts_fr_0_d = (Secondary_IRTS_FR_0*)malloc(sizeof(Secondary_IRTS_FR_0));
    deserialize_Secondary_IRTS_FR_0(buffer_secondary_irts_fr_0, secondary_irts_fr_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_0_d->channel1, (long long unsigned int)secondary_irts_fr_0_d->channel2, (long long unsigned int)secondary_irts_fr_0_d->channel3, (long long unsigned int)secondary_irts_fr_0_d->channel4);
    
    assert(memcmp(&secondary_irts_fr_0_s, secondary_irts_fr_0_d, sizeof(Secondary_IRTS_FR_0)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FR_1 */
    printf("Secondary_IRTS_FR_1:\n");
    uint8_t* buffer_secondary_irts_fr_1 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FR_1));
    
    Secondary_IRTS_FR_1 secondary_irts_fr_1_s = { 55646.0, 3533.0, 32660.0, 1775.0 };
    serialize_Secondary_IRTS_FR_1(buffer_secondary_irts_fr_1, secondary_irts_fr_1_s.channel5, secondary_irts_fr_1_s.channel6, secondary_irts_fr_1_s.channel7, secondary_irts_fr_1_s.channel8);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_1_s.channel5, (long long unsigned int)secondary_irts_fr_1_s.channel6, (long long unsigned int)secondary_irts_fr_1_s.channel7, (long long unsigned int)secondary_irts_fr_1_s.channel8);
    
    Secondary_IRTS_FR_1* secondary_irts_fr_1_d = (Secondary_IRTS_FR_1*)malloc(sizeof(Secondary_IRTS_FR_1));
    deserialize_Secondary_IRTS_FR_1(buffer_secondary_irts_fr_1, secondary_irts_fr_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_1_d->channel5, (long long unsigned int)secondary_irts_fr_1_d->channel6, (long long unsigned int)secondary_irts_fr_1_d->channel7, (long long unsigned int)secondary_irts_fr_1_d->channel8);
    
    assert(memcmp(&secondary_irts_fr_1_s, secondary_irts_fr_1_d, sizeof(Secondary_IRTS_FR_1)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FR_2 */
    printf("Secondary_IRTS_FR_2:\n");
    uint8_t* buffer_secondary_irts_fr_2 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FR_2));
    
    Secondary_IRTS_FR_2 secondary_irts_fr_2_s = { 4006.0, 36313.0, 37998.0, 48856.0 };
    serialize_Secondary_IRTS_FR_2(buffer_secondary_irts_fr_2, secondary_irts_fr_2_s.channel9, secondary_irts_fr_2_s.channel10, secondary_irts_fr_2_s.channel11, secondary_irts_fr_2_s.channel12);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_2_s.channel9, (long long unsigned int)secondary_irts_fr_2_s.channel10, (long long unsigned int)secondary_irts_fr_2_s.channel11, (long long unsigned int)secondary_irts_fr_2_s.channel12);
    
    Secondary_IRTS_FR_2* secondary_irts_fr_2_d = (Secondary_IRTS_FR_2*)malloc(sizeof(Secondary_IRTS_FR_2));
    deserialize_Secondary_IRTS_FR_2(buffer_secondary_irts_fr_2, secondary_irts_fr_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_2_d->channel9, (long long unsigned int)secondary_irts_fr_2_d->channel10, (long long unsigned int)secondary_irts_fr_2_d->channel11, (long long unsigned int)secondary_irts_fr_2_d->channel12);
    
    assert(memcmp(&secondary_irts_fr_2_s, secondary_irts_fr_2_d, sizeof(Secondary_IRTS_FR_2)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_FR_3 */
    printf("Secondary_IRTS_FR_3:\n");
    uint8_t* buffer_secondary_irts_fr_3 = (uint8_t*)malloc(sizeof(Secondary_IRTS_FR_3));
    
    Secondary_IRTS_FR_3 secondary_irts_fr_3_s = { 41816.0, 38297.0, 2640.0, 16963.0 };
    serialize_Secondary_IRTS_FR_3(buffer_secondary_irts_fr_3, secondary_irts_fr_3_s.channel13, secondary_irts_fr_3_s.channel14, secondary_irts_fr_3_s.channel15, secondary_irts_fr_3_s.channel16);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_3_s.channel13, (long long unsigned int)secondary_irts_fr_3_s.channel14, (long long unsigned int)secondary_irts_fr_3_s.channel15, (long long unsigned int)secondary_irts_fr_3_s.channel16);
    
    Secondary_IRTS_FR_3* secondary_irts_fr_3_d = (Secondary_IRTS_FR_3*)malloc(sizeof(Secondary_IRTS_FR_3));
    deserialize_Secondary_IRTS_FR_3(buffer_secondary_irts_fr_3, secondary_irts_fr_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_fr_3_d->channel13, (long long unsigned int)secondary_irts_fr_3_d->channel14, (long long unsigned int)secondary_irts_fr_3_d->channel15, (long long unsigned int)secondary_irts_fr_3_d->channel16);
    
    assert(memcmp(&secondary_irts_fr_3_s, secondary_irts_fr_3_d, sizeof(Secondary_IRTS_FR_3)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RL_0 */
    printf("Secondary_IRTS_RL_0:\n");
    uint8_t* buffer_secondary_irts_rl_0 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RL_0));
    
    Secondary_IRTS_RL_0 secondary_irts_rl_0_s = { 32184.0, 12486.0, 41796.0, 52720.0 };
    serialize_Secondary_IRTS_RL_0(buffer_secondary_irts_rl_0, secondary_irts_rl_0_s.channel1, secondary_irts_rl_0_s.channel2, secondary_irts_rl_0_s.channel3, secondary_irts_rl_0_s.channel4);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_0_s.channel1, (long long unsigned int)secondary_irts_rl_0_s.channel2, (long long unsigned int)secondary_irts_rl_0_s.channel3, (long long unsigned int)secondary_irts_rl_0_s.channel4);
    
    Secondary_IRTS_RL_0* secondary_irts_rl_0_d = (Secondary_IRTS_RL_0*)malloc(sizeof(Secondary_IRTS_RL_0));
    deserialize_Secondary_IRTS_RL_0(buffer_secondary_irts_rl_0, secondary_irts_rl_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_0_d->channel1, (long long unsigned int)secondary_irts_rl_0_d->channel2, (long long unsigned int)secondary_irts_rl_0_d->channel3, (long long unsigned int)secondary_irts_rl_0_d->channel4);
    
    assert(memcmp(&secondary_irts_rl_0_s, secondary_irts_rl_0_d, sizeof(Secondary_IRTS_RL_0)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RL_1 */
    printf("Secondary_IRTS_RL_1:\n");
    uint8_t* buffer_secondary_irts_rl_1 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RL_1));
    
    Secondary_IRTS_RL_1 secondary_irts_rl_1_s = { 24447.0, 22691.0, 19988.0, 21113.0 };
    serialize_Secondary_IRTS_RL_1(buffer_secondary_irts_rl_1, secondary_irts_rl_1_s.channel5, secondary_irts_rl_1_s.channel6, secondary_irts_rl_1_s.channel7, secondary_irts_rl_1_s.channel8);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_1_s.channel5, (long long unsigned int)secondary_irts_rl_1_s.channel6, (long long unsigned int)secondary_irts_rl_1_s.channel7, (long long unsigned int)secondary_irts_rl_1_s.channel8);
    
    Secondary_IRTS_RL_1* secondary_irts_rl_1_d = (Secondary_IRTS_RL_1*)malloc(sizeof(Secondary_IRTS_RL_1));
    deserialize_Secondary_IRTS_RL_1(buffer_secondary_irts_rl_1, secondary_irts_rl_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_1_d->channel5, (long long unsigned int)secondary_irts_rl_1_d->channel6, (long long unsigned int)secondary_irts_rl_1_d->channel7, (long long unsigned int)secondary_irts_rl_1_d->channel8);
    
    assert(memcmp(&secondary_irts_rl_1_s, secondary_irts_rl_1_d, sizeof(Secondary_IRTS_RL_1)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RL_2 */
    printf("Secondary_IRTS_RL_2:\n");
    uint8_t* buffer_secondary_irts_rl_2 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RL_2));
    
    Secondary_IRTS_RL_2 secondary_irts_rl_2_s = { 8672.0, 16605.0, 25463.0, 29818.0 };
    serialize_Secondary_IRTS_RL_2(buffer_secondary_irts_rl_2, secondary_irts_rl_2_s.channel9, secondary_irts_rl_2_s.channel10, secondary_irts_rl_2_s.channel11, secondary_irts_rl_2_s.channel12);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_2_s.channel9, (long long unsigned int)secondary_irts_rl_2_s.channel10, (long long unsigned int)secondary_irts_rl_2_s.channel11, (long long unsigned int)secondary_irts_rl_2_s.channel12);
    
    Secondary_IRTS_RL_2* secondary_irts_rl_2_d = (Secondary_IRTS_RL_2*)malloc(sizeof(Secondary_IRTS_RL_2));
    deserialize_Secondary_IRTS_RL_2(buffer_secondary_irts_rl_2, secondary_irts_rl_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_2_d->channel9, (long long unsigned int)secondary_irts_rl_2_d->channel10, (long long unsigned int)secondary_irts_rl_2_d->channel11, (long long unsigned int)secondary_irts_rl_2_d->channel12);
    
    assert(memcmp(&secondary_irts_rl_2_s, secondary_irts_rl_2_d, sizeof(Secondary_IRTS_RL_2)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RL_3 */
    printf("Secondary_IRTS_RL_3:\n");
    uint8_t* buffer_secondary_irts_rl_3 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RL_3));
    
    Secondary_IRTS_RL_3 secondary_irts_rl_3_s = { 59104.0, 6308.0, 10973.0, 42718.0 };
    serialize_Secondary_IRTS_RL_3(buffer_secondary_irts_rl_3, secondary_irts_rl_3_s.channel13, secondary_irts_rl_3_s.channel14, secondary_irts_rl_3_s.channel15, secondary_irts_rl_3_s.channel16);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_3_s.channel13, (long long unsigned int)secondary_irts_rl_3_s.channel14, (long long unsigned int)secondary_irts_rl_3_s.channel15, (long long unsigned int)secondary_irts_rl_3_s.channel16);
    
    Secondary_IRTS_RL_3* secondary_irts_rl_3_d = (Secondary_IRTS_RL_3*)malloc(sizeof(Secondary_IRTS_RL_3));
    deserialize_Secondary_IRTS_RL_3(buffer_secondary_irts_rl_3, secondary_irts_rl_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rl_3_d->channel13, (long long unsigned int)secondary_irts_rl_3_d->channel14, (long long unsigned int)secondary_irts_rl_3_d->channel15, (long long unsigned int)secondary_irts_rl_3_d->channel16);
    
    assert(memcmp(&secondary_irts_rl_3_s, secondary_irts_rl_3_d, sizeof(Secondary_IRTS_RL_3)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RR_0 */
    printf("Secondary_IRTS_RR_0:\n");
    uint8_t* buffer_secondary_irts_rr_0 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RR_0));
    
    Secondary_IRTS_RR_0 secondary_irts_rr_0_s = { 8586.0, 56204.0, 30300.0, 47174.0 };
    serialize_Secondary_IRTS_RR_0(buffer_secondary_irts_rr_0, secondary_irts_rr_0_s.channel1, secondary_irts_rr_0_s.channel2, secondary_irts_rr_0_s.channel3, secondary_irts_rr_0_s.channel4);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_0_s.channel1, (long long unsigned int)secondary_irts_rr_0_s.channel2, (long long unsigned int)secondary_irts_rr_0_s.channel3, (long long unsigned int)secondary_irts_rr_0_s.channel4);
    
    Secondary_IRTS_RR_0* secondary_irts_rr_0_d = (Secondary_IRTS_RR_0*)malloc(sizeof(Secondary_IRTS_RR_0));
    deserialize_Secondary_IRTS_RR_0(buffer_secondary_irts_rr_0, secondary_irts_rr_0_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_0_d->channel1, (long long unsigned int)secondary_irts_rr_0_d->channel2, (long long unsigned int)secondary_irts_rr_0_d->channel3, (long long unsigned int)secondary_irts_rr_0_d->channel4);
    
    assert(memcmp(&secondary_irts_rr_0_s, secondary_irts_rr_0_d, sizeof(Secondary_IRTS_RR_0)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RR_1 */
    printf("Secondary_IRTS_RR_1:\n");
    uint8_t* buffer_secondary_irts_rr_1 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RR_1));
    
    Secondary_IRTS_RR_1 secondary_irts_rr_1_s = { 42851.0, 861.0, 22272.0, 2679.0 };
    serialize_Secondary_IRTS_RR_1(buffer_secondary_irts_rr_1, secondary_irts_rr_1_s.channel5, secondary_irts_rr_1_s.channel6, secondary_irts_rr_1_s.channel7, secondary_irts_rr_1_s.channel8);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_1_s.channel5, (long long unsigned int)secondary_irts_rr_1_s.channel6, (long long unsigned int)secondary_irts_rr_1_s.channel7, (long long unsigned int)secondary_irts_rr_1_s.channel8);
    
    Secondary_IRTS_RR_1* secondary_irts_rr_1_d = (Secondary_IRTS_RR_1*)malloc(sizeof(Secondary_IRTS_RR_1));
    deserialize_Secondary_IRTS_RR_1(buffer_secondary_irts_rr_1, secondary_irts_rr_1_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_1_d->channel5, (long long unsigned int)secondary_irts_rr_1_d->channel6, (long long unsigned int)secondary_irts_rr_1_d->channel7, (long long unsigned int)secondary_irts_rr_1_d->channel8);
    
    assert(memcmp(&secondary_irts_rr_1_s, secondary_irts_rr_1_d, sizeof(Secondary_IRTS_RR_1)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RR_2 */
    printf("Secondary_IRTS_RR_2:\n");
    uint8_t* buffer_secondary_irts_rr_2 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RR_2));
    
    Secondary_IRTS_RR_2 secondary_irts_rr_2_s = { 31961.0, 8804.0, 44183.0, 9381.0 };
    serialize_Secondary_IRTS_RR_2(buffer_secondary_irts_rr_2, secondary_irts_rr_2_s.channel9, secondary_irts_rr_2_s.channel10, secondary_irts_rr_2_s.channel11, secondary_irts_rr_2_s.channel12);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_2_s.channel9, (long long unsigned int)secondary_irts_rr_2_s.channel10, (long long unsigned int)secondary_irts_rr_2_s.channel11, (long long unsigned int)secondary_irts_rr_2_s.channel12);
    
    Secondary_IRTS_RR_2* secondary_irts_rr_2_d = (Secondary_IRTS_RR_2*)malloc(sizeof(Secondary_IRTS_RR_2));
    deserialize_Secondary_IRTS_RR_2(buffer_secondary_irts_rr_2, secondary_irts_rr_2_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_2_d->channel9, (long long unsigned int)secondary_irts_rr_2_d->channel10, (long long unsigned int)secondary_irts_rr_2_d->channel11, (long long unsigned int)secondary_irts_rr_2_d->channel12);
    
    assert(memcmp(&secondary_irts_rr_2_s, secondary_irts_rr_2_d, sizeof(Secondary_IRTS_RR_2)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IRTS_RR_3 */
    printf("Secondary_IRTS_RR_3:\n");
    uint8_t* buffer_secondary_irts_rr_3 = (uint8_t*)malloc(sizeof(Secondary_IRTS_RR_3));
    
    Secondary_IRTS_RR_3 secondary_irts_rr_3_s = { 44311.0, 16295.0, 1253.0, 5488.0 };
    serialize_Secondary_IRTS_RR_3(buffer_secondary_irts_rr_3, secondary_irts_rr_3_s.channel13, secondary_irts_rr_3_s.channel14, secondary_irts_rr_3_s.channel15, secondary_irts_rr_3_s.channel16);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_3_s.channel13, (long long unsigned int)secondary_irts_rr_3_s.channel14, (long long unsigned int)secondary_irts_rr_3_s.channel15, (long long unsigned int)secondary_irts_rr_3_s.channel16);
    
    Secondary_IRTS_RR_3* secondary_irts_rr_3_d = (Secondary_IRTS_RR_3*)malloc(sizeof(Secondary_IRTS_RR_3));
    deserialize_Secondary_IRTS_RR_3(buffer_secondary_irts_rr_3, secondary_irts_rr_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_3_d->channel13, (long long unsigned int)secondary_irts_rr_3_d->channel14, (long long unsigned int)secondary_irts_rr_3_d->channel15, (long long unsigned int)secondary_irts_rr_3_d->channel16);
    
    assert(memcmp(&secondary_irts_rr_3_s, secondary_irts_rr_3_d, sizeof(Secondary_IRTS_RR_3)) == 0);
    puts("SUCCESS!\n");
        
}