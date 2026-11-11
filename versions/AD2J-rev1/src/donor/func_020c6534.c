/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c6530 from projets/nintendogs-shiba-friends/src/donor/func_020c6530.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern u32 func_020c63c0(u32 a, u32 b, u32 c);
s32 func_020c6534(u32 *param_1, u32 param_2, u32 param_3) {
    u32 uVar1;
    uVar1 = func_020c63c0((u32) param_1, param_2, param_3);
    return param_1[2] + *(s32 *) (param_1[1] + (uVar1 & 0xffff) * 4);
}
