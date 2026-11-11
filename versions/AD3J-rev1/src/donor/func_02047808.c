/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02047f2c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02047f2c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u32 p);
extern s32 func_02024de8(u32 p, u32 a, s32 v);
extern void func_02024ce8(u32 p, u32 a, u32 b, s32 v);
extern void func_020481c4(u32 p, u32 a);
void func_02047808(u32 p) {
    s32 x;

    x = func_020280ec(p);
    if (func_02024de8(p, 22, ((s32) (((s64) (x) * (93) + 0x800) >> 12))) == 0) {
        x = func_020280ec(p);
        func_02024ce8(p, 23, 44, ((s32) (((s64) (x) * (186) + 0x800) >> 12)));
    }
    func_020481c4(p, 7);
}
