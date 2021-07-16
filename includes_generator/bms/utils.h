#include <string.h>

/*
*   Utility functions
*/
void bms_msgname_from_id(uint32_t msg_id, char buffer[static 50]) {
    switch (msg_id) {
        case 768:
            strcpy(buffer, "BOARD_STATUS");
            break;
        case 769:
            strcpy(buffer, "TEMP_STATS");
            break;
        case 770:
            strcpy(buffer, "BALANCING");
            break;
        case 1027:
            strcpy(buffer, "VOLTAGES_CB0_0");
            break;
        case 771:
            strcpy(buffer, "VOLTAGES_CB0_1");
            break;
        case 515:
            strcpy(buffer, "VOLTAGES_CB0_2");
            break;
        case 259:
            strcpy(buffer, "VOLTAGES_CB0_3");
            break;
        case 3:
            strcpy(buffer, "VOLTAGES_CB0_4");
            break;
        case 1025:
            strcpy(buffer, "TEMPERATURES_CB0_0");
            break;
        case 801:
            strcpy(buffer, "TEMPERATURES_CB0_1");
            break;
        case 513:
            strcpy(buffer, "TEMPERATURES_CB0_2");
            break;
        case 1059:
            strcpy(buffer, "VOLTAGES_CB1_0");
            break;
        case 803:
            strcpy(buffer, "VOLTAGES_CB1_1");
            break;
        case 547:
            strcpy(buffer, "VOLTAGES_CB1_2");
            break;
        case 291:
            strcpy(buffer, "VOLTAGES_CB1_3");
            break;
        case 35:
            strcpy(buffer, "VOLTAGES_CB1_4");
            break;
        case 1796:
            strcpy(buffer, "MASTER_SYNC");
            break;
        default:
            strcpy(buffer, "unknown message id");
    }
}
