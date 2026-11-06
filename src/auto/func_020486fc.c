/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020486fc from projets/nintendogs-shiba-friends/src/donor/func_020486fc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(int p);
extern void func_0202520c(int p, int a, u32 b);
extern int func_020351a0(int p);
extern void func_02035e20(int p);
extern void func_0202f8a4(int p);
void func_020486fc(int param_1) {
    s32 uVar1;
    int iVar2;
    s64 v;

    uVar1 = func_020280ec(param_1);
    v     = (s64) uVar1 * (s64) 102 + 0x800;
    func_0202520c(param_1, 0x15, (u32) (v >> 12));
    iVar2 = func_020351a0(param_1);
    if (iVar2 != 0) {
        func_02035e20(param_1);
        func_0202f8a4(param_1);
        return;
    }
    return;
}
