/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021173b0 from projets/nintendogs-shiba-friends/src/donor/func_021173b0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
s32 func_021173b8(s32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5) {
    s32 uVar5 = ((s32) ((((s64) (param_5) * (param_5)) + 0x800) >> 12));
    s32 uVar6 = ((s32) ((((s64) (uVar5) * (param_5)) + 0x800) >> 12));
    s32 t1    = (uVar6 - uVar5) / 2;
    s32 t2    = (param_5 + (uVar6 * -3 + uVar5 * 4)) / 2;
    s32 t3    = ((uVar5 * 2 - uVar6) - param_5) / 2;
    s32 t4    = (uVar6 * 3 + uVar5 * -5 + 0x2000) / 2;
    s32 a     = ((s32) ((((s64) (t1) * (param_4)) + 0x800) >> 12));
    s32 b     = ((s32) ((((s64) (t2) * (param_3)) + 0x800) >> 12));
    s32 c     = ((s32) ((((s64) (t3) * (param_1)) + 0x800) >> 12));
    s32 d     = ((s32) ((((s64) (t4) * (param_2)) + 0x800) >> 12));
    return a + (b + (c + d));
}
