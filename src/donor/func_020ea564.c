/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ea564 from projets/nintendogs-chihuahua-friends/src/donor/func_020ea564.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
u32 func_020ea564(s32 *param_1) {
    s32 z;
    s32 x;
    u32 v;
    u32 r;
    if (param_1 == ((void *) 0)) {
        goto ret0;
    }
    z                    = param_1[2];
    x                    = param_1[0];
    v                    = (u32) ((x >> 12) * (x >> 12) + (z >> 12) * (z >> 12));
    *(vu16 *) 0x040002b0 = 0;
    *(vu32 *) 0x040002b8 = v;
    while (*(vu16 *) 0x040002b0 & 0x8000) {
    }
    while (*(vu16 *) 0x040002b0 & 0x8000) {
    }
    r = *(vu32 *) 0x040002b4;
    return r;
ret0:
    return 0;
}
