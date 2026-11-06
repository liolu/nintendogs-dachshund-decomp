/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020ca5f0 from projets/nintendogs-chihuahua-friends/src/donor/func_020ca5f0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
void func_020ca5f0(u8 *param_1, s32 param_2) {
    s16 i = 0;
    do {
        if (i != param_2) {
            *(u16 *) (param_1 + i * 2 + 0x7e8) = 0;
        }
        i = i + 1;
    } while (i < 8);
}
