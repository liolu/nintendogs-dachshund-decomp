/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02064a28 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02064a28.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_0206cdc0(const void *src, int off, int size);
int func_0206ef44(int off, short v, char b) {
    unsigned char tag = 0xb;
    short val         = v;
    int c1, c2;
    func_0206cdc0(&tag, off, 1);
    c1 = off + 1;
    func_0206cdc0(&val, c1, 2);
    c2 = c1 + 2;
    func_0206cdc0(&b, c2, 1);
    return c2 + 1 - off;
}
