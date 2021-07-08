/*
*   Utility functions
*/
void _msgname_from_id(uint32_t msg_id, char buffer[static 50]) {
    switch (msg_id) {
        case 1024:
            strcpy(buffer, "VOLTAGES_CB0_0");
            break;
        case 768:
            strcpy(buffer, "VOLTAGES_CB0_1");
            break;
        case 512:
            strcpy(buffer, "VOLTAGES_CB0_2");
            break;
        case 256:
            strcpy(buffer, "VOLTAGES_CB0_3");
            break;
        case 0:
            strcpy(buffer, "VOLTAGES_CB0_4");
            break;
        case 1025:
            strcpy(buffer, "TEMPERATURES_CB0_0");
            break;
        case 769:
            strcpy(buffer, "TEMPERATURES_CB0_1");
            break;
        case 513:
            strcpy(buffer, "TEMPERATURES_CB0_2");
            break;
        case 1056:
            strcpy(buffer, "VOLTAGES_CB1_0");
            break;
        case 800:
            strcpy(buffer, "VOLTAGES_CB1_1");
            break;
        case 544:
            strcpy(buffer, "VOLTAGES_CB1_2");
            break;
        case 288:
            strcpy(buffer, "VOLTAGES_CB1_3");
            break;
        case 32:
            strcpy(buffer, "VOLTAGES_CB1_4");
            break;
        case 1057:
            strcpy(buffer, "TEMPERATURES_CB1_0");
            break;
        case 801:
            strcpy(buffer, "TEMPERATURES_CB1_1");
            break;
        case 545:
            strcpy(buffer, "TEMPERATURES_CB1_2");
            break;
        case 1088:
            strcpy(buffer, "VOLTAGES_CB2_0");
            break;
        case 832:
            strcpy(buffer, "VOLTAGES_CB2_1");
            break;
        case 576:
            strcpy(buffer, "VOLTAGES_CB2_2");
            break;
        case 320:
            strcpy(buffer, "VOLTAGES_CB2_3");
            break;
        case 64:
            strcpy(buffer, "VOLTAGES_CB2_4");
            break;
        case 1089:
            strcpy(buffer, "TEMPERATURES_CB2_0");
            break;
        case 833:
            strcpy(buffer, "TEMPERATURES_CB2_1");
            break;
        case 577:
            strcpy(buffer, "TEMPERATURES_CB2_2");
            break;
        case 1120:
            strcpy(buffer, "VOLTAGES_CB3_0");
            break;
        case 864:
            strcpy(buffer, "VOLTAGES_CB3_1");
            break;
        case 608:
            strcpy(buffer, "VOLTAGES_CB3_2");
            break;
        case 352:
            strcpy(buffer, "VOLTAGES_CB3_3");
            break;
        case 96:
            strcpy(buffer, "VOLTAGES_CB3_4");
            break;
        case 1121:
            strcpy(buffer, "TEMPERATURES_CB3_0");
            break;
        case 865:
            strcpy(buffer, "TEMPERATURES_CB3_1");
            break;
        case 609:
            strcpy(buffer, "TEMPERATURES_CB3_2");
            break;
        case 1152:
            strcpy(buffer, "VOLTAGES_CB4_0");
            break;
        case 896:
            strcpy(buffer, "VOLTAGES_CB4_1");
            break;
        case 640:
            strcpy(buffer, "VOLTAGES_CB4_2");
            break;
        case 384:
            strcpy(buffer, "VOLTAGES_CB4_3");
            break;
        case 128:
            strcpy(buffer, "VOLTAGES_CB4_4");
            break;
        case 1153:
            strcpy(buffer, "TEMPERATURES_CB4_0");
            break;
        case 897:
            strcpy(buffer, "TEMPERATURES_CB4_1");
            break;
        case 641:
            strcpy(buffer, "TEMPERATURES_CB4_2");
            break;
        case 1184:
            strcpy(buffer, "VOLTAGES_CB5_0");
            break;
        case 928:
            strcpy(buffer, "VOLTAGES_CB5_1");
            break;
        case 672:
            strcpy(buffer, "VOLTAGES_CB5_2");
            break;
        case 416:
            strcpy(buffer, "VOLTAGES_CB5_3");
            break;
        case 160:
            strcpy(buffer, "VOLTAGES_CB5_4");
            break;
        case 1185:
            strcpy(buffer, "TEMPERATURES_CB5_0");
            break;
        case 929:
            strcpy(buffer, "TEMPERATURES_CB5_1");
            break;
        case 673:
            strcpy(buffer, "TEMPERATURES_CB5_2");
            break;
        case 1794:
            strcpy(buffer, "MASTER_SYNC");
            break;
        case 1538:
            strcpy(buffer, "CELLBOARD_TOKEN");
            break;
        default:
            strcpy(buffer, "unknown message id");
    }
}
