#ifdef __cplusplus
extern "C" {
#endif

#ifndef BMS_H
#define BMS_H

#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include <stdio.h>

/*
*   NAKED SHARED 
*   Common functions, defines and checks between all the network.h files
*/
#ifndef __NAKED_SHARED
#define __NAKED_SHARED
    /*
    *   STDC Version check
    *   check if STDC version is greater or equal than the minimum version required
    */
    #define NAKED_STDC_MIN_VERSION 201112L
    #if __STDC_VERSION__ < NAKED_STDC_MIN_VERSION
        #error "** STDC VERSION NOT SUPPORTED **"
    #endif
    
    /*
    *   Endianness check
    *   static check for supported endianness
    */
    #ifndef __NAKED_ENDIAN_ORDER
        #define __NAKED_ENDIAN_ORDER 1094861636L // "ABCD"
    #endif
    #if !defined(__NAKED_LITTLE_ENDIAN) && !defined(__NAKED_BIG_ENDIAN) && !defined(__NAKED_PDP_ENDIAN)
        #if __NAKED_ENDIAN_ORDER==0x41424344UL 
            #define __NAKED_LITTLE_ENDIAN
        #elif __NAKED_ENDIAN_ORDER==0x44434241UL
            #define __NAKED_BIG_ENDIAN
        #elif __NAKED_ENDIAN_ORDER==0x42414443UL
            #define __NAKED_PDP_ENDIAN
        #else
            #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
        #endif
    #endif
    
    #ifndef __NAKED_LITTLE_ENDIAN
        #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
    #endif
    
    /*
    *   Floating point types size check
    *   the only supported sizes for now are 32 bits for float and 64 for double
    */
    static_assert(sizeof(float) == 4,"** THIS ARCHITECTURE DOESN'T MATCH THE EXPECTED SIZE FOR 'float' OF 4 BYTES **");
    static_assert(sizeof(double) == 8, "** THIS ARCHITECTURE DOESN'T MATCH THE EXPECTED SIZE FOR 'double' OF 8 BYTES **");

    /*
    *   Packed macro
    *   macro for packed structs on multiple compilers
    */
    #if defined(__MINGW32__)
        #define __is_packed __attribute__((__gcc_struct__, __packed__)) // , __aligned__(1)))
    #else
        #define __is_packed __attribute__((__packed__)) // , __aligned__(1)))
    #endif
    
    /*
    *   Bitset setter/getter
    *   macros for reading/writing bitsets
    */
    #define setBit(bitset, index, value) \
    do { \
        bitset[index/8] &= ~( 1 << index % 8); \
        bitset[index/8] |=  (value << index % 8); \
    } while(0);
    #define flipBit(bitset, index) (bitset[index/8] ^= (1 << index % 8) )
    #define getBit(bitset, index)  (bitset[index/8] &  (1 << index % 8) )
#endif


typedef uint8_t bms_errors[1]; // bitset
#define bms_errors_default { 0 } // bitset filled with zeros
#define bms_errors_LTC_COMM 0
#define bms_errors_TEMP_COMM_0 1
#define bms_errors_TEMP_COMM_1 2
#define bms_errors_TEMP_COMM_2 3
#define bms_errors_TEMP_COMM_3 4
#define bms_errors_TEMP_COMM_4 5
#define bms_errors_TEMP_COMM_5 6

typedef uint8_t bms_balancing_cells[3]; // bitset
#define bms_balancing_cells_default { 0, 0, 0 } // bitset filled with zeros
#define bms_balancing_cells_CELL0 0
#define bms_balancing_cells_CELL1 1
#define bms_balancing_cells_CELL2 2
#define bms_balancing_cells_CELL3 3
#define bms_balancing_cells_CELL4 4
#define bms_balancing_cells_CELL5 5
#define bms_balancing_cells_CELL6 6
#define bms_balancing_cells_CELL7 7
#define bms_balancing_cells_CELL8 8
#define bms_balancing_cells_CELL9 9
#define bms_balancing_cells_CELL10 10
#define bms_balancing_cells_CELL11 11
#define bms_balancing_cells_CELL12 12
#define bms_balancing_cells_CELL13 13
#define bms_balancing_cells_CELL14 14
#define bms_balancing_cells_CELL15 15
#define bms_balancing_cells_CELL16 16
#define bms_balancing_cells_CELL17 17
#define bms_balancing_cells_CELL18 18

typedef enum __is_packed {
    bms_balancing_status_OFF = 0,
    bms_balancing_status_COMPUTE = 1,
    bms_balancing_status_DISCHARGE = 2,
} bms_balancing_status;

/* bms_BOARD_STATUS */
typedef struct __is_packed {
    uint8_t board_index;
    bms_errors errors;
    bms_balancing_status balancing_status;
} bms_BOARD_STATUS;
static_assert(sizeof(bms_BOARD_STATUS) == 3, "struct size mismatch");
    
size_t serialize_bms_BOARD_STATUS(uint8_t* buffer, uint8_t board_index, bms_errors errors, bms_balancing_status balancing_status);
size_t deserialize_bms_BOARD_STATUS(uint8_t* buffer, bms_BOARD_STATUS* bms_board_status);

/* bms_TEMP_STATS */
typedef struct __is_packed {
    uint8_t board_index;
    uint8_t average;
    uint8_t max;
    uint8_t min;
} bms_TEMP_STATS;
static_assert(sizeof(bms_TEMP_STATS) == 4, "struct size mismatch");
    
size_t serialize_bms_TEMP_STATS(uint8_t* buffer, uint8_t board_index, uint8_t average, uint8_t max, uint8_t min);
size_t deserialize_bms_TEMP_STATS(uint8_t* buffer, bms_TEMP_STATS* bms_temp_stats);

/* bms_BALANCING */
typedef struct __is_packed {
    uint8_t board_index;
    bms_balancing_cells cells;
} bms_BALANCING;
static_assert(sizeof(bms_BALANCING) == 4, "struct size mismatch");
    
size_t serialize_bms_BALANCING(uint8_t* buffer, uint8_t board_index, bms_balancing_cells cells);
size_t deserialize_bms_BALANCING(uint8_t* buffer, bms_BALANCING* bms_balancing);

/* bms_MASTER_SYNC */
typedef struct __is_packed {
    uint32_t time;
} bms_MASTER_SYNC;
static_assert(sizeof(bms_MASTER_SYNC) == 4, "struct size mismatch");
    
size_t serialize_bms_MASTER_SYNC(uint8_t* buffer, uint32_t time);
size_t deserialize_bms_MASTER_SYNC(uint8_t* buffer, bms_MASTER_SYNC* bms_master_sync);

/* bms_VOLTAGES_00 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} bms_VOLTAGES_00;
static_assert(sizeof(bms_VOLTAGES_00) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_00(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_bms_VOLTAGES_00(uint8_t* buffer, bms_VOLTAGES_00* bms_voltages_00);

/* bms_VOLTAGES_01 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} bms_VOLTAGES_01;
static_assert(sizeof(bms_VOLTAGES_01) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_01(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_bms_VOLTAGES_01(uint8_t* buffer, bms_VOLTAGES_01* bms_voltages_01);

/* bms_VOLTAGES_02 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} bms_VOLTAGES_02;
static_assert(sizeof(bms_VOLTAGES_02) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_02(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_bms_VOLTAGES_02(uint8_t* buffer, bms_VOLTAGES_02* bms_voltages_02);

/* bms_VOLTAGES_03 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} bms_VOLTAGES_03;
static_assert(sizeof(bms_VOLTAGES_03) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_03(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_bms_VOLTAGES_03(uint8_t* buffer, bms_VOLTAGES_03* bms_voltages_03);

/* bms_VOLTAGES_04 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} bms_VOLTAGES_04;
static_assert(sizeof(bms_VOLTAGES_04) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_04(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_bms_VOLTAGES_04(uint8_t* buffer, bms_VOLTAGES_04* bms_voltages_04);

/* bms_VOLTAGES_10 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} bms_VOLTAGES_10;
static_assert(sizeof(bms_VOLTAGES_10) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_10(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_bms_VOLTAGES_10(uint8_t* buffer, bms_VOLTAGES_10* bms_voltages_10);

/* bms_VOLTAGES_11 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} bms_VOLTAGES_11;
static_assert(sizeof(bms_VOLTAGES_11) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_11(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_bms_VOLTAGES_11(uint8_t* buffer, bms_VOLTAGES_11* bms_voltages_11);

/* bms_VOLTAGES_12 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} bms_VOLTAGES_12;
static_assert(sizeof(bms_VOLTAGES_12) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_12(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_bms_VOLTAGES_12(uint8_t* buffer, bms_VOLTAGES_12* bms_voltages_12);

/* bms_VOLTAGES_13 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} bms_VOLTAGES_13;
static_assert(sizeof(bms_VOLTAGES_13) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_13(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_bms_VOLTAGES_13(uint8_t* buffer, bms_VOLTAGES_13* bms_voltages_13);

/* bms_VOLTAGES_14 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} bms_VOLTAGES_14;
static_assert(sizeof(bms_VOLTAGES_14) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_14(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_bms_VOLTAGES_14(uint8_t* buffer, bms_VOLTAGES_14* bms_voltages_14);

/* bms_VOLTAGES_20 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} bms_VOLTAGES_20;
static_assert(sizeof(bms_VOLTAGES_20) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_20(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_bms_VOLTAGES_20(uint8_t* buffer, bms_VOLTAGES_20* bms_voltages_20);

/* bms_VOLTAGES_21 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} bms_VOLTAGES_21;
static_assert(sizeof(bms_VOLTAGES_21) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_21(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_bms_VOLTAGES_21(uint8_t* buffer, bms_VOLTAGES_21* bms_voltages_21);

/* bms_VOLTAGES_22 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} bms_VOLTAGES_22;
static_assert(sizeof(bms_VOLTAGES_22) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_22(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_bms_VOLTAGES_22(uint8_t* buffer, bms_VOLTAGES_22* bms_voltages_22);

/* bms_VOLTAGES_23 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} bms_VOLTAGES_23;
static_assert(sizeof(bms_VOLTAGES_23) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_23(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_bms_VOLTAGES_23(uint8_t* buffer, bms_VOLTAGES_23* bms_voltages_23);

/* bms_VOLTAGES_24 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} bms_VOLTAGES_24;
static_assert(sizeof(bms_VOLTAGES_24) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_24(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_bms_VOLTAGES_24(uint8_t* buffer, bms_VOLTAGES_24* bms_voltages_24);

/* bms_VOLTAGES_30 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} bms_VOLTAGES_30;
static_assert(sizeof(bms_VOLTAGES_30) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_30(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_bms_VOLTAGES_30(uint8_t* buffer, bms_VOLTAGES_30* bms_voltages_30);

/* bms_VOLTAGES_31 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} bms_VOLTAGES_31;
static_assert(sizeof(bms_VOLTAGES_31) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_31(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_bms_VOLTAGES_31(uint8_t* buffer, bms_VOLTAGES_31* bms_voltages_31);

/* bms_VOLTAGES_32 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} bms_VOLTAGES_32;
static_assert(sizeof(bms_VOLTAGES_32) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_32(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_bms_VOLTAGES_32(uint8_t* buffer, bms_VOLTAGES_32* bms_voltages_32);

/* bms_VOLTAGES_33 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} bms_VOLTAGES_33;
static_assert(sizeof(bms_VOLTAGES_33) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_33(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_bms_VOLTAGES_33(uint8_t* buffer, bms_VOLTAGES_33* bms_voltages_33);

/* bms_VOLTAGES_34 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} bms_VOLTAGES_34;
static_assert(sizeof(bms_VOLTAGES_34) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_34(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_bms_VOLTAGES_34(uint8_t* buffer, bms_VOLTAGES_34* bms_voltages_34);

/* bms_VOLTAGES_40 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} bms_VOLTAGES_40;
static_assert(sizeof(bms_VOLTAGES_40) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_40(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_bms_VOLTAGES_40(uint8_t* buffer, bms_VOLTAGES_40* bms_voltages_40);

/* bms_VOLTAGES_41 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} bms_VOLTAGES_41;
static_assert(sizeof(bms_VOLTAGES_41) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_41(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_bms_VOLTAGES_41(uint8_t* buffer, bms_VOLTAGES_41* bms_voltages_41);

/* bms_VOLTAGES_42 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} bms_VOLTAGES_42;
static_assert(sizeof(bms_VOLTAGES_42) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_42(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_bms_VOLTAGES_42(uint8_t* buffer, bms_VOLTAGES_42* bms_voltages_42);

/* bms_VOLTAGES_43 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} bms_VOLTAGES_43;
static_assert(sizeof(bms_VOLTAGES_43) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_43(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_bms_VOLTAGES_43(uint8_t* buffer, bms_VOLTAGES_43* bms_voltages_43);

/* bms_VOLTAGES_44 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} bms_VOLTAGES_44;
static_assert(sizeof(bms_VOLTAGES_44) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_44(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_bms_VOLTAGES_44(uint8_t* buffer, bms_VOLTAGES_44* bms_voltages_44);

/* bms_VOLTAGES_50 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} bms_VOLTAGES_50;
static_assert(sizeof(bms_VOLTAGES_50) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_50(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_bms_VOLTAGES_50(uint8_t* buffer, bms_VOLTAGES_50* bms_voltages_50);

/* bms_VOLTAGES_51 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} bms_VOLTAGES_51;
static_assert(sizeof(bms_VOLTAGES_51) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_51(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_bms_VOLTAGES_51(uint8_t* buffer, bms_VOLTAGES_51* bms_voltages_51);

/* bms_VOLTAGES_52 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} bms_VOLTAGES_52;
static_assert(sizeof(bms_VOLTAGES_52) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_52(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_bms_VOLTAGES_52(uint8_t* buffer, bms_VOLTAGES_52* bms_voltages_52);

/* bms_VOLTAGES_53 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} bms_VOLTAGES_53;
static_assert(sizeof(bms_VOLTAGES_53) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_53(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_bms_VOLTAGES_53(uint8_t* buffer, bms_VOLTAGES_53* bms_voltages_53);

/* bms_VOLTAGES_54 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} bms_VOLTAGES_54;
static_assert(sizeof(bms_VOLTAGES_54) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_54(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_bms_VOLTAGES_54(uint8_t* buffer, bms_VOLTAGES_54* bms_voltages_54);
#endif

#ifdef __cplusplus
}
#endif