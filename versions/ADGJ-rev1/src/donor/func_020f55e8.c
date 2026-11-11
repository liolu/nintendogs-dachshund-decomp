/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f55e8 from projets/nintendogs-chihuahua-friends/src/donor/func_020f55e8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *volatile data_02155104[];
u32 func_020f55e8(u32 p1, u8 *p2) {
    s32 i;
    u32 bits;
    u8 *p;
    u32 off;
    u32 one;
    u32 z;
    bits = 0;
    i    = 0;
    p    = p2;
    off  = 0;
    one  = 1;
    z    = 0;
    for (; i < 20; i++) {
        if (p2 != 0) {
            if (*(u16 *) p == 0 || *(u16 *) (p + 2) != 256) {
                bits |= one << i;
            }
            *(u8 **) (data_02155104[p1] + off + 0xa8) = p;
            {
                u8 *rec = data_02155104[p1] + off;
                if (*(u16 *) *(u8 **) (rec + 0xa8) != 0) {
                    *(u32 *) (rec + 0x94)                     = z;
                    *(u32 *) (data_02155104[p1] + off + 0x98) = one;
                }
            }
        } else {
            *(u32 *) (data_02155104[p1] + off + 0x94) = 0;
            *(u32 *) (data_02155104[p1] + off + 0x98) = 0;
        }
        p += 316;
        off += 24;
    }
    return bits;
}
