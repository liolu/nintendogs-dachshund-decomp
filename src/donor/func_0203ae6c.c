/* compiler: 2.0/sp1p5  */
/* func_0203ae6c from projets/nintendogs-chihuahua-friends/src/auto/func_0203ae6c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
s32 func_0203ae6c(void *arg0) {
    void *temp_r2;

    temp_r2 = (*(void **) ((s8 *) (arg0) + (0x9E4)));
    if ((s32) (*(s16 *) ((s8 *) (temp_r2) + (0x1E))) >= 0x2710) {
        return 1;
    }
    if ((s32) (*(s16 *) ((s8 *) (temp_r2) + (0x20))) >= 0x2710) {
        return 1;
    }
    return 0;
}
