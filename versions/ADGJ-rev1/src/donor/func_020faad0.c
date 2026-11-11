/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020faad0 from projets/nintendogs-chihuahua-friends/src/donor/func_020faad0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
extern u8 *func_020c9c8c(s32 a);
u32 func_020faad0(s16 *p) {
    s32 i;
    u32 res = 0;
    i       = 0;
    do {
        u8 *e = func_020c9c8c((s16) i);
        if (p[0] == *(s8 *) (e + 2) && p[1] == *(s16 *) e && *(s8 *) (e + 3) > 1) {
            res = 1;
            break;
        }
        i = i + 1;
    } while (i < 200);
    return res;
}
