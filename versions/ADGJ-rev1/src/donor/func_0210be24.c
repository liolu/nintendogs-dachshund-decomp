/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210be24 from projets/nintendogs-chihuahua-friends/src/donor/func_0210be24.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
void func_0210be24(u8 *param_1, s32 param_2) {
    u8 *o = *(u8 **) (param_1 + 0x214);
    u16 k = (u16) (s16) (*(s16 *) (param_1 + 148) - 56);
    if (k <= 1) {
        *(s32 *) (o + 8) = *(s32 *) (o + 8) - param_2 / 20;
    } else {
        *(s32 *) (o + 8) = *(s32 *) (o + 8) - param_2 / 30;
    }
    if (*(s32 *) (o + 8) < 0) {
        *(s32 *) (o + 8) = 0;
    }
}
