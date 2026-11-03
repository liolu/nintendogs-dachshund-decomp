/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020485ac from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020485ac.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern void func_02024f98(u8 *p, u32 v);
extern s32 func_020351a0(u8 *p);
extern void func_02047f5c(u8 *p, u32 a, s32 b);
void func_02047e88(u8 *p) {
    s32 x;
    s32 iVar2;

    x = func_020280ec(p);
    func_02024f98(p, ((u32) ((((s64) (x) * (102)) + 0x800) >> 12)));
    iVar2 = func_020351a0(p);
    func_02047f5c(p, 0, iVar2);
}
