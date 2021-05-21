#ifndef Secondary_IDS_H
#define Secondary_IDS_H

#define NETWORK_Secondary_VERSION 0f

/* TOPIC PEDALS */
#define TOPIC_PEDALS_MASK 0b00000011111
#define TOPIC_PEDALS_FILTER 0b00000000000
/*
* Syncronization message from Steering Wheel to Pedals Control Unit. Message semantic: (start|end) set of (max|min) value for (accelerator|brake|all) pedal.
*/
#define ID_SET_PEDALS_RANGE 0b10000000000
/*
* Accelerator Pedal potentiometer Value. Average of 2 sensors normalized from 0 to 255, linear, 8bit total, unsigned.
*/
#define ID_ACCELERATOR_PEDAL_VAL 0b00000000000
/*
* Brake Pedal pressure sensor Value. Normalized from 0 to 255, linear, 8bit total, unsigned.
*/
#define ID_BRAKE_PEDAL_VAL 0b00000100000

/* TOPIC FIXED_IDS */
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

#endif

