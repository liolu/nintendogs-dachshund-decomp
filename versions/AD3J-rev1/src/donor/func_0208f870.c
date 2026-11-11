/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a7894 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a7894.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
void func_0208f870(u16 *param_1) {
    param_1[0]             = 0;
    param_1[1]             = (u16) 0xffff;
    *(u32 *) (param_1 + 2) = 0;
    *(u32 *) (param_1 + 4) = 0;
    *(u32 *) (param_1 + 6) = 0;
    param_1[8]             = 1;
}
