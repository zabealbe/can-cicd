#ifndef Primary_IDS_H
#define Primary_IDS_H

#define Primary_VERSION 1.2f

/* TOPIC BROADCAST */
#define TOPIC_BROADCAST_MASK 0b00000011111
#define TOPIC_BROADCAST_FILTER 0b00000000000
#define ID_TIMESTAMP 0b11000000000

/* TOPIC STEER */
#define TOPIC_STEER_MASK 0b00000011111
#define TOPIC_STEER_FILTER 0b00000000001
#define ID_TLM_STATUS 0b00100000001
#define ID_CAR_STATUS 0b00000000001

/* TOPIC TLM */
#define TOPIC_TLM_MASK 0b00000011111
#define TOPIC_TLM_FILTER 0b00000000010
#define ID_SET_TLM_STATUS 0b00100000010

/* TOPIC ACUnSTEERnCART */
#define TOPIC_ACUnSTEERnCART_MASK 0b00000011111
#define TOPIC_ACUnSTEERnCART_FILTER 0b00000000011
#define ID_HV_VOLTAGE 0b01100000011
#define ID_HV_CURRENT 0b01100100011
#define ID_HV_TEMP 0b01101000011
#define ID_HV_ERRORS 0b00100000011
#define ID_TS_STATUS 0b00000000011

/* TOPIC BMS_HV */
#define TOPIC_BMS_HV_MASK 0b00000011111
#define TOPIC_BMS_HV_FILTER 0b00000000100
#define ID_SET_TS_STATUS 0b00000000100

/* TOPIC ACU */
#define TOPIC_ACU_MASK 0b00000011111
#define TOPIC_ACU_FILTER 0b00000000101
#define ID_STEER_STATUS 0b00000000101
#define ID_SET_CAR_STATUS 0b00000100101
#define ID_GET_CAR_STATUS 0b00001000101

/* TOPIC ACUnSTEER */
#define TOPIC_ACUnSTEER_MASK 0b00000011111
#define TOPIC_ACUnSTEER_FILTER 0b00000000110
#define ID_LV_CURRENT 0b01100000110
#define ID_LV_VOLTAGE 0b01100100110
#define ID_LV_TEMPERATURE 0b01101000110
#define ID_COOLING_STATUS 0b01101100110

/* TOPIC HANDCART */
#define TOPIC_HANDCART_MASK 0b00000011111
#define TOPIC_HANDCART_FILTER 0b00000000111
#define ID_HV_CELLS_VOLTAGE 0b01000000111
#define ID_HV_CELLS_TEMP 0b01000100111
#define ID_SET_CHG_POWER 0b00100000111
#define ID_CHG_STATUS 0b00000000111
#define ID_SET_CHG_STATUS 0b00000100111
#define ID_CHG_SETTINGS 0b00001000111


#ifdef __cplusplus
extern "C" {
#endif

void Primary_msgname_from_id(uint32_t msg_id, char buffer[static 255]) {
    switch (msg_id) {
        case 1536:
            strcpy(buffer, "TIMESTAMP");
            break;
        case 257:
            strcpy(buffer, "TLM_STATUS");
            break;
        case 258:
            strcpy(buffer, "SET_TLM_STATUS");
            break;
        case 771:
            strcpy(buffer, "HV_VOLTAGE");
            break;
        case 803:
            strcpy(buffer, "HV_CURRENT");
            break;
        case 835:
            strcpy(buffer, "HV_TEMP");
            break;
        case 259:
            strcpy(buffer, "HV_ERRORS");
            break;
        case 3:
            strcpy(buffer, "TS_STATUS");
            break;
        case 4:
            strcpy(buffer, "SET_TS_STATUS");
            break;
        case 5:
            strcpy(buffer, "STEER_STATUS");
            break;
        case 37:
            strcpy(buffer, "SET_CAR_STATUS");
            break;
        case 69:
            strcpy(buffer, "GET_CAR_STATUS");
            break;
        case 1:
            strcpy(buffer, "CAR_STATUS");
            break;
        case 774:
            strcpy(buffer, "LV_CURRENT");
            break;
        case 806:
            strcpy(buffer, "LV_VOLTAGE");
            break;
        case 838:
            strcpy(buffer, "LV_TEMPERATURE");
            break;
        case 870:
            strcpy(buffer, "COOLING_STATUS");
            break;
        case 519:
            strcpy(buffer, "HV_CELLS_VOLTAGE");
            break;
        case 551:
            strcpy(buffer, "HV_CELLS_TEMP");
            break;
        case 263:
            strcpy(buffer, "SET_CHG_POWER");
            break;
        case 7:
            strcpy(buffer, "CHG_STATUS");
            break;
        case 39:
            strcpy(buffer, "SET_CHG_STATUS");
            break;
        case 71:
            strcpy(buffer, "CHG_SETTINGS");
            break;
        default:
            strcpy(buffer, "unknown message id");
    }
}

#ifdef __cplusplus
}
#endif

#endif
