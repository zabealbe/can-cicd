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
    bms_errors errors;
    bms_balancing_status balancing_status;
} bms_BOARD_STATUS;
static_assert(sizeof(bms_BOARD_STATUS) == 2, "struct size mismatch");
    
size_t serialize_bms_BOARD_STATUS(uint8_t* buffer, bms_errors errors, bms_balancing_status balancing_status);
size_t deserialize_bms_BOARD_STATUS(uint8_t* buffer, bms_BOARD_STATUS* bms_board_status);

/* bms_TEMP_STATS */
typedef struct __is_packed {
    uint8_t board_id;
    uint8_t average;
    uint8_t max;
    uint8_t min;
} bms_TEMP_STATS;
static_assert(sizeof(bms_TEMP_STATS) == 4, "struct size mismatch");
    
size_t serialize_bms_TEMP_STATS(uint8_t* buffer, uint8_t board_id, uint8_t average, uint8_t max, uint8_t min);
size_t deserialize_bms_TEMP_STATS(uint8_t* buffer, bms_TEMP_STATS* bms_temp_stats);

/* bms_TEMPERATURES_CB0_0 */
typedef struct __is_packed {
    uint8_t temperature0;
    uint8_t temperature1;
    uint8_t temperature2;
    uint8_t temperature3;
    uint8_t temperature4;
    uint8_t temperature5;
    uint8_t temperature6;
    uint8_t temperature7;
} bms_TEMPERATURES_CB0_0;
static_assert(sizeof(bms_TEMPERATURES_CB0_0) == 8, "struct size mismatch");
    
size_t serialize_bms_TEMPERATURES_CB0_0(uint8_t* buffer, uint8_t temperature0, uint8_t temperature1, uint8_t temperature2, uint8_t temperature3, uint8_t temperature4, uint8_t temperature5, uint8_t temperature6, uint8_t temperature7);
size_t deserialize_bms_TEMPERATURES_CB0_0(uint8_t* buffer, bms_TEMPERATURES_CB0_0* bms_temperatures_cb0_0);

/* bms_TEMPERATURES_CB0_1 */
typedef struct __is_packed {
    uint8_t temperature8;
    uint8_t temperature9;
    uint8_t temperature10;
    uint8_t temperature11;
    uint8_t temperature12;
    uint8_t temperature13;
    uint8_t temperature14;
    uint8_t temperature15;
} bms_TEMPERATURES_CB0_1;
static_assert(sizeof(bms_TEMPERATURES_CB0_1) == 8, "struct size mismatch");
    
size_t serialize_bms_TEMPERATURES_CB0_1(uint8_t* buffer, uint8_t temperature8, uint8_t temperature9, uint8_t temperature10, uint8_t temperature11, uint8_t temperature12, uint8_t temperature13, uint8_t temperature14, uint8_t temperature15);
size_t deserialize_bms_TEMPERATURES_CB0_1(uint8_t* buffer, bms_TEMPERATURES_CB0_1* bms_temperatures_cb0_1);

/* bms_TEMPERATURES_CB0_2 */
typedef struct __is_packed {
    uint8_t temperature16;
    uint8_t temperature17;
} bms_TEMPERATURES_CB0_2;
static_assert(sizeof(bms_TEMPERATURES_CB0_2) == 2, "struct size mismatch");
    
size_t serialize_bms_TEMPERATURES_CB0_2(uint8_t* buffer, uint8_t temperature16, uint8_t temperature17);
size_t deserialize_bms_TEMPERATURES_CB0_2(uint8_t* buffer, bms_TEMPERATURES_CB0_2* bms_temperatures_cb0_2);

/* bms_BALANCING */
typedef struct __is_packed {
    uint8_t board_id;
    bms_balancing_cells cells;
} bms_BALANCING;
static_assert(sizeof(bms_BALANCING) == 4, "struct size mismatch");
    
size_t serialize_bms_BALANCING(uint8_t* buffer, uint8_t board_id, bms_balancing_cells cells);
size_t deserialize_bms_BALANCING(uint8_t* buffer, bms_BALANCING* bms_balancing);

