/* compiler: 1.2/sp2p3  */
/* func_020efc54 from projets/nintendogs-dachshund/src/auto/func_020efc54.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffda04(M2C_UNK);
extern M2C_UNK func_02028144(M2C_UNK);
extern M2C_UNK func_020caa40(M2C_UNK);
s32 func_020bccf8(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;
    void *temp_r0_2;

    var_r4  = 0;
    temp_r0 = func_01ffda04((s32) (s16) arg0);
    if ((temp_r0 != 0) &&
        (((temp_r0_2 = (void *) func_02028144(temp_r0), ((*(s32 *) ((s8 *) (temp_r0_2) + (0x640))) == 0xFFFF)) &&
          ((*(s32 *) ((s8 *) (temp_r0_2) + (0x644))) == 0xFFFF)) ||
         (func_020caa40((s32) temp_r0_2) == 0))) {
        var_r4 = 1;
    }
    return var_r4;
}
