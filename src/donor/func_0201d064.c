/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0201cfc0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0201cfc0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern void func_02025134(u8 *p, u32 a, s32 v);
extern void func_0201d214(u8 *p);
extern void func_020357c0(u8 *p, u32 v);
extern s32 func_020351a0(u8 *p);
extern void func_0202f8a4(u8 *p);
void func_0201d064(u8 *param_1) {
    s32 x;

    x = func_020280ec(param_1);
    func_02025134(param_1, 18, -((s32) (((s64) (x) * (-273) + 0x800) >> 12)));
    func_0201d214(param_1);
    func_020357c0(param_1, 1);
    if (func_020351a0(param_1) != 0) {
        func_0202f8a4(param_1);
    }
}
