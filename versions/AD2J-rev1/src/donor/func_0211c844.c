/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211c83c from projets/nintendogs-shiba-friends/src/donor/func_0211c83c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 w[3];
} Trip;
void func_0211c844(u8 *o, s32 idx, u32 *src) {
    s32 off = idx * 12;
    u8 *d   = *(u8 **) (o + 4) + off;
    u8 *e;
    *(Trip *) d                             = *(Trip *) src;
    e                                       = *(u8 **) (o + 8) + off;
    *(u32 *) e                              = 0;
    *(u32 *) (e + 4)                        = 0;
    *(u32 *) (e + 8)                        = 0;
    *(u32 *) (*(u8 **) (o + 0xc) + idx * 4) = 1;
}
