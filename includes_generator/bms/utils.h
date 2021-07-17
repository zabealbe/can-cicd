#include <string.h>

void bms_msgname_from_id(uint32_t msg_id, char buffer[static 12]) {
    /*
    *       Returns a string containing the name of the message having the specified id
    *           Parameters:
    *               msg_id: the id of the message
    *               buffer: the pre allocated buffer where the message name will be returned
    */
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
        case 516:
            strcpy(buffer, "VOLTAGES_0");
            break;
        case 548:
            strcpy(buffer, "VOLTAGES_1");
            break;
        case 580:
            strcpy(buffer, "VOLTAGES_2");
            break;
        case 612:
            strcpy(buffer, "VOLTAGES_3");
            break;
        case 644:
            strcpy(buffer, "VOLTAGES_4");
            break;
        case 676:
            strcpy(buffer, "VOLTAGES_5");
            break;
        default:
            strcpy(buffer, ""); // Unknown message
    }
}
