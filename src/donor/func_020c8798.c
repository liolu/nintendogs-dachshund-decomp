/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c8794 from projets/nintendogs-shiba-friends/src/donor/func_020c8794.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c48;
s32 func_020c8798(void) {
    s32 r = -1;
    s32 i = 0;
    u8 *w = data_02154c48;
    do {
        u8 *t = *(u8 **) (w + 0x14f4);
        if (*(u16 *) (t + 4) == 0xffff) {
            r = i;
            goto out;
        }
        i = (s16) (i + 1);
        w = w + 24;
    } while (i < 5);
out:
    return r;
}
