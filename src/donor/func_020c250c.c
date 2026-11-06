/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c2510 from projets/nintendogs-chihuahua-friends/src/donor/func_020c2510.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
void func_020c250c(u8 *param_1, s16 param_2) {
    u8 *b  = param_1 + 0xc0;
    u16 *e = (u16 *) (b + param_2 * 12);
    if ((s16) e[1] == 2) {
        *e   = *e ^ 1;
        e[1] = 0;
    }
}
