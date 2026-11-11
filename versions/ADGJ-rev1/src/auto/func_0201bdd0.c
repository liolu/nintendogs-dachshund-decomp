/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0201bdac from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0201bdac.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern s32 func_02024ce8(u8 *p, u32 a, u32 b, s32 c);
void func_0201bdd0(u8 *param_1, s32 param_2) {
    s32 x;

    x = func_020280ec(param_1);
    if (func_02024ce8(param_1, 11, 36, param_2 * ((s32) (((s64) (x) * (163) + 0x800) >> 12))) == 0) {
        x = func_020280ec(param_1);
        func_02024ce8(param_1, 46, 80, param_2 * ((s32) (((s64) (x) * (94) + 0x800) >> 12)));
    }
}
