/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02081174 from projets/nintendogs-dachshund/src/donor/func_02081174.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
extern int func_0208927c(void *p);
extern void func_020892c0(void *p, int r);
extern void func_02089210(void *p, void *q);
void func_020848ec(void *a, void *b) {
    u8 *ra = (u8 *) a;
    u8 *rb = (u8 *) b;
    int r;
    r = func_0208927c(rb + 8);
    while (r != 0) {
        func_020892c0(ra + 0x14, r);
        r = func_0208927c(rb + 8);
    }
    r = func_0208927c(rb + 0x10);
    while (r != 0) {
        func_020892c0(ra + 0x14, r);
        r = func_0208927c(rb + 0x10);
    }
    func_02089210(ra + 4, b);
    func_020892c0(ra + 0xc, (int) b);
}
