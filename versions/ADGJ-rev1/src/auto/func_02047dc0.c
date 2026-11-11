/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02047dc0 from projets/nintendogs-shiba-friends/src/donor/func_02047dc0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern void func_02024de8(u8 *p, u32 a, u32 b);
extern s32 func_020351a0(u8 *p);
extern void func_02047f5c(u8 *p, u32 a, s32 b);
void func_02047dc0(u8 *param_1) {
    s32 uVar1;
    s64 v;
    s32 iVar2;
    uVar1 = func_020280ec(param_1);
    v     = (s64) uVar1 * 93 + 0x800;
    func_02024de8(param_1, 11, (u32) (v >> 12));
    iVar2 = func_020351a0(param_1);
    func_02047f5c(param_1, 0, iVar2);
}
