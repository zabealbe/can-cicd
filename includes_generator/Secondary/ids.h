#ifndef Secondary_IDS_H
#define Secondary_IDS_H

#define Secondary_VERSION 0f

/* TOPIC PEDALS */
#define TOPIC_PEDALS_MASK 0b00000011111
#define TOPIC_PEDALS_FILTER 0b00000000000
/*
* Syncronization message from Steering Wheel to Pedals Control Unit for calibration purpose.
* Message semantic: sets (max|min) value for (accelerator|brake|all) pedal the moment PCU receives the message with the current read value.
*/
#define ID_SET_PEDALS_RANGE 0b10000000000
/*
* This message contains ADC raw values used by PCU to set 0->255 range when sending pedals value. This message can be requested and sent either by PCU or ECU. If PCU requests this message then ECU responds with a value from a previous run. If ECU requests this message then PCU sends the current ranges. NOTE: ADC values have 12 bit resolution.
*/
#define ID_PEDALS_ADC_RANGES 0b10000100000
/*
* Accelerator Pedal potentiometer Value. Average of 2 sensors normalized from 0 to 255, linear, 8bit total, unsigned.
*/
#define ID_ACCELERATOR_PEDAL_VAL 0b00000000000
/*
* Brake Pedal pressure sensor Value. Normalized from 0 to 255, linear, 8bit total, unsigned.
*/
#define ID_BRAKE_PEDAL_VAL 0b00000100000
/*
* PCU current status. Warnings and errors.
*/
#define ID_PCU_STATUS 0b01000000000

/* TOPIC FIXED_IDS */
#define TOPIC_FIXED_IDS_MASK 0b00000011111
/*
* Inertial Measurement Unit [x,y,z]-axis angular rate value. 0.01dps per bit, Big-Endian, 16bit Total, signed
*/
#define ID_IMU_ANGULAR_RATE 0b10011101100
/*
* Inertial Measurement Unit [x,y,z]-axis acceleration value. 0.01g per bit, Big-Endian, 16bit Total, signed
*/
#define ID_IMU_ACCELERATION 0b10011101101
/*
* Front Left wheel InfraRed Temperature Sensor data, channels 1 through 4. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_FL_0 0b10110110100
/*
* Front Left wheel InfraRed Temperature Sensor data, channels 5 through 8. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_FL_1 0b10110110101
/*
* Front Left wheel InfraRed Temperature Sensor data, channels 9 through 12. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_FL_2 0b10110110110
/*
* Front Left wheel InfraRed Temperature Sensor data, channels 13 through 16. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_FL_3 0b10110110111
/*
* Front Right wheel InfraRed Temperature Sensor data, channels 1 through 4. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_FR_0 0b10110111000
/*
* Front Right wheel InfraRed Temperature Sensor data, channels 5 through 8. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_FR_1 0b10110111001
/*
* Front Right wheel InfraRed Temperature Sensor data, channels 9 through 12. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_FR_2 0b10110111010
/*
* Front Right wheel InfraRed Temperature Sensor data, channels 13 through 16. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_FR_3 0b10110111011
/*
* Rear Left wheel InfraRed Temperature Sensor data, channels 1 through 4. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_RL_0 0b10110111100
/*
* Rear Left wheel InfraRed Temperature Sensor data, channels 5 through 8. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_RL_1 0b10110111101
/*
* Rear Left wheel InfraRed Temperature Sensor data, channels 9 through 12. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_RL_2 0b10110111110
/*
* Rear Left wheel InfraRed Temperature Sensor data, channels 13 through 16. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_RL_3 0b10110111111
/*
* Rear Right wheel InfraRed Temperature Sensor data, channels 1 through 4. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_RR_0 0b10111000000
/*
* Rear Right wheel InfraRed Temperature Sensor data, channels 5 through 8. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_RR_1 0b10111000001
/*
* Rear Right wheel InfraRed Temperature Sensor data, channels 9 through 12. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_RR_2 0b10111000010
/*
* Rear Right wheel InfraRed Temperature Sensor data, channels 13 through 16. 0.1˚C per bit, -100˚C offset, Big-Endian, 16bit Total, unsigned.
*/
#define ID_IRTS_RR_3 0b10111000011


#ifdef __cplusplus
extern "C" {
#endif

void Secondary_msgname_from_id(uint32_t msg_id, char buffer[static 255]) {
    switch (msg_id) {
        case 1024:
            strcpy(buffer, "SET_PEDALS_RANGE");
            break;
        case 1056:
            strcpy(buffer, "PEDALS_ADC_RANGES");
            break;
        case 0:
            strcpy(buffer, "ACCELERATOR_PEDAL_VAL");
            break;
        case 32:
            strcpy(buffer, "BRAKE_PEDAL_VAL");
            break;
        case 512:
            strcpy(buffer, "PCU_STATUS");
            break;
        case 1260:
            strcpy(buffer, "IMU_ANGULAR_RATE");
            break;
        case 1261:
            strcpy(buffer, "IMU_ACCELERATION");
            break;
        case 1460:
            strcpy(buffer, "IRTS_FL_0");
            break;
        case 1461:
            strcpy(buffer, "IRTS_FL_1");
            break;
        case 1462:
            strcpy(buffer, "IRTS_FL_2");
            break;
        case 1463:
            strcpy(buffer, "IRTS_FL_3");
            break;
        case 1464:
            strcpy(buffer, "IRTS_FR_0");
            break;
        case 1465:
            strcpy(buffer, "IRTS_FR_1");
            break;
        case 1466:
            strcpy(buffer, "IRTS_FR_2");
            break;
        case 1467:
            strcpy(buffer, "IRTS_FR_3");
            break;
        case 1468:
            strcpy(buffer, "IRTS_RL_0");
            break;
        case 1469:
            strcpy(buffer, "IRTS_RL_1");
            break;
        case 1470:
            strcpy(buffer, "IRTS_RL_2");
            break;
        case 1471:
            strcpy(buffer, "IRTS_RL_3");
            break;
        case 1472:
            strcpy(buffer, "IRTS_RR_0");
            break;
        case 1473:
            strcpy(buffer, "IRTS_RR_1");
            break;
        case 1474:
            strcpy(buffer, "IRTS_RR_2");
            break;
        case 1475:
            strcpy(buffer, "IRTS_RR_3");
            break;
        default:
            strcpy(buffer, "unknown message id");
    }
}

#ifdef __cplusplus
}
#endif

#endif
