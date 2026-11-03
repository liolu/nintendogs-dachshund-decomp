/* compiler: 1.2/sp2p3  */
/* func_02050e74 from projets/nintendogs-chihuahua-friends/src/auto/func_02050e74.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_02035268(void *, M2C_UNK);
extern s32 func_02035294(void *, M2C_UNK);
s16 func_02050e74(void *arg0) {
    s16 temp_r0;
    s16 var_r0;
    s32 var_r0_2;

    temp_r0 = (*(s16 *) ((s8 *) (arg0) + (0xE8)));
    if (((s32) temp_r0 >= 0x2A1) && ((s32) temp_r0 <= 0x2AC)) {
        return 1;
    }
    if ((s32) (s8) (*(s32 *) ((s8 *) (arg0) + (0x4A8))) >= 1) {
        return 4;
    }
    if ((u32) (u16) (s16) (temp_r0 - 0x2B1) <= 1U) {
        if ((func_02035294(arg0, 0x10) != 0) && (func_02035268(arg0, 0x36) != 0)) {
            return 3;
        }
        return 1;
    }
    if ((u32) (u16) (s16) (temp_r0 + 0xFFFFFD45) <= 1U) {
        if ((func_02035294(arg0, 0xC) != 0) && (func_02035268(arg0, 0x3A) != 0)) {
            return 3;
        }
        return 1;
    }
    if ((temp_r0 == 0x2C4) || (temp_r0 == 0x2C9)) {
        if ((func_02035294(arg0, 8) != 0) && (func_02035268(arg0, 0x30) != 0)) {
            return 3;
        }
        return 1;
    }
    if ((u32) (u16) (s16) (temp_r0 - 0x2BD) <= 1U) {
        return 1;
    }
    if ((temp_r0 == 0x2BA) || (temp_r0 == 0x2C3) || (temp_r0 == 0x2C8)) {
        return 1;
    }
    if ((temp_r0 == 0x2AB) || (temp_r0 == 0x2B5) || (temp_r0 == 0x2BF)) {
        var_r0_2 = 0;
    } else if (((s32) temp_r0 >= 0x2A1) && ((s32) temp_r0 <= 0x2CC)) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
