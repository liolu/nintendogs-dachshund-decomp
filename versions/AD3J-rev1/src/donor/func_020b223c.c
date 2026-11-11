/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b223c from projets/nintendogs-chihuahua-friends/src/donor/func_020b223c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *data_0214b150;
extern void func_020b8f84(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
void func_020b223c(u8 *param_1, s32 param_2, s32 param_3, s32 param_4) {
    u8 *P;
    u32 x, m, t, tq, y, s;
    u32 *q;
    u16 v, uw2;
    s32 v3;
    s32 sum;
    u16 usum;

    P    = data_0214b150;
    x    = *(u32 *) (P + 0x2c);
    m    = x % 12u;
    t    = m << 16;
    tq   = t / 12u;
    q    = (u32 *) (P + 0x2c);
    y    = q[1];
    v    = (u16) ((y << 16) / 60u);
    s    = q[2];
    uw2  = (u16) ((s << 16) / 60u);
    v3   = (s32) v / 12;
    sum  = v3 + tq;
    usum = (u16) sum;
    if (param_2 != 0xffff) {
        func_020b8f84(param_1, param_2, -32, -32, 0x1000, 0x1000, usum, 0x1f, 1);
    }
    if (param_3 != 0xffff) {
        func_020b8f84(param_1, param_3, -32, -32, 0x1000, 0x1000, v, 0x1e, 1);
    }
    if (param_4 != 0xffff) {
        func_020b8f84(param_1, param_4, -32, -32, 0x1000, 0x1000, uw2, 0x1d, 1);
    }
}
