/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02027534 from projets/nintendogs-shiba-friends/src/donor/func_02027534.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u32 w[12];
} Blk48;
void func_02027534(u8 *src, u32 *dst) {
    *(Blk48 *) dst = *(Blk48 *) (src + 60);
}
