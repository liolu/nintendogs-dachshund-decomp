/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205f904 from projets/children-of-mana/src/auto/func_0205f904.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern void func_0206e1b8(const void *src, int off, int size);
int func_02070440(int off, short b, int c, int d) {
    unsigned char tag = 9;
    short val         = b;
    int c1, c2, c3;
    func_0206e1b8(&tag, off, 1);
    c1 = off + 1;
    func_0206e1b8(&val, c1, 2);
    c2 = c1 + 2;
    func_0206e1b8(&c, c2, 1);
    c3 = c2 + 1;
    func_0206e1b8(&d, c3, 4);
    return c3 + 4 - off;
}
