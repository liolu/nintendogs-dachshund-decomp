/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205f800 from projets/children-of-mana/src/auto/func_0205f800.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern void func_0206e1b8(const void *src, int off, int size);
int func_0207033c(int off, short v, char b) {
    unsigned char tag = 0xb;
    short val         = v;
    int c1, c2;
    func_0206e1b8(&tag, off, 1);
    c1 = off + 1;
    func_0206e1b8(&val, c1, 2);
    c2 = c1 + 2;
    func_0206e1b8(&b, c2, 1);
    return c2 + 1 - off;
}
