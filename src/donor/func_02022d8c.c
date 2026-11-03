/* compiler: 2.0/sp1p5  */
/* func_02022d8c from projets/nintendogs-chihuahua-friends/src/auto/func_02022d8c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
s32 func_02022d8c(void *arg0) {
    s16 temp_r1;
    s32 var_r0;

    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0xF0)));
    var_r0  = 0;
    if ((s32) temp_r1 <= 0xC) {
        return 0;
    }
    if ((s32) temp_r1 < 0x6F) {
        var_r0 = 1;
    }
    return var_r0;
}
