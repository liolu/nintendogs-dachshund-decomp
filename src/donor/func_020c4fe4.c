/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0208f680 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208f680.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_0207d61c(u8 *a, u16 b);
void func_020c4fe4(u8 *p, u32 b) {
    func_0207d61c(p + 0x30, (u16) b);
}
