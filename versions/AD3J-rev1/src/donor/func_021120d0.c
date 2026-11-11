/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c8580 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c8580.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
u32 func_021120d0(s32 *param_1, s32 param_2, s32 *param_3, s32 param_4) {
    s32 sum = param_2 + param_4;
    s32 dy  = param_1[1] - param_3[1];
    s32 ady;
    s32 dx;
    s32 adx;
    s32 dz;
    s32 adz;
    s64 w1;
    s64 w2;
    s64 w3;
    s64 w4;
    if (dy > 0) {
        ady = dy;
    } else {
        ady = -dy;
    }
    if (ady < sum) {
        dx = param_1[0] - param_3[0];
        if (dx > 0) {
            adx = dx;
        } else {
            adx = -dx;
        }
        if (adx < sum) {
            dz = param_1[2] - param_3[2];
            if (dz > 0) {
                adz = dz;
            } else {
                adz = -dz;
            }
            if (adz < sum) {
                w1 = (s64) dz * dz + 0x800;
                w2 = (s64) dx * dx + 0x800;
                w3 = (s64) dy * dy + 0x800;
                w4 = (s64) sum * sum + 0x800;
                if ((s32) ((u32) (w1 >> 12) + ((u32) (w2 >> 12) + (u32) (w3 >> 12))) < (s32) (u32) (w4 >> 12)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
