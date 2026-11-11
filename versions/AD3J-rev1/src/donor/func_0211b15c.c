/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d1cd8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d1cd8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
void func_0211b15c(u8 *p) {
    u8 *q            = p + 0x60;
    *(u32 *) (q + 8) = 0;
    *(u32 *) q       = 0x4b0;
}
