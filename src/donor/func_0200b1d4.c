/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200b1d4 from projets/nintendogs-shiba-friends/src/donor/func_0200b1d4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
typedef int BOOL;
typedef s32 fx32;
typedef s64 fx64;
typedef struct {
    fx32 x, y, z;
} VecFx32;
static inline fx32 FX(fx32 a, fx32 b) {
    fx64 r = (fx64) a * (fx64) b + 0x800;
    return (fx32) (r >> 12);
}
BOOL func_0200b1d4(const VecFx32 *pos, const VecFx32 *center, fx32 sn, fx32 cs, fx32 width, fx32 depth) {
    fx32 hw, hd, nsn, c, d, e, f, x1, x2, z1, z2;
    fx32 cx, cz, px, pz;
    BOOL g[2];
    BOOL r;
    hd   = depth >> 1;
    px   = pos->x;
    hw   = width >> 1;
    c    = FX(cs, hw);
    cx   = center->x;
    x2   = cx + c + FX(sn, hd) - px;
    pz   = pos->z;
    r    = 0;
    g[0] = 0;
    g[1] = 0;
    nsn  = -sn;
    e    = FX(nsn, hw);
    z2   = center->z + e + FX(cs, hd) - pz;
    x1   = cx - c - FX(sn, hd) - px;
    z1   = center->z - e - FX(cs, hd) - pz;
    if (FX(cs, x2) + FX(nsn, z2) >= 0) {
        if (FX(sn, x2) + FX(cs, z2) >= 0) {
            g[1] = 1;
        }
    }
    if (g[1]) {
        if (FX(cs, x1) + FX(nsn, z1) <= 0) {
            g[0] = 1;
        }
    }
    if (g[0]) {
        if (FX(sn, x1) + FX(cs, z1) <= 0) {
            r = 1;
        }
    }
    return r;
}
