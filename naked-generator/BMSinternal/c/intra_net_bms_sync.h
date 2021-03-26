#ifndef INTRA_NET_BMS_SYNC_H
#define INTRA_NET_BMS_SYNC_H

#include <stdbool.h>
#include <stdint.h>

/*
* TODO: document
*/
#if defined(__MINGW32__)
#   define __is_packed       __attribute__((__gcc_struct__, __packed__, __aligned__(1)))
#else
#   define __is_packed       __attribute__((__packed__, __aligned__(1)))
#endif

/*
* TODO: document
*/
#define __INTRA_NET_BMS_SYNC_ENDIAN_ORDER ('ABCD')
#if __INTRA_NET_BMS_SYNC_ENDIAN_ORDER==0x41424344UL 
    #define INTRA_NET_BMS_SYNC_LITTLE_ENDIAN
#elif __INTRA_NET_BMS_SYNC_ENDIAN_ORDER==0x44434241UL
    #define INTRA_NET_BMS_SYNC_BIG_ENDIAN
#elif __INTRA_NET_BMS_SYNC_ENDIAN_ORDER==0x42414443UL
    #define INTRA_NET_BMS_SYNC_PDP_ENDIAN
#else
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

#ifndef INTRA_NET_BMS_SYNC_LITTLE_ENDIAN
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

// assert float is 32bit and double is 64bit because not defined in the standard
// assert(sizeof(float) == 4) TODO: preprocessor
// assert(sizeof(double) == 8) TODO: preprocessor


typedef struct __is_packed {
	uint32_t time;
} MASTER_SYNC;
static_assert(sizeof(MASTER_SYNC) == 4, "struct size mismatch");

typedef struct __is_packed {
	uint8_t sender_cellboard;
	uint32_t time;
} CELLBOARD_TOKEN;
static_assert(sizeof(CELLBOARD_TOKEN) == 5, "struct size mismatch");

void serialize_MASTER_SYNC(MASTER_SYNC* master_sync, uint8_t* buffer, size_t buf_len);
void serialize_CELLBOARD_TOKEN(CELLBOARD_TOKEN* cellboard_token, uint8_t* buffer, size_t buf_len);

void deserialize_MASTER_SYNC(uint8_t* buffer, size_t buf_len, MASTER_SYNC* master_sync);
void deserialize_CELLBOARD_TOKEN(uint8_t* buffer, size_t buf_len, CELLBOARD_TOKEN* cellboard_token);

#endif