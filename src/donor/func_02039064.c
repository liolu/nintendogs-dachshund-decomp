/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020395b4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020395b4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u32 vu32;
extern s32 func_0206902c(s32 a);
extern s32 func_01ff8958(s32 a, s32 b);
void func_02039064(s32 *p1, s32 *p2, s32 *p3, s32 p4, s32 p5, s32 p6, s32 p7, s32 p8) {
    s32 q5, dx, dz, s9, s6, s, pt, t, fx1;

    q5 = *(vu32 *) &p5;
    dx = p3[0] - p2[0];
    dz = p3[2] - p2[2];
    s9 = ((s32) (((s64) (dx) * (p4) + 0x800) >> 12)) + ((s32) (((s64) (dz) * (q5) + 0x800) >> 12));
    if (s9 <= 0) {
        return;
    }
    s6 = ((s32) (((s64) (dx) * (dx) + 0x800) >> 12)) + ((s32) (((s64) (dz) * (dz) + 0x800) >> 12));
    if (s6 == 0) {
        return;
    }
    if (s6 >= p7) {
        return;
    }
    pt = p8 * 0x1000;
    if (s6 < p8 * pt) {
        s6  = func_0206902c(s6);
        t   = pt - s6;
        fx1 = ((s32) (((s64) (t) * (s9) + 0x800) >> 12));
        s   = ((s32) (((s64) (fx1) * (p6) + 0x800) >> 12));
        s9  = func_01ff8958(s * 5, s6);
        if (((s32) (((s64) (dx) * (q5) + 0x800) >> 12)) + ((s32) (((s64) (dz) * (-p4) + 0x800) >> 12)) > 0) {
            p1[0] = p1[0] + ((s32) (((s64) (-p5) * (s9) + 0x800) >> 12));
            p1[2] = p1[2] + ((s32) (((s64) (p4) * (s9) + 0x800) >> 12));
            return;
        }
        p1[0] = p1[0] + ((s32) (((s64) (q5) * (s9) + 0x800) >> 12));
        p1[2] = p1[2] + ((s32) (((s64) (-p4) * (s9) + 0x800) >> 12));
        return;
    }
}
