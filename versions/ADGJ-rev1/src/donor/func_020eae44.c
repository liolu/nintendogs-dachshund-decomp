/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eae44 from projets/nintendogs-chihuahua-friends/src/donor/func_020eae44.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_020eae74(u32 *a, u32 b);
u32 func_020eae44(u32 *p0, u32 p1, u32 p2) {
    u32 r = func_020eae74(p0, p1);
    u32 *q;
    if (r != 0xffffffff) {
        q     = (u32 *) ((u32) p0 + (r << 2));
        q[14] = p2;
    }
    return r;
}
