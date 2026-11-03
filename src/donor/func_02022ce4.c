/* compiler: 1.2/sp2p3  */
/* func_02022ce4 from projets/nintendogs-chihuahua-friends/src/auto/func_02022ce4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef long s32;
u8 func_02022ce4(void *arg0) {
    s16 temp_r1;
    s32 var_r1;
    s32 var_r2;

    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0xF0)));
    if (((s32) temp_r1 >= 0x5B) && ((s32) temp_r1 < 0x6F)) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (var_r2 != 0) {
        var_r1 = 1;
    } else if (((s32) temp_r1 >= 0xF) && ((s32) temp_r1 <= 0x4A)) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        return (*(u8 *) ((s8 *) (arg0) + (0xC4)));
    }
    return 0U;
}
