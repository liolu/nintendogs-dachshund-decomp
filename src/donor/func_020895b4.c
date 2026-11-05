/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020895b4 from projets/nintendogs-shiba-friends/src/donor/func_020895b4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef signed int s32;
extern u16 func_020895f8(s32 a);
s32 func_020895b4(s32 param_1, s32 param_2) {
    u16 uVar1;
    s32 base;
    base = param_1 + 8;
    if (param_2 < 0) {
        goto zero;
    }
    uVar1 = func_020895f8(param_1);
    if (param_2 < (s32) uVar1) {
        goto ret;
    }
zero:
    return 0;
ret:
    return param_2 * 6 + base;
}