/* bms_VOLTAGES_CB0_0 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} bms_VOLTAGES_CB0_0;
static_assert(sizeof(bms_VOLTAGES_CB0_0) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_CB0_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_bms_VOLTAGES_CB0_0(uint8_t* buffer, bms_VOLTAGES_CB0_0* bms_voltages_cb0_0);

/* bms_VOLTAGES_CB0_1 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} bms_VOLTAGES_CB0_1;
static_assert(sizeof(bms_VOLTAGES_CB0_1) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_CB0_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_bms_VOLTAGES_CB0_1(uint8_t* buffer, bms_VOLTAGES_CB0_1* bms_voltages_cb0_1);

/* bms_VOLTAGES_CB0_2 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} bms_VOLTAGES_CB0_2;
static_assert(sizeof(bms_VOLTAGES_CB0_2) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_CB0_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_bms_VOLTAGES_CB0_2(uint8_t* buffer, bms_VOLTAGES_CB0_2* bms_voltages_cb0_2);

/* bms_VOLTAGES_CB0_3 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} bms_VOLTAGES_CB0_3;
static_assert(sizeof(bms_VOLTAGES_CB0_3) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_CB0_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_bms_VOLTAGES_CB0_3(uint8_t* buffer, bms_VOLTAGES_CB0_3* bms_voltages_cb0_3);

/* bms_VOLTAGES_CB0_4 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} bms_VOLTAGES_CB0_4;
static_assert(sizeof(bms_VOLTAGES_CB0_4) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_CB0_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_bms_VOLTAGES_CB0_4(uint8_t* buffer, bms_VOLTAGES_CB0_4* bms_voltages_cb0_4);

/* bms_VOLTAGES_CB1_0 */
typedef struct __is_packed {
    uint16_t voltage0;
    uint16_t voltage1;
    uint16_t voltage2;
    uint16_t voltage3;
} bms_VOLTAGES_CB1_0;
static_assert(sizeof(bms_VOLTAGES_CB1_0) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_CB1_0(uint8_t* buffer, uint16_t voltage0, uint16_t voltage1, uint16_t voltage2, uint16_t voltage3);
size_t deserialize_bms_VOLTAGES_CB1_0(uint8_t* buffer, bms_VOLTAGES_CB1_0* bms_voltages_cb1_0);

/* bms_VOLTAGES_CB1_1 */
typedef struct __is_packed {
    uint16_t voltage4;
    uint16_t voltage5;
    uint16_t voltage6;
    uint16_t voltage7;
} bms_VOLTAGES_CB1_1;
static_assert(sizeof(bms_VOLTAGES_CB1_1) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_CB1_1(uint8_t* buffer, uint16_t voltage4, uint16_t voltage5, uint16_t voltage6, uint16_t voltage7);
size_t deserialize_bms_VOLTAGES_CB1_1(uint8_t* buffer, bms_VOLTAGES_CB1_1* bms_voltages_cb1_1);

/* bms_VOLTAGES_CB1_2 */
typedef struct __is_packed {
    uint16_t voltage8;
    uint16_t voltage9;
    uint16_t voltage10;
    uint16_t voltage11;
} bms_VOLTAGES_CB1_2;
static_assert(sizeof(bms_VOLTAGES_CB1_2) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_CB1_2(uint8_t* buffer, uint16_t voltage8, uint16_t voltage9, uint16_t voltage10, uint16_t voltage11);
size_t deserialize_bms_VOLTAGES_CB1_2(uint8_t* buffer, bms_VOLTAGES_CB1_2* bms_voltages_cb1_2);

/* bms_VOLTAGES_CB1_3 */
typedef struct __is_packed {
    uint16_t voltage12;
    uint16_t voltage13;
    uint16_t voltage14;
    uint16_t voltage15;
} bms_VOLTAGES_CB1_3;
static_assert(sizeof(bms_VOLTAGES_CB1_3) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_CB1_3(uint8_t* buffer, uint16_t voltage12, uint16_t voltage13, uint16_t voltage14, uint16_t voltage15);
size_t deserialize_bms_VOLTAGES_CB1_3(uint8_t* buffer, bms_VOLTAGES_CB1_3* bms_voltages_cb1_3);

/* bms_VOLTAGES_CB1_4 */
typedef struct __is_packed {
    uint16_t voltage16;
    uint16_t voltage17;
    uint16_t max_voltage;
    uint16_t min_voltage;
} bms_VOLTAGES_CB1_4;
static_assert(sizeof(bms_VOLTAGES_CB1_4) == 8, "struct size mismatch");
    
size_t serialize_bms_VOLTAGES_CB1_4(uint8_t* buffer, uint16_t voltage16, uint16_t voltage17, uint16_t max_voltage, uint16_t min_voltage);
size_t deserialize_bms_VOLTAGES_CB1_4(uint8_t* buffer, bms_VOLTAGES_CB1_4* bms_voltages_cb1_4);

/* bms_MASTER_SYNC */
typedef struct __is_packed {
    uint32_t time;
} bms_MASTER_SYNC;
static_assert(sizeof(bms_MASTER_SYNC) == 4, "struct size mismatch");
    
size_t serialize_bms_MASTER_SYNC(uint8_t* buffer, uint32_t time);
size_t deserialize_bms_MASTER_SYNC(uint8_t* buffer, bms_MASTER_SYNC* bms_master_sync);
#endif

#ifdef __cplusplus
}
#endif