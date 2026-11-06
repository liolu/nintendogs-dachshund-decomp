/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020789cc from projets/nintendogs-chihuahua-friends/src/donor/func_020789cc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
static inline u32 *MatEnt(u8 *res, u32 i) {
    u8 *b = res + *(u32 *) (res + 8);
    u8 *p = b + 4 + *(u16 *) (b + 10);
    return (u32 *) (b + *(u32 *) (p + *(u16 *) p * i + 4));
}
void func_020789cc(u8 *res, u32 i, u32 v) {
    u32 *m = MatEnt(res, i);
    m[3]   = (m[3] & ~0xf) | v;
}
