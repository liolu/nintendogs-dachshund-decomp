/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02091634 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02091634.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
u8 *func_020c6dcc(u8 *o, u32 key) {
    s32 i;
    u8 *res;
    u8 *p;
    s32 n;
    res = ((void *) 0);
    n   = *(s16 *) (o + 24);
    i   = 0;
    if (n > 0) {
        p = o + 604;
        do {
            if (*(u32 *) p == key) {
                res = p;
                break;
            }
            i = i + 1;
            p = p + 8;
        } while (i < n);
    }
    if (res == ((void *) 0)) {
        *(u32 *) (o + 604 + n * 8) = key;
        res                        = o + 604 + n * 8;
        *(u16 *) (res + 4)         = 0;
        *(s16 *) (o + 24)          = *(s16 *) (o + 24) + 1;
    }
    return res;
}
