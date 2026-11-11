/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a7918 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a7918.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02153708;
s32 func_0208f8f4(void) {
    s32 r = -1;
    s16 i = 0;
    u8 *b = (u8 *) data_02153708 + 0x20;
    do {
        if (*(u16 *) b & 4) {
            r = i;
            break;
        }
        i = i + 1;
        b = b + 20;
    } while (i < 3);
    return r;
}
