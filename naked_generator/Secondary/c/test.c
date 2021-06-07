#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "Secondary.h"

int main() {

/* Secondary_SET_PEDALS_RANGE */
    printf("Secondary_SET_PEDALS_RANGE:\n");
    uint8_t* buffer_secondary_set_pedals_range = (uint8_t*)malloc(sizeof(Secondary_SET_PEDALS_RANGE));
    
    Secondary_SET_PEDALS_RANGE secondary_set_pedals_range_s = { -39, -30 };
    serialize_Secondary_SET_PEDALS_RANGE(buffer_secondary_set_pedals_range, secondary_set_pedals_range_s.sync_state, secondary_set_pedals_range_s.pedal);
    printf("\tSerialized\n\t%lld %lld\n", (long long int)secondary_set_pedals_range_s.sync_state, (long long int)secondary_set_pedals_range_s.pedal);
    
    Secondary_SET_PEDALS_RANGE* secondary_set_pedals_range_d = (Secondary_SET_PEDALS_RANGE*)malloc(sizeof(Secondary_SET_PEDALS_RANGE));
    deserialize_Secondary_SET_PEDALS_RANGE(buffer_secondary_set_pedals_range, secondary_set_pedals_range_d);
    printf("\tDeserialized\n\t%lld %lld\n", (long long int)secondary_set_pedals_range_d->sync_state, (long long int)secondary_set_pedals_range_d->pedal);
    
    assert(memcmp(&secondary_set_pedals_range_s, secondary_set_pedals_range_d, sizeof(Secondary_SET_PEDALS_RANGE)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_PEDALS_ADC_RANGES */
    printf("Secondary_PEDALS_ADC_RANGES:\n");
    uint8_t* buffer_secondary_pedals_adc_ranges = (uint8_t*)malloc(sizeof(Secondary_PEDALS_ADC_RANGES));
    
    Secondary_PEDALS_ADC_RANGES secondary_pedals_adc_ranges_s = { 21052, 24469, 31593, 19800 };
    serialize_Secondary_PEDALS_ADC_RANGES(buffer_secondary_pedals_adc_ranges, secondary_pedals_adc_ranges_s.brake_raw_adc_min, secondary_pedals_adc_ranges_s.brake_raw_adc_max, secondary_pedals_adc_ranges_s.accelerator_raw_adc_min, secondary_pedals_adc_ranges_s.accelerator_raw_adc_max);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_pedals_adc_ranges_s.brake_raw_adc_min, (long long unsigned int)secondary_pedals_adc_ranges_s.brake_raw_adc_max, (long long unsigned int)secondary_pedals_adc_ranges_s.accelerator_raw_adc_min, (long long unsigned int)secondary_pedals_adc_ranges_s.accelerator_raw_adc_max);
    
    Secondary_PEDALS_ADC_RANGES* secondary_pedals_adc_ranges_d = (Secondary_PEDALS_ADC_RANGES*)malloc(sizeof(Secondary_PEDALS_ADC_RANGES));
    deserialize_Secondary_PEDALS_ADC_RANGES(buffer_secondary_pedals_adc_ranges, secondary_pedals_adc_ranges_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_pedals_adc_ranges_d->brake_raw_adc_min, (long long unsigned int)secondary_pedals_adc_ranges_d->brake_raw_adc_max, (long long unsigned int)secondary_pedals_adc_ranges_d->accelerator_raw_adc_min, (long long unsigned int)secondary_pedals_adc_ranges_d->accelerator_raw_adc_max);
    
    assert(memcmp(&secondary_pedals_adc_ranges_s, secondary_pedals_adc_ranges_d, sizeof(Secondary_PEDALS_ADC_RANGES)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_ACCELERATOR_PEDAL_VAL */
    printf("Secondary_ACCELERATOR_PEDAL_VAL:\n");
    uint8_t* buffer_secondary_accelerator_pedal_val = (uint8_t*)malloc(sizeof(Secondary_ACCELERATOR_PEDAL_VAL));
    
    Secondary_ACCELERATOR_PEDAL_VAL secondary_accelerator_pedal_val_s = { 27 };
    serialize_Secondary_ACCELERATOR_PEDAL_VAL(buffer_secondary_accelerator_pedal_val, secondary_accelerator_pedal_val_s.level);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)secondary_accelerator_pedal_val_s.level);
    
    Secondary_ACCELERATOR_PEDAL_VAL* secondary_accelerator_pedal_val_d = (Secondary_ACCELERATOR_PEDAL_VAL*)malloc(sizeof(Secondary_ACCELERATOR_PEDAL_VAL));
    deserialize_Secondary_ACCELERATOR_PEDAL_VAL(buffer_secondary_accelerator_pedal_val, secondary_accelerator_pedal_val_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)secondary_accelerator_pedal_val_d->level);
    
    assert(memcmp(&secondary_accelerator_pedal_val_s, secondary_accelerator_pedal_val_d, sizeof(Secondary_ACCELERATOR_PEDAL_VAL)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_BRAKE_PEDAL_VAL */
    printf("Secondary_BRAKE_PEDAL_VAL:\n");
    uint8_t* buffer_secondary_brake_pedal_val = (uint8_t*)malloc(sizeof(Secondary_BRAKE_PEDAL_VAL));
    
    Secondary_BRAKE_PEDAL_VAL secondary_brake_pedal_val_s = { 79 };
    serialize_Secondary_BRAKE_PEDAL_VAL(buffer_secondary_brake_pedal_val, secondary_brake_pedal_val_s.level);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)secondary_brake_pedal_val_s.level);
    
    Secondary_BRAKE_PEDAL_VAL* secondary_brake_pedal_val_d = (Secondary_BRAKE_PEDAL_VAL*)malloc(sizeof(Secondary_BRAKE_PEDAL_VAL));
    deserialize_Secondary_BRAKE_PEDAL_VAL(buffer_secondary_brake_pedal_val, secondary_brake_pedal_val_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)secondary_brake_pedal_val_d->level);
    
    assert(memcmp(&secondary_brake_pedal_val_s, secondary_brake_pedal_val_d, sizeof(Secondary_BRAKE_PEDAL_VAL)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_PCU_STATUS */
    printf("Secondary_PCU_STATUS:\n");
    uint8_t* buffer_secondary_pcu_status = (uint8_t*)malloc(sizeof(Secondary_PCU_STATUS));
    
    Secondary_PCU_STATUS secondary_pcu_status_s = { {96}, {30} };
    serialize_Secondary_PCU_STATUS(buffer_secondary_pcu_status, secondary_pcu_status_s.warnings, secondary_pcu_status_s.errors);
    printf("\tSerialized\n\t%hhx %hhx\n", (char)secondary_pcu_status_s.warnings[0], (char)secondary_pcu_status_s.errors[0]);
    
    Secondary_PCU_STATUS* secondary_pcu_status_d = (Secondary_PCU_STATUS*)malloc(sizeof(Secondary_PCU_STATUS));
    deserialize_Secondary_PCU_STATUS(buffer_secondary_pcu_status, secondary_pcu_status_d);
    printf("\tDeserialized\n\t%hhx %hhx\n", (char)secondary_pcu_status_d->warnings[0], (char)secondary_pcu_status_d->errors[0]);
    
    assert(memcmp(&secondary_pcu_status_s, secondary_pcu_status_d, sizeof(Secondary_PCU_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Secondary_IMU_ANGULAR_RATE */
    printf("Secondary_IMU_ANGULAR_RATE:\n");
    uint8_t* buffer_secondary_imu_angular_rate = (uint8_t*)malloc(sizeof(Secondary_IMU_ANGULAR_RATE));
    
    Secondary_IMU_ANGULAR_RATE secondary_imu_angular_rate_s = { 6636, 22712, 38438 };
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
    
    Secondary_IMU_ACCELERATION secondary_imu_acceleration_s = { 32551, 15636, 22154 };
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
    
    Secondary_IRTS_FL_0 secondary_irts_fl_0_s = { 49210, 23658, 10541, 7954 };
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
    
    Secondary_IRTS_FL_1 secondary_irts_fl_1_s = { 19115, 55311, 24313, 9476 };
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
    
    Secondary_IRTS_FL_2 secondary_irts_fl_2_s = { 23047, 46070, 52321, 30699 };
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
    
    Secondary_IRTS_FL_3 secondary_irts_fl_3_s = { 50938, 53894, 21333, 8376 };
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
    
    Secondary_IRTS_FR_0 secondary_irts_fr_0_s = { 44851, 19008, 20318, 50767 };
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
    
    Secondary_IRTS_FR_1 secondary_irts_fr_1_s = { 12100, 16325, 65342, 51832 };
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
    
    Secondary_IRTS_FR_2 secondary_irts_fr_2_s = { 44303, 5093, 20493, 10103 };
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
    
    Secondary_IRTS_FR_3 secondary_irts_fr_3_s = { 55078, 47333, 27399, 54287 };
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
    
    Secondary_IRTS_RL_0 secondary_irts_rl_0_s = { 39606, 63996, 59218, 54836 };
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
    
    Secondary_IRTS_RL_1 secondary_irts_rl_1_s = { 33999, 42876, 62362, 49314 };
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
    
    Secondary_IRTS_RL_2 secondary_irts_rl_2_s = { 33145, 47635, 12762, 23031 };
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
    
    Secondary_IRTS_RL_3 secondary_irts_rl_3_s = { 8001, 27448, 52153, 14185 };
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
    
    Secondary_IRTS_RR_0 secondary_irts_rr_0_s = { 27183, 36374, 53033, 36332 };
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
    
    Secondary_IRTS_RR_1 secondary_irts_rr_1_s = { 59314, 27395, 51816, 58670 };
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
    
    Secondary_IRTS_RR_2 secondary_irts_rr_2_s = { 61743, 32744, 42910, 18479 };
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
    
    Secondary_IRTS_RR_3 secondary_irts_rr_3_s = { 4233, 18952, 33595, 60739 };
    serialize_Secondary_IRTS_RR_3(buffer_secondary_irts_rr_3, secondary_irts_rr_3_s.channel13, secondary_irts_rr_3_s.channel14, secondary_irts_rr_3_s.channel15, secondary_irts_rr_3_s.channel16);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_3_s.channel13, (long long unsigned int)secondary_irts_rr_3_s.channel14, (long long unsigned int)secondary_irts_rr_3_s.channel15, (long long unsigned int)secondary_irts_rr_3_s.channel16);
    
    Secondary_IRTS_RR_3* secondary_irts_rr_3_d = (Secondary_IRTS_RR_3*)malloc(sizeof(Secondary_IRTS_RR_3));
    deserialize_Secondary_IRTS_RR_3(buffer_secondary_irts_rr_3, secondary_irts_rr_3_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)secondary_irts_rr_3_d->channel13, (long long unsigned int)secondary_irts_rr_3_d->channel14, (long long unsigned int)secondary_irts_rr_3_d->channel15, (long long unsigned int)secondary_irts_rr_3_d->channel16);
    
    assert(memcmp(&secondary_irts_rr_3_s, secondary_irts_rr_3_d, sizeof(Secondary_IRTS_RR_3)) == 0);
    puts("SUCCESS!\n");
        
}