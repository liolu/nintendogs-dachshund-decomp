/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020931a8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020931a8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u32 data_02154c48;
u32 func_020c88e8(s16 i) {
    u8 *q = (u8 *) data_02154c48 + i * 24;
    q     = q + 0x1000;
    return *(u32 *) (q + 0x4f4) + 4;
}
