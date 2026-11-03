/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0208f668 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208f668.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_0207d61c(u8 *p, u32 v);
void func_020c4fcc(u8 *p, u32 v) {
    void (*fp)(u8 *, u32) = func_0207d61c;
    fp(p + 60, (u16) v);
}
