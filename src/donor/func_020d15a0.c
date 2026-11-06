/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d15a8 from projets/nintendogs-chihuahua-friends/src/donor/func_020d15a8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_0214477c[];
extern u8 data_02144790[];
extern u8 data_0212da8c[];
extern void func_02107c9c(u8 *p, s32 a);
extern u32 func_02003844(u8 *p, u32 v);
extern u32 func_020def98(u32 a);
extern void func_0205e950(u8 *d, u32 n, u8 *s, u32 a, ...);
extern u32 func_0207e718(u8 *s);
extern s32 func_02078f8c(u32 a, u32 b);
extern void func_020c53b0(u8 *p, u8 *p2, u32 a);
extern s32 func_02078bf4(u32 a, u8 *b);
extern void func_020c51e8(u8 *p, u32 a, s16 b);
extern s32 func_020c3ff4(u8 *a, u32 b);
extern void func_020deef4(s32 a, u8 *p);
extern void func_020d136c(void);
extern void func_020d07ec(void);
extern void func_020d1594(void);
void func_020d15a0(u8 *p, u8 *p2) {
    u32 *piv;
    u32 iv2;
    u8 buf[64];
    s32 t;

    func_02107c9c(p, 75);
    *(u32 *) (p + 500)   = (u32) func_020d136c;
    *(u32 *) (p + 0x1f8) = (u32) func_020d07ec;
    *(u32 *) (p + 0x1f0) = (u32) func_020d1594;
    *(u32 *) (p + 0x214) = func_02003844(p2, 176);
    piv                  = *(u32 **) (p + 0x214);
    piv[0]               = func_020def98(32);
    func_0205e950(buf, 64, data_0214477c, *(u32 *) (p + 0x1ec));
    piv[0x2a] = func_02078f8c(func_0207e718(buf), 0);
    func_0205e950(buf, 64, data_02144790, *(u32 *) (p + 0x1ec));
    piv[0x2b] = func_02078f8c(func_0207e718(buf), 0);
    func_020c53b0(p, p2, 2);
    iv2 = func_02078bf4(*(u32 *) (*(u8 **) (p + 0x1c) + 8) + 0x40, data_0212da8c);
    func_020c51e8(p, 1, (s16) iv2);
    t         = func_020c3ff4(*(u8 **) (p + 0x74), piv[0x2a]);
    t         = func_020c3ff4(*(u8 **) (p + 0x74) + 36, piv[0x2b]);
    piv[0x28] = (u32) (*(u8 **) (p + 0x74) + 20);
    piv[0x29] = (u32) (*(u8 **) (p + 0x74) + 36) + 20;
    piv[2]    = (u32) ((s32) * (s16 *) ((u8 *) piv[0x29] + 4) << 12);
    func_020deef4(32, p);
}
