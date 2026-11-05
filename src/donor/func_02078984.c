/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206ef04 from projets/children-of-mana/src/auto/func_0206ef04.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
static inline u32 *MatEnt(u8 *res, u32 i) {
    u8 *b = res + *(u32 *) (res + 8);
    u8 *p = b + 4 + *(u16 *) (b + 10);
    return (u32 *) (b + *(u32 *) (p + *(u16 *) p * i + 4));
}
void func_02078984(u8 *res, u32 i, u32 v) {
    u32 *m = MatEnt(res, i);
    m[3]   = (m[3] & ~0x3f000000) | (v << 24);
}
