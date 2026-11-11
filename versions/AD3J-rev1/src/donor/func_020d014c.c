/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d0154 from projets/nintendogs-chihuahua-friends/src/donor/func_020d0154.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern void func_020d0604(u32 *dst, u32 *src);
extern void func_020d01a8(u32 *a, u32 *b, u32 *c, s32 d);
extern void func_020d038c(u32 *a, u32 *b);
void func_020d014c(u32 *param_1, u32 *param_2, u32 *param_3, s32 param_4) {
    u32 a[4];
    u32 b[4];
    u32 c[4];

    func_020d0604(a, param_1);
    func_020d0604(b, param_2);
    func_020d01a8(a, b, c, param_4);
    func_020d038c(c, param_3);
}
