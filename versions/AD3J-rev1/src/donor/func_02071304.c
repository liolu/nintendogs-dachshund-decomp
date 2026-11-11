/* compiler: 1.2/sp2p3  */
/* func_02071304 from projets/nintendogs-chihuahua-friends/src/auto/func_02071304.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *func_02071510();
s32 func_02071304(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3) {
    s32 temp_r3;
    void *temp_r0;

    temp_r0 = func_02071510();
    temp_r3 = (arg1 * 0x68) + (s32) (temp_r0 + 0x1F8);
    if (((*(s32 *) ((s8 *) (temp_r0) + (0))) == 4) && ((*(s32 *) ((s8 *) (temp_r0) + (0x14))) == arg0)) {
        *arg3 = (*(s32 *) ((s8 *) (temp_r3) + (4)));
        *arg2 = (*(s32 *) ((s8 *) (temp_r3) + (0x10)));
        return 1;
    }
    return 0;
}
