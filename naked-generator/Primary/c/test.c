#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "Primary.h"

int main() {

/* Primary_TLM_STATUS */
    printf("Primary_TLM_STATUS:\n");
    uint8_t* buffer_primary_tlm_status = (uint8_t*)malloc(sizeof(Primary_TLM_STATUS));
    
    Primary_TLM_STATUS primary_tlm_status_s = { 123, -80, 222, 15 };
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
    
    Primary_CAR_STATUS primary_car_status_s = { -103, -40, 22 };
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
    
    Primary_SET_TLM_STATUS primary_set_tlm_status_s = { -1, -67, 86, 192 };
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
    
    Primary_HV_VOLTAGE primary_hv_voltage_s = { 23658, 10541, 7954, 19115 };
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
    
    Primary_HV_CURRENT primary_hv_current_s = { 11, 0, 24313 };
    serialize_Primary_HV_CURRENT((long long int)primary_hv_current_s.power, (long long unsigned int)primary_hv_current_s.current, buffer_primary_hv_current, sizeof(Primary_HV_CURRENT));
    printf("\tSerialized\n\t%lld %llu\n", (long long int)primary_hv_current_s.power, (long long unsigned int)primary_hv_current_s.current);
    
    Primary_HV_CURRENT* primary_hv_current_d = (Primary_HV_CURRENT*)malloc(sizeof(Primary_HV_CURRENT));
    deserialize_Primary_HV_CURRENT(buffer_primary_hv_current, sizeof(Primary_HV_CURRENT), primary_hv_current_d);
    printf("\tDeserialized\n\t%lld %llu\n", (long long int)primary_hv_current_d->power, (long long unsigned int)primary_hv_current_d->current);
    
    assert(memcmp(&primary_hv_current_s, primary_hv_current_d, sizeof(Primary_HV_CURRENT)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_HV_TEMP */
    printf("Primary_HV_TEMP:\n");
    uint8_t* buffer_primary_hv_temp = (uint8_t*)malloc(sizeof(Primary_HV_TEMP));
    
    Primary_HV_TEMP primary_hv_temp_s = { 9476, 23047, 46070 };
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
    
    Primary_HV_ERROR primary_hv_error_s = { 204, 119, 198 };
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
    
    Primary_TS_STATUS primary_ts_status_s = { 82 };
    serialize_Primary_TS_STATUS((long long int)primary_ts_status_s.ts_status, buffer_primary_ts_status, sizeof(Primary_TS_STATUS));
    printf("\tSerialized\n\t%lld\n", (long long int)primary_ts_status_s.ts_status);
    
    Primary_TS_STATUS* primary_ts_status_d = (Primary_TS_STATUS*)malloc(sizeof(Primary_TS_STATUS));
    deserialize_Primary_TS_STATUS(buffer_primary_ts_status, sizeof(Primary_TS_STATUS), primary_ts_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_ts_status_d->ts_status);
    
    assert(memcmp(&primary_ts_status_s, primary_ts_status_d, sizeof(Primary_TS_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_STEER_STATUS */
    printf("Primary_STEER_STATUS:\n");
    uint8_t* buffer_primary_steer_status = (uint8_t*)malloc(sizeof(Primary_STEER_STATUS));
    
    Primary_STEER_STATUS primary_steer_status_s = { -45, -96, 0 };
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
    
    Primary_SET_CAR_STATUS primary_set_car_status_s = { -49 };
    serialize_Primary_SET_CAR_STATUS((long long int)primary_set_car_status_s.car_status_set, buffer_primary_set_car_status, sizeof(Primary_SET_CAR_STATUS));
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_car_status_s.car_status_set);
    
    Primary_SET_CAR_STATUS* primary_set_car_status_d = (Primary_SET_CAR_STATUS*)malloc(sizeof(Primary_SET_CAR_STATUS));
    deserialize_Primary_SET_CAR_STATUS(buffer_primary_set_car_status, sizeof(Primary_SET_CAR_STATUS), primary_set_car_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_car_status_d->car_status_set);
    
    assert(memcmp(&primary_set_car_status_s, primary_set_car_status_d, sizeof(Primary_SET_CAR_STATUS)) == 0);
    puts("SUCCESS!\n");
        

/* Primary_SET_TS_STATUS */
    printf("Primary_SET_TS_STATUS:\n");
    uint8_t* buffer_primary_set_ts_status = (uint8_t*)malloc(sizeof(Primary_SET_TS_STATUS));
    
    Primary_SET_TS_STATUS primary_set_ts_status_s = { 70 };
    serialize_Primary_SET_TS_STATUS((long long int)primary_set_ts_status_s.ts_status_set, buffer_primary_set_ts_status, sizeof(Primary_SET_TS_STATUS));
    printf("\tSerialized\n\t%lld\n", (long long int)primary_set_ts_status_s.ts_status_set);
    
    Primary_SET_TS_STATUS* primary_set_ts_status_d = (Primary_SET_TS_STATUS*)malloc(sizeof(Primary_SET_TS_STATUS));
    deserialize_Primary_SET_TS_STATUS(buffer_primary_set_ts_status, sizeof(Primary_SET_TS_STATUS), primary_set_ts_status_d);
    printf("\tDeserialized\n\t%lld\n", (long long int)primary_set_ts_status_d->ts_status_set);
    
    assert(memcmp(&primary_set_ts_status_s, primary_set_ts_status_d, sizeof(Primary_SET_TS_STATUS)) == 0);
    puts("SUCCESS!\n");
        
}