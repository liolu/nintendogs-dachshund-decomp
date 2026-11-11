/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205fcbc from projets/children-of-mana/src/auto/func_0205fcbc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern void func_0206e1b8(const void *src, void *dst, unsigned int size);
int func_020707f8(unsigned char *dst, unsigned short a1, unsigned char a2, unsigned short a3, unsigned short a4,
                  unsigned short a5) {
    unsigned char hdr = 3;
    unsigned short s  = a1;
    unsigned char *p1, *p2, *p3, *p4, *p5;
    func_0206e1b8(&hdr, dst, 1);
    p1 = dst + 1;
    func_0206e1b8(&s, p1, 2);
    p2 = p1 + 2;
    func_0206e1b8(&a2, p2, 1);
    p3 = p2 + 1;
    func_0206e1b8(&a3, p3, 2);
    p4 = p3 + 2;
    func_0206e1b8(&a4, p4, 2);
    p5 = p4 + 2;
    func_0206e1b8(&a5, p5, 2);
    return (p5 + 2) - dst;
}
