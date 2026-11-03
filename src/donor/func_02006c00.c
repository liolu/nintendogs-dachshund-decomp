/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006c74 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02006c74.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
void func_02006c00(u16 *param_1, u32 *param_2) {
    u32 uVar2;
    u8 *iVar1;
    uVar2 = param_1[1];
    if (uVar2 < param_1[0]) {
        iVar1                            = *(u8 **) (param_1 + 2);
        *(u32 *) (iVar1 + uVar2 * 8)     = param_2[0];
        *(u16 *) (iVar1 + uVar2 * 8 + 4) = *(u16 *) (param_2 + 1);
        param_1[1]                       = param_1[1] + 1;
        return;
    }
}
