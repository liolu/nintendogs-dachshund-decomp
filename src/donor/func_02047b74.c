/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02048298 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02048298.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern void func_02024de8(u8 *p, u32 n, s32 v);
extern s32 func_020351a0(u8 *p);
extern void func_02047f5c(u8 *p, u32 n, s32 v);
void func_02047b74(u8 *param_1) {
    s32 x;
    s32 iVar2;

    x = func_020280ec(param_1);
    func_02024de8(param_1, 11, ((s32) ((((s64) (x) * (s64) (93)) + 0x800) >> 12)));
    iVar2 = func_020351a0(param_1);
    func_02047f5c(param_1, 1, iVar2);
}
