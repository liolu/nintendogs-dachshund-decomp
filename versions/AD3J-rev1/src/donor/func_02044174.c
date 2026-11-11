/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020447d8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020447d8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 data_0213930c[];
static inline s32 FX_Mul_i(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}
void func_02044174(s32 *param_1, s32 *param_2, s32 *param_3, s32 param_4) {
    s16 uv;
    u32 cls;
    int iv;
    u32 t;
    u32 k;
    s32 v2;
    k        = param_4 * 100;
    iv       = *param_3 * 0x10dcd + 1;
    *param_3 = iv;
    uv       = (u16) (iv & 0xfff);
    t        = ((s32) (((s64) (uv) * (0x19a) + 0x800) >> 12)) + 0xf33;
    *param_1 = FX_Mul_i(*(s32 *) ((u8 *) data_0213930c + (int) k), t);
    *param_2 = ((s32) (((s64) (*(s32 *) ((u8 *) data_0213930c + k + 4)) * (*param_1) + 0x800) >> 12));
    v2       = *param_2;
    cls      = 0;
    if (v2 >= 0xccd) {
        cls = (v2 <= 0x119a) ? 1 : 2;
    }
    switch (cls) {
        case 0:
            goto L0;
        case 1:
            goto L1;
        case 2:
            goto L2;
        default:
            return;
    }
L0:
    if (v2 < 0xa66) {
        *param_2 = 0xa66;
    }
    if (*param_2 > 0xc00) {
        *param_2 = 0xc00;
    }
    return;
L1:
    if (v2 < 0xe66) {
        *param_2 = 0xe66;
    }
    return;
L2:
    if (v2 < 0x1400) {
        *param_2 = 0x1400;
    }
}
