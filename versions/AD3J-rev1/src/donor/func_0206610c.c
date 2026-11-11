/* compiler: 1.2/sp2p3  */
/* func_02061c68 from projets/children-of-mana/src/auto/func_02061c68.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0206521c(M2C_UNK, M2C_UNK);
extern s32 func_0206534c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_020654a0(M2C_UNK, M2C_UNK);
s32 func_0206610c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_0206521c(1, 2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020654a0(6, arg0);
    var_r0 = func_0206534c(6, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
