/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020467f4 from projets/nintendogs-shiba-friends/src/donor/func_020467f4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern void func_02025034(u8 *p, u32 a, u32 b, u32 c);
extern u32 func_020351a0(u8 *p);
extern void func_0202f960(u8 *p);
void func_020467f4(u8 *param_1) {
    s32 uVar1;
    s64 v;
    u32 iVar2;
    uVar1 = func_020280ec(param_1);
    v     = (s64) uVar1 * (s64) -630 + 0x800;
    func_02025034(param_1, 9, 0x11, (u32) (v >> 12));
    iVar2 = func_020351a0(param_1);
    if (iVar2 != 0) {
        func_0202f960(param_1);
        return;
    }
}
