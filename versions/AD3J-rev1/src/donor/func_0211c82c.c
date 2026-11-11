/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020d33a8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d33a8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
void func_0211c82c(u8 *p, u32 i) {
    *(u32 *) (*(u32 *) (p + 0xc) + i * 4) = 0;
}
