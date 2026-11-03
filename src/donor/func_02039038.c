/* compiler: 1.2/sp2p3  */
/* func_02039038 from projets/nintendogs-chihuahua-friends/src/auto/func_02039038.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
s32 func_02039038(void *arg0) {
    s16 temp_r1;

    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0x150)));
    if (((s32) temp_r1 >= 0x14) && ((s32) temp_r1 <= 0x16)) {
        (*(s16 *) ((s8 *) (arg0) + (0xE8))) = 0x260;
        return 1;
    }
    return 0;
}
