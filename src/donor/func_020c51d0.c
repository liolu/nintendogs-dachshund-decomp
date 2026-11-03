/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0208f86c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208f86c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
void func_020c51d0(void *p, s16 i, u32 v) {
    u8 *base                     = *(u8 **) (*(u8 **) ((u8 *) p + 0x1c) + 0x5c);
    *(u32 *) (base + i * 12 + 8) = v;
}
