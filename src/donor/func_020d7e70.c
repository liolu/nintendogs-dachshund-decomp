/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d7e68 from projets/nintendogs-shiba-friends/src/donor/func_020d7e68.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern void func_0211177c(u32 a, u32 *b, s32 c, s32 d);
typedef struct {
    u32 w[3];
} Blk12;
void func_020d7e70(u32 p0, u32 *p1) {
    Blk12 loc;
    *(Blk12 *) &loc = *(Blk12 *) p1;
    loc.w[1]        = 0;
    func_0211177c(p0, loc.w, -3, 0);
}
