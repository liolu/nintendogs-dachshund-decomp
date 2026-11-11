/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02049d78 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0204/func_02049d78.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
extern int func_02085b04(void *p);
extern void func_02085b48(void *p, int r);
extern void func_02085a98(void *p, void *q);
void func_02081174(void *a, void *b) {
    u8 *ra = (u8 *) a;
    u8 *rb = (u8 *) b;
    int r;
    r = func_02085b04(rb + 8);
    while (r != 0) {
        func_02085b48(ra + 0x14, r);
        r = func_02085b04(rb + 8);
    }
    r = func_02085b04(rb + 0x10);
    while (r != 0) {
        func_02085b48(ra + 0x14, r);
        r = func_02085b04(rb + 0x10);
    }
    func_02085a98(ra + 4, b);
    func_02085b48(ra + 0xc, (int) b);
}
