/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020478bc from projets/nintendogs-shiba-friends/src/donor/func_020478bc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern s32 func_02025034(u8 *p, u32 a, u32 b, s32 c);
extern s32 func_020351a0(u8 *p);
extern void func_02035e20(u8 *p);
extern void func_0202f8a4(u8 *p);
void func_020478bc(u8 *param_1) {
    s32 v;
    s32 r;

    v = func_020280ec(param_1);
    r = func_02025034(param_1, 17, 37, ((s32) (((s64) (v) * (92) + 0x800) >> 12)));
    if (r == 0) {
        v = func_020280ec(param_1);
        func_02025034(param_1, 44, 70, ((s32) (((s64) (v) * (118) + 0x800) >> 12)));
    }
    if (func_020351a0(param_1) != 0) {
        func_02035e20(param_1);
        func_0202f8a4(param_1);
    }
}
