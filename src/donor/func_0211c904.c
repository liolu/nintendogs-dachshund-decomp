/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211c904 from projets/nintendogs-chihuahua-friends/src/donor/func_0211c904.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
void func_0211c904(s32 *p0, u32 *p1) {
    s32 i = 0;
    if (p0[0] > 0) {
        u32 off = 0;
        do {
            u32 v2                  = p1[2];
            s32 v1                  = p1[1];
            s32 x                   = v1 - i * p0[6];
            u8 *b1                  = (u8 *) p0[1];
            u32 v0                  = p1[0];
            *(u32 *) (b1 + off)     = v0;
            *(s32 *) (b1 + off + 4) = x;
            *(u32 *) (b1 + off + 8) = v2;
            {
                u8 *b2                  = (u8 *) p0[2];
                *(u32 *) (b2 + off)     = 0;
                *(u32 *) (b2 + off + 4) = 0;
                *(u32 *) (b2 + off + 8) = 0;
            }
            i   = i + 1;
            off = off + 12;
        } while (i < p0[0]);
    }
}
