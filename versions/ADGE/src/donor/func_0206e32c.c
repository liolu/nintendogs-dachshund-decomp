/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063e08 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02063e08.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_0206fedc(void);
extern int func_02070144(void);
extern int func_02070154(void);
extern int func_0206f400(int p0, unsigned short mask, unsigned char e2, short a, int b, int c);
int func_0206e32c(char *obj, int idx, int p2) {
    unsigned char *e;
    unsigned short mask;
    int a, b, c, r;

    r    = 0;
    e    = (unsigned char *) (obj + 0x1d4 + idx * 0x68);
    mask = (unsigned short) (1 << idx);
    if (e[0] == 2 && e[1] == 2) {
        a    = func_0206fedc();
        b    = func_02070144();
        c    = func_02070154();
        r    = func_0206f400(p2, mask, e[2], (short) a, b, c);
        e[0] = 1;
    }
    return r;
}
