/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02064bac from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02064bac.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_0206cdc0(const void *src, void *dst, unsigned int size);
int func_0206f0c8(unsigned char *dst, unsigned short a1, unsigned char a2, unsigned int a3) {
    unsigned char hdr = 8;
    unsigned short s  = a1;
    unsigned char *p1, *p2, *p3;
    func_0206cdc0(&hdr, dst, 1);
    p1 = dst + 1;
    func_0206cdc0(&s, p1, 2);
    p2 = p1 + 2;
    func_0206cdc0(&a2, p2, 1);
    p3 = p2 + 1;
    func_0206cdc0(&a3, p3, 4);
    return (p3 + 4) - dst;
}
