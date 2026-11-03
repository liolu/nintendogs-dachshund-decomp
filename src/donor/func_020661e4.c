/* compiler: 1.2/sp2p3  */
/* func_02061d40 from projets/children-of-mana/src/auto/func_02061d40.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0206521c(M2C_UNK, M2C_UNK);
extern void *func_0206533c();
extern s32 func_0206534c(M2C_UNK, M2C_UNK, s32, s32, s32);
extern M2C_UNK func_020654a0(M2C_UNK, M2C_UNK);
s32 func_020661e4(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_0206521c(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020654a0(3, arg0);
    temp_r0_2 = func_0206533c();
    var_r0    = func_0206534c(3, 3, (*(s32 *) ((s8 *) (temp_r0_2) + (0))), (*(s32 *) ((s8 *) (temp_r0_2) + (4))),
                              (*(s32 *) ((s8 *) (temp_r0_2) + (0x10))));
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
