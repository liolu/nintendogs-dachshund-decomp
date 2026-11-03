/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02007f0c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02007f0c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern void *func_01ffda04(int a);
extern s32 func_020280f8(void *a);
void func_02008fcc(int param_1) {
    u8 *iVar1;
    s32 *p;
    s32 uVar2;

    iVar1 = (u8 *) func_01ffda04(0);
    if (iVar1 == 0) {
        return;
    }
    p = (s32 *) (iVar1 + 0x2f4);
    if (param_1 != 0) {
        *(s32 *) (param_1 + 0x20) = p[0] + *(s32 *) (**(s32 **) (param_1 + 0x18) + 4);
        *(s32 *) (param_1 + 0x24) = p[1] + *(s32 *) (**(s32 **) (param_1 + 0x18) + 8);
        *(s32 *) (param_1 + 0x28) = p[2] + *(s32 *) (**(s32 **) (param_1 + 0x18) + 0xc);
        uVar2                     = func_020280f8(iVar1);
        *(s32 *) (param_1 + 0x54) = (s32) (s16) uVar2;
        return;
    }
    return;
}
