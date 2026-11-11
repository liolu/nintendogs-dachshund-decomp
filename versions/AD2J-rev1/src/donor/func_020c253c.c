/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0208cac8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208cac8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef int BOOL;
BOOL func_020c253c(u8 *p, s16 i) {
    return *(s16 *) (p + i * 12 + 0xc2) == 2;
}
