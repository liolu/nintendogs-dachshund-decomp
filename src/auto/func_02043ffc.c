/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02043ffc from projets/nintendogs-shiba-friends/src/donor/func_02043ffc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed short s16;
typedef signed int s32;
extern s16 data_0213847c[];
s32 func_02043ffc(s32 param_1, s32 param_2, s32 param_3) {
    s32 r;
    if (param_3 >= 0) {
        if (param_3 < 8) {
            return data_0213847c[param_3];
        }
    }
    if (param_3 >= 8) {
        if (param_3 < 14) {
            return 0;
        }
    }
    if (param_3 < 14) {
        r = 0;
    } else {
        r = 0;
        return r;
    }
    return r;
}
