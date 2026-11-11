/* compiler: 1.2/sp2p3  */
/* func_020601dc from projets/children-of-mana/src/auto/func_020601dc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0206eff8(s32, M2C_UNK, M2C_UNK);
extern s32 func_0206f260(s32, M2C_UNK, M2C_UNK);
extern s32 func_0206f3c4(s32, M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_0206f464(s32, M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_0206f508(s32, M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_0206f658(s32, M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_0206f6bc(s32, M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_0206f724(s32, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_02070934(M2C_UNK, s32, M2C_UNK);
extern s32 func_02071510();
void func_02070d18(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0 = func_02071510();
    if (func_0206f658(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206f724(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206f464(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206f6bc(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206f508(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206f3c4(temp_r0, 0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206f260(temp_r0, arg0, arg1) != 0) {
        return;
    }
    if (func_0206eff8(temp_r0, arg0, arg1) != 0) {
        return;
    }
    func_02070934(arg0, 0xFFFF, 0);
}
