/* compiler: 2.0/sp1p5 -O4,s */
/* func_02035f5c from projets/nintendogs-miniature-dachshund-friends/src/auto/func_02035f5c.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
s32 func_02035f5c(s32 arg0, s32 arg1) {
    s16 var_r3;

    var_r3 = 0;
loop_1:
    if (arg1 == (*(s16 *) ((s8 *) ((arg0 + (var_r3 * 2))) + (0x148)))) {
        return 0;
    }
    var_r3 += 1;
    if ((s32) var_r3 >= 2) {
        return 1;
    }
    goto loop_1;
}
