/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0208ca20 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208ca20.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern void func_02078f8c(u32 v, u32 z);
void func_020c2494(u8 *obj, s16 idx) {
    u8 *e = obj + 0xc0 + idx * 12;
    u16 f = *(u16 *) e;
    u32 v = *(u32 *) (e + 4 + ((f ^ 1) * 4));
    func_02078f8c(v, 0);
}
