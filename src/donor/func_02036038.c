/* compiler: 2.0/sp1p5  */
/* func_02036038 from projets/nintendogs-chihuahua-friends/src/auto/func_02036038.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern s32 data_0214b484;
s32 func_02036038(void *arg0) {
    s8 temp_r1;

    temp_r1 = (*(s8 *) ((s8 *) (arg0) + (0x8A)));
    if (((s32) temp_r1 < 0) || ((s32) temp_r1 >= 3)) {
        return 0;
    }
    return (*(s32 *) ((s8 *) ((data_0214b484 + (temp_r1 * 4))) + (0x50)));
}
