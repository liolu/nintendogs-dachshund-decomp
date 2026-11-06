/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d0b38 from projets/nintendogs-chihuahua-friends/src/donor/func_020d0b38.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 data_02144750[11];
extern s32 data_02144724[11];
typedef struct {
    s32 w[3];
} T3;
typedef struct {
    s32 w[11];
} T11;
typedef struct {
    s32 w[12];
} T12;
typedef struct {
    T11 tbl;
    T11 loc2;
    T3 X;
    T3 Y;
    T3 Z;
} FT;
extern void func_020d1364(void);
extern void func_020d12fc(void);
extern void func_020d12e0(void);
extern void func_020d12c0(void);
extern u32 _s32_div_f(u32 a, u32 b);
extern void func_02108220(u8 *p, s32 a);
extern void func_02069504(s32 *a, s32 *b, s32 *c);
extern void func_020069bc(s32 *a, s32 *b);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern void func_020d116c(u8 *p);
extern void func_020ed87c(s32 a);
extern u32 func_02111cbc(u32 a, s32 b);
extern void func_0210fe58(u8 *p, s32 a, s32 *b, s32 *c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
static inline void vset3(s32 *d, s32 a, s32 b, s32 c) {
    d[0] = a;
    d[1] = b;
    d[2] = c;
}
void func_020d0b38(u8 *p1) {
    FT f;
    s32 *piVar3 = *(s32 **) (p1 + 0x214);
    T3 A        = {{0, 0, 0}};
    T3 B;
    s32 n;
    u32 idx;
    s32 iv;
    s32 t;
    s32 *pv;
    s32 *pa;
    s32 d;

    *(s32 *) (p1 + 0xb4) += *(s32 *) (*(s32 **) piVar3);
    if (piVar3[4] != 0 && piVar3[5] != 0) {
        n = piVar3[1];
        if (n > 0) {
            T12 loc          = *(T12 *) (p1 + 0x3c);
            *(T11 *) f.tbl.w = *(T11 *) data_02144750;
            idx              = _s32_div_f(n, piVar3[2]);
            t                = f.tbl.w[idx];
            A.w[0]           = ((s32) (((s64) (loc.w[6]) * (t) + 0x800) >> 12));
            A.w[2]           = ((s32) (((s64) (loc.w[8]) * (t) + 0x800) >> 12));
        }
    }
    *(T3 *) (piVar3 + 7) = A;
    if (piVar3[4] == 0) {
        func_02108220(p1, *(s32 *) (*(s32 **) piVar3 + 0x5c / 4));
        vset3(f.X.w, *(s32 *) (p1 + 0xc8), *(s32 *) (p1 + 0xcc), *(s32 *) (p1 + 0xd0));
        vset3(f.Y.w, *(s32 *) (p1 + 0xd4), *(s32 *) (p1 + 0xd8), *(s32 *) (p1 + 0xdc));
        func_02069504(f.X.w, f.Y.w, f.Z.w);
        func_020069bc(f.X.w, f.X.w);
        func_020069bc(f.Z.w, f.Z.w);
        func_02069504(f.Z.w, f.X.w, f.Y.w);
        *(s32 *) (p1 + 0xc8) = f.X.w[0];
        *(s32 *) (p1 + 0xcc) = f.X.w[1];
        *(s32 *) (p1 + 0xd0) = f.X.w[2];
        *(s32 *) (p1 + 0xd4) = f.Y.w[0];
        *(s32 *) (p1 + 0xd8) = f.Y.w[1];
        *(s32 *) (p1 + 0xdc) = f.Y.w[2];
        *(s32 *) (p1 + 0xe0) = f.Z.w[0];
        *(s32 *) (p1 + 0xe4) = f.Z.w[1];
        *(s32 *) (p1 + 0xe8) = f.Z.w[2];
    }
    func_02069668((s32 *) (p1 + 0xb0), A.w, B.w);
    func_02069668((s32 *) (p1 + 0xbc), B.w, (s32 *) (p1 + 0xbc));
    func_020d116c(p1);
    pv                = *(s32 **) (p1 + 0x214);
    *(T11 *) f.loc2.w = *(T11 *) data_02144724;
    idx               = _s32_div_f(pv[1], pv[2]);
    pv[1] -= (d = f.loc2.w[idx]);
    if (pv[1] < 0x78000) {
        *(u16 *) (p1 + 0xa6) = 1;
    }
    if (pv[1] < 0) {
        pv[1]                = 0;
        *(u16 *) (p1 + 0xa6) = 2;
    }
    if (pv[1] > 0) {
        func_020ed87c(d);
    } else {
        func_020ed87c(0);
    }
    iv = func_02111cbc(*(u16 *) (p1 + 0xa0), *(s32 *) (p1 + 0xf8));
    func_0210fe58(p1, *(s32 *) (p1 + 0xf8), (s32 *) (p1 + 0xfc), (s32 *) (p1 + 0x108), iv, (s32) func_020d1364, 0,
                  (s32) func_020d12fc, (s32) func_020d12e0, (s32) func_020d12c0);
}
