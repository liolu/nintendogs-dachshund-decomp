/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206f53c from projets/nintendogs-dachshund/src/donor/func_0206f53c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_0206e1b8(const void *src, void *dst, unsigned int size);
int func_02070934(void *dst, short b, char c) {
    char *p;
    char *q;
    unsigned char one = 1;
    short s           = b;
    func_0206e1b8(&one, dst, 1);
    p = (char *) dst + 1;
    func_0206e1b8(&s, p, 2);
    q = p + 2;
    func_0206e1b8(&c, q, 1);
    return q + 1 - (char *) dst;
}
