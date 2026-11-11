/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205fd64 from projets/children-of-mana/src/auto/func_0205fd64.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern void func_0206e1b8(const void *src, int off, int size);
int func_020708a0(int off, short b, int c, int d, int e) {
    unsigned char tag = 2;
    short val         = b;
    int c1, c2, c3, c4;
    func_0206e1b8(&tag, off, 1);
    c1 = off + 1;
    func_0206e1b8(&val, c1, 2);
    c2 = c1 + 2;
    func_0206e1b8(&c, c2, 1);
    c3 = c2 + 1;
    func_0206e1b8(&d, c3, 2);
    c4 = c3 + 2;
    func_0206e1b8(&e, c4, 2);
    return c4 + 2 - off;
}
