/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c253c from projets/nintendogs-chihuahua-friends/src/donor/func_020c253c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef int BOOL;
BOOL func_020c253c(u8 *p, s16 i) {
    return *(s16 *) (p + i * 12 + 0xc2) == 2;
}
