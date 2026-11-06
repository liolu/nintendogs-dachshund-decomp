/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fa940 from projets/nintendogs-chihuahua-friends/src/donor/func_020fa940.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u16 *func_020c88ec(s32 i);
s32 func_020fa940(s32 param_1) {
    s32 i;
    s32 k;
    s32 kold;
    k = 0;
    i = -1;
    for (;;) {
        i = (s16) (i + 1);
        while (i < 5 && *func_020c88ec(i) == 0xffff) {
            i = (s16) (i + 1);
        }
        kold = k;
        k    = (s16) (k + 1);
        if (kold >= param_1) {
            break;
        }
    }
    if (i >= 5) {
        i = -1;
    }
    return i;
}
