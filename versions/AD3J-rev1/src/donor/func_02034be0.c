/* compiler: 1.2/sp2p3  */
/* func_02034be0 from projets/nintendogs-chihuahua-friends/src/auto/func_02034be0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
s32 func_02034be0(void *arg0) {
    s16 temp_r1;

    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0xE8)));
    if (((s32) temp_r1 >= 0x412) && ((s32) temp_r1 <= 0x413)) {
        return 1;
    }
    if (((s32) temp_r1 >= 0x415) && ((s32) temp_r1 <= 0x41B)) {
        return 1;
    }
    if (((s32) temp_r1 >= 0x47B) && ((s32) temp_r1 <= 0x47C)) {
        return 1;
    }
    return 0;
}
