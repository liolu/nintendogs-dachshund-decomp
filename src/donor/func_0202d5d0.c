/* compiler: 2.0/sp1p5  */
/* func_0202d5d0 from projets/nintendogs-chihuahua-friends/src/auto/func_0202d5d0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
s32 func_0202d5d0(void *arg0) {
    s16 temp_r0;

    temp_r0 = (*(s16 *) ((s8 *) (arg0) + (0xF0)));
    if (((s32) temp_r0 >= 0x5B) && ((s32) temp_r0 < 0x6F)) {
        return 1;
    }
    return 0;
}
