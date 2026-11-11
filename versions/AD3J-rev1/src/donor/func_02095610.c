/* compiler: 1.2/sp2p3  */
/* func_02116da0 from projets/nintendogs-dachshund/src/auto/func_02116da0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0200399c(void);
s32 func_02095610(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (func_0200399c() != 0) {
        var_r4                              = 1;
        (*(s16 *) ((s8 *) (arg0) + (0x2E))) = 1;
        (*(s16 *) ((s8 *) (arg0) + (0x30))) = 0;
    }
    return var_r4;
}
