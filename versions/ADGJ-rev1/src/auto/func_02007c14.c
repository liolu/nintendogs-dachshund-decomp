/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02007c88 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02007c88.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
void func_02007c14(u8 *p, s32 n) {
    s32 i = n + 1;
    u8 *base;
    s16 hi;
    s16 lo;
    if (i >= 192) {
        i = 0;
    }
    *(vu32 *) 0x04001000 = (*(vu32 *) 0x04001000 & 0xffff1fffu) | 0x2000u;
    base                 = p + i * 2;
    hi                   = *(s16 *) (base + 0x24);
    lo                   = *(s16 *) (base + 0x1a4);
    *(vu16 *) 0x04001040 = (u16) (((hi << 8) & 0xff00) | (lo & 0xff));
    *(vu16 *) 0x04001044 = 0xc0;
    if (*(s16 *) (base + 0x1a4) < 255) {
        return;
    }
    *(vu32 *) 0x04001000 = (*(vu32 *) 0x04001000 & 0xffff1fffu) | 0x6000u;
    *(vu16 *) 0x04001042 = 0xff00;
    *(vu16 *) 0x04001046 = 0xc0;
}
