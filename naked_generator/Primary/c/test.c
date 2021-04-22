#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "Primary.h"

int main() {

/* Primary_TIMESTAMP */
    printf("Primary_TIMESTAMP:\n");
    uint8_t* buffer_primary_timestamp = (uint8_t*)malloc(sizeof(Primary_TIMESTAMP));
    
    Primary_TIMESTAMP primary_timestamp_s = { 939794819 };
    serialize_Primary_TIMESTAMP((long long unsigned int)primary_timestamp_s.timestamp, buffer_primary_timestamp, sizeof(Primary_TIMESTAMP));
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_timestamp_s.timestamp);
    
    Primary_TIMESTAMP* primary_timestamp_d = (Primary_TIMESTAMP*)malloc(sizeof(Primary_TIMESTAMP));
    deserialize_Primary_TIMESTAMP(buffer_primary_timestamp, sizeof(Primary_TIMESTAMP), primary_timestamp_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_timestamp_d->timestamp);
    
    assert(memcmp(&primary_timestamp_s, primary_timestamp_d, sizeof(Primary_TIMESTAMP)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_TLM_STATUS */
    printf("Primary_TLM_STATUS:\n");
    uint8_t* buffer_primary_tlm_status = (uint8_t*)malloc(sizeof(Primary_TLM_STATUS));
    
    Primary_TLM_STATUS primary_tlm_status_s = { -60, 84, 59, 245 };
    serialize_Primary_TLM_STATUS((long long int)primary_tlm_status_s.tlm_status, (long long int)primary_tlm_status_s.race_type, (long long unsigned int)primary_tlm_status_s.driver, (long long unsigned int)primary_tlm_status_s.circuit, buffer_primary_tlm_status, sizeof(Primary_TLM_STATUS));
    printf("\tSerialized\n\t%lld %lld %llu %llu\n", (long long int)primary_tlm_status_s.tlm_status, (long long int)primary_tlm_status_s.race_type, (long long unsigned int)primary_tlm_status_s.driver, (long long unsigned int)primary_tlm_status_s.circuit);
    
    Primary_TLM_STATUS* primary_tlm_status_d = (Primary_TLM_STATUS*)malloc(sizeof(Primary_TLM_STATUS));
    deserialize_Primary_TLM_STATUS(buffer_primary_tlm_status, sizeof(Primary_TLM_STATUS), primary_tlm_status_d);
    printf("\tDeserialized\n\t%lld %lld %llu %llu\n", (long long int)primary_tlm_status_d->tlm_status, (long long int)primary_tlm_status_d->race_type, (long long unsigned int)primary_tlm_status_d->driver, (long long unsigned int)primary_tlm_status_d->circuit);
    
    assert(memcmp(&primary_tlm_status_s, primary_tlm_status_d, sizeof(Primary_TLM_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_CAR_STATUS */
    printf("Primary_CAR_STATUS:\n");
    uint8_t* buffer_primary_car_status = (uint8_t*)malloc(sizeof(Primary_CAR_STATUS));
    
    Primary_CAR_STATUS primary_car_status_s = { -94, -88, -39 };
    serialize_Primary_CAR_STATUS((long long int)primary_car_status_s.car_status, (long long int)primary_car_status_s.inverter_l, (long long int)primary_car_status_s.inverter_r, buffer_primary_car_status, sizeof(Primary_CAR_STATUS));
    printf("\tSerialized\n\t%lld %lld %lld\n", (long long int)primary_car_status_s.car_status, (long long int)primary_car_status_s.inverter_l, (long long int)primary_car_status_s.inverter_r);
    
    Primary_CAR_STATUS* primary_car_status_d = (Primary_CAR_STATUS*)malloc(sizeof(Primary_CAR_STATUS));
    deserialize_Primary_CAR_STATUS(buffer_primary_car_status, sizeof(Primary_CAR_STATUS), primary_car_status_d);
    printf("\tDeserialized\n\t%lld %lld %lld\n", (long long int)primary_car_status_d->car_status, (long long int)primary_car_status_d->inverter_l, (long long int)primary_car_status_d->inverter_r);
    
    assert(memcmp(&primary_car_status_s, primary_car_status_d, sizeof(Primary_CAR_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_SET_TLM_STATUS */
    printf("Primary_SET_TLM_STATUS:\n");
    uint8_t* buffer_primary_set_tlm_status = (uint8_t*)malloc(sizeof(Primary_SET_TLM_STATUS));
    
    Primary_SET_TLM_STATUS primary_set_tlm_status_s = { 53, 83, 17, 107 };
    serialize_Primary_SET_TLM_STATUS((long long int)primary_set_tlm_status_s.tlm_status, (long long int)primary_set_tlm_status_s.race_type, (long long unsigned int)primary_set_tlm_status_s.driver, (long long unsigned int)primary_set_tlm_status_s.circuit, buffer_primary_set_tlm_status, sizeof(Primary_SET_TLM_STATUS));
    printf("\tSerialized\n\t%lld %lld %llu %llu\n", (long long int)primary_set_tlm_status_s.tlm_status, (long long int)primary_set_tlm_status_s.race_type, (long long unsigned int)primary_set_tlm_status_s.driver, (long long unsigned int)primary_set_tlm_status_s.circuit);
    
    Primary_SET_TLM_STATUS* primary_set_tlm_status_d = (Primary_SET_TLM_STATUS*)malloc(sizeof(Primary_SET_TLM_STATUS));
    deserialize_Primary_SET_TLM_STATUS(buffer_primary_set_tlm_status, sizeof(Primary_SET_TLM_STATUS), primary_set_tlm_status_d);
    printf("\tDeserialized\n\t%lld %lld %llu %llu\n", (long long int)primary_set_tlm_status_d->tlm_status, (long long int)primary_set_tlm_status_d->race_type, (long long unsigned int)primary_set_tlm_status_d->driver, (long long unsigned int)primary_set_tlm_status_d->circuit);
    
    assert(memcmp(&primary_set_tlm_status_s, primary_set_tlm_status_d, sizeof(Primary_SET_TLM_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_VOLTAGE */
    printf("Primary_HV_VOLTAGE:\n");
    uint8_t* buffer_primary_hv_voltage = (uint8_t*)malloc(sizeof(Primary_HV_VOLTAGE));
    
    Primary_HV_VOLTAGE primary_hv_voltage_s = { 5484, 46744, 24104, 61123 };
    serialize_Primary_HV_VOLTAGE((long long unsigned int)primary_hv_voltage_s.pack_voltage, (long long unsigned int)primary_hv_voltage_s.bus_voltage, (long long unsigned int)primary_hv_voltage_s.max_cell_voltage, (long long unsigned int)primary_hv_voltage_s.min_cell_voltage, buffer_primary_hv_voltage, sizeof(Primary_HV_VOLTAGE));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_voltage_s.pack_voltage, (long long unsigned int)primary_hv_voltage_s.bus_voltage, (long long unsigned int)primary_hv_voltage_s.max_cell_voltage, (long long unsigned int)primary_hv_voltage_s.min_cell_voltage);
    
    Primary_HV_VOLTAGE* primary_hv_voltage_d = (Primary_HV_VOLTAGE*)malloc(sizeof(Primary_HV_VOLTAGE));
    deserialize_Primary_HV_VOLTAGE(buffer_primary_hv_voltage, sizeof(Primary_HV_VOLTAGE), primary_hv_voltage_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_voltage_d->pack_voltage, (long long unsigned int)primary_hv_voltage_d->bus_voltage, (long long unsigned int)primary_hv_voltage_d->max_cell_voltage, (long long unsigned int)primary_hv_voltage_d->min_cell_voltage);
    
    assert(memcmp(&primary_hv_voltage_s, primary_hv_voltage_d, sizeof(Primary_HV_VOLTAGE)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_CURRENT */
    printf("Primary_HV_CURRENT:\n");
    uint8_t* buffer_primary_hv_current = (uint8_t*)malloc(sizeof(Primary_HV_CURRENT));
    
    Primary_HV_CURRENT primary_hv_current_s = { 16664, -152 };
    serialize_Primary_HV_CURRENT((long long unsigned int)primary_hv_current_s.current, (long long int)primary_hv_current_s.power, buffer_primary_hv_current, sizeof(Primary_HV_CURRENT));
    printf("\tSerialized\n\t%llu %lld\n", (long long unsigned int)primary_hv_current_s.current, (long long int)primary_hv_current_s.power);
    
    Primary_HV_CURRENT* primary_hv_current_d = (Primary_HV_CURRENT*)malloc(sizeof(Primary_HV_CURRENT));
    deserialize_Primary_HV_CURRENT(buffer_primary_hv_current, sizeof(Primary_HV_CURRENT), primary_hv_current_d);
    printf("\tDeserialized\n\t%llu %lld\n", (long long unsigned int)primary_hv_current_d->current, (long long int)primary_hv_current_d->power);
    
    assert(memcmp(&primary_hv_current_s, primary_hv_current_d, sizeof(Primary_HV_CURRENT)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_TEMP */
    printf("Primary_HV_TEMP:\n");
    uint8_t* buffer_primary_hv_temp = (uint8_t*)malloc(sizeof(Primary_HV_TEMP));
    
    Primary_HV_TEMP primary_hv_temp_s = { 14273, 45750, 27081 };
    serialize_Primary_HV_TEMP((long long unsigned int)primary_hv_temp_s.average_temp, (long long unsigned int)primary_hv_temp_s.max_temp, (long long unsigned int)primary_hv_temp_s.min_temp, buffer_primary_hv_temp, sizeof(Primary_HV_TEMP));
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_hv_temp_s.average_temp, (long long unsigned int)primary_hv_temp_s.max_temp, (long long unsigned int)primary_hv_temp_s.min_temp);
    
    Primary_HV_TEMP* primary_hv_temp_d = (Primary_HV_TEMP*)malloc(sizeof(Primary_HV_TEMP));
    deserialize_Primary_HV_TEMP(buffer_primary_hv_temp, sizeof(Primary_HV_TEMP), primary_hv_temp_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_hv_temp_d->average_temp, (long long unsigned int)primary_hv_temp_d->max_temp, (long long unsigned int)primary_hv_temp_d->min_temp);
    
    assert(memcmp(&primary_hv_temp_s, primary_hv_temp_d, sizeof(Primary_HV_TEMP)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_ERROR */
    printf("Primary_HV_ERROR:\n");
    uint8_t* buffer_primary_hv_error = (uint8_t*)malloc(sizeof(Primary_HV_ERROR));
    
    Primary_HV_ERROR primary_hv_error_s = { 113, 105, 69 };
    serialize_Primary_HV_ERROR((long long unsigned int)primary_hv_error_s.error_code, (long long unsigned int)primary_hv_error_s.error_index, (long long unsigned int)primary_hv_error_s.active, buffer_primary_hv_error, sizeof(Primary_HV_ERROR));
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_hv_error_s.error_code, (long long unsigned int)primary_hv_error_s.error_index, (long long unsigned int)primary_hv_error_s.active);
    
    Primary_HV_ERROR* primary_hv_error_d = (Primary_HV_ERROR*)malloc(sizeof(Primary_HV_ERROR));
    deserialize_Primary_HV_ERROR(buffer_primary_hv_error, sizeof(Primary_HV_ERROR), primary_hv_error_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_hv_error_d->error_code, (long long unsigned int)primary_hv_error_d->error_index, (long long unsigned int)primary_hv_error_d->active);
    
    assert(memcmp(&primary_hv_error_s, primary_hv_error_d, sizeof(Primary_HV_ERROR)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_TS_STATUS */
    printf("Primary_TS_STATUS:\n");
    uint8_t* buffer_primary_ts_status = (uint8_t*)malloc(sizeof(Primary_TS_STATUS));
    
    Primary_TS_STATUS primary_ts_status_s = { -70 };
    serialize_Primary_TS_STATUS((long long int)primary_ts_status_s.ts_status, buffer_primary_ts_status, sizeof(Primary_TS_STATUS));
    printf("\tSerialized\n\t%lld\n", (long long int)primary_ts_status_s.ts_status);
    
    Primary_TS_STATUS* primary_ts_status_d = (Primary_TS_STATUS*)malloc(sizeof(Primary_TS_STATUS));
    deserialize_Primary_TS_STATUS(buffer_primary_ts_status, sizeof(Primary_TS_STATUS), primary_ts_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_ts_status_d->ts_status);
    
    assert(memcmp(&primary_ts_status_s, primary_ts_status_d, sizeof(Primary_TS_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_SET_TS_STATUS */
    printf("Primary_SET_TS_STATUS:\n");
    uint8_t* buffer_primary_set_ts_status = (uint8_t*)malloc(sizeof(Primary_SET_TS_STATUS));
    
    Primary_SET_TS_STATUS primary_set_ts_status_s = { -99 };
    serialize_Primary_SET_TS_STATUS((long long int)primary_set_ts_status_s.ts_status_set, buffer_primary_set_ts_status, sizeof(Primary_SET_TS_STATUS));
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_ts_status_s.ts_status_set);
    
    Primary_SET_TS_STATUS* primary_set_ts_status_d = (Primary_SET_TS_STATUS*)malloc(sizeof(Primary_SET_TS_STATUS));
    deserialize_Primary_SET_TS_STATUS(buffer_primary_set_ts_status, sizeof(Primary_SET_TS_STATUS), primary_set_ts_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_ts_status_d->ts_status_set);
    
    assert(memcmp(&primary_set_ts_status_s, primary_set_ts_status_d, sizeof(Primary_SET_TS_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_STEER_STATUS */
    printf("Primary_STEER_STATUS:\n");
    uint8_t* buffer_primary_steer_status = (uint8_t*)malloc(sizeof(Primary_STEER_STATUS));
    
    Primary_STEER_STATUS primary_steer_status_s = { 55, -126, 0 };
    serialize_Primary_STEER_STATUS((long long int)primary_steer_status_s.traction_control, (long long int)primary_steer_status_s.map, (long long unsigned int)primary_steer_status_s.radio_on, buffer_primary_steer_status, sizeof(Primary_STEER_STATUS));
    printf("\tSerialized\n\t%lld %lld %lld\n", (long long int)primary_steer_status_s.traction_control, (long long int)primary_steer_status_s.map, (long long unsigned int)primary_steer_status_s.radio_on);
    
    Primary_STEER_STATUS* primary_steer_status_d = (Primary_STEER_STATUS*)malloc(sizeof(Primary_STEER_STATUS));
    deserialize_Primary_STEER_STATUS(buffer_primary_steer_status, sizeof(Primary_STEER_STATUS), primary_steer_status_d);
    printf("\tDeserialized\n\t%lld %lld %lld\n", (long long int)primary_steer_status_d->traction_control, (long long int)primary_steer_status_d->map, (long long unsigned int)primary_steer_status_d->radio_on);
    
    assert(memcmp(&primary_steer_status_s, primary_steer_status_d, sizeof(Primary_STEER_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_SET_CAR_STATUS */
    printf("Primary_SET_CAR_STATUS:\n");
    uint8_t* buffer_primary_set_car_status = (uint8_t*)malloc(sizeof(Primary_SET_CAR_STATUS));
    
    Primary_SET_CAR_STATUS primary_set_car_status_s = { -107 };
    serialize_Primary_SET_CAR_STATUS((long long int)primary_set_car_status_s.car_status_set, buffer_primary_set_car_status, sizeof(Primary_SET_CAR_STATUS));
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_car_status_s.car_status_set);
    
    Primary_SET_CAR_STATUS* primary_set_car_status_d = (Primary_SET_CAR_STATUS*)malloc(sizeof(Primary_SET_CAR_STATUS));
    deserialize_Primary_SET_CAR_STATUS(buffer_primary_set_car_status, sizeof(Primary_SET_CAR_STATUS), primary_set_car_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_car_status_d->car_status_set);
    
    assert(memcmp(&primary_set_car_status_s, primary_set_car_status_d, sizeof(Primary_SET_CAR_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_LV_CURRENT */
    printf("Primary_LV_CURRENT:\n");
    uint8_t* buffer_primary_lv_current = (uint8_t*)malloc(sizeof(Primary_LV_CURRENT));
    
    Primary_LV_CURRENT primary_lv_current_s = { 160 };
    serialize_Primary_LV_CURRENT((long long unsigned int)primary_lv_current_s.current, buffer_primary_lv_current, sizeof(Primary_LV_CURRENT));
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_lv_current_s.current);
    
    Primary_LV_CURRENT* primary_lv_current_d = (Primary_LV_CURRENT*)malloc(sizeof(Primary_LV_CURRENT));
    deserialize_Primary_LV_CURRENT(buffer_primary_lv_current, sizeof(Primary_LV_CURRENT), primary_lv_current_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_lv_current_d->current);
    
    assert(memcmp(&primary_lv_current_s, primary_lv_current_d, sizeof(Primary_LV_CURRENT)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_LV_VOLTAGE */
    printf("Primary_LV_VOLTAGE:\n");
    uint8_t* buffer_primary_lv_voltage = (uint8_t*)malloc(sizeof(Primary_LV_VOLTAGE));
    
    Primary_LV_VOLTAGE primary_lv_voltage_s = { 153, 16, 192, 211, 8210 };
    serialize_Primary_LV_VOLTAGE((long long unsigned int)primary_lv_voltage_s.voltage_1, (long long unsigned int)primary_lv_voltage_s.voltage_2, (long long unsigned int)primary_lv_voltage_s.voltage_3, (long long unsigned int)primary_lv_voltage_s.voltage_4, (long long unsigned int)primary_lv_voltage_s.total_voltage, buffer_primary_lv_voltage, sizeof(Primary_LV_VOLTAGE));
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu\n", (long long unsigned int)primary_lv_voltage_s.voltage_1, (long long unsigned int)primary_lv_voltage_s.voltage_2, (long long unsigned int)primary_lv_voltage_s.voltage_3, (long long unsigned int)primary_lv_voltage_s.voltage_4, (long long unsigned int)primary_lv_voltage_s.total_voltage);
    
    Primary_LV_VOLTAGE* primary_lv_voltage_d = (Primary_LV_VOLTAGE*)malloc(sizeof(Primary_LV_VOLTAGE));
    deserialize_Primary_LV_VOLTAGE(buffer_primary_lv_voltage, sizeof(Primary_LV_VOLTAGE), primary_lv_voltage_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu\n", (long long unsigned int)primary_lv_voltage_d->voltage_1, (long long unsigned int)primary_lv_voltage_d->voltage_2, (long long unsigned int)primary_lv_voltage_d->voltage_3, (long long unsigned int)primary_lv_voltage_d->voltage_4, (long long unsigned int)primary_lv_voltage_d->total_voltage);
    
    assert(memcmp(&primary_lv_voltage_s, primary_lv_voltage_d, sizeof(Primary_LV_VOLTAGE)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_LV_TEMPERATURE */
    printf("Primary_LV_TEMPERATURE:\n");
    uint8_t* buffer_primary_lv_temperature = (uint8_t*)malloc(sizeof(Primary_LV_TEMPERATURE));
    
    Primary_LV_TEMPERATURE primary_lv_temperature_s = { 120, 0, 23273 };
    serialize_Primary_LV_TEMPERATURE((long long unsigned int)primary_lv_temperature_s.dcdc_temperature, (long long unsigned int)primary_lv_temperature_s.battery_temperature, buffer_primary_lv_temperature, sizeof(Primary_LV_TEMPERATURE));
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)primary_lv_temperature_s.dcdc_temperature, (long long unsigned int)primary_lv_temperature_s.battery_temperature);
    
    Primary_LV_TEMPERATURE* primary_lv_temperature_d = (Primary_LV_TEMPERATURE*)malloc(sizeof(Primary_LV_TEMPERATURE));
    deserialize_Primary_LV_TEMPERATURE(buffer_primary_lv_temperature, sizeof(Primary_LV_TEMPERATURE), primary_lv_temperature_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)primary_lv_temperature_d->dcdc_temperature, (long long unsigned int)primary_lv_temperature_d->battery_temperature);
    
    assert(memcmp(&primary_lv_temperature_s, primary_lv_temperature_d, sizeof(Primary_LV_TEMPERATURE)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_COOLING_STATUS */
    printf("Primary_COOLING_STATUS:\n");
    uint8_t* buffer_primary_cooling_status = (uint8_t*)malloc(sizeof(Primary_COOLING_STATUS));
    
    Primary_COOLING_STATUS primary_cooling_status_s = { 15, 133, 176 };
    serialize_Primary_COOLING_STATUS((long long unsigned int)primary_cooling_status_s.hv_fan_speed, (long long unsigned int)primary_cooling_status_s.lv_fan_speed, (long long unsigned int)primary_cooling_status_s.pump_speed, buffer_primary_cooling_status, sizeof(Primary_COOLING_STATUS));
    printf("\tSerialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_cooling_status_s.hv_fan_speed, (long long unsigned int)primary_cooling_status_s.lv_fan_speed, (long long unsigned int)primary_cooling_status_s.pump_speed);
    
    Primary_COOLING_STATUS* primary_cooling_status_d = (Primary_COOLING_STATUS*)malloc(sizeof(Primary_COOLING_STATUS));
    deserialize_Primary_COOLING_STATUS(buffer_primary_cooling_status, sizeof(Primary_COOLING_STATUS), primary_cooling_status_d);
    printf("\tDeserialized\n\t%llu %llu %llu\n", (long long unsigned int)primary_cooling_status_d->hv_fan_speed, (long long unsigned int)primary_cooling_status_d->lv_fan_speed, (long long unsigned int)primary_cooling_status_d->pump_speed);
    
    assert(memcmp(&primary_cooling_status_s, primary_cooling_status_d, sizeof(Primary_COOLING_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_CELLS_VOLTAGE */
    printf("Primary_HV_CELLS_VOLTAGE:\n");
    uint8_t* buffer_primary_hv_cells_voltage = (uint8_t*)malloc(sizeof(Primary_HV_CELLS_VOLTAGE));
    
    Primary_HV_CELLS_VOLTAGE primary_hv_cells_voltage_s = { 235, 0, 28166, 57937, 58804 };
    serialize_Primary_HV_CELLS_VOLTAGE((long long unsigned int)primary_hv_cells_voltage_s.cell_index, (long long unsigned int)primary_hv_cells_voltage_s.voltage_0, (long long unsigned int)primary_hv_cells_voltage_s.voltage_1, (long long unsigned int)primary_hv_cells_voltage_s.voltage_2, buffer_primary_hv_cells_voltage, sizeof(Primary_HV_CELLS_VOLTAGE));
    printf("\tSerialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_voltage_s.cell_index, (long long unsigned int)primary_hv_cells_voltage_s.voltage_0, (long long unsigned int)primary_hv_cells_voltage_s.voltage_1, (long long unsigned int)primary_hv_cells_voltage_s.voltage_2);
    
    Primary_HV_CELLS_VOLTAGE* primary_hv_cells_voltage_d = (Primary_HV_CELLS_VOLTAGE*)malloc(sizeof(Primary_HV_CELLS_VOLTAGE));
    deserialize_Primary_HV_CELLS_VOLTAGE(buffer_primary_hv_cells_voltage, sizeof(Primary_HV_CELLS_VOLTAGE), primary_hv_cells_voltage_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_voltage_d->cell_index, (long long unsigned int)primary_hv_cells_voltage_d->voltage_0, (long long unsigned int)primary_hv_cells_voltage_d->voltage_1, (long long unsigned int)primary_hv_cells_voltage_d->voltage_2);
    
    assert(memcmp(&primary_hv_cells_voltage_s, primary_hv_cells_voltage_d, sizeof(Primary_HV_CELLS_VOLTAGE)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_CELLS_TEMP */
    printf("Primary_HV_CELLS_TEMP:\n");
    uint8_t* buffer_primary_hv_cells_temp = (uint8_t*)malloc(sizeof(Primary_HV_CELLS_TEMP));
    
    Primary_HV_CELLS_TEMP primary_hv_cells_temp_s = { 9, 58, 64, 202, 142, 75, 158, 158 };
    serialize_Primary_HV_CELLS_TEMP((long long unsigned int)primary_hv_cells_temp_s.cell_index, (long long unsigned int)primary_hv_cells_temp_s.temp_0, (long long unsigned int)primary_hv_cells_temp_s.temp_1, (long long unsigned int)primary_hv_cells_temp_s.temp_2, (long long unsigned int)primary_hv_cells_temp_s.temp_3, (long long unsigned int)primary_hv_cells_temp_s.temp_4, (long long unsigned int)primary_hv_cells_temp_s.temp_5, (long long unsigned int)primary_hv_cells_temp_s.temp_6, buffer_primary_hv_cells_temp, sizeof(Primary_HV_CELLS_TEMP));
    printf("\tSerialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_temp_s.cell_index, (long long unsigned int)primary_hv_cells_temp_s.temp_0, (long long unsigned int)primary_hv_cells_temp_s.temp_1, (long long unsigned int)primary_hv_cells_temp_s.temp_2, (long long unsigned int)primary_hv_cells_temp_s.temp_3, (long long unsigned int)primary_hv_cells_temp_s.temp_4, (long long unsigned int)primary_hv_cells_temp_s.temp_5, (long long unsigned int)primary_hv_cells_temp_s.temp_6);
    
    Primary_HV_CELLS_TEMP* primary_hv_cells_temp_d = (Primary_HV_CELLS_TEMP*)malloc(sizeof(Primary_HV_CELLS_TEMP));
    deserialize_Primary_HV_CELLS_TEMP(buffer_primary_hv_cells_temp, sizeof(Primary_HV_CELLS_TEMP), primary_hv_cells_temp_d);
    printf("\tDeserialized\n\t%llu %llu %llu %llu %llu %llu %llu %llu\n", (long long unsigned int)primary_hv_cells_temp_d->cell_index, (long long unsigned int)primary_hv_cells_temp_d->temp_0, (long long unsigned int)primary_hv_cells_temp_d->temp_1, (long long unsigned int)primary_hv_cells_temp_d->temp_2, (long long unsigned int)primary_hv_cells_temp_d->temp_3, (long long unsigned int)primary_hv_cells_temp_d->temp_4, (long long unsigned int)primary_hv_cells_temp_d->temp_5, (long long unsigned int)primary_hv_cells_temp_d->temp_6);
    
    assert(memcmp(&primary_hv_cells_temp_s, primary_hv_cells_temp_d, sizeof(Primary_HV_CELLS_TEMP)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_SET_CHG_POWER */
    printf("Primary_SET_CHG_POWER:\n");
    uint8_t* buffer_primary_set_chg_power = (uint8_t*)malloc(sizeof(Primary_SET_CHG_POWER));
    
    Primary_SET_CHG_POWER primary_set_chg_power_s = { 52025, 37652 };
    serialize_Primary_SET_CHG_POWER((long long unsigned int)primary_set_chg_power_s.current, (long long unsigned int)primary_set_chg_power_s.voltage, buffer_primary_set_chg_power, sizeof(Primary_SET_CHG_POWER));
    printf("\tSerialized\n\t%llu %llu\n", (long long unsigned int)primary_set_chg_power_s.current, (long long unsigned int)primary_set_chg_power_s.voltage);
    
    Primary_SET_CHG_POWER* primary_set_chg_power_d = (Primary_SET_CHG_POWER*)malloc(sizeof(Primary_SET_CHG_POWER));
    deserialize_Primary_SET_CHG_POWER(buffer_primary_set_chg_power, sizeof(Primary_SET_CHG_POWER), primary_set_chg_power_d);
    printf("\tDeserialized\n\t%llu %llu\n", (long long unsigned int)primary_set_chg_power_d->current, (long long unsigned int)primary_set_chg_power_d->voltage);
    
    assert(memcmp(&primary_set_chg_power_s, primary_set_chg_power_d, sizeof(Primary_SET_CHG_POWER)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_CHG_STATUS */
    printf("Primary_CHG_STATUS:\n");
    uint8_t* buffer_primary_chg_status = (uint8_t*)malloc(sizeof(Primary_CHG_STATUS));
    
    Primary_CHG_STATUS primary_chg_status_s = { -36 };
    serialize_Primary_CHG_STATUS((long long int)primary_chg_status_s.status, buffer_primary_chg_status, sizeof(Primary_CHG_STATUS));
    printf("\tSerialized\n\t%lld\n", (long long int)primary_chg_status_s.status);
    
    Primary_CHG_STATUS* primary_chg_status_d = (Primary_CHG_STATUS*)malloc(sizeof(Primary_CHG_STATUS));
    deserialize_Primary_CHG_STATUS(buffer_primary_chg_status, sizeof(Primary_CHG_STATUS), primary_chg_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_chg_status_d->status);
    
    assert(memcmp(&primary_chg_status_s, primary_chg_status_d, sizeof(Primary_CHG_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_SET_CHG_STATUS */
    printf("Primary_SET_CHG_STATUS:\n");
    uint8_t* buffer_primary_set_chg_status = (uint8_t*)malloc(sizeof(Primary_SET_CHG_STATUS));
    
    Primary_SET_CHG_STATUS primary_set_chg_status_s = { -33 };
    serialize_Primary_SET_CHG_STATUS((long long int)primary_set_chg_status_s.status, buffer_primary_set_chg_status, sizeof(Primary_SET_CHG_STATUS));
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_chg_status_s.status);
    
    Primary_SET_CHG_STATUS* primary_set_chg_status_d = (Primary_SET_CHG_STATUS*)malloc(sizeof(Primary_SET_CHG_STATUS));
    deserialize_Primary_SET_CHG_STATUS(buffer_primary_set_chg_status, sizeof(Primary_SET_CHG_STATUS), primary_set_chg_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_chg_status_d->status);
    
    assert(memcmp(&primary_set_chg_status_s, primary_set_chg_status_d, sizeof(Primary_SET_CHG_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_CHG_SETTINGS */
    printf("Primary_CHG_SETTINGS:\n");
    uint8_t* buffer_primary_chg_settings = (uint8_t*)malloc(sizeof(Primary_CHG_SETTINGS));
    
    Primary_CHG_SETTINGS primary_chg_settings_s = { 235 };
    serialize_Primary_CHG_SETTINGS((long long unsigned int)primary_chg_settings_s.v_cutoff, buffer_primary_chg_settings, sizeof(Primary_CHG_SETTINGS));
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_chg_settings_s.v_cutoff);
    
    Primary_CHG_SETTINGS* primary_chg_settings_d = (Primary_CHG_SETTINGS*)malloc(sizeof(Primary_CHG_SETTINGS));
    deserialize_Primary_CHG_SETTINGS(buffer_primary_chg_settings, sizeof(Primary_CHG_SETTINGS), primary_chg_settings_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_chg_settings_d->v_cutoff);
    
    assert(memcmp(&primary_chg_settings_s, primary_chg_settings_d, sizeof(Primary_CHG_SETTINGS)) == 0);
    puts("SUCCESS!\n");
        
}