/* compiler: 1.2/sp2p3  */
/* func_020e3f48 from projets/nintendogs-dachshund/src/auto/func_020e3f48.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_02153894;
void func_020b1224(s32 arg0) {
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_4;

    var_r2                                        = 1;
    (*(s32 *) ((s8 *) (data_02153894) + (0x19C))) = 1;
    if (*(M2C_UNK *) arg0 != 1) {
        var_r2 = 0;
    }
    func_020b8b0c(0, 2, var_r2);
    if (*(M2C_UNK *) arg0 == 2) {
        var_r2_2 = 1;
    } else {
        var_r2_2 = 0;
    }
    func_020b8b0c(0, 1, var_r2_2);
    if (*(M2C_UNK *) arg0 == 3) {
        var_r2_3 = 1;
    } else {
        var_r2_3 = 0;
    }
    func_020b8b0c(0, 0, var_r2_3);
    if (*(M2C_UNK *) arg0 == 4) {
        var_r2_4 = 1;
    } else {
        var_r2_4 = 0;
    }
    func_020b8b0c(0, 3, var_r2_4);
    func_020b8b0c(0, 4, 0);
}
