/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c90d8 from projets/nintendogs-chihuahua-friends/src/donor/func_020c90d8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed short s16;
typedef signed int s32;
extern s32 data_0212d360[];
s32 func_020c90d8(s32 param_1) {
    s32 r = 0;
    s32 i = 0;
    do {
        if (param_1 <= data_0212d360[i]) {
            r = i;
            goto out;
        }
        i = (s16) (i + 1);
    } while (i < 15);
out:
    return r;
}
