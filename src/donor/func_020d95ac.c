/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d95b4 from projets/nintendogs-chihuahua-friends/src/donor/func_020d95b4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef volatile u8 vu8;
typedef volatile u32 vu32;
extern u8 *data_02154ca0;
u32 func_020d95ac(u32 *p) {
    u32 bb    = *(vu8 *) ((u8 *) p + 2);
    u8 *G     = *(u8 *volatile *) &data_02154ca0;
    u32 *slot = (u32 *) (G + bb * 4);
    u32 one;
    if (slot[0x178 / 4] != 0) {
        return 0;
    }
    one             = 1;
    slot[0x178 / 4] = one;
    {
        u8 *G2               = *(u8 *volatile *) &data_02154ca0;
        u32 bb2              = *(vu8 *) ((u8 *) p + 2);
        u8 *d                = G2 + bb2 * 8;
        u32 v0               = *(vu32 *) p;
        u32 v1               = *(vu32 *) ((u8 *) p + 4);
        *(u32 *) (d + 0x184) = v0;
        *(u32 *) (d + 0x188) = v1;
    }
    return one;
}
