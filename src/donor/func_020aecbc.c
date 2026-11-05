/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021083a8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_021083a8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u32 data_02153740;
void func_020aecbc(void) {
    u8 *q                = (u8 *) data_02153740 + 0xc4;
    *(u32 *) (q + 0x254) = 0;
    *(u32 *) (q + 0x268) = 0;
}
