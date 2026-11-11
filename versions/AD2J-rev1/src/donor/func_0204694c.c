/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204694c from projets/nintendogs-shiba-friends/src/donor/func_0204694c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern void func_02025034(u8 *p, u32 a, u32 b, u32 c);
extern s32 func_02046e24(u8 *p, u32 a);
extern s32 func_020351a0(u8 *p);
extern void func_0204f56c(u8 *p);
void func_0204694c(u8 *param_1) {
    s32 uVar1;
    s64 t;
    s32 iVar2;

    uVar1 = func_020280ec(param_1);
    t     = (s64) uVar1 * 279 + 0x800;
    func_02025034(param_1, 16, 38, (u32) (t >> 12));
    iVar2 = func_02046e24(param_1, 1);
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_020351a0(param_1);
    if (iVar2 != 0) {
        func_0204f56c(param_1);
        return;
    }
}
