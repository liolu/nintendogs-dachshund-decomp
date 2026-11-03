/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02085ef4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02085ef4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 func_0208975c(int a, u32 b);
u16 *func_020896cc(int param_1, u16 *param_2, int *param_3, int param_4) {
    u16 uVar1;
    u32 uVar2;
    u8 bVar3;
    int iVar4;

    uVar1 = *param_2;
    iVar4 = 0;
    if (uVar1 == 0) {
        goto zero_exit;
    }
    for (;;) {
        uVar2 = (u32) uVar1;
        if (uVar2 == 10) {
            if (param_3 != (int *) 0) {
                if (iVar4 > param_4) {
                    iVar4 = iVar4 - param_4;
                }
                *param_3 = iVar4;
            }
            return param_2 + 1;
        }
        if (uVar2 != 13) {
            bVar3 = func_0208975c(param_1, uVar2);
            iVar4 = iVar4 + (param_4 + (u32) bVar3);
        }
        param_2 = param_2 + 1;
        uVar1   = *param_2;
        if (uVar1 == 0) {
            goto zero_exit;
        }
    }
zero_exit:
    if (param_3 != (int *) 0) {
        if (iVar4 > param_4) {
            iVar4 = iVar4 - param_4;
        }
        *param_3 = iVar4;
    }
    return (u16 *) 0;
}
