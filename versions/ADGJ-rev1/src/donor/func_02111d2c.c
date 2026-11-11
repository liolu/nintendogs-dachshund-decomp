/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02111d2c from projets/nintendogs-chihuahua-friends/src/donor/func_02111d2c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern void func_02027608(u8 *p, s32 *out);
extern s32 func_020274c8(u8 *p);
extern s32 func_0206902c(s32 a);
extern s32 func_02069098(s32 a, s32 b);
u32 func_02111d2c(u8 *param_1, s32 *param_2, s32 param_3, s32 *param_4) {
    s32 loc[3];
    s32 iVar10;
    s32 dx;
    s32 dy;
    s32 dz;
    s32 sum;
    s32 k;
    s32 neg;
    s32 s;
    func_02027608(param_1, loc);
    iVar10 = param_3 + func_020274c8(param_1);
    dy     = param_2[1] - loc[1];
    if (dy >= iVar10) {
        goto FAIL;
    }
    neg = -iVar10;
    if (dy <= neg) {
        goto FAIL;
    }
    dx = param_2[0] - loc[0];
    if (dx >= iVar10) {
        goto FAIL;
    }
    if (dx <= neg) {
        goto FAIL;
    }
    dz = param_2[2] - loc[2];
    if (dz >= iVar10) {
        goto FAIL;
    }
    if (dz <= neg) {
        goto FAIL;
    }
    sum = ((s32) (((s64) (dx) * (dx) + 0x800) >> 12)) + ((s32) (((s64) (dy) * (dy) + 0x800) >> 12)) +
          ((s32) (((s64) (dz) * (dz) + 0x800) >> 12));
    if (sum == 0) {
        goto FAIL;
    }
    if (sum >= ((s32) (((s64) (iVar10) * (iVar10) + 0x800) >> 12))) {
        goto FAIL;
    }
    s          = func_0206902c(sum);
    k          = func_02069098(iVar10 - s, s);
    param_4[0] = param_4[0] + ((s32) (((s64) (dx) * (k) + 0x800) >> 12));
    param_4[1] = param_4[1] + ((s32) (((s64) (dy) * (k) + 0x800) >> 12));
    param_4[2] = param_4[2] + ((s32) (((s64) (dz) * (k) + 0x800) >> 12));
    return 1;
FAIL:
    return 0;
}
