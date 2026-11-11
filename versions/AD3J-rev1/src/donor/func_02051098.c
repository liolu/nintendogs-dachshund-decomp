/* compiler: 2.0/sp1p5  */
/* func_02051098 from projets/nintendogs-chihuahua-friends/src/auto/func_02051098.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
s32 func_02051098(void *arg0) {
    s16 temp_r1;

    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0xE8)));
    if (((s32) temp_r1 >= 0x2A1) && ((s32) temp_r1 <= 0x2B8)) {
        return 1;
    }
    return 0;
}
