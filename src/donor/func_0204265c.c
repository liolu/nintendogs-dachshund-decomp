/* compiler: 2.0/sp1p5  */
/* func_0204265c from projets/nintendogs-chihuahua-friends/src/auto/func_0204265c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
extern void *data_0214b484;
s32 func_0204265c(void) {
    s8 temp_r0;
    void *var_r0;

    temp_r0 = (*(s8 *) ((s8 *) (data_0214b484) + (0xE)));
    if (((s32) temp_r0 < 0) || ((s32) temp_r0 >= 3)) {
        var_r0 = ((void *) 0);
    } else {
        var_r0 = (*(void **) ((s8 *) ((data_0214b484 + (temp_r0 * 4))) + (0x50)));
    }
    if ((var_r0 != ((void *) 0)) && ((*(s16 *) ((s8 *) (var_r0) + (0xE8))) == 0x47C)) {
        return 1;
    }
    return 0;
}
