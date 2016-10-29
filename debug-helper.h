#ifndef DEBUG_H 
#define DEBUG_H 


#ifdef __cplusplus
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define MAP_BIT_SET(map, bit) (map[bit>>3] |= (1 << (bit & 0x7)))
#define MAP_BIT_TEST(map, bit) (map[bit>>3] & (1 << (bit & 0x7)))

#define BLOOM_CFG_IP_ADDR_6TO4(ip6)  ((ip6[0] & 0xff000000) |(ip6[1] & 0xff000000 >> 8)|(ip6[2] & 0xff000000 >> 16)|(ip6[3] & 0xff000000 >> 24))
#define BLOOM_CFG_IP_ADDR_HASH0(sip, dip)  (((sip >> 8) & 0xfff000) | ((dip >> 20) & 0xfff))
#define BLOOM_CFG_IP_ADDR_HASH1(sip, dip) ((sip >> 8) & 0xffffff)
#define BLOOM_CFG_IP_ADDR_HASH2(sip, dip) ((dip >> 8) & 0xffffff)

//test related
#define dprintf(fmt, ...) printf("%s:%d: " fmt "\n", __FUNCTION__, __LINE__, ##__VA_ARGS__);
#define ALIVE printf("alive in %s:(line %d)\n", __FUNCTION__, __LINE__);
#define PRINT_HEX(u32) { printf("%s(line %d): %s = 0x%x\n", __FUNCTION__, __LINE__, #u32, (unsigned)u32); }
#define PRINTD(u32) { printf("%s(line %d): %s = 0x%d\n", __FUNCTION__, __LINE__, #u32, (int)u32); }
#define PRINTU(u32) { printf("%s(line %d): %s = 0x%u\n", __FUNCTION__, __LINE__, #u32, (unsigned)u32); }
#define PRINT_HEX64(u) { printf("%s(line %d): %s = 0x%lx\n", __FUNCTION__, __LINE__, #u, (unsigned long)u); }

#define PRINT_IPV4_ADDR(u32) { \
    uint8_t *u8 = (uint8_t*)&u32; \
    printf("%s line %d: ip addr %s: %x.%x.%x.%x\n", __FUNCTION__, __LINE__, #u32, u8[0], u8[1], u8[2], u8[3]);\
}

#define CONVERT_TO_IPV4_ADDR(repr, u32) {\
    u32 = 0; \
    const char *str = repr? repr:"0.0.0.0";\
    uint8_t *u8 = (uint8_t*)&u32; \
    const char *dot;\
    dot = strchr(str, '.');\
    *u8 = *u8 * 10 + (*str++ - '0');\
    (str == dot) || (*u8 = *u8 * 10 + (*str++ - '0'));\
    (str == dot) || (*u8 = *u8 * 10 + (*str++ - '0'));\
    str++;\
    dot = strchr(str, '.');\
    u8++;\
    *u8 = *u8 * 10 + (*str++ - '0');\
    (str == dot) || (*u8 = *u8 * 10 + (*str++ - '0'));\
    (str == dot) || (*u8 = *u8 * 10 + (*str++ - '0'));\
    str++;\
    dot = strchr(str, '.');\
    u8++;\
    *u8 = *u8 * 10 + (*str++ - '0');\
    (str == dot) || (*u8 = *u8 * 10 + (*str++ - '0'));\
    (str == dot) || (*u8 = *u8 * 10 + (*str++ - '0'));\
    str++;\
    dot = strchr(str, '\0');\
    u8++;\
    *u8 = *u8 * 10 + (*str++ - '0');\
    (str == dot) || (*u8 = *u8 * 10 + (*str++ - '0'));\
    (str == dot) || (*u8 = *u8 * 10 + (*str++ - '0'));\
    str++;\
}


#ifdef __cplusplus
}
#endif

#endif
