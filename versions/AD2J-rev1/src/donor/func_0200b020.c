/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200b020 from projets/nintendogs-shiba-friends/src/donor/func_0200b020.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
typedef int BOOL;
typedef s32 fx32;
typedef s64 fx64;
typedef struct {
    fx32 x, y, z;
} VecFx32;
BOOL func_0200b020(const VecFx32 *p, fx32 a, fx32 b, fx32 c, fx32 d, fx32 x1, fx32 z1, fx32 x2, fx32 z2) {
    fx32 dx1 = x1 - p->x;
    fx32 dz1 = z1 - p->z;
    fx32 dx2 = x2 - p->x;
    fx32 dz2 = z2 - p->z;
    BOOL ret = 0;
    BOOL f2  = 0;
    BOOL f1  = 0;

    if (((fx32) (((fx64) (a) * (dx1) + 0x800LL) >> 12)) + ((fx32) (((fx64) (b) * (dz1) + 0x800LL) >> 12)) >= 0) {
        if (((fx32) (((fx64) (c) * (dx1) + 0x800LL) >> 12)) + ((fx32) (((fx64) (d) * (dz1) + 0x800LL) >> 12)) >= 0) {
            f1 = 1;
        }
    }
    if (f1) {
        if (((fx32) (((fx64) (a) * (dx2) + 0x800LL) >> 12)) + ((fx32) (((fx64) (b) * (dz2) + 0x800LL) >> 12)) <= 0) {
            f2 = 1;
        }
    }
    if (f2) {
        if (((fx32) (((fx64) (c) * (dx2) + 0x800LL) >> 12)) + ((fx32) (((fx64) (d) * (dz2) + 0x800LL) >> 12)) <= 0) {
            ret = 1;
        }
    }
    return ret;
}
