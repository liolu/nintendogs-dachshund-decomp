/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020ec488 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ec488.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154ca4;
void func_020da17c(s32 param_1) {
    s32 i = 0;
    do {
        u8 **p = (u8 **) data_02154ca4 + i;
        u8 *o  = p[2];
        if (o != ((void *) 0) && param_1 == *(s16 *) (o + 0x8c)) {
            *(u16 *) (o + 0x20) = *(u16 *) (o + 0x20) | 1;
        }
        i = i + 1;
    } while (i < 3);
}
