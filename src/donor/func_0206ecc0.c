/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200635c from https://github.com/RonyxDumb/mkds src/arm9/0200635c_func_0200635c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int uint;
typedef unsigned int uint;
extern void func_0206ecc0(int param_1, uint param_2);
void func_0206ecc0(int param_1, uint param_2) {
    int iVar1;

    *(int *) (param_1 + 0x10)                     = *(int *) (param_1 + 0x10) + 1;
    *(uint *) (param_1 + 0xc)                     = param_2;
    iVar1                                         = ((int) param_2 >> 5) * 4;
    *(uint *) (*(int *) (param_1 + 0x14) + iVar1) = *(uint *) (*(int *) (param_1 + 0x14) + iVar1) | 1 << (param_2 & 0x1f);
    return;
}
