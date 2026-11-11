/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020aed24 from projets/nintendogs-chihuahua-friends/src/donor/func_020aed24.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef volatile u32 vu32;
extern u32 data_02153740;
void func_020aed24(void) {
    u32 one = 1;
    u32 base;
    u32 q;
    vu32 *r;
    base                  = *(u32 *) &data_02153740;
    q                     = base + 196;
    *(vu32 *) (q + 0x268) = one;
    r                     = (vu32 *) q;
    r                     = (vu32 *) ((u8 *) r + 616);
    r[1]                  = 30;
}
