/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020416b8 from projets/nintendogs-shiba-friends/src/donor/func_020416b8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
s32 func_020416b8(u8 *param_1) {
    s32 i;
    s32 best;
    s16 mx;
    s16 v;
    best = 0;
    mx   = 0;
    i    = 0;
    do {
        v = *(s16 *) (param_1 + ((i << 16) >> 15) + 0x50);
        if (mx <= v) {
            mx   = v;
            best = i;
        }
        i = (s8) (i + 1);
    } while (i < 5);
    return best;
}
