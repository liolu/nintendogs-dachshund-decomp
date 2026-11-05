/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c634c from projets/nintendogs-shiba-friends/src/donor/func_020c634c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
u32 func_020c6350(u8 *param_1, u32 param_2, u32 param_3) {
    u32 n   = *(u16 *) (*(u8 **) (param_1 + 0x24) + 8);
    u32 key = ((param_2 << 16) & 0xffff0000u) | (param_3 & 0xffff);
    u32 r   = 0xffffffff;
    u32 i   = 0;
    u8 *e;
    if (i < n) {
        e = *(u8 **) (param_1 + 0x28);
        do {
            if (*(u32 *) e == key) {
                r = *(u16 *) (e + 4);
                break;
            }
            i = i + 1;
            e = e + 8;
        } while (i < n);
    }
    return r;
}
