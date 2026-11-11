/* compiler: 1.2/sp2p3  */
/* func_020e8668 from projets/nintendogs-dachshund/src/auto/func_020e8668.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b54bc(void);
s32 func_020b57a0(void) {
    s32 temp_r0;
    s32 var_r4;

    var_r4  = 0;
    temp_r0 = func_020b54bc();
    if (temp_r0 != 0) {
        var_r4 = (*(s32 *) ((s8 *) (temp_r0) + (8)));
    }
    return var_r4;
}
