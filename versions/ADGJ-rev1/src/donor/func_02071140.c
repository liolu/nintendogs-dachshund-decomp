/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060598 from projets/children-of-mana/src/auto/func_02060598.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_0206e004(u32 *src, u32 *dst, u32 n);
extern void func_0207146c(u32 *p);
typedef struct {
    u32 a0;
    u32 x4;
    u16 h;
    u16 pad;
    u32 x0c;
    u32 w3;
    u32 w1;
    u32 w2;
    u32 buf1[16];
    u32 buf2[16];
} Frame;
void func_02071140(u16 p0, u32 p1, u32 *p2, u32 p3, u32 *p4, u32 p5) {
    Frame f;
    f.a0 = 4;
    f.w3 = p5;
    f.h  = p0;
    f.w1 = p1;
    f.w2 = p3;
    func_0206e004(p2, f.buf1, 64);
    func_0206e004(p4, f.buf2, 64);
    func_0207146c(&f.a0);
}
