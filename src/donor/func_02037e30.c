/* compiler: 2.0/sp1p5  */
/* func_02037e30 from projets/nintendogs-chihuahua-friends/src/auto/func_02037e30.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_02037e30(void *arg0) {
    s32 temp_r1;

    temp_r1 = (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0x9E4)))) + (0xC)));
    if (temp_r1 < 0xCCD) {
        return 0;
    }
    if (temp_r1 <= 0x119A) {
        return 1;
    }
    return 2;
}
