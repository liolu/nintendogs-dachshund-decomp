/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02048e88 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02048e88.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern s32 func_02025034(u8 *p, u32 a, u32 b, s32 c);
extern void func_0202520c(u8 *p, u32 a, s32 b);
extern s32 func_020351a0(u8 *p);
extern void func_02035e20(u8 *p);
extern void func_0202f8a4(u8 *p);
void func_0204876c(u8 *param_1) {
    s32 x;

    x = func_020280ec(param_1);
    if (func_02025034(param_1, 10, 20, ((s32) (((s64) (x) * (40) + 0x800) >> 12))) == 0) {
        x = func_020280ec(param_1);
        func_0202520c(param_1, 21, ((s32) (((s64) (x) * (102) + 0x800) >> 12)));
    }
    if (func_020351a0(param_1) != 0) {
        func_02035e20(param_1);
        func_0202f8a4(param_1);
    }
}
