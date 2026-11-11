/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020cac44 from projets/nintendogs-chihuahua-friends/src/donor/func_020cac44.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c48;
s32 func_020cac44(s16 param_1) {
    u8 *q = data_02154c48 + param_1 * 24;
    u8 *r = q + 0x1000;
    return *(volatile s32 *) (r + 0x44c) + 4;
}
