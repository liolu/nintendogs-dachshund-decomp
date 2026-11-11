/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02047d58 from projets/nintendogs-shiba-friends/src/donor/func_02047d58.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern void func_02024de8(u8 *p, s32 a, s32 b);
extern s32 func_020351a0(u8 *p);
extern void func_02047f5c(u8 *p, s32 a, s32 b);
void func_02047d58(u8 *param_1) {
    s32 x;
    s32 r;

    x = func_020280ec(param_1);
    func_02024de8(param_1, 11, -((s32) (((s64) (x) * (93) + 0x800) >> 12)));
    r = func_020351a0(param_1);
    func_02047f5c(param_1, 0, r);
}
