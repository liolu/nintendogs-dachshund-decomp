/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020cabf4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020cabf4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u32 w[3];
} T3;
void func_02114744(u32 *param_1, u32 *param_2, u8 *param_3) {
    if (param_3 == 0) {
        return;
    }
    *(T3 *) param_1       = *(T3 *) param_2;
    *(T3 *) (param_1 + 3) = *(T3 *) (param_3 + 0xbc);
    param_1[6]            = 0;
    param_1[7]            = 0x1000;
    param_1[8]            = 0;
    param_1[9]            = 0x14000;
}
