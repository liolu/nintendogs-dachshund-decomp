/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02048fec from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02048fec.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
typedef int BOOL;
extern BOOL func_02048be8(u32 p, s32 *out, u32 a, u32 b, u32 c, u32 d);
extern s32 func_020280f8(u32 p);
extern void func_0203e2b8(u32 p, u32 v);
void func_020488d0(u32 param_1) {
    s32 local[2];

    local[0] = 0;
    if (func_02048be8(param_1, local, 0, 0xb6, 0xb9, 0x29b)) {
        return;
    }
    if (local[0] > ((s32) (((s64) (func_020280f8(param_1)) * (0x1cd4) + 0x800) >> 12))) {
        func_0203e2b8(param_1, 0x297);
    }
}
