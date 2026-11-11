/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02044aa8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02044aa8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02139322[];
s32 func_0204444c(s16 a, s16 b, s32 c) {
    return (s32) * (s16 *) (data_02139322 + a * 100 + b * 6 + c * 2);
}
