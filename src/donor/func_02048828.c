/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02048f44 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02048f44.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_02048be8(u8 *p, s32 *out, s32 a, s32 b, s32 c, s32 d);
extern s32 func_020280f8(u8 *p);
extern void func_0203e2b8(u8 *p, s32 v);
void func_02048828(u8 *param_1) {
    s32 local;
    s32 uVar2;

    local = 0;
    if (func_02048be8(param_1, &local, 0, 183, 186, 668) != 0) {
        return;
    }
    uVar2 = func_020280f8(param_1);
    if (local < ((s32) (((s64) (uVar2) * (0x300c) + 0x800) >> 12))) {
        func_0203e2b8(param_1, 0x297);
    }
}
