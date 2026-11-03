/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d3500 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d3500.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
extern u8 *func_02003844(s32 *p, s32 n);
void func_0211c984(s32 *param_1, s32 *param_2, s32 param_3, s32 param_4) {
    s32 iVar3;
    s32 iVar2;
    s32 iVar1;
    s32 neg;

    iVar1      = (s32) func_02003844(param_2, param_3 * 12);
    param_1[1] = iVar1;
    iVar1      = (s32) func_02003844(param_2, param_3 * 12);
    param_1[4] = iVar1;
    iVar1      = (s32) func_02003844(param_2, param_3 * 12);
    param_1[2] = iVar1;
    iVar1      = (s32) func_02003844(param_2, param_3 << 2);
    param_1[3] = iVar1;
    param_1[0] = param_3;
    iVar3      = 0;
    if (param_3 > 0) {
        iVar1 = 0;
        do {
            neg                             = -iVar3;
            iVar2                           = param_1[1];
            *(s32 *) ((u8 *) iVar2 + iVar1) = 0;
            iVar2                           = iVar2 + iVar1;
            *(s32 *) ((u8 *) iVar2 + 4)     = neg * param_4;
            *(s32 *) ((u8 *) iVar2 + 8)     = 0;
            iVar2                           = param_1[2];
            *(s32 *) ((u8 *) iVar2 + iVar1) = 0;
            iVar2                           = iVar2 + iVar1;
            *(s32 *) ((u8 *) iVar2 + 4)     = 0;
            *(s32 *) ((u8 *) iVar2 + 8)     = 0;
            iVar1                           = iVar1 + 12;
            ((s32 *) param_1[3])[iVar3]     = 0;
            iVar3                           = iVar3 + 1;
        } while (iVar3 < param_3);
    }
    *(u16 *) ((u8 *) param_1 + 20) = 0;
    param_1[6]                     = param_4;
}
