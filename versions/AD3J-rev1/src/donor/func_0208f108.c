/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020a7054 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a7054.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed char s8;
typedef signed int s32;
extern u8 *data_02153704;
extern u8 data_0212d584[];
s32 func_0208f108(void) {
    return *(s8 *) (data_0212d584 + *(u16 *) (data_02153704 + 6) * 28 + 24);
}
