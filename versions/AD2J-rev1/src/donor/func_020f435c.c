/* compiler: 1.2/sp2p3  */
/* func_02093b94 from projets/nintendogs-dachshund/src/auto/func_02093b94.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020f3f28(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_020f435c(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4  = 0;
    temp_r0 = func_020f3f28((*(s32 *) ((s8 *) (arg0) + (0x14))), (*(s32 *) ((s8 *) (arg1) + (0x14))), arg1 + 8);
    if (temp_r0 > 0) {
        var_r4 = temp_r0;
    }
    return var_r4;
}
