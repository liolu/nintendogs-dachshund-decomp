/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c8e4c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c8e4c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u32 data_02148e44;
extern u32 data_02148e48;
extern void func_02027630(s32 a, s32 *b);
extern void func_02027658(s32 a, s32 *b);
extern s32 func_020280f8(s32 a);
extern void func_01ff832c(u32 v, s32 *a, s32 *b, s32 *c);
void func_0211299c(s32 param_1, s32 *param_2) {
    s32 arr[4];
    s32 iv;
    s32 v;
    s64 l;
    func_02027630(param_1, param_2);
    func_02027658(param_1, arr);
    iv         = *(s32 *) &data_02148e44;
    v          = func_020280f8(param_1);
    l          = (s64) v * (s64) iv + 0x800;
    param_2[1] = param_2[1] + (u32) (l >> 12);
    iv         = *(s32 *) &data_02148e48;
    v          = func_020280f8(param_1);
    l          = (s64) v * (s64) iv + 0x800;
    func_01ff832c((u32) (l >> 12), arr, param_2, param_2);
}
