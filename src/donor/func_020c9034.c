/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209390c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209390c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c48;
void func_020c9034(u16 *param_1) {
    u8 *b = *(u8 **) (data_02154c48 + 0x1000 + 0x41c) + 4;
    s32 i = 0;
    do {
        *(u16 *) (b + i * 2 + 12) = 0;
        i                         = (s16) (i + 1);
    } while (i < 11);
    i = 0;
    do {
        if (*param_1 == 0) {
            return;
        }
        *(u16 *) (b + i * 2 + 12) = *param_1;
        i                         = (s16) (i + 1);
        param_1                   = param_1 + 1;
    } while (i < 10);
}
