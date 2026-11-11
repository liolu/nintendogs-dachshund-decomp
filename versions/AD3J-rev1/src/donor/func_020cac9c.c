/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209561c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209561c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c48;
s32 func_020cac9c(void) {
    s16 cnt = 0;
    s16 i   = 0;
    u8 *p   = data_02154c48;
    do {
        u8 *q = *(u8 **) (p + 0x1000 + 0x44c);
        if (*(u16 *) (q + 4) != 0xffff) {
            cnt = cnt + 1;
        }
        p = p + 24;
        i = i + 1;
    } while (i < 3);
    return cnt;
}
