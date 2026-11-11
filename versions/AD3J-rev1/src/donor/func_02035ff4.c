/* compiler: 2.0/sp1p5  */
/* func_02035ff4 from projets/nintendogs-chihuahua-friends/src/auto/func_02035ff4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
extern void *data_02156080;
s32 func_02035ff4(void *arg0) {
    s16 temp_r2;

    temp_r2 = (*(s16 *) ((s8 *) (arg0) + (0x146))) - 3;
    if (((s32) temp_r2 < 0) || ((s32) (*(s16 *) ((s8 *) (data_02156080) + (0x20))) <= (s32) temp_r2)) {
        return 0;
    }
    return (*(s32 *) ((s8 *) ((data_02156080 + (temp_r2 * 4))) + (4)));
}
