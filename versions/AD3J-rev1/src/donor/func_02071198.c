/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206f998 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0206f998.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_0206e004(u32 *src, u32 *dst, u32 n);
extern void func_0207146c(u32 *p);
typedef struct {
    u32 a0;
    u32 pad4;
    u16 h;
    u16 pad_a;
    u32 pad_c;
    u32 w_p3;
    u32 w_p1;
    u32 w3;
    u32 buf[32];
} Frame;
void func_02071198(u16 p0, u32 p1, u32 *p2, u32 p3) {
    Frame f;
    f.w_p1 = p1;
    f.h    = p0;
    f.a0   = 6;
    f.w_p3 = p3;
    f.w3   = 40;
    func_0206e004(p2, f.buf, 64);
    func_0207146c(&f.a0);
}
