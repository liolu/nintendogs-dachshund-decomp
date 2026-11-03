/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02048380 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02048380.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u32 p);
extern void func_020252e4(u32 p, u32 v);
extern s32 func_020351a0(u32 p);
extern void func_02035e20(u32 p);
extern void func_0202f8a4(u32 p);
void func_02047c5c(u32 param_1) {
    s32 uVar1;
    s64 t;
    s32 iVar2;

    uVar1 = func_020280ec(param_1);
    t     = (s64) uVar1 * 109 + 0x800;
    func_020252e4(param_1, (u32) (t >> 12));
    iVar2 = func_020351a0(param_1);
    if (iVar2 != 0) {
        func_02035e20(param_1);
        func_0202f8a4(param_1);
        return;
    }
    return;
}
