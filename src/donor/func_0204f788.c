/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204fe54 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0204fe54.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u8 *func_020360a0(u8 *p);
extern s32 func_0202ded8(u8 *p);
extern void func_02027630(u8 *p, s32 *v);
extern s32 func_0202785c(u8 *p, u8 *q);
extern u32 func_0204f964(u8 *p, u8 *q);
extern void func_0203e2b8(u8 *p, u32 a);
u32 func_0204f788(u8 *p) {
    u8 *iv;
    s32 v[3];
    s32 w[3];
    s32 r;
    s16 t;
    s32 dx;
    s32 dy;

    iv = func_020360a0(p);
    if (iv == 0) {
        return 0;
    }
    if (func_0202ded8(p) != 0) {
        func_02027630(p, v);
        dx = v[0] - *(s32 *) (iv + 0x2a0);
        dy = v[2] - *(s32 *) (iv + 0x2a8);
        t  = (((s32) (((s64) (dx) * (*(s32 *) (iv + 0x18c)) + 0x800) >> 12)) +
             ((s32) (((s64) (dy) * (*(s32 *) (iv + 0x194)) + 0x800) >> 12))) <= 0;
        if (!t) {
            func_0203e2b8(p, 0x2e5);
            return 1;
        }
        func_0203e2b8(p, 740);
        return 1;
    }
    r = func_0202785c(p, iv);
    if (r == 0) {
        goto c0;
    }
    if (r == 1) {
        goto c1;
    }
    if (r != 2) {
        goto ret0;
    }
c1:
    func_02027630(p, w);
    dx = w[0] - *(s32 *) (iv + 0x2a0);
    dy = w[2] - *(s32 *) (iv + 0x2a8);
    t  = (((s32) (((s64) (dx) * (*(s32 *) (iv + 0x18c)) + 0x800) >> 12)) +
         ((s32) (((s64) (dy) * (*(s32 *) (iv + 0x194)) + 0x800) >> 12))) <= 0;
    if (!t) {
        func_0203e2b8(p, 0x2e5);
        return 1;
    }
    func_0203e2b8(p, 740);
    return 1;
c0:
    return func_0204f964(p, iv);
ret0:
    return 0;
}
