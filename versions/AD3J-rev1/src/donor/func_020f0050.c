/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f0058 from projets/nintendogs-chihuahua-friends/src/donor/func_020f0058.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154f24;
extern s32 func_020efed8(u8 *p, u32 a, u32 b, s32 c, s32 d);
s32 func_020f0050(u32 param_1, u32 param_2, s32 param_3, s32 param_4) {
    s32 r4;
    u32 bit;
    u8 *lr;

    lr = &data_02154f24;
    r4 = 0;
    for (;;) {
        bit = (u16) (1 << r4);
        if ((*(u16 *) (lr + 24) & bit) == 0) {
            *(u16 *) (lr + 24) |= bit;
            break;
        }
        r4 = (s16) (r4 + 1);
        if (r4 >= 4) {
            r4 = -1;
            break;
        }
    }
    if (r4 != -1) {
        if (func_020efed8(lr + 40 + r4 * 4, param_1, param_2, param_3, param_4) != 0) {
            return r4;
        }
    }
    return -1;
}
