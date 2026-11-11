/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200b7f4 from projets/nintendogs-shiba-friends/src/donor/func_0200b7f4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
typedef s32 fx32;
typedef s64 fx64;
typedef struct {
    fx32 x, y, z;
} VecFx32;
extern fx32 func_02069098(fx32 numer, fx32 denom);
fx32 func_0200b7f4(const VecFx32 *p, const VecFx32 *a, const VecFx32 *b) {
    fx32 px, py, pz;
    fx32 ax, ay, az, dx, dy, dz, vx, vy, vz, len, t;
    fx64 dx64, dy64, dz64;

    ax   = a->x;
    dx   = b->x - ax;
    vx   = p->x - ax;
    ay   = a->y;
    dy   = b->y - ay;
    vy   = p->y - ay;
    az   = a->z;
    dz   = b->z - az;
    vz   = p->z - az;
    pz   = ((fx32) (((fx64) (dz) * (vz) + 0x800LL) >> 12));
    px   = ((fx32) (((fx64) (dx) * (vx) + 0x800LL) >> 12));
    py   = ((fx32) (((fx64) (dy) * (vy) + 0x800LL) >> 12));
    dz64 = dz;
    dx64 = dx;
    dy64 = dy;
    len  = ((fx32) (((fx64) (dx) * (dx) + 0x800LL) >> 12)) + ((fx32) (((fx64) (dy) * (dy) + 0x800LL) >> 12)) +
          ((fx32) (((fx64) (dz) * (dz) + 0x800LL) >> 12));
    if (len == 0) {
        t = px + py + pz;
    } else {
        t = func_02069098(px + py + pz, len);
    }
    vx = ax + (fx32) ((dx64 * t + 0x800LL) >> 12) - p->x;
    vy = ay + (fx32) ((dy64 * t + 0x800LL) >> 12) - p->y;
    vz = az + (fx32) ((dz64 * t + 0x800LL) >> 12) - p->z;
    return ((fx32) (((fx64) (vx) * (vx) + 0x800LL) >> 12)) + ((fx32) (((fx64) (vy) * (vy) + 0x800LL) >> 12)) +
           ((fx32) (((fx64) (vz) * (vz) + 0x800LL) >> 12));
}
