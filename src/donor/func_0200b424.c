/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200b4d0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0200b4d0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
typedef volatile s32 vs32;
u32 func_0200b424(s32 *p1, s32 *p2, s32 *p3, s32 *p4) {
    s32 z1  = *(vs32 *) &p1[2];
    s32 z2  = *(vs32 *) &p2[2];
    int z3  = *(vs32 *) &p3[2];
    s32 x1  = p1[0];
    int z4  = *(vs32 *) &p4[2];
    s32 n3  = -(z4 - z3);
    s32 x3  = p3[0];
    s32 x2  = p2[0];
    s32 x4  = p4[0];
    s32 n1  = -(z2 - z1);
    int t2  = (u32) z4 - z1;
    s32 t4  = x3 - x1;
    s32 t5  = x2 - x1;
    s32 t8  = x4 - x3;
    s32 t7  = x1 - x3;
    s32 t6  = x4 - x1;
    s32 t11 = z1 - z3;
    s32 B   = ((s32) (((s64) (n1) * (t6) + 0x800) >> 12)) + ((s32) (((s64) (t5) * (t2) + 0x800) >> 12));
    s32 t9  = x2 - x3;
    s32 t10 = z3 - z1;
    s32 A   = ((s32) (((s64) (n1) * (t4) + 0x800) >> 12)) + ((s32) (((s64) (t5) * (t10) + 0x800) >> 12));
    s32 t12 = z2 - z3;
    if (((s32) (((s64) (A) * (B) + 0x800) >> 12)) < 0) {
        s32 C = ((s32) (((s64) (n3) * (t7) + 0x800) >> 12)) + ((s32) (((s64) (t8) * (t11) + 0x800) >> 12));
        s32 D = ((s32) (((s64) (n3) * (t9) + 0x800) >> 12)) + ((s32) (((s64) (t8) * (t12) + 0x800) >> 12));
        if (((s32) (((s64) (C) * (D) + 0x800) >> 12)) < 0) {
            return 1;
        }
    }
    return 0;
}
