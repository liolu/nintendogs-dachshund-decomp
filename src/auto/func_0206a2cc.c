/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02002960 from projets/farm-frenzy/src/donor/func_02002960.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
s32 func_0206a2cc(void) {
    s32 b = (*(volatile u16 *) 0x400000A & 0x1F00) >> 8;
    s32 a = (*(volatile u32 *) 0x4000000 & 0x38000000) >> 0x1B;

    return 0x6000000 + (a << 0x10) + (b << 0xB);
}
