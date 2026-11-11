/* compiler: 1.2/sp2p3  */
/* func_020a6598 from projets/nintendogs-dachshund/src/auto/func_020a6598.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02107754(M2C_UNK);
extern void *data_02156080;
s32 func_02106910(void) {
    s32 var_r0;
    s32 var_r6;

    var_r6 = 0;
loop_1:
    if ((var_r6 < 0) || ((s32) (*(s16 *) ((s8 *) (data_02156080) + (0x20))) <= var_r6)) {
        var_r0 = 0;
    } else {
        var_r0 = (*(s32 *) ((s8 *) ((data_02156080 + (var_r6 * 4))) + (4)));
    }
    if ((var_r0 != 0) && (func_02107754(var_r0) == 0)) {
        return 1;
    }
    var_r6 = (s32) (s16) (var_r6 + 1);
    if (var_r6 >= 7) {
        return 0;
    }
    goto loop_1;
}
