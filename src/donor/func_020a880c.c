/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a880c from projets/nintendogs-shiba-friends/src/donor/func_020a880c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
extern u8 *data_02153744;
s32 func_020a880c(void) {
    s32 sum = 0;
    s32 i   = 0;
    u8 *p   = data_02153744 + 4;
    do {
        if (*(s32 *) (p + 4) != 0 && *(s32 *) (p + 8) != 0) {
            sum = sum + *(s32 *) (p + 0x24);
        }
        i = i + 1;
        p = p + 440;
    } while (i < 24);
    return sum;
}
