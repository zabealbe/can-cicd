#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "Primary.h"

/* Primary_TIMESTAMP */
void serialize_Primary_TIMESTAMP(uint8_t* buffer, size_t buf_len, uint32_t timestamp) {
    Primary_TIMESTAMP primary_timestamp = { timestamp };
	assert(buf_len >= sizeof(Primary_TIMESTAMP));
	memcpy(buffer, &primary_timestamp, sizeof(Primary_TIMESTAMP));
} 
void deserialize_Primary_TIMESTAMP(uint8_t* buffer, size_t buf_len, Primary_TIMESTAMP* primary_timestamp) {
	assert(buf_len >= sizeof(Primary_TIMESTAMP));
	memcpy(primary_timestamp, buffer, sizeof(Primary_TIMESTAMP));
}
/* Primary_TLM_STATUS */
void serialize_Primary_TLM_STATUS(uint8_t* buffer, size_t buf_len, Primary_Tlm_Status tlm_status, Primary_Race_Type race_type, uint8_t driver, uint8_t circuit) {
    Primary_TLM_STATUS primary_tlm_status = { tlm_status, race_type, driver, circuit };
	assert(buf_len >= sizeof(Primary_TLM_STATUS));
	memcpy(buffer, &primary_tlm_status, sizeof(Primary_TLM_STATUS));
} 
void deserialize_Primary_TLM_STATUS(uint8_t* buffer, size_t buf_len, Primary_TLM_STATUS* primary_tlm_status) {
	assert(buf_len >= sizeof(Primary_TLM_STATUS));
	memcpy(primary_tlm_status, buffer, sizeof(Primary_TLM_STATUS));
}
/* Primary_CAR_STATUS */
void serialize_Primary_CAR_STATUS(uint8_t* buffer, size_t buf_len, Primary_Car_Status car_status, Primary_Inverter_Status inverter_l, Primary_Inverter_Status inverter_r) {
    Primary_CAR_STATUS primary_car_status = { car_status, inverter_l, inverter_r };
	assert(buf_len >= sizeof(Primary_CAR_STATUS));
	memcpy(buffer, &primary_car_status, sizeof(Primary_CAR_STATUS));
} 
void deserialize_Primary_CAR_STATUS(uint8_t* buffer, size_t buf_len, Primary_CAR_STATUS* primary_car_status) {
	assert(buf_len >= sizeof(Primary_CAR_STATUS));
	memcpy(primary_car_status, buffer, sizeof(Primary_CAR_STATUS));
}
/* Primary_SET_TLM_STATUS */
void serialize_Primary_SET_TLM_STATUS(uint8_t* buffer, size_t buf_len, Primary_Tlm_Status tlm_status, Primary_Race_Type race_type, uint8_t driver, uint8_t circuit) {
    Primary_SET_TLM_STATUS primary_set_tlm_status = { tlm_status, race_type, driver, circuit };
	assert(buf_len >= sizeof(Primary_SET_TLM_STATUS));
	memcpy(buffer, &primary_set_tlm_status, sizeof(Primary_SET_TLM_STATUS));
} 
void deserialize_Primary_SET_TLM_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_TLM_STATUS* primary_set_tlm_status) {
	assert(buf_len >= sizeof(Primary_SET_TLM_STATUS));
	memcpy(primary_set_tlm_status, buffer, sizeof(Primary_SET_TLM_STATUS));
}
/* Primary_HV_VOLTAGE */
void serialize_Primary_HV_VOLTAGE(uint8_t* buffer, size_t buf_len, uint16_t pack_voltage, uint16_t bus_voltage, uint16_t max_cell_voltage, uint16_t min_cell_voltage) {
    Primary_HV_VOLTAGE primary_hv_voltage = { pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage };
	assert(buf_len >= sizeof(Primary_HV_VOLTAGE));
	memcpy(buffer, &primary_hv_voltage, sizeof(Primary_HV_VOLTAGE));
} 
void deserialize_Primary_HV_VOLTAGE(uint8_t* buffer, size_t buf_len, Primary_HV_VOLTAGE* primary_hv_voltage) {
	assert(buf_len >= sizeof(Primary_HV_VOLTAGE));
	memcpy(primary_hv_voltage, buffer, sizeof(Primary_HV_VOLTAGE));
}
/* Primary_HV_CURRENT */
void serialize_Primary_HV_CURRENT(uint8_t* buffer, size_t buf_len, uint16_t current, int16_t power) {
    Primary_HV_CURRENT primary_hv_current = { current, power };
	assert(buf_len >= sizeof(Primary_HV_CURRENT));
	memcpy(buffer, &primary_hv_current, sizeof(Primary_HV_CURRENT));
} 
void deserialize_Primary_HV_CURRENT(uint8_t* buffer, size_t buf_len, Primary_HV_CURRENT* primary_hv_current) {
	assert(buf_len >= sizeof(Primary_HV_CURRENT));
	memcpy(primary_hv_current, buffer, sizeof(Primary_HV_CURRENT));
}
/* Primary_HV_TEMP */
void serialize_Primary_HV_TEMP(uint8_t* buffer, size_t buf_len, uint16_t average_temp, uint16_t max_temp, uint16_t min_temp) {
    Primary_HV_TEMP primary_hv_temp = { average_temp, max_temp, min_temp };
	assert(buf_len >= sizeof(Primary_HV_TEMP));
	memcpy(buffer, &primary_hv_temp, sizeof(Primary_HV_TEMP));
} 
void deserialize_Primary_HV_TEMP(uint8_t* buffer, size_t buf_len, Primary_HV_TEMP* primary_hv_temp) {
	assert(buf_len >= sizeof(Primary_HV_TEMP));
	memcpy(primary_hv_temp, buffer, sizeof(Primary_HV_TEMP));
}
/* Primary_HV_ERRORS */
void serialize_Primary_HV_ERRORS(uint8_t* buffer, size_t buf_len, Primary_Hv_Errors warnings, Primary_Hv_Warnings errors) {
    Primary_HV_ERRORS primary_hv_errors = { {warnings[0]}, {errors[0], errors[1]} };
	assert(buf_len >= sizeof(Primary_HV_ERRORS));
	memcpy(buffer, &primary_hv_errors, sizeof(Primary_HV_ERRORS));
} 
void deserialize_Primary_HV_ERRORS(uint8_t* buffer, size_t buf_len, Primary_HV_ERRORS* primary_hv_errors) {
	assert(buf_len >= sizeof(Primary_HV_ERRORS));
	memcpy(primary_hv_errors, buffer, sizeof(Primary_HV_ERRORS));
}
/* Primary_TS_STATUS */
void serialize_Primary_TS_STATUS(uint8_t* buffer, size_t buf_len, Primary_Ts_Status ts_status) {
    Primary_TS_STATUS primary_ts_status = { ts_status };
	assert(buf_len >= sizeof(Primary_TS_STATUS));
	memcpy(buffer, &primary_ts_status, sizeof(Primary_TS_STATUS));
} 
void deserialize_Primary_TS_STATUS(uint8_t* buffer, size_t buf_len, Primary_TS_STATUS* primary_ts_status) {
	assert(buf_len >= sizeof(Primary_TS_STATUS));
	memcpy(primary_ts_status, buffer, sizeof(Primary_TS_STATUS));
}
/* Primary_SET_TS_STATUS */
void serialize_Primary_SET_TS_STATUS(uint8_t* buffer, size_t buf_len, Primary_Ts_Status_Set ts_status_set) {
    Primary_SET_TS_STATUS primary_set_ts_status = { ts_status_set };
	assert(buf_len >= sizeof(Primary_SET_TS_STATUS));
	memcpy(buffer, &primary_set_ts_status, sizeof(Primary_SET_TS_STATUS));
} 
void deserialize_Primary_SET_TS_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_TS_STATUS* primary_set_ts_status) {
	assert(buf_len >= sizeof(Primary_SET_TS_STATUS));
	memcpy(primary_set_ts_status, buffer, sizeof(Primary_SET_TS_STATUS));
}
/* Primary_STEER_STATUS */
void serialize_Primary_STEER_STATUS(uint8_t* buffer, size_t buf_len, Primary_Traction_Control traction_control, Primary_Map map, bool radio_on) {
    Primary_STEER_STATUS primary_steer_status = { traction_control, map, radio_on };
	assert(buf_len >= sizeof(Primary_STEER_STATUS));
	memcpy(buffer, &primary_steer_status, sizeof(Primary_STEER_STATUS));
} 
void deserialize_Primary_STEER_STATUS(uint8_t* buffer, size_t buf_len, Primary_STEER_STATUS* primary_steer_status) {
	assert(buf_len >= sizeof(Primary_STEER_STATUS));
	memcpy(primary_steer_status, buffer, sizeof(Primary_STEER_STATUS));
}
/* Primary_SET_CAR_STATUS */
void serialize_Primary_SET_CAR_STATUS(uint8_t* buffer, size_t buf_len, Primary_Car_Status_Set car_status_set) {
    Primary_SET_CAR_STATUS primary_set_car_status = { car_status_set };
	assert(buf_len >= sizeof(Primary_SET_CAR_STATUS));
	memcpy(buffer, &primary_set_car_status, sizeof(Primary_SET_CAR_STATUS));
} 
void deserialize_Primary_SET_CAR_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_CAR_STATUS* primary_set_car_status) {
	assert(buf_len >= sizeof(Primary_SET_CAR_STATUS));
	memcpy(primary_set_car_status, buffer, sizeof(Primary_SET_CAR_STATUS));
}
/* Primary_LV_CURRENT */
void serialize_Primary_LV_CURRENT(uint8_t* buffer, size_t buf_len, uint8_t current) {
    Primary_LV_CURRENT primary_lv_current = { current };
	assert(buf_len >= sizeof(Primary_LV_CURRENT));
	memcpy(buffer, &primary_lv_current, sizeof(Primary_LV_CURRENT));
} 
void deserialize_Primary_LV_CURRENT(uint8_t* buffer, size_t buf_len, Primary_LV_CURRENT* primary_lv_current) {
	assert(buf_len >= sizeof(Primary_LV_CURRENT));
	memcpy(primary_lv_current, buffer, sizeof(Primary_LV_CURRENT));
}
/* Primary_LV_VOLTAGE */
void serialize_Primary_LV_VOLTAGE(uint8_t* buffer, size_t buf_len, uint8_t voltage_1, uint8_t voltage_2, uint8_t voltage_3, uint8_t voltage_4, uint16_t total_voltage) {
    Primary_LV_VOLTAGE primary_lv_voltage = { voltage_1, voltage_2, voltage_3, voltage_4, total_voltage };
	assert(buf_len >= sizeof(Primary_LV_VOLTAGE));
	memcpy(buffer, &primary_lv_voltage, sizeof(Primary_LV_VOLTAGE));
} 
void deserialize_Primary_LV_VOLTAGE(uint8_t* buffer, size_t buf_len, Primary_LV_VOLTAGE* primary_lv_voltage) {
	assert(buf_len >= sizeof(Primary_LV_VOLTAGE));
	memcpy(primary_lv_voltage, buffer, sizeof(Primary_LV_VOLTAGE));
}
/* Primary_LV_TEMPERATURE */
void serialize_Primary_LV_TEMPERATURE(uint8_t* buffer, size_t buf_len, uint8_t dcdc_temperature, uint16_t battery_temperature) {
    Primary_LV_TEMPERATURE primary_lv_temperature = { dcdc_temperature, 0x00, battery_temperature };
	assert(buf_len >= sizeof(Primary_LV_TEMPERATURE));
	memcpy(buffer, &primary_lv_temperature, sizeof(Primary_LV_TEMPERATURE));
} 
void deserialize_Primary_LV_TEMPERATURE(uint8_t* buffer, size_t buf_len, Primary_LV_TEMPERATURE* primary_lv_temperature) {
	assert(buf_len >= sizeof(Primary_LV_TEMPERATURE));
	memcpy(primary_lv_temperature, buffer, sizeof(Primary_LV_TEMPERATURE));
}
/* Primary_COOLING_STATUS */
void serialize_Primary_COOLING_STATUS(uint8_t* buffer, size_t buf_len, uint8_t hv_fan_speed, uint8_t lv_fan_speed, uint8_t pump_speed) {
    Primary_COOLING_STATUS primary_cooling_status = { hv_fan_speed, lv_fan_speed, pump_speed };
	assert(buf_len >= sizeof(Primary_COOLING_STATUS));
	memcpy(buffer, &primary_cooling_status, sizeof(Primary_COOLING_STATUS));
} 
void deserialize_Primary_COOLING_STATUS(uint8_t* buffer, size_t buf_len, Primary_COOLING_STATUS* primary_cooling_status) {
	assert(buf_len >= sizeof(Primary_COOLING_STATUS));
	memcpy(primary_cooling_status, buffer, sizeof(Primary_COOLING_STATUS));
}
/* Primary_HV_CELLS_VOLTAGE */
void serialize_Primary_HV_CELLS_VOLTAGE(uint8_t* buffer, size_t buf_len, uint8_t cell_index, uint16_t voltage_0, uint16_t voltage_1, uint16_t voltage_2) {
    Primary_HV_CELLS_VOLTAGE primary_hv_cells_voltage = { cell_index, 0x00, voltage_0, voltage_1, voltage_2 };
	assert(buf_len >= sizeof(Primary_HV_CELLS_VOLTAGE));
	memcpy(buffer, &primary_hv_cells_voltage, sizeof(Primary_HV_CELLS_VOLTAGE));
} 
void deserialize_Primary_HV_CELLS_VOLTAGE(uint8_t* buffer, size_t buf_len, Primary_HV_CELLS_VOLTAGE* primary_hv_cells_voltage) {
	assert(buf_len >= sizeof(Primary_HV_CELLS_VOLTAGE));
	memcpy(primary_hv_cells_voltage, buffer, sizeof(Primary_HV_CELLS_VOLTAGE));
}
/* Primary_HV_CELLS_TEMP */
void serialize_Primary_HV_CELLS_TEMP(uint8_t* buffer, size_t buf_len, uint8_t cell_index, uint8_t temp_0, uint8_t temp_1, uint8_t temp_2, uint8_t temp_3, uint8_t temp_4, uint8_t temp_5, uint8_t temp_6) {
    Primary_HV_CELLS_TEMP primary_hv_cells_temp = { cell_index, temp_0, temp_1, temp_2, temp_3, temp_4, temp_5, temp_6 };
	assert(buf_len >= sizeof(Primary_HV_CELLS_TEMP));
	memcpy(buffer, &primary_hv_cells_temp, sizeof(Primary_HV_CELLS_TEMP));
} 
void deserialize_Primary_HV_CELLS_TEMP(uint8_t* buffer, size_t buf_len, Primary_HV_CELLS_TEMP* primary_hv_cells_temp) {
	assert(buf_len >= sizeof(Primary_HV_CELLS_TEMP));
	memcpy(primary_hv_cells_temp, buffer, sizeof(Primary_HV_CELLS_TEMP));
}
/* Primary_SET_CHG_POWER */
void serialize_Primary_SET_CHG_POWER(uint8_t* buffer, size_t buf_len, uint16_t current, uint16_t voltage) {
    Primary_SET_CHG_POWER primary_set_chg_power = { current, voltage };
	assert(buf_len >= sizeof(Primary_SET_CHG_POWER));
	memcpy(buffer, &primary_set_chg_power, sizeof(Primary_SET_CHG_POWER));
} 
void deserialize_Primary_SET_CHG_POWER(uint8_t* buffer, size_t buf_len, Primary_SET_CHG_POWER* primary_set_chg_power) {
	assert(buf_len >= sizeof(Primary_SET_CHG_POWER));
	memcpy(primary_set_chg_power, buffer, sizeof(Primary_SET_CHG_POWER));
}
/* Primary_CHG_STATUS */
void serialize_Primary_CHG_STATUS(uint8_t* buffer, size_t buf_len, Primary_Status status) {
    Primary_CHG_STATUS primary_chg_status = { status };
	assert(buf_len >= sizeof(Primary_CHG_STATUS));
	memcpy(buffer, &primary_chg_status, sizeof(Primary_CHG_STATUS));
} 
void deserialize_Primary_CHG_STATUS(uint8_t* buffer, size_t buf_len, Primary_CHG_STATUS* primary_chg_status) {
	assert(buf_len >= sizeof(Primary_CHG_STATUS));
	memcpy(primary_chg_status, buffer, sizeof(Primary_CHG_STATUS));
}
/* Primary_SET_CHG_STATUS */
void serialize_Primary_SET_CHG_STATUS(uint8_t* buffer, size_t buf_len, Primary_Status status) {
    Primary_SET_CHG_STATUS primary_set_chg_status = { status };
	assert(buf_len >= sizeof(Primary_SET_CHG_STATUS));
	memcpy(buffer, &primary_set_chg_status, sizeof(Primary_SET_CHG_STATUS));
} 
void deserialize_Primary_SET_CHG_STATUS(uint8_t* buffer, size_t buf_len, Primary_SET_CHG_STATUS* primary_set_chg_status) {
	assert(buf_len >= sizeof(Primary_SET_CHG_STATUS));
	memcpy(primary_set_chg_status, buffer, sizeof(Primary_SET_CHG_STATUS));
}
/* Primary_CHG_SETTINGS */
void serialize_Primary_CHG_SETTINGS(uint8_t* buffer, size_t buf_len, uint8_t v_cutoff) {
    Primary_CHG_SETTINGS primary_chg_settings = { v_cutoff };
	assert(buf_len >= sizeof(Primary_CHG_SETTINGS));
	memcpy(buffer, &primary_chg_settings, sizeof(Primary_CHG_SETTINGS));
} 
void deserialize_Primary_CHG_SETTINGS(uint8_t* buffer, size_t buf_len, Primary_CHG_SETTINGS* primary_chg_settings) {
	assert(buf_len >= sizeof(Primary_CHG_SETTINGS));
	memcpy(primary_chg_settings, buffer, sizeof(Primary_CHG_SETTINGS));
}
