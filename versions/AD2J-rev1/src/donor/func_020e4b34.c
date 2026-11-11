/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e4b2c from projets/nintendogs-shiba-friends/src/donor/func_020e4b2c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern u8 *data_02153740;
extern void func_0206b7b8(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_020e4b34(s32 *param_1) {
    if (*(s32 *) (data_02153740 + 0xac) == 1) {
        *(vu32 *) 0x04001000 = *(vu32 *) 0x04001000 & ~0x1200;
    } else {
        *(vu32 *) 0x04001000 = *(vu32 *) 0x04001000 | 0x1200;
    }
    *(vu32 *) 0x04001014 = 0x01ff0000 & ((u32) ((-param_1[3]) >> 12) << 16);
    if (param_1[0] == 0 || param_1[0] == 4) {
        func_0206b7b8(0x04001050, 0x12, 6, param_1[4] >> 12, 16 - (param_1[4] >> 12));
    }
    if (param_1[0] != 0 && param_1[0] != 4) {
        return;
    }
    {
        u32 v = (*(vu16 *) 0x04001048 & ~0x3f) | 0x1f;
        v |= 0x20;
        *(vu16 *) 0x04001048 = v;
    }
    {
        u32 v = (*(vu16 *) 0x04001048 & ~0x3f00) | 0x1f00;
        v |= 0x2000;
        *(vu16 *) 0x04001048 = v;
    }
    {
        u32 v = (*(vu16 *) 0x0400104a & ~0x3f) | 0x1d;
        v |= 0x20;
        *(vu16 *) 0x0400104a = v;
    }
    {
        s32 y1               = param_1[3] >> 12;
        *(vu16 *) 0x04001040 = 0x96;
        *(vu16 *) 0x04001044 = ((y1 << 8) & 0xff00) | 0xc0;
    }
    {
        s32 y1               = param_1[3] >> 12;
        *(vu16 *) 0x04001042 = 0x6400;
        *(vu16 *) 0x04001046 = ((y1 << 8) & 0xff00) | 0xc0;
    }
    *(vu32 *) 0x04001000 = (*(vu32 *) 0x04001000 & ~0xe000) | 0x6000;
}
