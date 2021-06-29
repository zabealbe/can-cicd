#include <string.h>
#include <assert.h>
#include <stdio.h>

#include "BMSinternal.h"
#include "../../../../includes_generator/out/BMSinternal/ids.h"

/*
*   Utility functions
*/
void BMSinternal_msgname_from_id(uint32_t msg_id, char buffer[static 50]) {
    switch (msg_id) {
        case ID_VOLTAGES_CB0_0:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB0_0");
            break;
        case ID_VOLTAGES_CB0_1:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB0_1");
            break;
        case ID_VOLTAGES_CB0_2:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB0_2");
            break;
        case ID_VOLTAGES_CB0_3:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB0_3");
            break;
        case ID_VOLTAGES_CB0_4:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB0_4");
            break;
        case ID_VOLTAGES_CB1_0:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB1_0");
            break;
        case ID_VOLTAGES_CB1_1:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB1_1");
            break;
        case ID_VOLTAGES_CB1_2:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB1_2");
            break;
        case ID_VOLTAGES_CB1_3:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB1_3");
            break;
        case ID_VOLTAGES_CB1_4:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB1_4");
            break;
        case ID_VOLTAGES_CB2_0:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB2_0");
            break;
        case ID_VOLTAGES_CB2_1:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB2_1");
            break;
        case ID_VOLTAGES_CB2_2:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB2_2");
            break;
        case ID_VOLTAGES_CB2_3:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB2_3");
            break;
        case ID_VOLTAGES_CB2_4:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB2_4");
            break;
        case ID_VOLTAGES_CB3_0:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB3_0");
            break;
        case ID_VOLTAGES_CB3_1:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB3_1");
            break;
        case ID_VOLTAGES_CB3_2:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB3_2");
            break;
        case ID_VOLTAGES_CB3_3:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB3_3");
            break;
        case ID_VOLTAGES_CB3_4:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB3_4");
            break;
        case ID_VOLTAGES_CB4_0:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB4_0");
            break;
        case ID_VOLTAGES_CB4_1:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB4_1");
            break;
        case ID_VOLTAGES_CB4_2:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB4_2");
            break;
        case ID_VOLTAGES_CB4_3:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB4_3");
            break;
        case ID_VOLTAGES_CB4_4:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB4_4");
            break;
        case ID_VOLTAGES_CB5_0:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB5_0");
            break;
        case ID_VOLTAGES_CB5_1:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB5_1");
            break;
        case ID_VOLTAGES_CB5_2:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB5_2");
            break;
        case ID_VOLTAGES_CB5_3:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB5_3");
            break;
        case ID_VOLTAGES_CB5_4:
            strcpy(buffer, "BMSinternal_VOLTAGES_CB5_4");
            break;
        case ID_TEMPERATURES_CB0_0:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB0_0");
            break;
        case ID_TEMPERATURES_CB0_1:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB0_1");
            break;
        case ID_TEMPERATURES_CB0_2:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB0_2");
            break;
        case ID_TEMPERATURES_CB1_0:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB1_0");
            break;
        case ID_TEMPERATURES_CB1_1:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB1_1");
            break;
        case ID_TEMPERATURES_CB1_2:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB1_2");
            break;
        case ID_TEMPERATURES_CB2_0:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB2_0");
            break;
        case ID_TEMPERATURES_CB2_1:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB2_1");
            break;
        case ID_TEMPERATURES_CB2_2:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB2_2");
            break;
        case ID_TEMPERATURES_CB3_0:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB3_0");
            break;
        case ID_TEMPERATURES_CB3_1:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB3_1");
            break;
        case ID_TEMPERATURES_CB3_2:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB3_2");
            break;
        case ID_TEMPERATURES_CB4_0:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB4_0");
            break;
        case ID_TEMPERATURES_CB4_1:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB4_1");
            break;
        case ID_TEMPERATURES_CB4_2:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB4_2");
            break;
        case ID_TEMPERATURES_CB5_0:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB5_0");
            break;
        case ID_TEMPERATURES_CB5_1:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB5_1");
            break;
        case ID_TEMPERATURES_CB5_2:
            strcpy(buffer, "BMSinternal_TEMPERATURES_CB5_2");
            break;
        case ID_MASTER_SYNC:
            strcpy(buffer, "BMSinternal_MASTER_SYNC");
            break;
        case ID_CELLBOARD_TOKEN:
            strcpy(buffer, "BMSinternal_CELLBOARD_TOKEN");
            break;
        default:
            strcpy(buffer, "unknown message id");
    }
}


