#ifndef Primary_IDS_H
#define Primary_IDS_H

#define Primary_VERSION 1.2f

/* TOPIC PEDALS */
#define TOPIC_PEDALS_MASK 0b00000011111
#define TOPIC_PEDALS_FILTER 0b00000000000
/*
* Syncronization message from Steering Wheel or ECU to PCU for calibration purpose.
* Message semantic: sets (max|min) value for accelerator pedal the moment PCU receives the message with the current read value.
*/
#define ID_SET_ACCELERATOR_RANGE 0b10000000000
/*
* This message contains accelarator ADC raw values used by PCU to set 0->255 range when sending accelerator value. This value is either sent by ECU or by PCU
*/
#define ID_PEDALS_ADC_RANGES 0b10000100000
/*
* Accelerator Pedal potentiometer Value. Average of 2 sensors normalized from 0 to 255, linear, 8bit total, unsigned.
*/
#define ID_ACCELERATOR_PEDAL_VAL 0b00100000000
/*
* Brake Pedal pressure sensor Value. Normalized from 0 to 255, linear, 8bit total, unsigned.
*/
#define ID_BRAKE_PEDAL_VAL 0b00100100000
/*
* PCU current status. Warnings and errors.
*/
#define ID_PCU_STATUS 0b01000000000

/* TOPIC BROADCAST */
#define TOPIC_BROADCAST_MASK 0b00000011111
#define TOPIC_BROADCAST_FILTER 0b00000000001
#define ID_TIMESTAMP 0b11000000001

/* TOPIC STEER */
#define TOPIC_STEER_MASK 0b00000011111
#define TOPIC_STEER_FILTER 0b00000000010
#define ID_TLM_STATUS 0b00100000010
#define ID_CAR_STATUS 0b00000000010

/* TOPIC TLM */
#define TOPIC_TLM_MASK 0b00000011111
#define TOPIC_TLM_FILTER 0b00000000011
#define ID_SET_TLM_STATUS 0b00100000011
/*
* Coordinates received from GPS
*/
#define ID_GPS_COORDS 0b01100000011
/*
* Time received from GPS
*/
#define ID_GPS_TIME 0b01100100011
/*
* Speed received from GPS
*/
#define ID_GPS_SPEED 0b10000000011

/* TOPIC ECUnSTEERnCART */
#define TOPIC_ECUnSTEERnCART_MASK 0b00000011111
#define TOPIC_ECUnSTEERnCART_FILTER 0b00000000100
#define ID_HV_VOLTAGE 0b01100000100
#define ID_HV_CURRENT 0b01100100100
#define ID_HV_TEMP 0b01101000100
#define ID_HV_ERRORS 0b00100000100
#define ID_TS_STATUS 0b00000000100

/* TOPIC BMS_HV */
#define TOPIC_BMS_HV_MASK 0b00000011111
#define TOPIC_BMS_HV_FILTER 0b00000000101
#define ID_SET_TS_STATUS 0b00000000101

/* TOPIC ECU */
#define TOPIC_ECU_MASK 0b00000011111
#define TOPIC_ECU_FILTER 0b00000000110
#define ID_STEER_STATUS 0b00000000110
#define ID_SET_CAR_STATUS 0b00000100110
#define ID_GET_CAR_STATUS 0b00001000110

/* TOPIC ECUnSTEER */
#define TOPIC_ECUnSTEER_MASK 0b00000011111
#define TOPIC_ECUnSTEER_FILTER 0b00000000111
#define ID_LV_CURRENT 0b01100000111
#define ID_LV_VOLTAGE 0b01100100111
#define ID_LV_TEMPERATURE 0b01101000111
#define ID_COOLING_STATUS 0b01101100111

/* TOPIC HANDCART */
#define TOPIC_HANDCART_MASK 0b00000011111
#define TOPIC_HANDCART_FILTER 0b00000001000
#define ID_HV_CELLS_VOLTAGE 0b01000001000
#define ID_HV_CELLS_TEMP 0b01000101000
#define ID_SET_CHG_POWER 0b00100001000
#define ID_CHG_STATUS 0b00000001000
#define ID_SET_CHG_STATUS 0b00000101000
#define ID_CHG_SETTINGS 0b00001001000

#endif
