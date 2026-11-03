/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02048548 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02048548.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(int p);
extern void func_02024f98(int p, s32 v);
extern int func_020351a0(int p);
extern void func_02047f5c(int p, int a, int b);
void func_02047e24(int param_1) {
    s32 uVar1;
    int iVar2;
    s64 v;

    uVar1 = func_020280ec(param_1);
    v     = (s64) uVar1 * (s64) 102 + 0x800;
    func_02024f98(param_1, -(s32) (u32) (v >> 12));
    iVar2 = func_020351a0(param_1);
    func_02047f5c(param_1, 0, iVar2);
}
