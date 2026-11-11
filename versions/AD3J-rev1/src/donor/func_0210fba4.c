/* compiler: 1.2/sp2p3  */
/* func_020af9d8 from projets/nintendogs-dachshund/src/auto/func_020af9d8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_01ffda04(M2C_UNK);
extern M2C_UNK func_02027044(s32, M2C_UNK);
extern M2C_UNK func_020274b8(s32, M2C_UNK);
extern s32 func_021077a4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0210fba4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;

    if (func_021077a4(arg0, 6, arg2, -1) == 0) {
        return 0;
    }
    temp_r0 = func_01ffda04(arg2);
    func_02027044(temp_r0, 0x29);
    func_020274b8(temp_r0, arg1);
    return 1;
}
