#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "Primary.h"

int main() {

/* Primary_SET_ACCELERATOR_RANGE */
    printf("Primary_SET_ACCELERATOR_RANGE:\n");
    uint8_t* buffer_primary_set_accelerator_range = (uint8_t*)malloc(sizeof(Primary_SET_ACCELERATOR_RANGE));
    
    Primary_SET_ACCELERATOR_RANGE primary_set_accelerator_range_s = { 83 };
    serialize_Primary_SET_ACCELERATOR_RANGE(buffer_primary_set_accelerator_range, primary_set_accelerator_range_s.sync_state);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_accelerator_range_s.sync_state);
    
    Primary_SET_ACCELERATOR_RANGE* primary_set_accelerator_range_d = (Primary_SET_ACCELERATOR_RANGE*)malloc(sizeof(Primary_SET_ACCELERATOR_RANGE));
    deserialize_Primary_SET_ACCELERATOR_RANGE(buffer_primary_set_accelerator_range, primary_set_accelerator_range_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_accelerator_range_d->sync_state);
    
    assert(memcmp(&primary_set_accelerator_range_s, primary_set_accelerator_range_d, sizeof(Primary_SET_ACCELERATOR_RANGE)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_PEDALS_ADC_RANGES */
    printf("Primary_PEDALS_ADC_RANGES:\n");
    uint8_t* buffer_primary_pedals_adc_ranges = (uint8_t*)malloc(sizeof(Primary_PEDALS_ADC_RANGES));
    
    Primary_PEDALS_ADC_RANGES primary_pedals_adc_ranges_s = { 8210.0, 30820.0, 23273.0, 4000.0 };
    serialize_Primary_PEDALS_ADC_RANGES(buffer_primary_pedals_adc_ranges, primary_pedals_adc_ranges_s.accel1_raw_adc_min, primary_pedals_adc_ranges_s.accel1_raw_adc_max, primary_pedals_adc_ranges_s.accel2_raw_adc_min, primary_pedals_adc_ranges_s.accel2_raw_adc_max);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_pedals_adc_ranges_s.accel1_raw_adc_min, (long long unsigned int)primary_pedals_adc_ranges_s.accel1_raw_adc_max, (long long unsigned int)primary_pedals_adc_ranges_s.accel2_raw_adc_min, (long long unsigned int)primary_pedals_adc_ranges_s.accel2_raw_adc_max);
    
    Primary_PEDALS_ADC_RANGES* primary_pedals_adc_ranges_d = (Primary_PEDALS_ADC_RANGES*)malloc(sizeof(Primary_PEDALS_ADC_RANGES));
    deserialize_Primary_PEDALS_ADC_RANGES(buffer_primary_pedals_adc_ranges, primary_pedals_adc_ranges_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_pedals_adc_ranges_d->accel1_raw_adc_min, (long long unsigned int)primary_pedals_adc_ranges_d->accel1_raw_adc_max, (long long unsigned int)primary_pedals_adc_ranges_d->accel2_raw_adc_min, (long long unsigned int)primary_pedals_adc_ranges_d->accel2_raw_adc_max);
    
    assert(memcmp(&primary_pedals_adc_ranges_s, primary_pedals_adc_ranges_d, sizeof(Primary_PEDALS_ADC_RANGES)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_ACCELERATOR_PEDAL_VAL */
    printf("Primary_ACCELERATOR_PEDAL_VAL:\n");
    uint8_t* buffer_primary_accelerator_pedal_val = (uint8_t*)malloc(sizeof(Primary_ACCELERATOR_PEDAL_VAL));
    
    Primary_ACCELERATOR_PEDAL_VAL primary_accelerator_pedal_val_s = { 133.0 };
    serialize_Primary_ACCELERATOR_PEDAL_VAL(buffer_primary_accelerator_pedal_val, primary_accelerator_pedal_val_s.level);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_accelerator_pedal_val_s.level);
    
    Primary_ACCELERATOR_PEDAL_VAL* primary_accelerator_pedal_val_d = (Primary_ACCELERATOR_PEDAL_VAL*)malloc(sizeof(Primary_ACCELERATOR_PEDAL_VAL));
    deserialize_Primary_ACCELERATOR_PEDAL_VAL(buffer_primary_accelerator_pedal_val, primary_accelerator_pedal_val_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_accelerator_pedal_val_d->level);
    
    assert(memcmp(&primary_accelerator_pedal_val_s, primary_accelerator_pedal_val_d, sizeof(Primary_ACCELERATOR_PEDAL_VAL)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_BRAKE_PEDAL_VAL */
    printf("Primary_BRAKE_PEDAL_VAL:\n");
    uint8_t* buffer_primary_brake_pedal_val = (uint8_t*)malloc(sizeof(Primary_BRAKE_PEDAL_VAL));
    
    Primary_BRAKE_PEDAL_VAL primary_brake_pedal_val_s = { 176.0 };
    serialize_Primary_BRAKE_PEDAL_VAL(buffer_primary_brake_pedal_val, primary_brake_pedal_val_s.level);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_brake_pedal_val_s.level);
    
    Primary_BRAKE_PEDAL_VAL* primary_brake_pedal_val_d = (Primary_BRAKE_PEDAL_VAL*)malloc(sizeof(Primary_BRAKE_PEDAL_VAL));
    deserialize_Primary_BRAKE_PEDAL_VAL(buffer_primary_brake_pedal_val, primary_brake_pedal_val_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_brake_pedal_val_d->level);
    
    assert(memcmp(&primary_brake_pedal_val_s, primary_brake_pedal_val_d, sizeof(Primary_BRAKE_PEDAL_VAL)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_PCU_STATUS */
    printf("Primary_PCU_STATUS:\n");
    uint8_t* buffer_primary_pcu_status = (uint8_t*)malloc(sizeof(Primary_PCU_STATUS));
    
    Primary_PCU_STATUS primary_pcu_status_s = { {220}, {18} };
    serialize_Primary_PCU_STATUS(buffer_primary_pcu_status, primary_pcu_status_s.warnings, primary_pcu_status_s.errors);
    printf("\tSerialized\n\t%hhx %hhx\n", (long long unsigned int)primary_pcu_status_s.warnings[0], (long long unsigned int)primary_pcu_status_s.errors[0]);
    
    Primary_PCU_STATUS* primary_pcu_status_d = (Primary_PCU_STATUS*)malloc(sizeof(Primary_PCU_STATUS));
    deserialize_Primary_PCU_STATUS(buffer_primary_pcu_status, primary_pcu_status_d);
    printf("\tDeserialized\n\t%hhx %hhx\n", (long long unsigned int)primary_pcu_status_d->warnings[0], (long long unsigned int)primary_pcu_status_d->errors[0]);
    
    assert(memcmp(&primary_pcu_status_s, primary_pcu_status_d, sizeof(Primary_PCU_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_TIMESTAMP */
    printf("Primary_TIMESTAMP:\n");
    uint8_t* buffer_primary_timestamp = (uint8_t*)malloc(sizeof(Primary_TIMESTAMP));
    
    Primary_TIMESTAMP primary_timestamp_s = { 983495984.0 };
    serialize_Primary_TIMESTAMP(buffer_primary_timestamp, primary_timestamp_s.timestamp);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_timestamp_s.timestamp);
    
    Primary_TIMESTAMP* primary_timestamp_d = (Primary_TIMESTAMP*)malloc(sizeof(Primary_TIMESTAMP));
    deserialize_Primary_TIMESTAMP(buffer_primary_timestamp, primary_timestamp_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_timestamp_d->timestamp);
    
    assert(memcmp(&primary_timestamp_s, primary_timestamp_d, sizeof(Primary_TIMESTAMP)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_TLM_STATUS */
    printf("Primary_TLM_STATUS:\n");
    uint8_t* buffer_primary_tlm_status = (uint8_t*)malloc(sizeof(Primary_TLM_STATUS));
    
    Primary_TLM_STATUS primary_tlm_status_s = { -64, 74, 142.0, 75.0 };
    serialize_Primary_TLM_STATUS(buffer_primary_tlm_status, primary_tlm_status_s.tlm_status, primary_tlm_status_s.race_type, primary_tlm_status_s.driver, primary_tlm_status_s.circuit);
    printf("\tSerialized\n\t%lld %lld %llu %llu\n", (long long int)primary_tlm_status_s.tlm_status, (long long int)primary_tlm_status_s.race_type, (long long unsigned int)primary_tlm_status_s.driver, (long long unsigned int)primary_tlm_status_s.circuit);
    
    Primary_TLM_STATUS* primary_tlm_status_d = (Primary_TLM_STATUS*)malloc(sizeof(Primary_TLM_STATUS));
    deserialize_Primary_TLM_STATUS(buffer_primary_tlm_status, primary_tlm_status_d);
    printf("\tDeserialized\n\t%lld %lld %llu %llu\n", (long long int)primary_tlm_status_d->tlm_status, (long long int)primary_tlm_status_d->race_type, (long long unsigned int)primary_tlm_status_d->driver, (long long unsigned int)primary_tlm_status_d->circuit);
    
    assert(memcmp(&primary_tlm_status_s, primary_tlm_status_d, sizeof(Primary_TLM_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_CAR_STATUS */
    printf("Primary_CAR_STATUS:\n");
    uint8_t* buffer_primary_car_status = (uint8_t*)malloc(sizeof(Primary_CAR_STATUS));
    
    Primary_CAR_STATUS primary_car_status_s = { 30, 30, 75 };
    serialize_Primary_CAR_STATUS(buffer_primary_car_status, primary_car_status_s.car_status, primary_car_status_s.inverter_l, primary_car_status_s.inverter_r);
    printf("\tSerialized\n\t%lld %lld %lld\n", (long long int)primary_car_status_s.car_status, (long long int)primary_car_status_s.inverter_l, (long long int)primary_car_status_s.inverter_r);
    
    Primary_CAR_STATUS* primary_car_status_d = (Primary_CAR_STATUS*)malloc(sizeof(Primary_CAR_STATUS));
    deserialize_Primary_CAR_STATUS(buffer_primary_car_status, primary_car_status_d);
    printf("\tDeserialized\n\t%lld %lld %lld\n", (long long int)primary_car_status_d->car_status, (long long int)primary_car_status_d->inverter_l, (long long int)primary_car_status_d->inverter_r);
    
    assert(memcmp(&primary_car_status_s, primary_car_status_d, sizeof(Primary_CAR_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_SET_TLM_STATUS */
    printf("Primary_SET_TLM_STATUS:\n");
    uint8_t* buffer_primary_set_tlm_status = (uint8_t*)malloc(sizeof(Primary_SET_TLM_STATUS));
    
    Primary_SET_TLM_STATUS primary_set_tlm_status_s = { 19, -36, 95.0, 235.0 };
    serialize_Primary_SET_TLM_STATUS(buffer_primary_set_tlm_status, primary_set_tlm_status_s.tlm_status, primary_set_tlm_status_s.race_type, primary_set_tlm_status_s.driver, primary_set_tlm_status_s.circuit);
    printf("\tSerialized\n\t%lld %lld %llu %llu\n", (long long int)primary_set_tlm_status_s.tlm_status, (long long int)primary_set_tlm_status_s.race_type, (long long unsigned int)primary_set_tlm_status_s.driver, (long long unsigned int)primary_set_tlm_status_s.circuit);
    
    Primary_SET_TLM_STATUS* primary_set_tlm_status_d = (Primary_SET_TLM_STATUS*)malloc(sizeof(Primary_SET_TLM_STATUS));
    deserialize_Primary_SET_TLM_STATUS(buffer_primary_set_tlm_status, primary_set_tlm_status_d);
    printf("\tDeserialized\n\t%lld %lld %llu %llu\n", (long long int)primary_set_tlm_status_d->tlm_status, (long long int)primary_set_tlm_status_d->race_type, (long long unsigned int)primary_set_tlm_status_d->driver, (long long unsigned int)primary_set_tlm_status_d->circuit);
    
    assert(memcmp(&primary_set_tlm_status_s, primary_set_tlm_status_d, sizeof(Primary_SET_TLM_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_GPS_COORDS */
    printf("Primary_GPS_COORDS:\n");
    uint8_t* buffer_primary_gps_coords = (uint8_t*)malloc(sizeof(Primary_GPS_COORDS));
    
    Primary_GPS_COORDS primary_gps_coords_s = { -3663774526.701, 571962884.478 };
    serialize_Primary_GPS_COORDS(buffer_primary_gps_coords, primary_gps_coords_s.latitude, primary_gps_coords_s.longitude);
    printf("\tSerialized\n\t%lld %lld\n", (long long int)primary_gps_coords_s.latitude, (long long int)primary_gps_coords_s.longitude);
    
    Primary_GPS_COORDS* primary_gps_coords_d = (Primary_GPS_COORDS*)malloc(sizeof(Primary_GPS_COORDS));
    deserialize_Primary_GPS_COORDS(buffer_primary_gps_coords, primary_gps_coords_d);
    printf("\tDeserialized\n\t%lld %lld\n", (long long int)primary_gps_coords_d->latitude, (long long int)primary_gps_coords_d->longitude);
    
    assert(memcmp(&primary_gps_coords_s, primary_gps_coords_d, sizeof(Primary_GPS_COORDS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_GPS_SPEED */
    printf("Primary_GPS_SPEED:\n");
    uint8_t* buffer_primary_gps_speed = (uint8_t*)malloc(sizeof(Primary_GPS_SPEED));
    
    Primary_GPS_SPEED primary_gps_speed_s = { 23686.0 };
    serialize_Primary_GPS_SPEED(buffer_primary_gps_speed, primary_gps_speed_s.speed);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_gps_speed_s.speed);
    
    Primary_GPS_SPEED* primary_gps_speed_d = (Primary_GPS_SPEED*)malloc(sizeof(Primary_GPS_SPEED));
    deserialize_Primary_GPS_SPEED(buffer_primary_gps_speed, primary_gps_speed_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_gps_speed_d->speed);
    
    assert(memcmp(&primary_gps_speed_s, primary_gps_speed_d, sizeof(Primary_GPS_SPEED)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_VOLTAGE */
    printf("Primary_HV_VOLTAGE:\n");
    uint8_t* buffer_primary_hv_voltage = (uint8_t*)malloc(sizeof(Primary_HV_VOLTAGE));
    
    Primary_HV_VOLTAGE primary_hv_voltage_s = { 17014.0, 15365.0, 37730.0, 4654.0 };
    serialize_Primary_HV_VOLTAGE(buffer_primary_hv_voltage, primary_hv_voltage_s.pack_voltage, primary_hv_voltage_s.bus_voltage, primary_hv_voltage_s.max_cell_voltage, primary_hv_voltage_s.min_cell_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_voltage_s.pack_voltage, (long long unsigned int)primary_hv_voltage_s.bus_voltage, (long long unsigned int)primary_hv_voltage_s.max_cell_voltage, (long long unsigned int)primary_hv_voltage_s.min_cell_voltage);
    
    Primary_HV_VOLTAGE* primary_hv_voltage_d = (Primary_HV_VOLTAGE*)malloc(sizeof(Primary_HV_VOLTAGE));
    deserialize_Primary_HV_VOLTAGE(buffer_primary_hv_voltage, primary_hv_voltage_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_voltage_d->pack_voltage, (long long unsigned int)primary_hv_voltage_d->bus_voltage, (long long unsigned int)primary_hv_voltage_d->max_cell_voltage, (long long unsigned int)primary_hv_voltage_d->min_cell_voltage);
    
    assert(memcmp(&primary_hv_voltage_s, primary_hv_voltage_d, sizeof(Primary_HV_VOLTAGE)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_CURRENT */
    printf("Primary_HV_CURRENT:\n");
    uint8_t* buffer_primary_hv_current = (uint8_t*)malloc(sizeof(Primary_HV_CURRENT));
    
    Primary_HV_CURRENT primary_hv_current_s = { 32339.0, 202.0 };
    serialize_Primary_HV_CURRENT(buffer_primary_hv_current, primary_hv_current_s.current, primary_hv_current_s.power);
    printf("\tSerialized\n\t%llu %lld\n", (long long unsigned int)primary_hv_current_s.current, (long long int)primary_hv_current_s.power);
    
    Primary_HV_CURRENT* primary_hv_current_d = (Primary_HV_CURRENT*)malloc(sizeof(Primary_HV_CURRENT));
    deserialize_Primary_HV_CURRENT(buffer_primary_hv_current, primary_hv_current_d);
    printf("\tDeserialized\n\t%llu %lld\n", (long long unsigned int)primary_hv_current_d->current, (long long int)primary_hv_current_d->power);
    
    assert(memcmp(&primary_hv_current_s, primary_hv_current_d, sizeof(Primary_HV_CURRENT)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_TEMP */
    printf("Primary_HV_TEMP:\n");
    uint8_t* buffer_primary_hv_temp = (uint8_t*)malloc(sizeof(Primary_HV_TEMP));
    
    Primary_HV_TEMP primary_hv_temp_s = { 45549.0, 37992.0, 20550.0 };
    serialize_Primary_HV_TEMP(buffer_primary_hv_temp, primary_hv_temp_s.average_temp, primary_hv_temp_s.max_temp, primary_hv_temp_s.min_temp);
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_hv_temp_s.average_temp, (long long unsigned int)primary_hv_temp_s.max_temp, (long long unsigned int)primary_hv_temp_s.min_temp);
    
    Primary_HV_TEMP* primary_hv_temp_d = (Primary_HV_TEMP*)malloc(sizeof(Primary_HV_TEMP));
    deserialize_Primary_HV_TEMP(buffer_primary_hv_temp, primary_hv_temp_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_hv_temp_d->average_temp, (long long unsigned int)primary_hv_temp_d->max_temp, (long long unsigned int)primary_hv_temp_d->min_temp);
    
    assert(memcmp(&primary_hv_temp_s, primary_hv_temp_d, sizeof(Primary_HV_TEMP)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_ERRORS */
    printf("Primary_HV_ERRORS:\n");
    uint8_t* buffer_primary_hv_errors = (uint8_t*)malloc(sizeof(Primary_HV_ERRORS));
    
    Primary_HV_ERRORS primary_hv_errors_s = { {183, 42}, {184, 111} };
    serialize_Primary_HV_ERRORS(buffer_primary_hv_errors, primary_hv_errors_s.warnings, primary_hv_errors_s.errors);
    printf("\tSerialized\n\t%hhx.%hhx %hhx.%hhx\n", (long long unsigned int)primary_hv_errors_s.warnings[0], (long long unsigned int)primary_hv_errors_s.warnings[1], (long long unsigned int)primary_hv_errors_s.errors[0], (long long unsigned int)primary_hv_errors_s.errors[1]);
    
    Primary_HV_ERRORS* primary_hv_errors_d = (Primary_HV_ERRORS*)malloc(sizeof(Primary_HV_ERRORS));
    deserialize_Primary_HV_ERRORS(buffer_primary_hv_errors, primary_hv_errors_d);
    printf("\tDeserialized\n\t%hhx.%hhx %hhx.%hhx\n", (long long unsigned int)primary_hv_errors_d->warnings[0], (long long unsigned int)primary_hv_errors_d->warnings[1], (long long unsigned int)primary_hv_errors_d->errors[0], (long long unsigned int)primary_hv_errors_d->errors[1]);
    
    assert(memcmp(&primary_hv_errors_s, primary_hv_errors_d, sizeof(Primary_HV_ERRORS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_TS_STATUS */
    printf("Primary_TS_STATUS:\n");
    uint8_t* buffer_primary_ts_status = (uint8_t*)malloc(sizeof(Primary_TS_STATUS));
    
    Primary_TS_STATUS primary_ts_status_s = { 92 };
    serialize_Primary_TS_STATUS(buffer_primary_ts_status, primary_ts_status_s.ts_status);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_ts_status_s.ts_status);
    
    Primary_TS_STATUS* primary_ts_status_d = (Primary_TS_STATUS*)malloc(sizeof(Primary_TS_STATUS));
    deserialize_Primary_TS_STATUS(buffer_primary_ts_status, primary_ts_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_ts_status_d->ts_status);
    
    assert(memcmp(&primary_ts_status_s, primary_ts_status_d, sizeof(Primary_TS_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_SET_TS_STATUS */
    printf("Primary_SET_TS_STATUS:\n");
    uint8_t* buffer_primary_set_ts_status = (uint8_t*)malloc(sizeof(Primary_SET_TS_STATUS));
    
    Primary_SET_TS_STATUS primary_set_ts_status_s = { -22 };
    serialize_Primary_SET_TS_STATUS(buffer_primary_set_ts_status, primary_set_ts_status_s.ts_status_set);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_ts_status_s.ts_status_set);
    
    Primary_SET_TS_STATUS* primary_set_ts_status_d = (Primary_SET_TS_STATUS*)malloc(sizeof(Primary_SET_TS_STATUS));
    deserialize_Primary_SET_TS_STATUS(buffer_primary_set_ts_status, primary_set_ts_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_ts_status_d->ts_status_set);
    
    assert(memcmp(&primary_set_ts_status_s, primary_set_ts_status_d, sizeof(Primary_SET_TS_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_STEER_STATUS */
    printf("Primary_STEER_STATUS:\n");
    uint8_t* buffer_primary_steer_status = (uint8_t*)malloc(sizeof(Primary_STEER_STATUS));
    
    Primary_STEER_STATUS primary_steer_status_s = { -81, -78, 0.0 };
    serialize_Primary_STEER_STATUS(buffer_primary_steer_status, primary_steer_status_s.traction_control, primary_steer_status_s.map, primary_steer_status_s.radio_on);
    printf("\tSerialized\n\t%lld %lld\n", (long long int)primary_steer_status_s.traction_control, (long long int)primary_steer_status_s.map, (long long unsigned int)primary_steer_status_s.radio_on);
    
    Primary_STEER_STATUS* primary_steer_status_d = (Primary_STEER_STATUS*)malloc(sizeof(Primary_STEER_STATUS));
    deserialize_Primary_STEER_STATUS(buffer_primary_steer_status, primary_steer_status_d);
    printf("\tDeserialized\n\t%lld %lld\n", (long long int)primary_steer_status_d->traction_control, (long long int)primary_steer_status_d->map, (long long unsigned int)primary_steer_status_d->radio_on);
    
    assert(memcmp(&primary_steer_status_s, primary_steer_status_d, sizeof(Primary_STEER_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_SET_CAR_STATUS */
    printf("Primary_SET_CAR_STATUS:\n");
    uint8_t* buffer_primary_set_car_status = (uint8_t*)malloc(sizeof(Primary_SET_CAR_STATUS));
    
    Primary_SET_CAR_STATUS primary_set_car_status_s = { 99 };
    serialize_Primary_SET_CAR_STATUS(buffer_primary_set_car_status, primary_set_car_status_s.car_status_set);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_car_status_s.car_status_set);
    
    Primary_SET_CAR_STATUS* primary_set_car_status_d = (Primary_SET_CAR_STATUS*)malloc(sizeof(Primary_SET_CAR_STATUS));
    deserialize_Primary_SET_CAR_STATUS(buffer_primary_set_car_status, primary_set_car_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_car_status_d->car_status_set);
    
    assert(memcmp(&primary_set_car_status_s, primary_set_car_status_d, sizeof(Primary_SET_CAR_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_LV_CURRENT */
    printf("Primary_LV_CURRENT:\n");
    uint8_t* buffer_primary_lv_current = (uint8_t*)malloc(sizeof(Primary_LV_CURRENT));
    
    Primary_LV_CURRENT primary_lv_current_s = { 239.0 };
    serialize_Primary_LV_CURRENT(buffer_primary_lv_current, primary_lv_current_s.current);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_lv_current_s.current);
    
    Primary_LV_CURRENT* primary_lv_current_d = (Primary_LV_CURRENT*)malloc(sizeof(Primary_LV_CURRENT));
    deserialize_Primary_LV_CURRENT(buffer_primary_lv_current, primary_lv_current_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_lv_current_d->current);
    
    assert(memcmp(&primary_lv_current_s, primary_lv_current_d, sizeof(Primary_LV_CURRENT)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_LV_VOLTAGE */
    printf("Primary_LV_VOLTAGE:\n");
    uint8_t* buffer_primary_lv_voltage = (uint8_t*)malloc(sizeof(Primary_LV_VOLTAGE));
    
    Primary_LV_VOLTAGE primary_lv_voltage_s = { 169.0, 61.0, 212.0, 19.0, 36194.0 };
    serialize_Primary_LV_VOLTAGE(buffer_primary_lv_voltage, primary_lv_voltage_s.voltage_1, primary_lv_voltage_s.voltage_2, primary_lv_voltage_s.voltage_3, primary_lv_voltage_s.voltage_4, primary_lv_voltage_s.total_voltage);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu\n", (long long unsigned int)primary_lv_voltage_s.voltage_1, (long long unsigned int)primary_lv_voltage_s.voltage_2, (long long unsigned int)primary_lv_voltage_s.voltage_3, (long long unsigned int)primary_lv_voltage_s.voltage_4, (long long unsigned int)primary_lv_voltage_s.total_voltage);
    
    Primary_LV_VOLTAGE* primary_lv_voltage_d = (Primary_LV_VOLTAGE*)malloc(sizeof(Primary_LV_VOLTAGE));
    deserialize_Primary_LV_VOLTAGE(buffer_primary_lv_voltage, primary_lv_voltage_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu\n", (long long unsigned int)primary_lv_voltage_d->voltage_1, (long long unsigned int)primary_lv_voltage_d->voltage_2, (long long unsigned int)primary_lv_voltage_d->voltage_3, (long long unsigned int)primary_lv_voltage_d->voltage_4, (long long unsigned int)primary_lv_voltage_d->total_voltage);
    
    assert(memcmp(&primary_lv_voltage_s, primary_lv_voltage_d, sizeof(Primary_LV_VOLTAGE)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_LV_TEMPERATURE */
    printf("Primary_LV_TEMPERATURE:\n");
    uint8_t* buffer_primary_lv_temperature = (uint8_t*)malloc(sizeof(Primary_LV_TEMPERATURE));
    
    Primary_LV_TEMPERATURE primary_lv_temperature_s = { 90.0, 0, 58738.0 };
    serialize_Primary_LV_TEMPERATURE(buffer_primary_lv_temperature, primary_lv_temperature_s.dcdc_temperature, primary_lv_temperature_s.battery_temperature);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)primary_lv_temperature_s.dcdc_temperature);
    
    Primary_LV_TEMPERATURE* primary_lv_temperature_d = (Primary_LV_TEMPERATURE*)malloc(sizeof(Primary_LV_TEMPERATURE));
    deserialize_Primary_LV_TEMPERATURE(buffer_primary_lv_temperature, primary_lv_temperature_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)primary_lv_temperature_d->dcdc_temperature);
    
    assert(memcmp(&primary_lv_temperature_s, primary_lv_temperature_d, sizeof(Primary_LV_TEMPERATURE)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_COOLING_STATUS */
    printf("Primary_COOLING_STATUS:\n");
    uint8_t* buffer_primary_cooling_status = (uint8_t*)malloc(sizeof(Primary_COOLING_STATUS));
    
    Primary_COOLING_STATUS primary_cooling_status_s = { 21.0, 141.0, 212.0 };
    serialize_Primary_COOLING_STATUS(buffer_primary_cooling_status, primary_cooling_status_s.hv_fan_speed, primary_cooling_status_s.lv_fan_speed, primary_cooling_status_s.pump_speed);
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_cooling_status_s.hv_fan_speed, (long long unsigned int)primary_cooling_status_s.lv_fan_speed, (long long unsigned int)primary_cooling_status_s.pump_speed);
    
    Primary_COOLING_STATUS* primary_cooling_status_d = (Primary_COOLING_STATUS*)malloc(sizeof(Primary_COOLING_STATUS));
    deserialize_Primary_COOLING_STATUS(buffer_primary_cooling_status, primary_cooling_status_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_cooling_status_d->hv_fan_speed, (long long unsigned int)primary_cooling_status_d->lv_fan_speed, (long long unsigned int)primary_cooling_status_d->pump_speed);
    
    assert(memcmp(&primary_cooling_status_s, primary_cooling_status_d, sizeof(Primary_COOLING_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_CELLS_VOLTAGE */
    printf("Primary_HV_CELLS_VOLTAGE:\n");
    uint8_t* buffer_primary_hv_cells_voltage = (uint8_t*)malloc(sizeof(Primary_HV_CELLS_VOLTAGE));
    
    Primary_HV_CELLS_VOLTAGE primary_hv_cells_voltage_s = { 91.0, 0, 35508.0, 19503.0, 4846.0 };
    serialize_Primary_HV_CELLS_VOLTAGE(buffer_primary_hv_cells_voltage, primary_hv_cells_voltage_s.cell_index, primary_hv_cells_voltage_s.voltage_0, primary_hv_cells_voltage_s.voltage_1, primary_hv_cells_voltage_s.voltage_2);
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_voltage_s.cell_index, (long long unsigned int)primary_hv_cells_voltage_s.voltage_0, (long long unsigned int)primary_hv_cells_voltage_s.voltage_1);
    
    Primary_HV_CELLS_VOLTAGE* primary_hv_cells_voltage_d = (Primary_HV_CELLS_VOLTAGE*)malloc(sizeof(Primary_HV_CELLS_VOLTAGE));
    deserialize_Primary_HV_CELLS_VOLTAGE(buffer_primary_hv_cells_voltage, primary_hv_cells_voltage_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_voltage_d->cell_index, (long long unsigned int)primary_hv_cells_voltage_d->voltage_0, (long long unsigned int)primary_hv_cells_voltage_d->voltage_1);
    
    assert(memcmp(&primary_hv_cells_voltage_s, primary_hv_cells_voltage_d, sizeof(Primary_HV_CELLS_VOLTAGE)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_CELLS_TEMP */
    printf("Primary_HV_CELLS_TEMP:\n");
    uint8_t* buffer_primary_hv_cells_temp = (uint8_t*)malloc(sizeof(Primary_HV_CELLS_TEMP));
    
    Primary_HV_CELLS_TEMP primary_hv_cells_temp_s = { 40.0, 72.0, 185.0, 157.0, 158.0, 132.0, 183.0, 134.0 };
    serialize_Primary_HV_CELLS_TEMP(buffer_primary_hv_cells_temp, primary_hv_cells_temp_s.cell_index, primary_hv_cells_temp_s.temp_0, primary_hv_cells_temp_s.temp_1, primary_hv_cells_temp_s.temp_2, primary_hv_cells_temp_s.temp_3, primary_hv_cells_temp_s.temp_4, primary_hv_cells_temp_s.temp_5, primary_hv_cells_temp_s.temp_6);
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_temp_s.cell_index, (long long unsigned int)primary_hv_cells_temp_s.temp_0, (long long unsigned int)primary_hv_cells_temp_s.temp_1, (long long unsigned int)primary_hv_cells_temp_s.temp_2, (long long unsigned int)primary_hv_cells_temp_s.temp_3, (long long unsigned int)primary_hv_cells_temp_s.temp_4, (long long unsigned int)primary_hv_cells_temp_s.temp_5, (long long unsigned int)primary_hv_cells_temp_s.temp_6);
    
    Primary_HV_CELLS_TEMP* primary_hv_cells_temp_d = (Primary_HV_CELLS_TEMP*)malloc(sizeof(Primary_HV_CELLS_TEMP));
    deserialize_Primary_HV_CELLS_TEMP(buffer_primary_hv_cells_temp, primary_hv_cells_temp_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_temp_d->cell_index, (long long unsigned int)primary_hv_cells_temp_d->temp_0, (long long unsigned int)primary_hv_cells_temp_d->temp_1, (long long unsigned int)primary_hv_cells_temp_d->temp_2, (long long unsigned int)primary_hv_cells_temp_d->temp_3, (long long unsigned int)primary_hv_cells_temp_d->temp_4, (long long unsigned int)primary_hv_cells_temp_d->temp_5, (long long unsigned int)primary_hv_cells_temp_d->temp_6);
    
    assert(memcmp(&primary_hv_cells_temp_s, primary_hv_cells_temp_d, sizeof(Primary_HV_CELLS_TEMP)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_SET_CHG_POWER */
    printf("Primary_SET_CHG_POWER:\n");
    uint8_t* buffer_primary_set_chg_power = (uint8_t*)malloc(sizeof(Primary_SET_CHG_POWER));
    
    Primary_SET_CHG_POWER primary_set_chg_power_s = { 9901.0, 46181.0 };
    serialize_Primary_SET_CHG_POWER(buffer_primary_set_chg_power, primary_set_chg_power_s.current, primary_set_chg_power_s.voltage);
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)primary_set_chg_power_s.current, (long long unsigned int)primary_set_chg_power_s.voltage);
    
    Primary_SET_CHG_POWER* primary_set_chg_power_d = (Primary_SET_CHG_POWER*)malloc(sizeof(Primary_SET_CHG_POWER));
    deserialize_Primary_SET_CHG_POWER(buffer_primary_set_chg_power, primary_set_chg_power_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)primary_set_chg_power_d->current, (long long unsigned int)primary_set_chg_power_d->voltage);
    
    assert(memcmp(&primary_set_chg_power_s, primary_set_chg_power_d, sizeof(Primary_SET_CHG_POWER)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_CHG_STATUS */
    printf("Primary_CHG_STATUS:\n");
    uint8_t* buffer_primary_chg_status = (uint8_t*)malloc(sizeof(Primary_CHG_STATUS));
    
    Primary_CHG_STATUS primary_chg_status_s = { 110 };
    serialize_Primary_CHG_STATUS(buffer_primary_chg_status, primary_chg_status_s.status);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_chg_status_s.status);
    
    Primary_CHG_STATUS* primary_chg_status_d = (Primary_CHG_STATUS*)malloc(sizeof(Primary_CHG_STATUS));
    deserialize_Primary_CHG_STATUS(buffer_primary_chg_status, primary_chg_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_chg_status_d->status);
    
    assert(memcmp(&primary_chg_status_s, primary_chg_status_d, sizeof(Primary_CHG_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_SET_CHG_STATUS */
    printf("Primary_SET_CHG_STATUS:\n");
    uint8_t* buffer_primary_set_chg_status = (uint8_t*)malloc(sizeof(Primary_SET_CHG_STATUS));
    
    Primary_SET_CHG_STATUS primary_set_chg_status_s = { -10 };
    serialize_Primary_SET_CHG_STATUS(buffer_primary_set_chg_status, primary_set_chg_status_s.status);
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_chg_status_s.status);
    
    Primary_SET_CHG_STATUS* primary_set_chg_status_d = (Primary_SET_CHG_STATUS*)malloc(sizeof(Primary_SET_CHG_STATUS));
    deserialize_Primary_SET_CHG_STATUS(buffer_primary_set_chg_status, primary_set_chg_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_chg_status_d->status);
    
    assert(memcmp(&primary_set_chg_status_s, primary_set_chg_status_d, sizeof(Primary_SET_CHG_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_CHG_SETTINGS */
    printf("Primary_CHG_SETTINGS:\n");
    uint8_t* buffer_primary_chg_settings = (uint8_t*)malloc(sizeof(Primary_CHG_SETTINGS));
    
    Primary_CHG_SETTINGS primary_chg_settings_s = { 152.0 };
    serialize_Primary_CHG_SETTINGS(buffer_primary_chg_settings, primary_chg_settings_s.v_cutoff);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_chg_settings_s.v_cutoff);
    
    Primary_CHG_SETTINGS* primary_chg_settings_d = (Primary_CHG_SETTINGS*)malloc(sizeof(Primary_CHG_SETTINGS));
    deserialize_Primary_CHG_SETTINGS(buffer_primary_chg_settings, primary_chg_settings_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_chg_settings_d->v_cutoff);
    
    assert(memcmp(&primary_chg_settings_s, primary_chg_settings_d, sizeof(Primary_CHG_SETTINGS)) == 0);
    puts("SUCCESS!\n");
        
}