/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209febc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209febc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154dd8[];
extern u8 data_02154db8[];
extern u8 data_02154dc4[];
extern u8 data_02154ddc[];
extern u8 data_02154de0[];
extern void func_02072294(u8 *p);
void func_020eec54(void) {
    u8 *p;
    u8 *p5;
    u8 *p4;
    s16 i;
    s32 m1;
    u32 *w;

    p  = data_02154dd8;
    p5 = data_02154db8;
    p4 = data_02154dc4;
    func_02072294(data_02154dd8);
    func_02072294(data_02154ddc);
    func_02072294(data_02154de0);
    func_02072294(data_02154dc4);
    *(u16 *) (p + 12)   = 127;
    *(u16 *) (p + 26)   = 0;
    *(u32 *) (p + 0x1c) = 0;
    m1                  = -1;
    i                   = 0;
    do {
        *(s16 *) (p + 18 + i * 2) = m1;
        i                         = (s16) (i + 1);
    } while (i < 3);
    *(u16 *) (p + 14)    = 100;
    *(u16 *) (p + 16)    = 100;
    *(u32 *) (p + 0x10c) = 0;
    *(u16 *) (p + 32)    = 0;
    *(u16 *) (p + 34)    = 127;
    *(u16 *) (p + 36)    = 100;
    *(u16 *) (p + 38)    = 0;
    *(u16 *) (p + 40)    = 0;
    *(u32 *) (p + 0x2c)  = 0;
    *(u16 *) (p + 48)    = 0;
    *(u16 *) (p + 50)    = 0;
    *(u32 *) (p + 0x40)  = 0;
    *(u32 *) (p + 0x3c)  = m1;
    *(s16 *) (p + 52)    = m1;
    *(u32 *) (p + 0x44)  = 0;
    *(u32 *) (p + 0x48)  = 0;
    *(u32 *) (p + 0x4c)  = 0;
    *(u32 *) (p + 0x50)  = 0;
    *(u32 *) (p + 0x54)  = 0;
    *(u16 *) (p + 56)    = 0;
    *(u16 *) (p + 54)    = 0;
    *(s16 *) (p + 88)    = m1;
    *(u32 *) (p + 0x108) = 0;
    *(u16 *) (p + 252)   = 0;
    i                    = 0;
    do {
        w                           = (u32 *) (p + 0x5c);
        w[i]                        = 0x7f000;
        *(u16 *) (p + 0xdc + i * 2) = 0;
        ((u32 *) (p + 0x9c))[i]     = 0x1000;
        i                           = (s16) (i + 1);
    } while (i < 16);
    *(u32 *) (p + 0x100) = 0;
    *(u32 *) (p + 0x104) = 0;
    *(u32 *) p5          = 0;
    *(u32 *) (p5 + 4)    = 0;
    *(u32 *) (p5 + 8)    = m1;
    *(u32 *) (p4 + 4)    = 4;
    *(u32 *) (p4 + 8)    = 60;
    *(u32 *) (p4 + 12)   = 0;
    *(u32 *) (p4 + 16)   = 0;
}
