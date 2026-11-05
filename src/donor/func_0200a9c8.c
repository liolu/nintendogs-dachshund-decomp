/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200a9c8 from projets/nintendogs-shiba-friends/src/donor/func_0200a9c8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef int BOOL;
typedef s32 fx32;
typedef s64 fx64;
typedef struct {
    fx32 x, y, z;
} VecFx32;
extern void func_02069668(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern s16 data_02124ae0[];
BOOL func_0200a9c8(VecFx32 *pos, VecFx32 *prev, fx32 r, VecFx32 *out, VecFx32 *c, u16 ang, fx32 h, fx32 w, fx32 d) {
    VecFx32 p;
    fx32 cs;
    fx32 sn;
    fx32 nc;
    fx32 hw;
    fx32 hd;
    fx32 x7;
    fx32 t;
    fx32 u;
    fx32 x8;
    fx32 z9;
    fx32 z10;
    fx32 s1;
    fx32 s2;
    fx32 s3;
    fx32 s4;
    fx64 C;
    fx64 N;
    fx64 S;

    func_02069668(pos, out, &p);
    if (p.y - r - c->y > h) {
        return 0;
    }
    cs = data_02124ae0[(ang >> 4) * 2];
    sn = data_02124ae0[(ang >> 4) * 2 + 1];
    hw = r + (w >> 1);
    hd = r + (d >> 1);
    nc = -cs;
    u  = ((fx32) (((fx64) (sn) * (hw) + 0x800) >> 12));
    x7 = c->x;
    C  = cs;
    x7 += u;
    x7 += ((fx32) (((fx64) (cs) * (hd) + 0x800) >> 12));
    z9 = c->z + ((fx32) (((fx64) (nc) * (hw) + 0x800) >> 12));
    z9 += ((fx32) (((fx64) (sn) * (hd) + 0x800) >> 12));
    x8 = c->x;
    x8 -= u;
    x8 -= ((fx32) (((fx64) (cs) * (hd) + 0x800) >> 12));
    z10 = c->z;
    z10 -= ((fx32) (((fx64) (nc) * (hw) + 0x800) >> 12));
    z10 -= ((fx32) (((fx64) (sn) * (hd) + 0x800) >> 12));
    N  = nc;
    S  = sn;
    s1 = ((fx32) (((fx64) (sn) * (x7 - p.x) + 0x800) >> 12)) + ((fx32) (((fx64) (nc) * (z9 - p.z) + 0x800) >> 12));
    s2 = ((fx32) (((fx64) (cs) * (x7 - p.x) + 0x800) >> 12)) + ((fx32) (((fx64) (sn) * (z9 - p.z) + 0x800) >> 12));
    s3 = ((fx32) (((fx64) (sn) * (x8 - p.x) + 0x800) >> 12)) + ((fx32) (((fx64) (nc) * (z10 - p.z) + 0x800) >> 12));
    s4 = ((fx32) (((fx64) (cs) * (x8 - p.x) + 0x800) >> 12)) + ((fx32) (((fx64) (sn) * (z10 - p.z) + 0x800) >> 12));
    if (s1 >= 0 && s2 >= 0 && s3 <= 0 && s4 <= 0) {
        fx32 bx = x8 - prev->x;
        fx32 bz = z10 - prev->z;
        fx32 az = z9 - prev->z;
        fx32 ax = x7 - prev->x;
        if (((fx32) (((S) * (ax) + 0x800) >> 12)) + ((fx32) (((N) * (az) + 0x800) >> 12)) <= 0x1000) {
            out->x += ((fx32) (((S) * (s1) + 0x800) >> 12));
            out->z += ((fx32) (((N) * (s1) + 0x800) >> 12));
        }
        if (((fx32) (((C) * (ax) + 0x800) >> 12)) + ((fx32) (((S) * (az) + 0x800) >> 12)) <= 0x1000) {
            out->x += ((fx32) (((C) * (s2) + 0x800) >> 12));
            out->z += ((fx32) (((S) * (s2) + 0x800) >> 12));
        }
        if (((fx32) (((S) * (bx) + 0x800) >> 12)) + ((fx32) (((N) * (bz) + 0x800) >> 12)) >= -0x1000) {
            out->x += ((fx32) (((S) * (s3) + 0x800) >> 12));
            out->z += ((fx32) (((N) * (s3) + 0x800) >> 12));
        }
        if (((fx32) (((C) * (bx) + 0x800) >> 12)) + ((fx32) (((S) * (bz) + 0x800) >> 12)) >= -0x1000) {
            out->x += ((fx32) (((C) * (s4) + 0x800) >> 12));
            out->z += ((fx32) (((S) * (s4) + 0x800) >> 12));
        }
        return 1;
    }
    return 0;
}
