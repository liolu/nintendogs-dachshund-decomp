/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211c244 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0211c244.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
u32 func_020fb4ec(s32 param_1, s32 param_2) {
    u32 uVar1;
    s32 iVar3 = 1;
    u32 uVar2 = 0;
    if (param_1 == 0) {
        uVar2 = 1;
        goto done;
    }
    uVar1 = 0;
    if (param_2 <= 0) {
        goto done;
    }
    do {
        uVar1 = uVar1 + 1;
        if (param_1 >= iVar3) {
            uVar2 = uVar2 + 1;
        }
        iVar3 = iVar3 * 10;
    } while ((s32) uVar1 < param_2);
done:
    return uVar2;
}
