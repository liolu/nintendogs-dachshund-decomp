/* compiler: 1.2/sp2p3  */
/* func_020bfe50 from projets/nintendogs-dachshund/src/auto/func_020bfe50.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02065e7c(M2C_UNK);
extern M2C_UNK func_0208120c(void);
extern void func_02081220(M2C_UNK);
extern M2C_UNK func_0211ff00(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_0214a4ac;
extern s16 data_021560ec;
extern s16 data_021560f8;
s32 func_0211fb34(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_0208120c();
    if (func_0211ff00((s32) &data_0214a4ac, (s32) func_02065e7c, arg0, arg1) != 0) {
        data_021560f8 = 0;
        data_021560ec = 0;
        func_02081220(temp_r4);
        return 1;
    }
    func_02081220(temp_r4);
    return 0;
}
