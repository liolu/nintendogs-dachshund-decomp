/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02064a94 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02064a94.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_0206cdc0(const void *src, void *dst, unsigned int size);
int func_0206efb0(unsigned char *dst, unsigned short a1, unsigned char a2, const void *a3, unsigned char a4) {
    unsigned char hdr = 10;
    unsigned short s  = a1;
    unsigned char *p1, *p2, *p3, *p4;
    func_0206cdc0(&hdr, dst, 1);
    p1 = dst + 1;
    func_0206cdc0(&s, p1, 2);
    p2 = p1 + 2;
    func_0206cdc0(&a2, p2, 1);
    p3 = p2 + 1;
    func_0206cdc0(&a4, p3, 1);
    p4 = p3 + 1;
    func_0206cdc0(a3, p4, 9);
    return (p4 + 9) - dst;
}
