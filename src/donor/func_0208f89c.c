/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a78c0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a78c0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153708;
s32 func_0208f89c(void) {
    s32 c = 0;
    s32 i = 0;
    u8 *p = data_02153708;
    u32 bit;
    do {
        bit = *(u16 *) (p + 0x20) & 1;
        p   = p + 20;
        if (bit) {
            c = (s16) (c + 1);
        }
        i = (s16) (i + 1);
    } while (i < 3);
    return c;
}
