#include <string.h>

/*
*   Utility functions
*/
void Secondary_msgname_from_id(uint32_t msg_id, char buffer[static 50]) {
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
