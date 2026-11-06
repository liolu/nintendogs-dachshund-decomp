/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209bf24 from projets/nintendogs-chihuahua-friends/src/donor/func_0209bf24.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
extern void func_020cacf4(u8 *p);
extern void func_0206dfbc(u32 a, u8 *b, u32 c);
void func_0209bf24(u8 *p) {
    vu16 s0;
    vu16 s2;
    func_020cacf4(p);
    s0 = 0;
    func_0206dfbc(s0, p + 0x85c, 0x18b0);
    s2 = 0;
    func_0206dfbc(s2, p + 0x210c, 1280);
}
