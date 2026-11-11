/* compiler: 1.2/sp2p3  */
/* func_020edcac from projets/nintendogs-dachshund/src/auto/func_020edcac.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020b0e74(M2C_UNK);
extern void *data_02153894;
s32 func_020bad74(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_020b0e74(8) != 0) {
        var_r4 = (*(s32 *) ((s8 *) (data_02153894) + (0x10)));
    }
    return var_r4;
}
