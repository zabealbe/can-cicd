#include <string.h>

void Primary_msgname_from_id(uint32_t msg_id, char buffer[static 21]) {
    /*
    *       Returns a string containing the name of the message having the specified id
    *           Parameters:
    *               msg_id: the id of the message
    *               buffer: the pre allocated buffer where the message name will be returned
    */
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
        case 1537:
            strcpy(buffer, "TIMESTAMP");
            break;
        case 258:
            strcpy(buffer, "TLM_STATUS");
            break;
        case 259:
            strcpy(buffer, "SET_TLM_STATUS");
            break;
        case 772:
            strcpy(buffer, "HV_VOLTAGE");
            break;
        case 804:
            strcpy(buffer, "HV_CURRENT");
            break;
        case 836:
            strcpy(buffer, "HV_TEMP");
            break;
        case 260:
            strcpy(buffer, "HV_ERRORS");
            break;
        case 4:
            strcpy(buffer, "TS_STATUS");
            break;
        case 5:
            strcpy(buffer, "SET_TS_STATUS");
            break;
        case 6:
            strcpy(buffer, "STEER_STATUS");
            break;
        case 38:
            strcpy(buffer, "SET_CAR_STATUS");
            break;
        case 70:
            strcpy(buffer, "GET_CAR_STATUS");
            break;
        case 2:
            strcpy(buffer, "CAR_STATUS");
            break;
        case 775:
            strcpy(buffer, "LV_CURRENT");
            break;
        case 807:
            strcpy(buffer, "LV_VOLTAGE");
            break;
        case 839:
            strcpy(buffer, "LV_TEMPERATURE");
            break;
        case 871:
            strcpy(buffer, "COOLING_STATUS");
            break;
        case 520:
            strcpy(buffer, "HV_CELLS_VOLTAGE");
            break;
        case 552:
            strcpy(buffer, "HV_CELLS_TEMP");
            break;
        case 264:
            strcpy(buffer, "SET_CHG_POWER");
            break;
        case 8:
            strcpy(buffer, "CHG_STATUS");
            break;
        case 40:
            strcpy(buffer, "SET_CHG_STATUS");
            break;
        case 72:
            strcpy(buffer, "CHG_SETTINGS");
            break;
        default:
            strcpy(buffer, ""); // Unknown message
    }
}
