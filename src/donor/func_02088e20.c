/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02088e20 from projets/nintendogs-chihuahua-friends/src/donor/func_02088e20.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
void func_02088e20(s32 *param_1, s32 *param_2) {
    param_2[5] = param_2[5] + ((s32) (((s64) (*(s16 *) ((u8 *) param_1 + 12)) * (param_1[0] - param_2[5]) + 0x800) >> 12));
    param_2[6] = param_2[6] + ((s32) (((s64) (*(s16 *) ((u8 *) param_1 + 12)) * (param_1[1] - param_2[6]) + 0x800) >> 12));
    param_2[7] = param_2[7] + ((s32) (((s64) (*(s16 *) ((u8 *) param_1 + 12)) * (param_1[2] - param_2[7]) + 0x800) >> 12));
}
