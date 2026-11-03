/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02090cdc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02090cdc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
u32 func_020c6560(u8 *p, u32 i) {
    return *(u32 *) (p + 8) + *(u32 *) (*(u32 *) (p + 4) + (i & 0xffff) * 4);
}
