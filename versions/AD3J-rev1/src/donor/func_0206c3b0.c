/* compiler: 1.2/sp2p3  */
/* func_020f8504 from projets/sims-2-the/src/auto/func_020f8504.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0206d8d8(s32, M2C_UNK, s32, s32, s32, s32);
extern M2C_UNK func_0206e004(M2C_UNK, s32);
extern s32 data_0213b3c4;
void func_0206c3b0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    if (data_0213b3c4 != -1) {
        func_0206d8d8(data_0213b3c4, arg0, arg1 + 0x6898000, arg2, 0, 0);
        return;
    }
    func_0206e004(arg0, arg1 + 0x6898000);
}
