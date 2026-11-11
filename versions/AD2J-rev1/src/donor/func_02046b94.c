/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02046b94 from projets/nintendogs-shiba-friends/src/donor/func_02046b94.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u32 a);
extern void func_02025034(u32 a, u32 b, u32 c, s32 d);
extern int func_02046e24(u32 a, u32 b);
extern int func_020351a0(u32 a);
extern void func_0204f56c(u32 a);
void func_02046b94(int param_1) {
    s32 uVar1;
    int iVar2;

    uVar1 = func_020280ec(param_1);
    func_02025034(param_1, 9, 0x11, ((s32) ((((s64) (s32) (uVar1)) * (-630) + 0x800) >> 12)));
    iVar2 = func_02046e24(param_1, 1);
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_020351a0(param_1);
    if (iVar2 != 0) {
        func_0204f56c(param_1);
    }
}
