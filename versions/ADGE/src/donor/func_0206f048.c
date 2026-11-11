/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02064b2c from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02064b2c.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_0206cdc0(const void *src, int off, int size);
int func_0206f048(int off, short b, int c, int d) {
    unsigned char tag = 9;
    short val         = b;
    int c1, c2, c3;
    func_0206cdc0(&tag, off, 1);
    c1 = off + 1;
    func_0206cdc0(&val, c1, 2);
    c2 = c1 + 2;
    func_0206cdc0(&c, c2, 1);
    c3 = c2 + 1;
    func_0206cdc0(&d, c3, 4);
    return c3 + 4 - off;
}
