/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c6560 from projets/nintendogs-shiba-friends/src/donor/func_020c6560.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
u32 func_020c6564(u8 *p, u32 i) {
    return *(u32 *) (p + 8) + *(u32 *) (*(u32 *) (p + 4) + (i & 0xffff) * 4);
}
