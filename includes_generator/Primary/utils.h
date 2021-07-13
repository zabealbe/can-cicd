#include <string.h>

/*
*   Utility functions
*/
void Primary_msgname_from_id(uint32_t msg_id, char buffer[static 50]) {
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
