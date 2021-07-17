#include <string.h>

/*
*   Utility functions
*/
void bms_msgname_from_id(uint32_t msg_id, char buffer[static 50]) {
    switch (msg_id) {
        case 1536:
            strcpy(buffer, "BOARD_STATUS");
            break;
        case 1281:
            strcpy(buffer, "TEMP_STATS");
            break;
        case 1538:
            strcpy(buffer, "BALANCING");
            break;
        case 1795:
            strcpy(buffer, "MASTER_SYNC");
            break;
        case 1028:
            strcpy(buffer, "VOLTAGES_00");
            break;
        case 772:
            strcpy(buffer, "VOLTAGES_01");
            break;
        case 516:
            strcpy(buffer, "VOLTAGES_02");
            break;
        case 260:
            strcpy(buffer, "VOLTAGES_03");
            break;
        case 4:
            strcpy(buffer, "VOLTAGES_04");
            break;
        case 1060:
            strcpy(buffer, "VOLTAGES_10");
            break;
        case 804:
            strcpy(buffer, "VOLTAGES_11");
            break;
        case 548:
            strcpy(buffer, "VOLTAGES_12");
            break;
        case 292:
            strcpy(buffer, "VOLTAGES_13");
            break;
        case 36:
            strcpy(buffer, "VOLTAGES_14");
            break;
        case 1092:
            strcpy(buffer, "VOLTAGES_20");
            break;
        case 836:
            strcpy(buffer, "VOLTAGES_21");
            break;
        case 580:
            strcpy(buffer, "VOLTAGES_22");
            break;
        case 324:
            strcpy(buffer, "VOLTAGES_23");
            break;
        case 68:
            strcpy(buffer, "VOLTAGES_24");
            break;
        case 1124:
            strcpy(buffer, "VOLTAGES_30");
            break;
        case 868:
            strcpy(buffer, "VOLTAGES_31");
            break;
        case 612:
            strcpy(buffer, "VOLTAGES_32");
            break;
        case 356:
            strcpy(buffer, "VOLTAGES_33");
            break;
        case 100:
            strcpy(buffer, "VOLTAGES_34");
            break;
        case 1156:
            strcpy(buffer, "VOLTAGES_40");
            break;
        case 900:
            strcpy(buffer, "VOLTAGES_41");
            break;
        case 644:
            strcpy(buffer, "VOLTAGES_42");
            break;
        case 388:
            strcpy(buffer, "VOLTAGES_43");
            break;
        case 132:
            strcpy(buffer, "VOLTAGES_44");
            break;
        case 1188:
            strcpy(buffer, "VOLTAGES_50");
            break;
        case 932:
            strcpy(buffer, "VOLTAGES_51");
            break;
        case 676:
            strcpy(buffer, "VOLTAGES_52");
            break;
        case 420:
            strcpy(buffer, "VOLTAGES_53");
            break;
        case 164:
            strcpy(buffer, "VOLTAGES_54");
            break;
        default:
            strcpy(buffer, "unknown message id");
    }
}
