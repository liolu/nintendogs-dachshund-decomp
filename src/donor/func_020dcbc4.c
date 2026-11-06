/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eef24 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020eef24.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern s32 func_02069098(s32 a, s32 b);
extern void func_020ebce4(void *p, s32 a, s32 b);
void func_020dcbc4(u8 *param_1) {
    s32 *piVar5;
    s32 iVar4;
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;
    piVar5 = *(s32 **) (param_1 + 0x214);
    iVar4  = (s32) * (s16 *) (*(u8 **) &piVar5[3] + 4);
    iVar1  = iVar4 * func_02069098(piVar5[0], 0x100000);
    iVar2  = (s32) * (s16 *) (*(u8 **) &piVar5[4] + 4);
    iVar2  = iVar2 * 0x1000;
    if (iVar1 >= iVar2) {
        iVar1 = iVar2 - 1;
    }
    for (iVar3 = iVar1 * 0x10; iVar4 * 0x1000 <= iVar3; iVar3 = iVar3 - iVar4 * 0x1000) {
    }
    *(s32 *) (*(u8 **) &piVar5[4] + 0xc) = (iVar2 - 1) - iVar1;
    *(s32 *) (*(u8 **) &piVar5[3] + 0xc) = iVar3;
    iVar2                                = piVar5[0] - piVar5[1];
    if (0x80000 < iVar2) {
        iVar2 = iVar2 - 0x100000;
    }
    if (iVar2 < -0x80000) {
        iVar2 = iVar2 + 0x100000;
    }
    func_020ebce4(param_1 + 400, 0, iVar2 >> 5);
    piVar5[1] = piVar5[0];
}
