/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a8934 from projets/nintendogs-shiba-friends/src/donor/func_020a8934.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02153744;
s32 func_020a8934(u32 param_1, s32 param_2) {
    u8 *b;
    s32 i;
    u8 *q;
    s32 r = -1;

    i = 0;
    q = (u8 *) data_02153744 + 4;
    do {
        b = q + 24;
        if (*(s32 *) (q + 4) != 0 && *(s32 *) (q + 8) != 0) {
            if (*(s32 *) b == param_2) {
                r = i;
                break;
            }
        }
        i = i + 1;
        q = q + 440;
    } while (i < 24);
    return r;
}
