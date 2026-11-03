/* compiler: 2.0/sp1p5 -O2 */
/* func_020095a0 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020095a0.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
s16 func_020095a0(s32 arg0, s32 arg1, s32 arg2) {
    s16 var_ip;

    var_ip = 0;
loop_1:
    if (((*(s32 *) ((s8 *) ((arg0 + (var_ip * 4))) + (0x914))) != 0) &&
        (arg1 == (*(s16 *) ((s8 *) ((arg0 + (var_ip * 2))) + (0x834)))) &&
        (arg2 == (*(s8 *) ((s8 *) ((arg0 + var_ip)) + (0x850))))) {
        return var_ip;
    }
    var_ip += 1;
    if ((s32) var_ip >= 7) {
        return -1;
    }
    goto loop_1;
}
