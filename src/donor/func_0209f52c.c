/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209f52c from projets/nintendogs-chihuahua-friends/src/donor/func_0209f52c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
extern u8 *data_0215373c;
extern void func_0206dfd4(u32 a, u32 b, u32 c);
void func_0209f52c(u32 param_1, u16 *param_2) {
    u8 *d;
    u32 v0;
    u32 v1;
    vu16 *vp;
    vp = (vu16 *) param_2;
    func_0206dfd4(param_1, (u32) data_0215373c, 0x260c);
    v0                = vp[0];
    d                 = data_0215373c;
    v1                = vp[1];
    d                 = d + 0x2600;
    *(u16 *) (d + 12) = (u16) v0;
    *(u16 *) (d + 14) = (u16) v1;
}
