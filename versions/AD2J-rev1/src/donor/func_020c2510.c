/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208ca9c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208ca9c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
void func_020c2510(u8 *param_1, s16 param_2) {
    u8 *b  = param_1 + 0xc0;
    u16 *e = (u16 *) (b + param_2 * 12);
    if ((s16) e[1] == 2) {
        *e   = *e ^ 1;
        e[1] = 0;
    }
}
