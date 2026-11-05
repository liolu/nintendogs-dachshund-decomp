/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d3d2c from projets/nintendogs-shiba-friends/src/donor/func_020d3d2c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_021070e0(u32 a);
extern void func_020c2fcc(u16 *p);
extern void func_020c2e10(u16 *p, u32 a, s16 b, u32 c);
extern void func_020c2df8(u16 *p);
void func_020d3d34(u16 *param_1) {
    s32 iVar1;
    s32 j;

    iVar1 = func_021070e0(0x45);
    func_020c2fcc(param_1);
    func_020c2e10(param_1, 0x1d, 1, 0x218);
    j = iVar1 - 1;
    func_020c2e10(param_1, 0x1e, (s16) j, 0x218);
    func_020c2e10(param_1, 0x5e, (s16) j, 0x88);
    func_020c2df8(param_1);
}
