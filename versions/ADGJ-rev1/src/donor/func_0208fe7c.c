/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208fe7c from projets/nintendogs-chihuahua-friends/src/donor/func_0208fe7c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern u8 *data_02153708;
extern void func_02090508(u8 *p, u32 v);
void func_0208fe7c(u16 p0) {
    u8 *g = (u8 *) data_02153708;
    s16 idx;
    u8 *e;
    func_02090508(g, 6);
    *(u16 *) (g + 4)             = 0;
    *(u16 *) (g + 14)            = p0;
    idx                          = *(s16 *) (g + 14);
    e                            = g + 32 + idx * 20;
    *(u16 *) (g + 32 + idx * 20) = *(u16 *) (g + 32 + idx * 20) | 1;
    *(s16 *) (e + 2)             = idx;
}
