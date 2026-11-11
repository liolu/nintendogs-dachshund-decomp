/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02009b80 from projets/nintendogs-shiba-friends/src/donor/func_02009b80.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed char s8;
typedef signed int s32;
typedef signed long long s64;
s32 func_02009b80(s32 *param_1, s32 *param_2, s32 *param_3) {
    s64 l2 = (s64) param_1[0] * param_2[0] + 0x800;
    s64 l3 = (s64) param_1[2] * param_2[2] + 0x800;
    s64 l4 = (s64) param_1[0] * param_3[0] + 0x800;
    s64 l5 = (s64) param_1[2] * param_3[2] + 0x800;
    s32 t2 = (s32) (u32) (l2 >> 12);
    s32 t3 = (s32) (u32) (l3 >> 12);
    s32 t4 = (s32) (u32) (l4 >> 12);
    s32 t5 = (s32) (u32) (l5 >> 12);
    s32 i8 = t2 + t3;
    s32 i7 = t4 + t5;
    s32 i9 = i8;
    s32 a7 = i7;
    s32 f1 = 0;
    s32 b;
    if (i8 > 0) {
        f1 = 1;
    } else {
        i9 = -i8;
    }
    if (i7 > 0) {
        b = 1;
    } else {
        b  = 0;
        a7 = -i7;
    }
    if (i9 <= a7) {
        goto d8;
    }
    if (f1 == 0) {
        goto c4;
    }
    return (s8) !b;
c4:
    return b ? 2 : 3;
d8:
    if (f1 == 0) {
        goto f4;
    }
    return b ? 4 : 6;
f4:
    return b ? 5 : 7;
}
