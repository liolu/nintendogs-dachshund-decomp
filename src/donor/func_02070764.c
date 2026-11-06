/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205fc28 from projets/children-of-mana/src/auto/func_0205fc28.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern void func_0206e1b8(const void *src, void *dst, unsigned int size);
int func_02070764(unsigned char *dst, unsigned short a1, unsigned char a2, unsigned int a3, unsigned int a4) {
    unsigned char hdr = 4;
    unsigned short s  = a1;
    unsigned char *p1, *p2, *p3, *p4;
    func_0206e1b8(&hdr, dst, 1);
    p1 = dst + 1;
    func_0206e1b8(&s, p1, 2);
    p2 = p1 + 2;
    func_0206e1b8(&a2, p2, 1);
    p3 = p2 + 1;
    func_0206e1b8(&a3, p3, 4);
    p4 = p3 + 4;
    func_0206e1b8(&a4, p4, 4);
    return (p4 + 4) - dst;
}
