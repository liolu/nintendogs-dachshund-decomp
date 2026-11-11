/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_02055b64 from projets/need-for-speed-underground-2/src/donor/func_02055b64.cpp (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
struct G_20503a4;
struct Obj2 {
    int f0;
    int f4;
    int f8;
    int fc;
};
enum Fmt {
    FMT_A = 0,
    FMT_B = 1
};
struct D {
    int f0;
    int f4;
    char p8[0x1c - 8];
    int f1c;
    int f20;
    int f24;
    int f28;
};
struct T {
    int f0, f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c, f20, f24, f28;
    int f2c;
    void (*f30)(int, int, int, int, int);
    int f34;
};
struct G_20503a4 {
    int f0, f4, f8, fc, f10, f14, f18, f1c, f20, f24, f28, f2c, f30, f34;
    char f38[0x10];
    int f48, f4c;
};
extern "C" {
extern void func_02080858(unsigned int a, unsigned int b);
extern struct D data_0214fc64;
extern void func_0206361c(void *a, int b, int c, int d);
extern void func_020636d4(unsigned int p0, unsigned int p1, int p2, unsigned int p3, unsigned int p4, unsigned int p5,
                          unsigned int p6, unsigned int p7, unsigned int p8, unsigned int p9);
extern void func_020637ec(int a, int b, int c, int d, int e);
extern void func_02063830(unsigned int a, unsigned int b, int c, int d, unsigned int e, unsigned int f, unsigned int g);
extern void func_020638ec(void *a, int b, int c, int d);
extern int func_020716d8(unsigned int bit);
extern int func_020716f8(void);
extern void func_0207173c(int mask);
extern int func_02071758(unsigned int mask);
extern int func_020717b4(unsigned int a);
extern void func_020725d8(struct T *thiz);
extern int func_020728e4(int a, int b, int c, int d, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12,
                         int p13, int p14, int p15);
extern void func_02074c3c(struct Obj2 *o, int a, int b);
extern void func_02074c6c(int *r0);
}
extern "C" void func_02074c6c(int *r0);
extern "C" void func_02074c3c(struct Obj2 *o, int a, int b);
extern "C" int func_020728e4(int a, int b, int c, int d, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12,
                             int p13, int p14, int p15) {
    int mode = 0;
    int align;
    int total;
    int blocks;
    int q;
    int fmt1;
    int fmt2;
    int m;
    int dd;
    int pp8;
    int pp10;
    u32 qlen;
    int stereo;
    int handle;
    int chunk;
    G_20503a4 *g;

    dd   = (int) ((d) & ~0ULL);
    pp8  = (int) ((p8) & ~0ULL);
    pp10 = (int) ((p10) & ~0ULL);

    handle = -1;
    g      = ((G_20503a4 *) &data_0214fc64);
    ((void (*)(int a, int b)) func_02080858)(b, dd);
    ((void (*)(int a, int b)) func_02080858)(c, dd);
    stereo = (p5 == 1) ? 1 : 0;
    align  = 0xffb0ff / p9;
    if (p14 != 0) {
        q = dd;
        if (stereo == 0) {
            q = dd >> 1;
        }
        align  = (align + 0x10) & ~0x1f;
        blocks = align >> 5;
        q      = q / p13;
        total  = blocks * q;
        chunk  = 0x20;
        if (stereo == 0) {
            chunk = chunk >> 1;
        }
        chunk = chunk * blocks;
    }
    {
        fmt1 = (int) (stereo != 0 ? FMT_A : FMT_B);
        fmt2 = (int) (stereo != 0 ? FMT_B : FMT_A);
        if (a != 2) {
            mode = 0xa;
        }
        if (p14 != 0) {
            handle = func_020716f8();
            if (handle < 0) {
                return 0;
            }
        }
        if (((int (*)(int a)) func_02071758)(3) == 0) {
            if (handle >= 0) {
                ((void (*)(int a)) func_020716d8)(handle);
            }
            return 0;
        }
        if (((int (*)(int a)) func_020717b4)(0xa) == 0) {
            if (handle >= 0) {
                ((void (*)(int a)) func_020716d8)(handle);
            }
            ((void (*)(int a)) func_0207173c)(3);
            return 0;
        }
        qlen = (u32) dd >> 2;
        ((void (*)(int a, int b, int c, int d, int e, u32 f, int g, int h, int i, int j)) func_020636d4)(
            1, fmt1, b, pp8 != 0 ? 1 : 2, 0, qlen, pp10, 0, align, p11);
        ((void (*)(int a, int b, int c, u32 d, int e, int f, int g)) func_02063830)(0, fmt2, b, qlen, pp8, p6, p7);
        ((void (*)(int a, int b, int c, int d, int e, u32 f, int g, int h, int i, int j)) func_020636d4)(
            3, fmt1, c, pp8 != 0 ? 1 : 2, 0, qlen, pp10, 0, align, p12);
        ((void (*)(int a, int b, int c, u32 d, int e, int f, int g)) func_02063830)(1, fmt2, c, qlen, pp8, p6, p7);
        if (handle >= 0) {
            ((void (*)(int a, int b, int c, int d, void *e)) func_020637ec)(handle, total + chunk, total, (int) func_020725d8,
                                                                            g);
        }
        if (a == 1) {
            ((void (*)(int a, int b, int c, int d)) func_0206361c)(3, 3, 1, 1);
        }
        if (handle >= 0) {
            m = 1 << handle;
        } else {
            m = 0;
        }
        ((void (*)(int a, int b, int c, int d)) func_020638ec)(mode, 3, m, 0);
        g->f0  = 1;
        g->f4  = a;
        g->f1c = 0xa;
        g->f20 = mode;
        g->f24 = 3;
        g->f28 = handle;
        g->f8  = p5;
        g->fc  = b;
        g->f10 = c;
        g->f14 = dd;
        g->f18 = 0;
        g->f2c = p13;
        g->f30 = p14;
        g->f34 = p15;
        g->f4c = pp10;
        ((void (*)(void *a)) func_02074c6c)(g->f38);
        ((void (*)(void *a, int b, int c)) func_02074c3c)(g->f38, pp10 << 8, 1);
        g->f48 = 0;
        return 1;
    }
}
extern "C" void func_020725d8(struct T *thiz);
extern "C" int func_020717b4(unsigned int a);
extern "C" int func_02071758(unsigned int mask);
extern "C" void func_0207173c(int mask);
extern "C" int func_020716f8(void);
extern "C" int func_020716d8(unsigned int bit);
