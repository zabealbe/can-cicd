#ifndef {filename_caps}_H
#define {filename_caps}_H

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
#define __{filename_caps}_ENDIAN_ORDER ('ABCD')
#if __{filename_caps}_ENDIAN_ORDER==0x41424344UL 
    #define {filename_caps}_LITTLE_ENDIAN
#elif __{filename_caps}_ENDIAN_ORDER==0x44434241UL
    #define {filename_caps}_BIG_ENDIAN
#elif __{filename_caps}_ENDIAN_ORDER==0x42414443UL
    #define {filename_caps}_PDP_ENDIAN
#else
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

#ifndef {filename_caps}_{endianness}
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

// assert float is 32bit and double is 64bit because not defined in the standard
// assert(sizeof(float) == 4) TODO: preprocessor
// assert(sizeof(double) == 8) TODO: preprocessor

{code}
#endif