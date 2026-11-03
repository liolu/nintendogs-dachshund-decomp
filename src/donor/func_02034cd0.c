/* compiler: 1.2/sp2p3  */
/* func_02034cd0 from projets/nintendogs-chihuahua-friends/src/auto/func_02034cd0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef long s32;
s32 func_02034cd0(void *arg0) {
    s16 temp_r2;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;

    temp_r2 = (*(s16 *) ((s8 *) (arg0) + (0xE8)));
    if (((s32) temp_r2 >= 0x309) && ((s32) temp_r2 <= 0x30E)) {
        if ((*(u8 *) ((s8 *) (arg0) + (0xCD))) == 2) {
            var_r0_4 = 1;
        } else {
            var_r0_4 = 0;
        }
        return var_r0_4;
    }
    if (((s32) temp_r2 >= 0x360) && ((s32) temp_r2 <= 0x37B)) {
        if ((*(u8 *) ((s8 *) (arg0) + (0xCD))) == 2) {
            var_r0_3 = 1;
        } else {
            var_r0_3 = 0;
        }
        return var_r0_3;
    }
    if (((s32) temp_r2 >= 0x3BA) && ((s32) temp_r2 <= 0x3BF)) {
        if ((*(u8 *) ((s8 *) (arg0) + (0xCD))) == 2) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        return var_r0_2;
    }
    if (((s32) temp_r2 >= 0x412) && ((s32) temp_r2 <= 0x41B)) {
        if ((*(u8 *) ((s8 *) (arg0) + (0xCD))) == 2) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
