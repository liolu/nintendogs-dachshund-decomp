/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02114454 from projets/nintendogs-shiba-friends/src/donor/func_02114454.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    u32 w[3];
} V3;
extern s32 data_0214907c;
extern s32 data_02148f28;
extern s32 data_02148f2c;
extern s32 data_02148f30;
extern s32 data_02148f34;
extern s32 data_02148f38;
extern s32 data_02148f3c;
extern s32 data_02148f44;
extern s32 data_02148f40;
extern void func_020069bc(s32 *a, s32 *b);
extern void func_01ff832c(s32 k, s32 *a, s32 *b, s32 *c);
extern s32 func_01ffda04(s32 a);
extern s32 func_020280f8(s32 a);
extern s32 func_021081c8(void);
extern s32 func_02033af8(void);
extern s32 func_02069098(s32 a, s32 b);
extern s16 func_02069878(s32 a, s32 b);
void func_0211445c(s32 *p, s32 *src, s32 p3) {
    s32 A[3];
    s32 B[3];
    s32 k;
    s32 r9;
    s32 r8;
    s32 r5;
    s32 r4;
    s32 t;
    s32 v;
    s32 half;
    s32 q;
    s32 iVar5;
    s16 sv;
    s32 v7;

    *(V3 *) p = *(V3 *) src;
    A[0]      = -p[0];
    A[1]      = 0;
    A[2]      = -p[2];
    k         = data_0214907c;
    func_020069bc(A, A);
    B[0] = p[0];
    B[1] = 0;
    B[2] = p[2];
    func_01ff832c(k, A, B, p + 3);
    p[6] = 0;
    p[7] = 4096;
    p[8] = 0;
    r5   = 0;
    r4   = 0;
    r8   = 409600;
    r9   = 0;
    do {
        t = func_01ffda04((s16) r9);
        if (t != 0) {
            v  = func_020280f8(t);
            r5 = r5 + 1;
            if (r8 > v) {
                r8 = v;
            }
            if (r4 < v) {
                r4 = v;
            }
        }
        r9 = r9 + 1;
    } while (r9 < 3);
    iVar5 = func_021081c8();
    half  = func_02033af8() / 2;
    if (r5 == 3) {
        q    = (half * 7) / 6;
        p[1] = data_02148f2c + ((s32) (((s64) (data_02148f28) * (q) + 0x800) >> 12));
    } else if (r5 == 2) {
        q    = (half * 3) / 2;
        p[1] = data_02148f34 + ((s32) (((s64) (data_02148f30) * (q) + 0x800) >> 12));
    } else {
        q    = half * 2;
        p[1] = data_02148f3c + ((s32) (((s64) (data_02148f38) * (q) + 0x800) >> 12));
    }
    sv = func_02069878(func_02069098(q, p3), iVar5);
    v7 = (s32) ((((s64) (s32) sv * 0x1680000) + 0x80000) >> 20);
    if (v7 < data_02148f44) {
        v7 = data_02148f44;
    }
    if (v7 > data_02148f40) {
        v7 = data_02148f40;
    }
    p[9] = v7;
}
