/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02117c60 from projets/nintendogs-shiba-friends/src/donor/func_02117c60.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
s32 func_02117c68(s32 param_1, s32 param_2, s32 param_3, s32 param_4) {
    s32 d = param_2 - param_1;
    s64 w = (s64) param_3 * d + 0x800;
    s32 v = (s32) (u32) (w >> 12);
    s32 r;
    s32 av;
    s32 ad;
    s32 t;
    if (v > 0) {
        av = v;
    } else {
        av = -v;
    }
    r = v;
    if (av > param_4) {
        goto done;
    }
    if (d > 0) {
        ad = d;
    } else {
        ad = -d;
    }
    if (ad < param_4) {
        r = d;
        goto done;
    }
    t = param_4;
    if (d <= 0) {
        t = -param_4;
    }
    r = t;
done:
    return param_1 + r;
}
