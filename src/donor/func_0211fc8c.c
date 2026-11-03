/* compiler: 1.2/sp2p3  */
/* func_020c0354 from projets/nintendogs-dachshund/src/auto/func_020c0354.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern u16 func_020660a4(M2C_UNK *, M2C_UNK, M2C_UNK);
extern s32 func_0208120c();
extern M2C_UNK func_02081220(s32);
extern u16 data_021560f4;
extern s32 data_02156104;
extern M2C_UNK data_02156240;
s32 func_0211fc8c(M2C_UNK arg0, M2C_UNK arg1, u16 *arg2) {
    s32 temp_r4;

    temp_r4 = func_0208120c();
    if ((data_02156104 == 1) || (data_021560f4 == 1)) {
        *arg2 = 0x17;
        return 0;
    }
    *arg2 = func_020660a4(&data_02156240, arg0, arg1);
    if (*arg2 == 2) {
        data_02156104 = 1;
        func_02081220(temp_r4);
        return 1;
    }
    func_02081220(temp_r4);
    return 0;
}
