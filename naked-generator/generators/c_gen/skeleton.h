#ifndef {filename_caps}_H
#define {filename_caps}_H

#include <stdbool.h>
#include <stdint.h>
#include <assert.h>

/*
*   Assert macro
*   macro for static assertion
*   source: https://en.wikipedia.org/wiki/Assertion_(software_development)#Static_assertions
*/
#define __NAKED_STATIC_ASSERT(pred) switch(0){{case 0:case pred:;}}

/*
*   Packed macro
*   macro for packed structs on multiple compilers
*/
#if defined(__MINGW32__)
#   define __is_packed       __attribute__((__gcc_struct__, __packed__, __aligned__(1)))
#else
#   define __is_packed       __attribute__((__packed__, __aligned__(1)))
#endif

/*
*   Endianness check
*   static check for supported endianness
*/
#ifndef __NAKED_ENDIAN_ORDER
    #define __NAKED_ENDIAN_ORDER ('ABCD')
#endif
#ifndef __NAKED_LITTLE_ENDIAN && __NAKED_BIG_ENDIAN && __NAKED_PDP_ENDIAN
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

#ifndef __NAKED_{endianness}
    #error "** HARDWARE ENDIANNESS NOT SUPPORTED **"
#endif

// assert float is 32bit and double is 64bit because not defined in the standard
__NAKED_STATIC_ASSERT(sizeof(float) == 4); // "** THIS ARCHITECTURE DOESN'T MATCH THE EXPECTED SIZE FOR 'float' OF 4 BYTES **")
__NAKED_STATIC_ASSERT(sizeof(double) == 8); // "** THIS ARCHITECTURE DOESN'T MATCH THE EXPECTED SIZE FOR 'double' OF 8 BYTES **")

{code}
#endif