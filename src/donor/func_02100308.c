/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02121170 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02121170.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Quad;
extern void func_0206dfbc(u16 v, void *dst, u32 n);
extern s32 _s32_div_f(s32 a, s32 b);
extern s32 func_020b8f2c(s32 a, u16 b);
extern void func_020b8dbc(s32 a, u16 b, s32 c, s32 d);
extern void func_020b8b0c(s32 a, u16 b, s32 c);
void func_02100308(s32 *p, s32 p2, Quad *p3, u16 *p4, s32 p5, s32 p6, s32 p7, s32 p8, s32 p9) {
    s32 r9;
    s32 r8;
    s32 r7;
    u16 q7;
    s32 r5;
    s32 t;
    s32 i;
    vu16 z;

    p[0]              = p2;
    *(Quad *) (p + 1) = *p3;
    z                 = 0;
    func_0206dfbc(z, p + 6, 32);
    for (i = 0; i < p5; i++) {
        ((u16 *) ((u8 *) p + 0x18))[i] = p4[i];
    }
    p[5]  = p5;
    p[15] = p6;
    p[16] = p7;
    p[17] = p8;
    t     = (p8 - p6) + 2;
    if (p9 > t) {
        p9 = t;
    }
    if (p9 < 0) {
        p9 = 0;
    }
    p[18] = p9;
    p[19] = p9;
    p[20] = 0;
    p[21] = 16;
    p[22] = 0;
    p[23] = 0;
    p[25] = 0;

    r5 = p[1];
    q7 = r5 + 7;
    r8 = (p[17] - p[15]) + 2;
    r7 = p[18];
    r9 = _s32_div_f(p[3] * (r8 - r7), r8);
    r7 = r9 + _s32_div_f(p[4] * r7, r8);
    r7 = r7 - func_020b8f2c(2, q7);
    func_020b8dbc(2, q7, 0, r7);
    func_020b8dbc(2, (u16) (r5 + 8), 0, r7);

    for (i = 0; i < p[15]; i++) {
        s32 idx = p[18] - 1 + i;
        if (idx >= 0 && idx < p[17]) {
            ((void (*)(s32, s32))(u32) p[0])(i, idx);
        }
    }

    func_020b8b0c(2, (u16) (p[1] + 1), 0);
    func_020b8b0c(2, (u16) (p[1] + 2), 0);
    func_020b8b0c(2, (u16) (p[1] + 4), 0);
    func_020b8b0c(2, (u16) (p[1] + 5), 0);
    func_020b8b0c(2, (u16) (p[1] + 8), 0);
    func_020b8b0c(2, (u16) p[1], 1);
    func_020b8b0c(2, (u16) (p[1] + 3), 1);
    func_020b8b0c(2, (u16) (p[1] + 2), 0);
    func_020b8b0c(2, (u16) (p[1] + 5), 0);

    if (p[19] == 0) {
        func_020b8b0c(2, (u16) (p[1] + 3), 0);
        func_020b8b0c(2, (u16) (p[1] + 5), 1);
    } else if (p[19] == (p[17] - p[15]) + 2) {
        func_020b8b0c(2, (u16) p[1], 0);
        func_020b8b0c(2, (u16) (p[1] + 2), 1);
    }

    if (p[17] <= p[15] - 2) {
        p[14] = 4;
        func_020b8b0c(2, (u16) (p[1] + 2), 1);
        func_020b8b0c(2, (u16) (p[1] + 5), 1);
        func_020b8b0c(2, (u16) p[1], 0);
        func_020b8b0c(2, (u16) (p[1] + 3), 0);
        func_020b8b0c(2, (u16) (p[1] + 7), 0);
        r7 = p[17] + 1;
        if (r7 >= p[15]) {
            return;
        }
        do {
            s32 k;
            for (k = 0; k < p[5]; k++) {
                func_020b8b0c(2, (u16) (r7 + ((u16 *) ((u8 *) p + 0x18))[k]), 0);
            }
            r7++;
        } while (r7 < p[15]);
        return;
    }
    p[14] = 0;
}
