/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c8a54 from projets/nintendogs-shiba-friends/src/donor/func_020c8a54.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed char s8;
typedef signed short s16;
extern u8 *data_02154c48;
s8 *func_020c8a58(void) {
    s8 *res;
    s16 i;
    s8 *e;
    u8 *base;
    res  = 0;
    i    = 0;
    base = *(u8 **) (data_02154c48 + 0x141c);
    e    = (s8 *) (base + 0x568);
    do {
        if (e[14] != 0 && e[15] >= 0) {
            res = e;
            break;
        }
        i = (s16) (i + 1);
        e += 16;
    } while (i < 20);
    return res;
}