/* BMSinternal_VOLTAGES_CB0_0 */
size_t serialize_BMSinternal_VOLTAGES_CB0_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    BMSinternal_VOLTAGES_CB0_0 bmsinternal_voltages_cb0_0 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB0_0));
	memcpy(buffer, &bmsinternal_voltages_cb0_0, sizeof(BMSinternal_VOLTAGES_CB0_0));
    return sizeof(BMSinternal_VOLTAGES_CB0_0);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB0_0(uint8_t* buffer, BMSinternal_VOLTAGES_CB0_0* bmsinternal_voltages_cb0_0) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB0_0));
	memcpy(bmsinternal_voltages_cb0_0, buffer, sizeof(BMSinternal_VOLTAGES_CB0_0));
    return sizeof(BMSinternal_VOLTAGES_CB0_0);
}
/* BMSinternal_VOLTAGES_CB0_1 */
size_t serialize_BMSinternal_VOLTAGES_CB0_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    BMSinternal_VOLTAGES_CB0_1 bmsinternal_voltages_cb0_1 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB0_1));
	memcpy(buffer, &bmsinternal_voltages_cb0_1, sizeof(BMSinternal_VOLTAGES_CB0_1));
    return sizeof(BMSinternal_VOLTAGES_CB0_1);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB0_1(uint8_t* buffer, BMSinternal_VOLTAGES_CB0_1* bmsinternal_voltages_cb0_1) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB0_1));
	memcpy(bmsinternal_voltages_cb0_1, buffer, sizeof(BMSinternal_VOLTAGES_CB0_1));
    return sizeof(BMSinternal_VOLTAGES_CB0_1);
}
/* BMSinternal_VOLTAGES_CB0_2 */
size_t serialize_BMSinternal_VOLTAGES_CB0_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    BMSinternal_VOLTAGES_CB0_2 bmsinternal_voltages_cb0_2 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB0_2));
	memcpy(buffer, &bmsinternal_voltages_cb0_2, sizeof(BMSinternal_VOLTAGES_CB0_2));
    return sizeof(BMSinternal_VOLTAGES_CB0_2);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB0_2(uint8_t* buffer, BMSinternal_VOLTAGES_CB0_2* bmsinternal_voltages_cb0_2) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB0_2));
	memcpy(bmsinternal_voltages_cb0_2, buffer, sizeof(BMSinternal_VOLTAGES_CB0_2));
    return sizeof(BMSinternal_VOLTAGES_CB0_2);
}
/* BMSinternal_VOLTAGES_CB0_3 */
size_t serialize_BMSinternal_VOLTAGES_CB0_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    BMSinternal_VOLTAGES_CB0_3 bmsinternal_voltages_cb0_3 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB0_3));
	memcpy(buffer, &bmsinternal_voltages_cb0_3, sizeof(BMSinternal_VOLTAGES_CB0_3));
    return sizeof(BMSinternal_VOLTAGES_CB0_3);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB0_3(uint8_t* buffer, BMSinternal_VOLTAGES_CB0_3* bmsinternal_voltages_cb0_3) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB0_3));
	memcpy(bmsinternal_voltages_cb0_3, buffer, sizeof(BMSinternal_VOLTAGES_CB0_3));
    return sizeof(BMSinternal_VOLTAGES_CB0_3);
}
/* BMSinternal_VOLTAGES_CB0_4 */
size_t serialize_BMSinternal_VOLTAGES_CB0_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    BMSinternal_VOLTAGES_CB0_4 bmsinternal_voltages_cb0_4 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB0_4));
	memcpy(buffer, &bmsinternal_voltages_cb0_4, sizeof(BMSinternal_VOLTAGES_CB0_4));
    return sizeof(BMSinternal_VOLTAGES_CB0_4);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB0_4(uint8_t* buffer, BMSinternal_VOLTAGES_CB0_4* bmsinternal_voltages_cb0_4) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB0_4));
	memcpy(bmsinternal_voltages_cb0_4, buffer, sizeof(BMSinternal_VOLTAGES_CB0_4));
    return sizeof(BMSinternal_VOLTAGES_CB0_4);
}
/* BMSinternal_VOLTAGES_CB1_0 */
size_t serialize_BMSinternal_VOLTAGES_CB1_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    BMSinternal_VOLTAGES_CB1_0 bmsinternal_voltages_cb1_0 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB1_0));
	memcpy(buffer, &bmsinternal_voltages_cb1_0, sizeof(BMSinternal_VOLTAGES_CB1_0));
    return sizeof(BMSinternal_VOLTAGES_CB1_0);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB1_0(uint8_t* buffer, BMSinternal_VOLTAGES_CB1_0* bmsinternal_voltages_cb1_0) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB1_0));
	memcpy(bmsinternal_voltages_cb1_0, buffer, sizeof(BMSinternal_VOLTAGES_CB1_0));
    return sizeof(BMSinternal_VOLTAGES_CB1_0);
}
/* BMSinternal_VOLTAGES_CB1_1 */
size_t serialize_BMSinternal_VOLTAGES_CB1_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    BMSinternal_VOLTAGES_CB1_1 bmsinternal_voltages_cb1_1 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB1_1));
	memcpy(buffer, &bmsinternal_voltages_cb1_1, sizeof(BMSinternal_VOLTAGES_CB1_1));
    return sizeof(BMSinternal_VOLTAGES_CB1_1);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB1_1(uint8_t* buffer, BMSinternal_VOLTAGES_CB1_1* bmsinternal_voltages_cb1_1) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB1_1));
	memcpy(bmsinternal_voltages_cb1_1, buffer, sizeof(BMSinternal_VOLTAGES_CB1_1));
    return sizeof(BMSinternal_VOLTAGES_CB1_1);
}
/* BMSinternal_VOLTAGES_CB1_2 */
size_t serialize_BMSinternal_VOLTAGES_CB1_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    BMSinternal_VOLTAGES_CB1_2 bmsinternal_voltages_cb1_2 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB1_2));
	memcpy(buffer, &bmsinternal_voltages_cb1_2, sizeof(BMSinternal_VOLTAGES_CB1_2));
    return sizeof(BMSinternal_VOLTAGES_CB1_2);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB1_2(uint8_t* buffer, BMSinternal_VOLTAGES_CB1_2* bmsinternal_voltages_cb1_2) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB1_2));
	memcpy(bmsinternal_voltages_cb1_2, buffer, sizeof(BMSinternal_VOLTAGES_CB1_2));
    return sizeof(BMSinternal_VOLTAGES_CB1_2);
}
/* BMSinternal_VOLTAGES_CB1_3 */
size_t serialize_BMSinternal_VOLTAGES_CB1_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    BMSinternal_VOLTAGES_CB1_3 bmsinternal_voltages_cb1_3 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB1_3));
	memcpy(buffer, &bmsinternal_voltages_cb1_3, sizeof(BMSinternal_VOLTAGES_CB1_3));
    return sizeof(BMSinternal_VOLTAGES_CB1_3);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB1_3(uint8_t* buffer, BMSinternal_VOLTAGES_CB1_3* bmsinternal_voltages_cb1_3) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB1_3));
	memcpy(bmsinternal_voltages_cb1_3, buffer, sizeof(BMSinternal_VOLTAGES_CB1_3));
    return sizeof(BMSinternal_VOLTAGES_CB1_3);
}
/* BMSinternal_VOLTAGES_CB1_4 */
size_t serialize_BMSinternal_VOLTAGES_CB1_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    BMSinternal_VOLTAGES_CB1_4 bmsinternal_voltages_cb1_4 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB1_4));
	memcpy(buffer, &bmsinternal_voltages_cb1_4, sizeof(BMSinternal_VOLTAGES_CB1_4));
    return sizeof(BMSinternal_VOLTAGES_CB1_4);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB1_4(uint8_t* buffer, BMSinternal_VOLTAGES_CB1_4* bmsinternal_voltages_cb1_4) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB1_4));
	memcpy(bmsinternal_voltages_cb1_4, buffer, sizeof(BMSinternal_VOLTAGES_CB1_4));
    return sizeof(BMSinternal_VOLTAGES_CB1_4);
}
/* BMSinternal_VOLTAGES_CB2_0 */
size_t serialize_BMSinternal_VOLTAGES_CB2_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    BMSinternal_VOLTAGES_CB2_0 bmsinternal_voltages_cb2_0 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB2_0));
	memcpy(buffer, &bmsinternal_voltages_cb2_0, sizeof(BMSinternal_VOLTAGES_CB2_0));
    return sizeof(BMSinternal_VOLTAGES_CB2_0);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB2_0(uint8_t* buffer, BMSinternal_VOLTAGES_CB2_0* bmsinternal_voltages_cb2_0) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB2_0));
	memcpy(bmsinternal_voltages_cb2_0, buffer, sizeof(BMSinternal_VOLTAGES_CB2_0));
    return sizeof(BMSinternal_VOLTAGES_CB2_0);
}
/* BMSinternal_VOLTAGES_CB2_1 */
size_t serialize_BMSinternal_VOLTAGES_CB2_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    BMSinternal_VOLTAGES_CB2_1 bmsinternal_voltages_cb2_1 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB2_1));
	memcpy(buffer, &bmsinternal_voltages_cb2_1, sizeof(BMSinternal_VOLTAGES_CB2_1));
    return sizeof(BMSinternal_VOLTAGES_CB2_1);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB2_1(uint8_t* buffer, BMSinternal_VOLTAGES_CB2_1* bmsinternal_voltages_cb2_1) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB2_1));
	memcpy(bmsinternal_voltages_cb2_1, buffer, sizeof(BMSinternal_VOLTAGES_CB2_1));
    return sizeof(BMSinternal_VOLTAGES_CB2_1);
}
/* BMSinternal_VOLTAGES_CB2_2 */
size_t serialize_BMSinternal_VOLTAGES_CB2_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    BMSinternal_VOLTAGES_CB2_2 bmsinternal_voltages_cb2_2 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB2_2));
	memcpy(buffer, &bmsinternal_voltages_cb2_2, sizeof(BMSinternal_VOLTAGES_CB2_2));
    return sizeof(BMSinternal_VOLTAGES_CB2_2);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB2_2(uint8_t* buffer, BMSinternal_VOLTAGES_CB2_2* bmsinternal_voltages_cb2_2) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB2_2));
	memcpy(bmsinternal_voltages_cb2_2, buffer, sizeof(BMSinternal_VOLTAGES_CB2_2));
    return sizeof(BMSinternal_VOLTAGES_CB2_2);
}
/* BMSinternal_VOLTAGES_CB2_3 */
size_t serialize_BMSinternal_VOLTAGES_CB2_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    BMSinternal_VOLTAGES_CB2_3 bmsinternal_voltages_cb2_3 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB2_3));
	memcpy(buffer, &bmsinternal_voltages_cb2_3, sizeof(BMSinternal_VOLTAGES_CB2_3));
    return sizeof(BMSinternal_VOLTAGES_CB2_3);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB2_3(uint8_t* buffer, BMSinternal_VOLTAGES_CB2_3* bmsinternal_voltages_cb2_3) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB2_3));
	memcpy(bmsinternal_voltages_cb2_3, buffer, sizeof(BMSinternal_VOLTAGES_CB2_3));
    return sizeof(BMSinternal_VOLTAGES_CB2_3);
}
/* BMSinternal_VOLTAGES_CB2_4 */
size_t serialize_BMSinternal_VOLTAGES_CB2_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    BMSinternal_VOLTAGES_CB2_4 bmsinternal_voltages_cb2_4 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB2_4));
	memcpy(buffer, &bmsinternal_voltages_cb2_4, sizeof(BMSinternal_VOLTAGES_CB2_4));
    return sizeof(BMSinternal_VOLTAGES_CB2_4);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB2_4(uint8_t* buffer, BMSinternal_VOLTAGES_CB2_4* bmsinternal_voltages_cb2_4) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB2_4));
	memcpy(bmsinternal_voltages_cb2_4, buffer, sizeof(BMSinternal_VOLTAGES_CB2_4));
    return sizeof(BMSinternal_VOLTAGES_CB2_4);
}
/* BMSinternal_VOLTAGES_CB3_0 */
size_t serialize_BMSinternal_VOLTAGES_CB3_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    BMSinternal_VOLTAGES_CB3_0 bmsinternal_voltages_cb3_0 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB3_0));
	memcpy(buffer, &bmsinternal_voltages_cb3_0, sizeof(BMSinternal_VOLTAGES_CB3_0));
    return sizeof(BMSinternal_VOLTAGES_CB3_0);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB3_0(uint8_t* buffer, BMSinternal_VOLTAGES_CB3_0* bmsinternal_voltages_cb3_0) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB3_0));
	memcpy(bmsinternal_voltages_cb3_0, buffer, sizeof(BMSinternal_VOLTAGES_CB3_0));
    return sizeof(BMSinternal_VOLTAGES_CB3_0);
}
/* BMSinternal_VOLTAGES_CB3_1 */
size_t serialize_BMSinternal_VOLTAGES_CB3_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    BMSinternal_VOLTAGES_CB3_1 bmsinternal_voltages_cb3_1 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB3_1));
	memcpy(buffer, &bmsinternal_voltages_cb3_1, sizeof(BMSinternal_VOLTAGES_CB3_1));
    return sizeof(BMSinternal_VOLTAGES_CB3_1);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB3_1(uint8_t* buffer, BMSinternal_VOLTAGES_CB3_1* bmsinternal_voltages_cb3_1) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB3_1));
	memcpy(bmsinternal_voltages_cb3_1, buffer, sizeof(BMSinternal_VOLTAGES_CB3_1));
    return sizeof(BMSinternal_VOLTAGES_CB3_1);
}
/* BMSinternal_VOLTAGES_CB3_2 */
size_t serialize_BMSinternal_VOLTAGES_CB3_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    BMSinternal_VOLTAGES_CB3_2 bmsinternal_voltages_cb3_2 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB3_2));
	memcpy(buffer, &bmsinternal_voltages_cb3_2, sizeof(BMSinternal_VOLTAGES_CB3_2));
    return sizeof(BMSinternal_VOLTAGES_CB3_2);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB3_2(uint8_t* buffer, BMSinternal_VOLTAGES_CB3_2* bmsinternal_voltages_cb3_2) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB3_2));
	memcpy(bmsinternal_voltages_cb3_2, buffer, sizeof(BMSinternal_VOLTAGES_CB3_2));
    return sizeof(BMSinternal_VOLTAGES_CB3_2);
}
/* BMSinternal_VOLTAGES_CB3_3 */
size_t serialize_BMSinternal_VOLTAGES_CB3_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    BMSinternal_VOLTAGES_CB3_3 bmsinternal_voltages_cb3_3 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB3_3));
	memcpy(buffer, &bmsinternal_voltages_cb3_3, sizeof(BMSinternal_VOLTAGES_CB3_3));
    return sizeof(BMSinternal_VOLTAGES_CB3_3);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB3_3(uint8_t* buffer, BMSinternal_VOLTAGES_CB3_3* bmsinternal_voltages_cb3_3) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB3_3));
	memcpy(bmsinternal_voltages_cb3_3, buffer, sizeof(BMSinternal_VOLTAGES_CB3_3));
    return sizeof(BMSinternal_VOLTAGES_CB3_3);
}
/* BMSinternal_VOLTAGES_CB3_4 */
size_t serialize_BMSinternal_VOLTAGES_CB3_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    BMSinternal_VOLTAGES_CB3_4 bmsinternal_voltages_cb3_4 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB3_4));
	memcpy(buffer, &bmsinternal_voltages_cb3_4, sizeof(BMSinternal_VOLTAGES_CB3_4));
    return sizeof(BMSinternal_VOLTAGES_CB3_4);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB3_4(uint8_t* buffer, BMSinternal_VOLTAGES_CB3_4* bmsinternal_voltages_cb3_4) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB3_4));
	memcpy(bmsinternal_voltages_cb3_4, buffer, sizeof(BMSinternal_VOLTAGES_CB3_4));
    return sizeof(BMSinternal_VOLTAGES_CB3_4);
}
/* BMSinternal_VOLTAGES_CB4_0 */
size_t serialize_BMSinternal_VOLTAGES_CB4_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    BMSinternal_VOLTAGES_CB4_0 bmsinternal_voltages_cb4_0 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB4_0));
	memcpy(buffer, &bmsinternal_voltages_cb4_0, sizeof(BMSinternal_VOLTAGES_CB4_0));
    return sizeof(BMSinternal_VOLTAGES_CB4_0);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB4_0(uint8_t* buffer, BMSinternal_VOLTAGES_CB4_0* bmsinternal_voltages_cb4_0) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB4_0));
	memcpy(bmsinternal_voltages_cb4_0, buffer, sizeof(BMSinternal_VOLTAGES_CB4_0));
    return sizeof(BMSinternal_VOLTAGES_CB4_0);
}
/* BMSinternal_VOLTAGES_CB4_1 */
size_t serialize_BMSinternal_VOLTAGES_CB4_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    BMSinternal_VOLTAGES_CB4_1 bmsinternal_voltages_cb4_1 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB4_1));
	memcpy(buffer, &bmsinternal_voltages_cb4_1, sizeof(BMSinternal_VOLTAGES_CB4_1));
    return sizeof(BMSinternal_VOLTAGES_CB4_1);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB4_1(uint8_t* buffer, BMSinternal_VOLTAGES_CB4_1* bmsinternal_voltages_cb4_1) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB4_1));
	memcpy(bmsinternal_voltages_cb4_1, buffer, sizeof(BMSinternal_VOLTAGES_CB4_1));
    return sizeof(BMSinternal_VOLTAGES_CB4_1);
}
/* BMSinternal_VOLTAGES_CB4_2 */
size_t serialize_BMSinternal_VOLTAGES_CB4_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    BMSinternal_VOLTAGES_CB4_2 bmsinternal_voltages_cb4_2 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB4_2));
	memcpy(buffer, &bmsinternal_voltages_cb4_2, sizeof(BMSinternal_VOLTAGES_CB4_2));
    return sizeof(BMSinternal_VOLTAGES_CB4_2);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB4_2(uint8_t* buffer, BMSinternal_VOLTAGES_CB4_2* bmsinternal_voltages_cb4_2) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB4_2));
	memcpy(bmsinternal_voltages_cb4_2, buffer, sizeof(BMSinternal_VOLTAGES_CB4_2));
    return sizeof(BMSinternal_VOLTAGES_CB4_2);
}
/* BMSinternal_VOLTAGES_CB4_3 */
size_t serialize_BMSinternal_VOLTAGES_CB4_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    BMSinternal_VOLTAGES_CB4_3 bmsinternal_voltages_cb4_3 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB4_3));
	memcpy(buffer, &bmsinternal_voltages_cb4_3, sizeof(BMSinternal_VOLTAGES_CB4_3));
    return sizeof(BMSinternal_VOLTAGES_CB4_3);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB4_3(uint8_t* buffer, BMSinternal_VOLTAGES_CB4_3* bmsinternal_voltages_cb4_3) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB4_3));
	memcpy(bmsinternal_voltages_cb4_3, buffer, sizeof(BMSinternal_VOLTAGES_CB4_3));
    return sizeof(BMSinternal_VOLTAGES_CB4_3);
}
/* BMSinternal_VOLTAGES_CB4_4 */
size_t serialize_BMSinternal_VOLTAGES_CB4_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    BMSinternal_VOLTAGES_CB4_4 bmsinternal_voltages_cb4_4 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB4_4));
	memcpy(buffer, &bmsinternal_voltages_cb4_4, sizeof(BMSinternal_VOLTAGES_CB4_4));
    return sizeof(BMSinternal_VOLTAGES_CB4_4);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB4_4(uint8_t* buffer, BMSinternal_VOLTAGES_CB4_4* bmsinternal_voltages_cb4_4) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB4_4));
	memcpy(bmsinternal_voltages_cb4_4, buffer, sizeof(BMSinternal_VOLTAGES_CB4_4));
    return sizeof(BMSinternal_VOLTAGES_CB4_4);
}
/* BMSinternal_VOLTAGES_CB5_0 */
size_t serialize_BMSinternal_VOLTAGES_CB5_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3) {
    BMSinternal_VOLTAGES_CB5_0 bmsinternal_voltages_cb5_0 = { voltage0, voltage1, voltage2, voltage3 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB5_0));
	memcpy(buffer, &bmsinternal_voltages_cb5_0, sizeof(BMSinternal_VOLTAGES_CB5_0));
    return sizeof(BMSinternal_VOLTAGES_CB5_0);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB5_0(uint8_t* buffer, BMSinternal_VOLTAGES_CB5_0* bmsinternal_voltages_cb5_0) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB5_0));
	memcpy(bmsinternal_voltages_cb5_0, buffer, sizeof(BMSinternal_VOLTAGES_CB5_0));
    return sizeof(BMSinternal_VOLTAGES_CB5_0);
}
/* BMSinternal_VOLTAGES_CB5_1 */
size_t serialize_BMSinternal_VOLTAGES_CB5_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7) {
    BMSinternal_VOLTAGES_CB5_1 bmsinternal_voltages_cb5_1 = { voltage4, voltage5, voltage6, voltage7 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB5_1));
	memcpy(buffer, &bmsinternal_voltages_cb5_1, sizeof(BMSinternal_VOLTAGES_CB5_1));
    return sizeof(BMSinternal_VOLTAGES_CB5_1);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB5_1(uint8_t* buffer, BMSinternal_VOLTAGES_CB5_1* bmsinternal_voltages_cb5_1) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB5_1));
	memcpy(bmsinternal_voltages_cb5_1, buffer, sizeof(BMSinternal_VOLTAGES_CB5_1));
    return sizeof(BMSinternal_VOLTAGES_CB5_1);
}
/* BMSinternal_VOLTAGES_CB5_2 */
size_t serialize_BMSinternal_VOLTAGES_CB5_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11) {
    BMSinternal_VOLTAGES_CB5_2 bmsinternal_voltages_cb5_2 = { voltage8, voltage9, voltage10, voltage11 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB5_2));
	memcpy(buffer, &bmsinternal_voltages_cb5_2, sizeof(BMSinternal_VOLTAGES_CB5_2));
    return sizeof(BMSinternal_VOLTAGES_CB5_2);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB5_2(uint8_t* buffer, BMSinternal_VOLTAGES_CB5_2* bmsinternal_voltages_cb5_2) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB5_2));
	memcpy(bmsinternal_voltages_cb5_2, buffer, sizeof(BMSinternal_VOLTAGES_CB5_2));
    return sizeof(BMSinternal_VOLTAGES_CB5_2);
}
/* BMSinternal_VOLTAGES_CB5_3 */
size_t serialize_BMSinternal_VOLTAGES_CB5_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15) {
    BMSinternal_VOLTAGES_CB5_3 bmsinternal_voltages_cb5_3 = { voltage12, voltage13, voltage14, voltage15 };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB5_3));
	memcpy(buffer, &bmsinternal_voltages_cb5_3, sizeof(BMSinternal_VOLTAGES_CB5_3));
    return sizeof(BMSinternal_VOLTAGES_CB5_3);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB5_3(uint8_t* buffer, BMSinternal_VOLTAGES_CB5_3* bmsinternal_voltages_cb5_3) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB5_3));
	memcpy(bmsinternal_voltages_cb5_3, buffer, sizeof(BMSinternal_VOLTAGES_CB5_3));
    return sizeof(BMSinternal_VOLTAGES_CB5_3);
}
/* BMSinternal_VOLTAGES_CB5_4 */
size_t serialize_BMSinternal_VOLTAGES_CB5_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage) {
    BMSinternal_VOLTAGES_CB5_4 bmsinternal_voltages_cb5_4 = { voltage16, voltage17, max_voltage, min_voltage };
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB5_4));
	memcpy(buffer, &bmsinternal_voltages_cb5_4, sizeof(BMSinternal_VOLTAGES_CB5_4));
    return sizeof(BMSinternal_VOLTAGES_CB5_4);
} 
size_t deserialize_BMSinternal_VOLTAGES_CB5_4(uint8_t* buffer, BMSinternal_VOLTAGES_CB5_4* bmsinternal_voltages_cb5_4) {
	// assert(buf_len >= sizeof(BMSinternal_VOLTAGES_CB5_4));
	memcpy(bmsinternal_voltages_cb5_4, buffer, sizeof(BMSinternal_VOLTAGES_CB5_4));
    return sizeof(BMSinternal_VOLTAGES_CB5_4);
}
/* BMSinternal_TEMPERATURES_CB0_0 */
size_t serialize_BMSinternal_TEMPERATURES_CB0_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7) {
    BMSinternal_TEMPERATURES_CB0_0 bmsinternal_temperatures_cb0_0 = { temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7 };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB0_0));
	memcpy(buffer, &bmsinternal_temperatures_cb0_0, sizeof(BMSinternal_TEMPERATURES_CB0_0));
    return sizeof(BMSinternal_TEMPERATURES_CB0_0);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB0_0(uint8_t* buffer, BMSinternal_TEMPERATURES_CB0_0* bmsinternal_temperatures_cb0_0) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB0_0));
	memcpy(bmsinternal_temperatures_cb0_0, buffer, sizeof(BMSinternal_TEMPERATURES_CB0_0));
    return sizeof(BMSinternal_TEMPERATURES_CB0_0);
}
/* BMSinternal_TEMPERATURES_CB0_1 */
size_t serialize_BMSinternal_TEMPERATURES_CB0_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15) {
    BMSinternal_TEMPERATURES_CB0_1 bmsinternal_temperatures_cb0_1 = { temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15 };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB0_1));
	memcpy(buffer, &bmsinternal_temperatures_cb0_1, sizeof(BMSinternal_TEMPERATURES_CB0_1));
    return sizeof(BMSinternal_TEMPERATURES_CB0_1);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB0_1(uint8_t* buffer, BMSinternal_TEMPERATURES_CB0_1* bmsinternal_temperatures_cb0_1) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB0_1));
	memcpy(bmsinternal_temperatures_cb0_1, buffer, sizeof(BMSinternal_TEMPERATURES_CB0_1));
    return sizeof(BMSinternal_TEMPERATURES_CB0_1);
}
/* BMSinternal_TEMPERATURES_CB0_2 */
size_t serialize_BMSinternal_TEMPERATURES_CB0_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17) {
    BMSinternal_TEMPERATURES_CB0_2 bmsinternal_temperatures_cb0_2 = { temperature16, temperature17 };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB0_2));
	memcpy(buffer, &bmsinternal_temperatures_cb0_2, sizeof(BMSinternal_TEMPERATURES_CB0_2));
    return sizeof(BMSinternal_TEMPERATURES_CB0_2);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB0_2(uint8_t* buffer, BMSinternal_TEMPERATURES_CB0_2* bmsinternal_temperatures_cb0_2) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB0_2));
	memcpy(bmsinternal_temperatures_cb0_2, buffer, sizeof(BMSinternal_TEMPERATURES_CB0_2));
    return sizeof(BMSinternal_TEMPERATURES_CB0_2);
}
/* BMSinternal_TEMPERATURES_CB1_0 */
size_t serialize_BMSinternal_TEMPERATURES_CB1_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7) {
    BMSinternal_TEMPERATURES_CB1_0 bmsinternal_temperatures_cb1_0 = { temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7 };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB1_0));
	memcpy(buffer, &bmsinternal_temperatures_cb1_0, sizeof(BMSinternal_TEMPERATURES_CB1_0));
    return sizeof(BMSinternal_TEMPERATURES_CB1_0);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB1_0(uint8_t* buffer, BMSinternal_TEMPERATURES_CB1_0* bmsinternal_temperatures_cb1_0) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB1_0));
	memcpy(bmsinternal_temperatures_cb1_0, buffer, sizeof(BMSinternal_TEMPERATURES_CB1_0));
    return sizeof(BMSinternal_TEMPERATURES_CB1_0);
}
/* BMSinternal_TEMPERATURES_CB1_1 */
size_t serialize_BMSinternal_TEMPERATURES_CB1_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15) {
    BMSinternal_TEMPERATURES_CB1_1 bmsinternal_temperatures_cb1_1 = { temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15 };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB1_1));
	memcpy(buffer, &bmsinternal_temperatures_cb1_1, sizeof(BMSinternal_TEMPERATURES_CB1_1));
    return sizeof(BMSinternal_TEMPERATURES_CB1_1);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB1_1(uint8_t* buffer, BMSinternal_TEMPERATURES_CB1_1* bmsinternal_temperatures_cb1_1) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB1_1));
	memcpy(bmsinternal_temperatures_cb1_1, buffer, sizeof(BMSinternal_TEMPERATURES_CB1_1));
    return sizeof(BMSinternal_TEMPERATURES_CB1_1);
}
/* BMSinternal_TEMPERATURES_CB1_2 */
size_t serialize_BMSinternal_TEMPERATURES_CB1_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17, uint8_t max_temperature, uint8_t min_temperature) {
    BMSinternal_TEMPERATURES_CB1_2 bmsinternal_temperatures_cb1_2 = { temperature16, temperature17, max_temperature, min_temperature };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB1_2));
	memcpy(buffer, &bmsinternal_temperatures_cb1_2, sizeof(BMSinternal_TEMPERATURES_CB1_2));
    return sizeof(BMSinternal_TEMPERATURES_CB1_2);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB1_2(uint8_t* buffer, BMSinternal_TEMPERATURES_CB1_2* bmsinternal_temperatures_cb1_2) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB1_2));
	memcpy(bmsinternal_temperatures_cb1_2, buffer, sizeof(BMSinternal_TEMPERATURES_CB1_2));
    return sizeof(BMSinternal_TEMPERATURES_CB1_2);
}
/* BMSinternal_TEMPERATURES_CB2_0 */
size_t serialize_BMSinternal_TEMPERATURES_CB2_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7) {
    BMSinternal_TEMPERATURES_CB2_0 bmsinternal_temperatures_cb2_0 = { temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7 };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB2_0));
	memcpy(buffer, &bmsinternal_temperatures_cb2_0, sizeof(BMSinternal_TEMPERATURES_CB2_0));
    return sizeof(BMSinternal_TEMPERATURES_CB2_0);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB2_0(uint8_t* buffer, BMSinternal_TEMPERATURES_CB2_0* bmsinternal_temperatures_cb2_0) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB2_0));
	memcpy(bmsinternal_temperatures_cb2_0, buffer, sizeof(BMSinternal_TEMPERATURES_CB2_0));
    return sizeof(BMSinternal_TEMPERATURES_CB2_0);
}
/* BMSinternal_TEMPERATURES_CB2_1 */
size_t serialize_BMSinternal_TEMPERATURES_CB2_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15) {
    BMSinternal_TEMPERATURES_CB2_1 bmsinternal_temperatures_cb2_1 = { temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15 };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB2_1));
	memcpy(buffer, &bmsinternal_temperatures_cb2_1, sizeof(BMSinternal_TEMPERATURES_CB2_1));
    return sizeof(BMSinternal_TEMPERATURES_CB2_1);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB2_1(uint8_t* buffer, BMSinternal_TEMPERATURES_CB2_1* bmsinternal_temperatures_cb2_1) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB2_1));
	memcpy(bmsinternal_temperatures_cb2_1, buffer, sizeof(BMSinternal_TEMPERATURES_CB2_1));
    return sizeof(BMSinternal_TEMPERATURES_CB2_1);
}
/* BMSinternal_TEMPERATURES_CB2_2 */
size_t serialize_BMSinternal_TEMPERATURES_CB2_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17, uint8_t max_temperature, uint8_t min_temperature) {
    BMSinternal_TEMPERATURES_CB2_2 bmsinternal_temperatures_cb2_2 = { temperature16, temperature17, max_temperature, min_temperature };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB2_2));
	memcpy(buffer, &bmsinternal_temperatures_cb2_2, sizeof(BMSinternal_TEMPERATURES_CB2_2));
    return sizeof(BMSinternal_TEMPERATURES_CB2_2);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB2_2(uint8_t* buffer, BMSinternal_TEMPERATURES_CB2_2* bmsinternal_temperatures_cb2_2) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB2_2));
	memcpy(bmsinternal_temperatures_cb2_2, buffer, sizeof(BMSinternal_TEMPERATURES_CB2_2));
    return sizeof(BMSinternal_TEMPERATURES_CB2_2);
}
/* BMSinternal_TEMPERATURES_CB3_0 */
size_t serialize_BMSinternal_TEMPERATURES_CB3_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7) {
    BMSinternal_TEMPERATURES_CB3_0 bmsinternal_temperatures_cb3_0 = { temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7 };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB3_0));
	memcpy(buffer, &bmsinternal_temperatures_cb3_0, sizeof(BMSinternal_TEMPERATURES_CB3_0));
    return sizeof(BMSinternal_TEMPERATURES_CB3_0);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB3_0(uint8_t* buffer, BMSinternal_TEMPERATURES_CB3_0* bmsinternal_temperatures_cb3_0) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB3_0));
	memcpy(bmsinternal_temperatures_cb3_0, buffer, sizeof(BMSinternal_TEMPERATURES_CB3_0));
    return sizeof(BMSinternal_TEMPERATURES_CB3_0);
}
/* BMSinternal_TEMPERATURES_CB3_1 */
size_t serialize_BMSinternal_TEMPERATURES_CB3_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15) {
    BMSinternal_TEMPERATURES_CB3_1 bmsinternal_temperatures_cb3_1 = { temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15 };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB3_1));
	memcpy(buffer, &bmsinternal_temperatures_cb3_1, sizeof(BMSinternal_TEMPERATURES_CB3_1));
    return sizeof(BMSinternal_TEMPERATURES_CB3_1);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB3_1(uint8_t* buffer, BMSinternal_TEMPERATURES_CB3_1* bmsinternal_temperatures_cb3_1) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB3_1));
	memcpy(bmsinternal_temperatures_cb3_1, buffer, sizeof(BMSinternal_TEMPERATURES_CB3_1));
    return sizeof(BMSinternal_TEMPERATURES_CB3_1);
}
/* BMSinternal_TEMPERATURES_CB3_2 */
size_t serialize_BMSinternal_TEMPERATURES_CB3_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17, uint8_t max_temperature, uint8_t min_temperature) {
    BMSinternal_TEMPERATURES_CB3_2 bmsinternal_temperatures_cb3_2 = { temperature16, temperature17, max_temperature, min_temperature };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB3_2));
	memcpy(buffer, &bmsinternal_temperatures_cb3_2, sizeof(BMSinternal_TEMPERATURES_CB3_2));
    return sizeof(BMSinternal_TEMPERATURES_CB3_2);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB3_2(uint8_t* buffer, BMSinternal_TEMPERATURES_CB3_2* bmsinternal_temperatures_cb3_2) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB3_2));
	memcpy(bmsinternal_temperatures_cb3_2, buffer, sizeof(BMSinternal_TEMPERATURES_CB3_2));
    return sizeof(BMSinternal_TEMPERATURES_CB3_2);
}
/* BMSinternal_TEMPERATURES_CB4_0 */
size_t serialize_BMSinternal_TEMPERATURES_CB4_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7) {
    BMSinternal_TEMPERATURES_CB4_0 bmsinternal_temperatures_cb4_0 = { temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7 };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB4_0));
	memcpy(buffer, &bmsinternal_temperatures_cb4_0, sizeof(BMSinternal_TEMPERATURES_CB4_0));
    return sizeof(BMSinternal_TEMPERATURES_CB4_0);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB4_0(uint8_t* buffer, BMSinternal_TEMPERATURES_CB4_0* bmsinternal_temperatures_cb4_0) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB4_0));
	memcpy(bmsinternal_temperatures_cb4_0, buffer, sizeof(BMSinternal_TEMPERATURES_CB4_0));
    return sizeof(BMSinternal_TEMPERATURES_CB4_0);
}
/* BMSinternal_TEMPERATURES_CB4_1 */
size_t serialize_BMSinternal_TEMPERATURES_CB4_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15) {
    BMSinternal_TEMPERATURES_CB4_1 bmsinternal_temperatures_cb4_1 = { temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15 };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB4_1));
	memcpy(buffer, &bmsinternal_temperatures_cb4_1, sizeof(BMSinternal_TEMPERATURES_CB4_1));
    return sizeof(BMSinternal_TEMPERATURES_CB4_1);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB4_1(uint8_t* buffer, BMSinternal_TEMPERATURES_CB4_1* bmsinternal_temperatures_cb4_1) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB4_1));
	memcpy(bmsinternal_temperatures_cb4_1, buffer, sizeof(BMSinternal_TEMPERATURES_CB4_1));
    return sizeof(BMSinternal_TEMPERATURES_CB4_1);
}
/* BMSinternal_TEMPERATURES_CB4_2 */
size_t serialize_BMSinternal_TEMPERATURES_CB4_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17, uint8_t max_temperature, uint8_t min_temperature) {
    BMSinternal_TEMPERATURES_CB4_2 bmsinternal_temperatures_cb4_2 = { temperature16, temperature17, max_temperature, min_temperature };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB4_2));
	memcpy(buffer, &bmsinternal_temperatures_cb4_2, sizeof(BMSinternal_TEMPERATURES_CB4_2));
    return sizeof(BMSinternal_TEMPERATURES_CB4_2);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB4_2(uint8_t* buffer, BMSinternal_TEMPERATURES_CB4_2* bmsinternal_temperatures_cb4_2) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB4_2));
	memcpy(bmsinternal_temperatures_cb4_2, buffer, sizeof(BMSinternal_TEMPERATURES_CB4_2));
    return sizeof(BMSinternal_TEMPERATURES_CB4_2);
}
/* BMSinternal_TEMPERATURES_CB5_0 */
size_t serialize_BMSinternal_TEMPERATURES_CB5_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7) {
    BMSinternal_TEMPERATURES_CB5_0 bmsinternal_temperatures_cb5_0 = { temperature0, temperature1, temperature2, temperature3, temperature4, temperature5, temperature6, temperature7 };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB5_0));
	memcpy(buffer, &bmsinternal_temperatures_cb5_0, sizeof(BMSinternal_TEMPERATURES_CB5_0));
    return sizeof(BMSinternal_TEMPERATURES_CB5_0);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB5_0(uint8_t* buffer, BMSinternal_TEMPERATURES_CB5_0* bmsinternal_temperatures_cb5_0) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB5_0));
	memcpy(bmsinternal_temperatures_cb5_0, buffer, sizeof(BMSinternal_TEMPERATURES_CB5_0));
    return sizeof(BMSinternal_TEMPERATURES_CB5_0);
}
/* BMSinternal_TEMPERATURES_CB5_1 */
size_t serialize_BMSinternal_TEMPERATURES_CB5_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15) {
    BMSinternal_TEMPERATURES_CB5_1 bmsinternal_temperatures_cb5_1 = { temperature8, temperature9, temperature10, temperature11, temperature12, temperature13, temperature14, temperature15 };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB5_1));
	memcpy(buffer, &bmsinternal_temperatures_cb5_1, sizeof(BMSinternal_TEMPERATURES_CB5_1));
    return sizeof(BMSinternal_TEMPERATURES_CB5_1);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB5_1(uint8_t* buffer, BMSinternal_TEMPERATURES_CB5_1* bmsinternal_temperatures_cb5_1) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB5_1));
	memcpy(bmsinternal_temperatures_cb5_1, buffer, sizeof(BMSinternal_TEMPERATURES_CB5_1));
    return sizeof(BMSinternal_TEMPERATURES_CB5_1);
}
/* BMSinternal_TEMPERATURES_CB5_2 */
size_t serialize_BMSinternal_TEMPERATURES_CB5_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17, uint8_t max_temperature, uint8_t min_temperature) {
    BMSinternal_TEMPERATURES_CB5_2 bmsinternal_temperatures_cb5_2 = { temperature16, temperature17, max_temperature, min_temperature };
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB5_2));
	memcpy(buffer, &bmsinternal_temperatures_cb5_2, sizeof(BMSinternal_TEMPERATURES_CB5_2));
    return sizeof(BMSinternal_TEMPERATURES_CB5_2);
} 
size_t deserialize_BMSinternal_TEMPERATURES_CB5_2(uint8_t* buffer, BMSinternal_TEMPERATURES_CB5_2* bmsinternal_temperatures_cb5_2) {
	// assert(buf_len >= sizeof(BMSinternal_TEMPERATURES_CB5_2));
	memcpy(bmsinternal_temperatures_cb5_2, buffer, sizeof(BMSinternal_TEMPERATURES_CB5_2));
    return sizeof(BMSinternal_TEMPERATURES_CB5_2);
}
/* BMSinternal_MASTER_SYNC */
size_t serialize_BMSinternal_MASTER_SYNC(uint8_t* buffer, uint32_t time) {
    BMSinternal_MASTER_SYNC bmsinternal_master_sync = { time };
	// assert(buf_len >= sizeof(BMSinternal_MASTER_SYNC));
	memcpy(buffer, &bmsinternal_master_sync, sizeof(BMSinternal_MASTER_SYNC));
    return sizeof(BMSinternal_MASTER_SYNC);
} 
size_t deserialize_BMSinternal_MASTER_SYNC(uint8_t* buffer, BMSinternal_MASTER_SYNC* bmsinternal_master_sync) {
	// assert(buf_len >= sizeof(BMSinternal_MASTER_SYNC));
	memcpy(bmsinternal_master_sync, buffer, sizeof(BMSinternal_MASTER_SYNC));
    return sizeof(BMSinternal_MASTER_SYNC);
}
/* BMSinternal_CELLBOARD_TOKEN */
size_t serialize_BMSinternal_CELLBOARD_TOKEN(uint8_t* buffer, uint8_t sender_cellboard, uint32_t time) {
    BMSinternal_CELLBOARD_TOKEN bmsinternal_cellboard_token = { sender_cellboard, 0x00, 0x00, 0x00, time };
	// assert(buf_len >= sizeof(BMSinternal_CELLBOARD_TOKEN));
	memcpy(buffer, &bmsinternal_cellboard_token, sizeof(BMSinternal_CELLBOARD_TOKEN));
    return sizeof(BMSinternal_CELLBOARD_TOKEN);
} 
size_t deserialize_BMSinternal_CELLBOARD_TOKEN(uint8_t* buffer, BMSinternal_CELLBOARD_TOKEN* bmsinternal_cellboard_token) {
	// assert(buf_len >= sizeof(BMSinternal_CELLBOARD_TOKEN));
	memcpy(bmsinternal_cellboard_token, buffer, sizeof(BMSinternal_CELLBOARD_TOKEN));
    return sizeof(BMSinternal_CELLBOARD_TOKEN);
}
