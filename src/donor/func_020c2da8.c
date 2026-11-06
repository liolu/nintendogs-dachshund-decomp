/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c2dac from projets/nintendogs-chihuahua-friends/src/donor/func_020c2dac.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02141604[];
u32 func_020c2da8(u8 *param_1, s16 param_2) {
    u8 *a = param_1 + (s32) param_2 * 12 + 256;
    s16 i = *(s16 *) (a + 170);
    u8 *b = (param_1 + (s32) i * 16) + 256;
    s16 j = *(s16 *) (b + 104);
    return data_02141604[j];
}
