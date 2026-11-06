/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fb53c from projets/nintendogs-chihuahua-friends/src/donor/func_020fb53c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
extern u8 *func_020c9c88(s16 v);
s32 func_020fb534(u8 *param_1, s32 param_2) {
    s32 i;
    s32 found;
    s32 x;
    s32 m;
    s16 *ps;

    switch (param_2) {
        case 2:
            x = *(s32 *) (param_1 + 0x1c);
            break;
        case 1:
            m = *(s32 *) (param_1 + 0x18) * *(s16 *) (param_1 + 0x16);
            x = m / 100;
            break;
        case 3:
            found = 0;
            i     = 0;
            do {
                ps = (s16 *) func_020c9c88((s16) i);
                if (*(s16 *) param_1 == *(s8 *) ((u8 *) ps + 2) && *(s16 *) (param_1 + 2) == ps[0] &&
                    *(s8 *) ((u8 *) ps + 3) > 1) {
                    found = 1;
                    break;
                }
                i = i + 1;
            } while (i < 200);
            if (found != 0) {
                x = 0;
            } else {
                x = *(s32 *) (param_1 + 0x18);
            }
            break;
        default:
            x = *(s32 *) (param_1 + 0x18);
            break;
    }
    return (x / 10) * 10;
}
