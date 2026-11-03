/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02007df4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02007df4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
extern int func_01ffda04(int a);
extern u32 func_020280f8(int a);
void func_02007d80(int param_1) {
    int iVar1;
    int *piVar2;

    iVar1 = func_01ffda04(2);
    if (iVar1 == 0) {
        return;
    }
    piVar2 = (int *) (iVar1 + 0x354);
    if (param_1 == 0) {
        return;
    }
    *(int *) (param_1 + 0x20) = piVar2[0] + *(int *) (*(int *) *(int *) (param_1 + 0x18) + 4);
    *(int *) (param_1 + 0x24) = piVar2[1] + *(int *) (*(int *) *(int *) (param_1 + 0x18) + 8);
    *(int *) (param_1 + 0x28) = piVar2[2] + *(int *) (*(int *) *(int *) (param_1 + 0x18) + 0xc);
    *(int *) (param_1 + 0x54) = (s16) func_020280f8(iVar1);
}
