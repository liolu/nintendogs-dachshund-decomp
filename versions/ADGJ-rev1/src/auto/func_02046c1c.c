/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02046c1c from projets/nintendogs-shiba-friends/src/donor/func_02046c1c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern void func_0202520c(u8 *p, u32 a, s32 b);
extern s32 func_02046e24(u8 *p, u32 a);
extern s32 func_020351a0(u8 *p);
extern void func_0204f56c(u8 *p);
void func_02046c1c(u8 *param_1) {
    s32 v;

    v = func_020280ec(param_1);
    func_0202520c(param_1, 9, ((s32) (((s64) (v) * (512) + 0x800) >> 12)));
    if (func_02046e24(param_1, 1) != 0) {
        return;
    }
    if (func_020351a0(param_1) != 0) {
        func_0204f56c(param_1);
        return;
    }
}
