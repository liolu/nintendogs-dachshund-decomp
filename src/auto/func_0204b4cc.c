/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204b4cc from projets/nintendogs-shiba-friends/src/donor/func_0204b4cc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020360a0(u8 *p);
extern u32 func_020280ec(u8 *p);
extern void func_02025034(u8 *p, s32 a, s32 b, u32 c);
extern void func_02038ef8(u8 *p);
extern void func_0202761c(s32 a, u32 *b);
extern void func_02036fbc(u8 *p, s32 v);
extern void func_0204b7a8(u8 *p, s32 a, s32 b);
void func_0204b4cc(u8 *param_1) {
    s32 iVar1;
    u32 uVar2;

    iVar1 = func_020360a0(param_1);
    uVar2 = func_020280ec(param_1);
    func_02025034(param_1, 0x10, 0x26, (u32) (((s64) (s32) uVar2 * 279 + 0x800) >> 12));
    if (iVar1 != 0) {
        func_02038ef8(param_1);
        func_0202761c(iVar1, (u32 *) (param_1 + 0x278));
        func_02036fbc(param_1, 0x300);
    }
    func_0204b7a8(param_1, iVar1, 1);
}
