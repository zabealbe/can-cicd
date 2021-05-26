#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "Primary.h"

int main() {

/* Primary_TIMESTAMP */
    printf("Primary_TIMESTAMP:\n");
    uint8_t* buffer_primary_timestamp = (uint8_t*)malloc(sizeof(Primary_TIMESTAMP));
    
    Primary_TIMESTAMP primary_timestamp_s = { 2262243725 };
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
    
    Primary_TLM_STATUS primary_tlm_status_s = { 50, 112, 31, 250 };
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
    
    Primary_CAR_STATUS primary_car_status_s = { -32, -98, -91 };
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
    
    Primary_SET_TLM_STATUS primary_set_tlm_status_s = { 86, -30, 61, 89 };
    serialize_Primary_SET_TLM_STATUS(buffer_primary_set_tlm_status, primary_set_tlm_status_s.tlm_status, primary_set_tlm_status_s.race_type, primary_set_tlm_status_s.driver, primary_set_tlm_status_s.circuit);
    printf("\tSerialized\n\t%lld %lld %llu %llu\n", (long long int)primary_set_tlm_status_s.tlm_status, (long long int)primary_set_tlm_status_s.race_type, (long long unsigned int)primary_set_tlm_status_s.driver, (long long unsigned int)primary_set_tlm_status_s.circuit);
    
    Primary_SET_TLM_STATUS* primary_set_tlm_status_d = (Primary_SET_TLM_STATUS*)malloc(sizeof(Primary_SET_TLM_STATUS));
    deserialize_Primary_SET_TLM_STATUS(buffer_primary_set_tlm_status, primary_set_tlm_status_d);
    printf("\tDeserialized\n\t%lld %lld %llu %llu\n", (long long int)primary_set_tlm_status_d->tlm_status, (long long int)primary_set_tlm_status_d->race_type, (long long unsigned int)primary_set_tlm_status_d->driver, (long long unsigned int)primary_set_tlm_status_d->circuit);
    
    assert(memcmp(&primary_set_tlm_status_s, primary_set_tlm_status_d, sizeof(Primary_SET_TLM_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_VOLTAGE */
    printf("Primary_HV_VOLTAGE:\n");
    uint8_t* buffer_primary_hv_voltage = (uint8_t*)malloc(sizeof(Primary_HV_VOLTAGE));
    
    Primary_HV_VOLTAGE primary_hv_voltage_s = { 7334, 44861, 23908, 3459 };
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
    
    Primary_HV_CURRENT primary_hv_current_s = { 7176, -84 };
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
    
    Primary_HV_TEMP primary_hv_temp_s = { 5276, 9469, 5698 };
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
    
    Primary_HV_ERRORS primary_hv_errors_s = { {41, 32}, {106, 38} };
    serialize_Primary_HV_ERRORS(buffer_primary_hv_errors, primary_hv_errors_s.warnings, primary_hv_errors_s.errors);
    printf("\tSerialized\n\t%hhx.%hhx %hhx.%hhx\n", (char)primary_hv_errors_s.warnings[0], (char)primary_hv_errors_s.warnings[1], (char)primary_hv_errors_s.errors[0], (char)primary_hv_errors_s.errors[1]);
    
    Primary_HV_ERRORS* primary_hv_errors_d = (Primary_HV_ERRORS*)malloc(sizeof(Primary_HV_ERRORS));
    deserialize_Primary_HV_ERRORS(buffer_primary_hv_errors, primary_hv_errors_d);
    printf("\tDeserialized\n\t%hhx.%hhx %hhx.%hhx\n", (char)primary_hv_errors_d->warnings[0], (char)primary_hv_errors_d->warnings[1], (char)primary_hv_errors_d->errors[0], (char)primary_hv_errors_d->errors[1]);
    
    assert(memcmp(&primary_hv_errors_s, primary_hv_errors_d, sizeof(Primary_HV_ERRORS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_TS_STATUS */
    printf("Primary_TS_STATUS:\n");
    uint8_t* buffer_primary_ts_status = (uint8_t*)malloc(sizeof(Primary_TS_STATUS));
    
    Primary_TS_STATUS primary_ts_status_s = { 107 };
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
    
    Primary_SET_TS_STATUS primary_set_ts_status_s = { -39 };
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
    
    Primary_STEER_STATUS primary_steer_status_s = { 9, -24, 0 };
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
    
    Primary_SET_CAR_STATUS primary_set_car_status_s = { -91 };
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
    
    Primary_LV_CURRENT primary_lv_current_s = { 95 };
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
    
    Primary_LV_VOLTAGE primary_lv_voltage_s = { 190, 126, 21, 63, 45654 };
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
    
    Primary_LV_TEMPERATURE primary_lv_temperature_s = { 211, 0, 40558 };
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
    
    Primary_COOLING_STATUS primary_cooling_status_s = { 137, 253, 148 };
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
    
    Primary_HV_CELLS_VOLTAGE primary_hv_cells_voltage_s = { 87, 0, 45995, 11368, 54084 };
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
    
    Primary_HV_CELLS_TEMP primary_hv_cells_temp_s = { 207, 64, 205, 250, 2, 3, 23, 198 };
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
    
    Primary_SET_CHG_POWER primary_set_chg_power_s = { 36578, 48340 };
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
    
    Primary_CHG_STATUS primary_chg_status_s = { -121 };
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
    
    Primary_SET_CHG_STATUS primary_set_chg_status_s = { 91 };
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
    
    Primary_CHG_SETTINGS primary_chg_settings_s = { 142 };
    serialize_Primary_CHG_SETTINGS(buffer_primary_chg_settings, primary_chg_settings_s.v_cutoff);
    printf("\tSerialized\n\t%llu\n", (long long unsigned int)primary_chg_settings_s.v_cutoff);
    
    Primary_CHG_SETTINGS* primary_chg_settings_d = (Primary_CHG_SETTINGS*)malloc(sizeof(Primary_CHG_SETTINGS));
    deserialize_Primary_CHG_SETTINGS(buffer_primary_chg_settings, primary_chg_settings_d);
    printf("\tDeserialized\n\t%llu\n", (long long unsigned int)primary_chg_settings_d->v_cutoff);
    
    assert(memcmp(&primary_chg_settings_s, primary_chg_settings_d, sizeof(Primary_CHG_SETTINGS)) == 0);
    puts("SUCCESS!\n");
        
}