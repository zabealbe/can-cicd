#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "Primary.h"

/* Primary_SET_ACCELERATOR_RANGE */
size_t serialize_Primary_SET_ACCELERATOR_RANGE(uint8_t* buffer, Primary_Sync_State sync_state) {
    Primary_SET_ACCELERATOR_RANGE primary_set_accelerator_range = { sync_state };
	// assert(buf_len >= sizeof(Primary_SET_ACCELERATOR_RANGE));
	memcpy(buffer, &primary_set_accelerator_range, sizeof(Primary_SET_ACCELERATOR_RANGE));
    return sizeof(Primary_SET_ACCELERATOR_RANGE);
} 
size_t deserialize_Primary_SET_ACCELERATOR_RANGE(uint8_t* buffer, Primary_SET_ACCELERATOR_RANGE* primary_set_accelerator_range) {
	// assert(buf_len >= sizeof(Primary_SET_ACCELERATOR_RANGE));
	memcpy(primary_set_accelerator_range, buffer, sizeof(Primary_SET_ACCELERATOR_RANGE));
    return sizeof(Primary_SET_ACCELERATOR_RANGE);
}
/* Primary_PEDALS_ADC_RANGES */
size_t serialize_Primary_PEDALS_ADC_RANGES(uint8_t* buffer, uint16_t accel1_raw_adc_min, uint16_t accel1_raw_adc_max, uint16_t accel2_raw_adc_min, uint16_t accel2_raw_adc_max) {
    Primary_PEDALS_ADC_RANGES primary_pedals_adc_ranges = { accel1_raw_adc_min, accel1_raw_adc_max, accel2_raw_adc_min, accel2_raw_adc_max };
	// assert(buf_len >= sizeof(Primary_PEDALS_ADC_RANGES));
	memcpy(buffer, &primary_pedals_adc_ranges, sizeof(Primary_PEDALS_ADC_RANGES));
    return sizeof(Primary_PEDALS_ADC_RANGES);
} 
size_t deserialize_Primary_PEDALS_ADC_RANGES(uint8_t* buffer, Primary_PEDALS_ADC_RANGES* primary_pedals_adc_ranges) {
	// assert(buf_len >= sizeof(Primary_PEDALS_ADC_RANGES));
	memcpy(primary_pedals_adc_ranges, buffer, sizeof(Primary_PEDALS_ADC_RANGES));
    return sizeof(Primary_PEDALS_ADC_RANGES);
}
/* Primary_ACCELERATOR_PEDAL_VAL */
size_t serialize_Primary_ACCELERATOR_PEDAL_VAL(uint8_t* buffer, uint8_t level) {
    Primary_ACCELERATOR_PEDAL_VAL primary_accelerator_pedal_val = { level };
	// assert(buf_len >= sizeof(Primary_ACCELERATOR_PEDAL_VAL));
	memcpy(buffer, &primary_accelerator_pedal_val, sizeof(Primary_ACCELERATOR_PEDAL_VAL));
    return sizeof(Primary_ACCELERATOR_PEDAL_VAL);
} 
size_t deserialize_Primary_ACCELERATOR_PEDAL_VAL(uint8_t* buffer, Primary_ACCELERATOR_PEDAL_VAL* primary_accelerator_pedal_val) {
	// assert(buf_len >= sizeof(Primary_ACCELERATOR_PEDAL_VAL));
	memcpy(primary_accelerator_pedal_val, buffer, sizeof(Primary_ACCELERATOR_PEDAL_VAL));
    return sizeof(Primary_ACCELERATOR_PEDAL_VAL);
}
/* Primary_BRAKE_PEDAL_VAL */
size_t serialize_Primary_BRAKE_PEDAL_VAL(uint8_t* buffer, uint8_t level) {
    Primary_BRAKE_PEDAL_VAL primary_brake_pedal_val = { level };
	// assert(buf_len >= sizeof(Primary_BRAKE_PEDAL_VAL));
	memcpy(buffer, &primary_brake_pedal_val, sizeof(Primary_BRAKE_PEDAL_VAL));
    return sizeof(Primary_BRAKE_PEDAL_VAL);
} 
size_t deserialize_Primary_BRAKE_PEDAL_VAL(uint8_t* buffer, Primary_BRAKE_PEDAL_VAL* primary_brake_pedal_val) {
	// assert(buf_len >= sizeof(Primary_BRAKE_PEDAL_VAL));
	memcpy(primary_brake_pedal_val, buffer, sizeof(Primary_BRAKE_PEDAL_VAL));
    return sizeof(Primary_BRAKE_PEDAL_VAL);
}
/* Primary_PCU_STATUS */
size_t serialize_Primary_PCU_STATUS(uint8_t* buffer, Primary_pcu_flags warnings, Primary_pcu_flags errors) {
    Primary_PCU_STATUS primary_pcu_status = { {warnings[0]}, {errors[0]} };
	// assert(buf_len >= sizeof(Primary_PCU_STATUS));
	memcpy(buffer, &primary_pcu_status, sizeof(Primary_PCU_STATUS));
    return sizeof(Primary_PCU_STATUS);
} 
size_t deserialize_Primary_PCU_STATUS(uint8_t* buffer, Primary_PCU_STATUS* primary_pcu_status) {
	// assert(buf_len >= sizeof(Primary_PCU_STATUS));
	memcpy(primary_pcu_status, buffer, sizeof(Primary_PCU_STATUS));
    return sizeof(Primary_PCU_STATUS);
}
/* Primary_TIMESTAMP */
size_t serialize_Primary_TIMESTAMP(uint8_t* buffer, uint32_t timestamp) {
    Primary_TIMESTAMP primary_timestamp = { timestamp };
	// assert(buf_len >= sizeof(Primary_TIMESTAMP));
	memcpy(buffer, &primary_timestamp, sizeof(Primary_TIMESTAMP));
    return sizeof(Primary_TIMESTAMP);
} 
size_t deserialize_Primary_TIMESTAMP(uint8_t* buffer, Primary_TIMESTAMP* primary_timestamp) {
	// assert(buf_len >= sizeof(Primary_TIMESTAMP));
	memcpy(primary_timestamp, buffer, sizeof(Primary_TIMESTAMP));
    return sizeof(Primary_TIMESTAMP);
}
/* Primary_TLM_STATUS */
size_t serialize_Primary_TLM_STATUS(uint8_t* buffer, Primary_Tlm_Status tlm_status, Primary_Race_Type race_type, uint8_t driver, uint8_t circuit) {
    Primary_TLM_STATUS primary_tlm_status = { tlm_status, race_type, driver, circuit };
	// assert(buf_len >= sizeof(Primary_TLM_STATUS));
	memcpy(buffer, &primary_tlm_status, sizeof(Primary_TLM_STATUS));
    return sizeof(Primary_TLM_STATUS);
} 
size_t deserialize_Primary_TLM_STATUS(uint8_t* buffer, Primary_TLM_STATUS* primary_tlm_status) {
	// assert(buf_len >= sizeof(Primary_TLM_STATUS));
	memcpy(primary_tlm_status, buffer, sizeof(Primary_TLM_STATUS));
    return sizeof(Primary_TLM_STATUS);
}
/* Primary_CAR_STATUS */
size_t serialize_Primary_CAR_STATUS(uint8_t* buffer, Primary_Car_Status car_status, Primary_Inverter_Status inverter_l, Primary_Inverter_Status inverter_r) {
    Primary_CAR_STATUS primary_car_status = { car_status, inverter_l, inverter_r };
	// assert(buf_len >= sizeof(Primary_CAR_STATUS));
	memcpy(buffer, &primary_car_status, sizeof(Primary_CAR_STATUS));
    return sizeof(Primary_CAR_STATUS);
} 
size_t deserialize_Primary_CAR_STATUS(uint8_t* buffer, Primary_CAR_STATUS* primary_car_status) {
	// assert(buf_len >= sizeof(Primary_CAR_STATUS));
	memcpy(primary_car_status, buffer, sizeof(Primary_CAR_STATUS));
    return sizeof(Primary_CAR_STATUS);
}
/* Primary_SET_TLM_STATUS */
size_t serialize_Primary_SET_TLM_STATUS(uint8_t* buffer, Primary_Tlm_Status tlm_status, Primary_Race_Type race_type, uint8_t driver, uint8_t circuit) {
    Primary_SET_TLM_STATUS primary_set_tlm_status = { tlm_status, race_type, driver, circuit };
	// assert(buf_len >= sizeof(Primary_SET_TLM_STATUS));
	memcpy(buffer, &primary_set_tlm_status, sizeof(Primary_SET_TLM_STATUS));
    return sizeof(Primary_SET_TLM_STATUS);
} 
size_t deserialize_Primary_SET_TLM_STATUS(uint8_t* buffer, Primary_SET_TLM_STATUS* primary_set_tlm_status) {
	// assert(buf_len >= sizeof(Primary_SET_TLM_STATUS));
	memcpy(primary_set_tlm_status, buffer, sizeof(Primary_SET_TLM_STATUS));
    return sizeof(Primary_SET_TLM_STATUS);
}
/* Primary_GPS_COORDS */
size_t serialize_Primary_GPS_COORDS(uint8_t* buffer, double latitude, double longitude) {
    Primary_GPS_COORDS primary_gps_coords = { latitude, longitude };
	// assert(buf_len >= sizeof(Primary_GPS_COORDS));
	memcpy(buffer, &primary_gps_coords, sizeof(Primary_GPS_COORDS));
    return sizeof(Primary_GPS_COORDS);
} 
size_t deserialize_Primary_GPS_COORDS(uint8_t* buffer, Primary_GPS_COORDS* primary_gps_coords) {
	// assert(buf_len >= sizeof(Primary_GPS_COORDS));
	memcpy(primary_gps_coords, buffer, sizeof(Primary_GPS_COORDS));
    return sizeof(Primary_GPS_COORDS);
}
/* Primary_GPS_TIME */
size_t serialize_Primary_GPS_TIME(uint8_t* buffer, uint32_t time) {
    Primary_GPS_TIME primary_gps_time = { time };
	// assert(buf_len >= sizeof(Primary_GPS_TIME));
	memcpy(buffer, &primary_gps_time, sizeof(Primary_GPS_TIME));
    return sizeof(Primary_GPS_TIME);
} 
size_t deserialize_Primary_GPS_TIME(uint8_t* buffer, Primary_GPS_TIME* primary_gps_time) {
	// assert(buf_len >= sizeof(Primary_GPS_TIME));
	memcpy(primary_gps_time, buffer, sizeof(Primary_GPS_TIME));
    return sizeof(Primary_GPS_TIME);
}
/* Primary_GPS_SPEED */
size_t serialize_Primary_GPS_SPEED(uint8_t* buffer, double speed) {
    Primary_GPS_SPEED primary_gps_speed = { speed };
	// assert(buf_len >= sizeof(Primary_GPS_SPEED));
	memcpy(buffer, &primary_gps_speed, sizeof(Primary_GPS_SPEED));
    return sizeof(Primary_GPS_SPEED);
} 
size_t deserialize_Primary_GPS_SPEED(uint8_t* buffer, Primary_GPS_SPEED* primary_gps_speed) {
	// assert(buf_len >= sizeof(Primary_GPS_SPEED));
	memcpy(primary_gps_speed, buffer, sizeof(Primary_GPS_SPEED));
    return sizeof(Primary_GPS_SPEED);
}
/* Primary_HV_VOLTAGE */
size_t serialize_Primary_HV_VOLTAGE(uint8_t* buffer, uint16_t pack_voltage, uint16_t bus_voltage, uint16_t max_cell_voltage, uint16_t min_cell_voltage) {
    Primary_HV_VOLTAGE primary_hv_voltage = { pack_voltage, bus_voltage, max_cell_voltage, min_cell_voltage };
	// assert(buf_len >= sizeof(Primary_HV_VOLTAGE));
	memcpy(buffer, &primary_hv_voltage, sizeof(Primary_HV_VOLTAGE));
    return sizeof(Primary_HV_VOLTAGE);
} 
size_t deserialize_Primary_HV_VOLTAGE(uint8_t* buffer, Primary_HV_VOLTAGE* primary_hv_voltage) {
	// assert(buf_len >= sizeof(Primary_HV_VOLTAGE));
	memcpy(primary_hv_voltage, buffer, sizeof(Primary_HV_VOLTAGE));
    return sizeof(Primary_HV_VOLTAGE);
}
/* Primary_HV_CURRENT */
size_t serialize_Primary_HV_CURRENT(uint8_t* buffer, uint16_t current, int16_t power) {
    Primary_HV_CURRENT primary_hv_current = { current, power };
	// assert(buf_len >= sizeof(Primary_HV_CURRENT));
	memcpy(buffer, &primary_hv_current, sizeof(Primary_HV_CURRENT));
    return sizeof(Primary_HV_CURRENT);
} 
size_t deserialize_Primary_HV_CURRENT(uint8_t* buffer, Primary_HV_CURRENT* primary_hv_current) {
	// assert(buf_len >= sizeof(Primary_HV_CURRENT));
	memcpy(primary_hv_current, buffer, sizeof(Primary_HV_CURRENT));
    return sizeof(Primary_HV_CURRENT);
}
/* Primary_HV_TEMP */
size_t serialize_Primary_HV_TEMP(uint8_t* buffer, uint16_t average_temp, uint16_t max_temp, uint16_t min_temp) {
    Primary_HV_TEMP primary_hv_temp = { average_temp, max_temp, min_temp };
	// assert(buf_len >= sizeof(Primary_HV_TEMP));
	memcpy(buffer, &primary_hv_temp, sizeof(Primary_HV_TEMP));
    return sizeof(Primary_HV_TEMP);
} 
size_t deserialize_Primary_HV_TEMP(uint8_t* buffer, Primary_HV_TEMP* primary_hv_temp) {
	// assert(buf_len >= sizeof(Primary_HV_TEMP));
	memcpy(primary_hv_temp, buffer, sizeof(Primary_HV_TEMP));
    return sizeof(Primary_HV_TEMP);
}
/* Primary_HV_ERRORS */
size_t serialize_Primary_HV_ERRORS(uint8_t* buffer, Primary_Hv_Errors warnings, Primary_Hv_Errors errors) {
    Primary_HV_ERRORS primary_hv_errors = { {warnings[0], warnings[1]}, {errors[0], errors[1]} };
	// assert(buf_len >= sizeof(Primary_HV_ERRORS));
	memcpy(buffer, &primary_hv_errors, sizeof(Primary_HV_ERRORS));
    return sizeof(Primary_HV_ERRORS);
} 
size_t deserialize_Primary_HV_ERRORS(uint8_t* buffer, Primary_HV_ERRORS* primary_hv_errors) {
	// assert(buf_len >= sizeof(Primary_HV_ERRORS));
	memcpy(primary_hv_errors, buffer, sizeof(Primary_HV_ERRORS));
    return sizeof(Primary_HV_ERRORS);
}
/* Primary_TS_STATUS */
size_t serialize_Primary_TS_STATUS(uint8_t* buffer, Primary_Ts_Status ts_status) {
    Primary_TS_STATUS primary_ts_status = { ts_status };
	// assert(buf_len >= sizeof(Primary_TS_STATUS));
	memcpy(buffer, &primary_ts_status, sizeof(Primary_TS_STATUS));
    return sizeof(Primary_TS_STATUS);
} 
size_t deserialize_Primary_TS_STATUS(uint8_t* buffer, Primary_TS_STATUS* primary_ts_status) {
	// assert(buf_len >= sizeof(Primary_TS_STATUS));
	memcpy(primary_ts_status, buffer, sizeof(Primary_TS_STATUS));
    return sizeof(Primary_TS_STATUS);
}
/* Primary_SET_TS_STATUS */
size_t serialize_Primary_SET_TS_STATUS(uint8_t* buffer, Primary_Ts_Status_Set ts_status_set) {
    Primary_SET_TS_STATUS primary_set_ts_status = { ts_status_set };
	// assert(buf_len >= sizeof(Primary_SET_TS_STATUS));
	memcpy(buffer, &primary_set_ts_status, sizeof(Primary_SET_TS_STATUS));
    return sizeof(Primary_SET_TS_STATUS);
} 
size_t deserialize_Primary_SET_TS_STATUS(uint8_t* buffer, Primary_SET_TS_STATUS* primary_set_ts_status) {
	// assert(buf_len >= sizeof(Primary_SET_TS_STATUS));
	memcpy(primary_set_ts_status, buffer, sizeof(Primary_SET_TS_STATUS));
    return sizeof(Primary_SET_TS_STATUS);
}
/* Primary_STEER_STATUS */
size_t serialize_Primary_STEER_STATUS(uint8_t* buffer, Primary_Traction_Control traction_control, Primary_Map map, bool radio_on) {
    Primary_STEER_STATUS primary_steer_status = { traction_control, map, radio_on };
	// assert(buf_len >= sizeof(Primary_STEER_STATUS));
	memcpy(buffer, &primary_steer_status, sizeof(Primary_STEER_STATUS));
    return sizeof(Primary_STEER_STATUS);
} 
size_t deserialize_Primary_STEER_STATUS(uint8_t* buffer, Primary_STEER_STATUS* primary_steer_status) {
	// assert(buf_len >= sizeof(Primary_STEER_STATUS));
	memcpy(primary_steer_status, buffer, sizeof(Primary_STEER_STATUS));
    return sizeof(Primary_STEER_STATUS);
}
/* Primary_SET_CAR_STATUS */
size_t serialize_Primary_SET_CAR_STATUS(uint8_t* buffer, Primary_Car_Status_Set car_status_set) {
    Primary_SET_CAR_STATUS primary_set_car_status = { car_status_set };
	// assert(buf_len >= sizeof(Primary_SET_CAR_STATUS));
	memcpy(buffer, &primary_set_car_status, sizeof(Primary_SET_CAR_STATUS));
    return sizeof(Primary_SET_CAR_STATUS);
} 
size_t deserialize_Primary_SET_CAR_STATUS(uint8_t* buffer, Primary_SET_CAR_STATUS* primary_set_car_status) {
	// assert(buf_len >= sizeof(Primary_SET_CAR_STATUS));
	memcpy(primary_set_car_status, buffer, sizeof(Primary_SET_CAR_STATUS));
    return sizeof(Primary_SET_CAR_STATUS);
}
/* Primary_LV_CURRENT */
size_t serialize_Primary_LV_CURRENT(uint8_t* buffer, uint8_t current) {
    Primary_LV_CURRENT primary_lv_current = { current };
	// assert(buf_len >= sizeof(Primary_LV_CURRENT));
	memcpy(buffer, &primary_lv_current, sizeof(Primary_LV_CURRENT));
    return sizeof(Primary_LV_CURRENT);
} 
size_t deserialize_Primary_LV_CURRENT(uint8_t* buffer, Primary_LV_CURRENT* primary_lv_current) {
	// assert(buf_len >= sizeof(Primary_LV_CURRENT));
	memcpy(primary_lv_current, buffer, sizeof(Primary_LV_CURRENT));
    return sizeof(Primary_LV_CURRENT);
}
/* Primary_LV_VOLTAGE */
size_t serialize_Primary_LV_VOLTAGE(uint8_t* buffer, uint8_t voltage_1, uint8_t voltage_2, uint8_t voltage_3, uint8_t voltage_4, uint16_t total_voltage) {
    Primary_LV_VOLTAGE primary_lv_voltage = { voltage_1, voltage_2, voltage_3, voltage_4, total_voltage };
	// assert(buf_len >= sizeof(Primary_LV_VOLTAGE));
	memcpy(buffer, &primary_lv_voltage, sizeof(Primary_LV_VOLTAGE));
    return sizeof(Primary_LV_VOLTAGE);
} 
size_t deserialize_Primary_LV_VOLTAGE(uint8_t* buffer, Primary_LV_VOLTAGE* primary_lv_voltage) {
	// assert(buf_len >= sizeof(Primary_LV_VOLTAGE));
	memcpy(primary_lv_voltage, buffer, sizeof(Primary_LV_VOLTAGE));
    return sizeof(Primary_LV_VOLTAGE);
}
/* Primary_LV_TEMPERATURE */
size_t serialize_Primary_LV_TEMPERATURE(uint8_t* buffer, uint8_t dcdc_temperature, uint16_t battery_temperature) {
    Primary_LV_TEMPERATURE primary_lv_temperature = { dcdc_temperature, 0x00, battery_temperature };
	// assert(buf_len >= sizeof(Primary_LV_TEMPERATURE));
	memcpy(buffer, &primary_lv_temperature, sizeof(Primary_LV_TEMPERATURE));
    return sizeof(Primary_LV_TEMPERATURE);
} 
size_t deserialize_Primary_LV_TEMPERATURE(uint8_t* buffer, Primary_LV_TEMPERATURE* primary_lv_temperature) {
	// assert(buf_len >= sizeof(Primary_LV_TEMPERATURE));
	memcpy(primary_lv_temperature, buffer, sizeof(Primary_LV_TEMPERATURE));
    return sizeof(Primary_LV_TEMPERATURE);
}
/* Primary_COOLING_STATUS */
size_t serialize_Primary_COOLING_STATUS(uint8_t* buffer, uint8_t hv_fan_speed, uint8_t lv_fan_speed, uint8_t pump_speed) {
    Primary_COOLING_STATUS primary_cooling_status = { hv_fan_speed, lv_fan_speed, pump_speed };
	// assert(buf_len >= sizeof(Primary_COOLING_STATUS));
	memcpy(buffer, &primary_cooling_status, sizeof(Primary_COOLING_STATUS));
    return sizeof(Primary_COOLING_STATUS);
} 
size_t deserialize_Primary_COOLING_STATUS(uint8_t* buffer, Primary_COOLING_STATUS* primary_cooling_status) {
	// assert(buf_len >= sizeof(Primary_COOLING_STATUS));
	memcpy(primary_cooling_status, buffer, sizeof(Primary_COOLING_STATUS));
    return sizeof(Primary_COOLING_STATUS);
}
/* Primary_HV_CELLS_VOLTAGE */
size_t serialize_Primary_HV_CELLS_VOLTAGE(uint8_t* buffer, uint8_t cell_index, uint16_t voltage_0, uint16_t voltage_1, uint16_t voltage_2) {
    Primary_HV_CELLS_VOLTAGE primary_hv_cells_voltage = { cell_index, 0x00, voltage_0, voltage_1, voltage_2 };
	// assert(buf_len >= sizeof(Primary_HV_CELLS_VOLTAGE));
	memcpy(buffer, &primary_hv_cells_voltage, sizeof(Primary_HV_CELLS_VOLTAGE));
    return sizeof(Primary_HV_CELLS_VOLTAGE);
} 
size_t deserialize_Primary_HV_CELLS_VOLTAGE(uint8_t* buffer, Primary_HV_CELLS_VOLTAGE* primary_hv_cells_voltage) {
	// assert(buf_len >= sizeof(Primary_HV_CELLS_VOLTAGE));
	memcpy(primary_hv_cells_voltage, buffer, sizeof(Primary_HV_CELLS_VOLTAGE));
    return sizeof(Primary_HV_CELLS_VOLTAGE);
}
/* Primary_HV_CELLS_TEMP */
size_t serialize_Primary_HV_CELLS_TEMP(uint8_t* buffer, uint8_t cell_index, uint8_t temp_0, uint8_t temp_1, uint8_t temp_2, uint8_t temp_3, uint8_t temp_4, uint8_t temp_5, uint8_t temp_6) {
    Primary_HV_CELLS_TEMP primary_hv_cells_temp = { cell_index, temp_0, temp_1, temp_2, temp_3, temp_4, temp_5, temp_6 };
	// assert(buf_len >= sizeof(Primary_HV_CELLS_TEMP));
	memcpy(buffer, &primary_hv_cells_temp, sizeof(Primary_HV_CELLS_TEMP));
    return sizeof(Primary_HV_CELLS_TEMP);
} 
size_t deserialize_Primary_HV_CELLS_TEMP(uint8_t* buffer, Primary_HV_CELLS_TEMP* primary_hv_cells_temp) {
	// assert(buf_len >= sizeof(Primary_HV_CELLS_TEMP));
	memcpy(primary_hv_cells_temp, buffer, sizeof(Primary_HV_CELLS_TEMP));
    return sizeof(Primary_HV_CELLS_TEMP);
}
/* Primary_SET_CHG_POWER */
size_t serialize_Primary_SET_CHG_POWER(uint8_t* buffer, uint16_t current, uint16_t voltage) {
    Primary_SET_CHG_POWER primary_set_chg_power = { current, voltage };
	// assert(buf_len >= sizeof(Primary_SET_CHG_POWER));
	memcpy(buffer, &primary_set_chg_power, sizeof(Primary_SET_CHG_POWER));
    return sizeof(Primary_SET_CHG_POWER);
} 
size_t deserialize_Primary_SET_CHG_POWER(uint8_t* buffer, Primary_SET_CHG_POWER* primary_set_chg_power) {
	// assert(buf_len >= sizeof(Primary_SET_CHG_POWER));
	memcpy(primary_set_chg_power, buffer, sizeof(Primary_SET_CHG_POWER));
    return sizeof(Primary_SET_CHG_POWER);
}
/* Primary_CHG_STATUS */
size_t serialize_Primary_CHG_STATUS(uint8_t* buffer, Primary_Status status) {
    Primary_CHG_STATUS primary_chg_status = { status };
	// assert(buf_len >= sizeof(Primary_CHG_STATUS));
	memcpy(buffer, &primary_chg_status, sizeof(Primary_CHG_STATUS));
    return sizeof(Primary_CHG_STATUS);
} 
size_t deserialize_Primary_CHG_STATUS(uint8_t* buffer, Primary_CHG_STATUS* primary_chg_status) {
	// assert(buf_len >= sizeof(Primary_CHG_STATUS));
	memcpy(primary_chg_status, buffer, sizeof(Primary_CHG_STATUS));
    return sizeof(Primary_CHG_STATUS);
}
/* Primary_SET_CHG_STATUS */
size_t serialize_Primary_SET_CHG_STATUS(uint8_t* buffer, Primary_Status status) {
    Primary_SET_CHG_STATUS primary_set_chg_status = { status };
	// assert(buf_len >= sizeof(Primary_SET_CHG_STATUS));
	memcpy(buffer, &primary_set_chg_status, sizeof(Primary_SET_CHG_STATUS));
    return sizeof(Primary_SET_CHG_STATUS);
} 
size_t deserialize_Primary_SET_CHG_STATUS(uint8_t* buffer, Primary_SET_CHG_STATUS* primary_set_chg_status) {
	// assert(buf_len >= sizeof(Primary_SET_CHG_STATUS));
	memcpy(primary_set_chg_status, buffer, sizeof(Primary_SET_CHG_STATUS));
    return sizeof(Primary_SET_CHG_STATUS);
}
/* Primary_CHG_SETTINGS */
size_t serialize_Primary_CHG_SETTINGS(uint8_t* buffer, uint8_t v_cutoff) {
    Primary_CHG_SETTINGS primary_chg_settings = { v_cutoff };
	// assert(buf_len >= sizeof(Primary_CHG_SETTINGS));
	memcpy(buffer, &primary_chg_settings, sizeof(Primary_CHG_SETTINGS));
    return sizeof(Primary_CHG_SETTINGS);
} 
size_t deserialize_Primary_CHG_SETTINGS(uint8_t* buffer, Primary_CHG_SETTINGS* primary_chg_settings) {
	// assert(buf_len >= sizeof(Primary_CHG_SETTINGS));
	memcpy(primary_chg_settings, buffer, sizeof(Primary_CHG_SETTINGS));
    return sizeof(Primary_CHG_SETTINGS);
}
