/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ca91c from projets/nintendogs-chihuahua-friends/src/donor/func_020ca91c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
void func_020ca918(u8 *param_1, u16 *param_2) {
    s16 i = 0;
    s16 z = 0;
    u16 v;
    do {
        *(u16 *) (param_1 + i * 2 + 120) = z;
        i                                = i + 1;
    } while (i < 8);
    z = 0;
    do {
        v = *param_2;
        if (v == 0) {
            return;
        }
        *(u16 *) (param_1 + z * 2 + 120) = v;
        param_2                          = param_2 + 1;
        z                                = z + 1;
    } while (z < 7);
}
