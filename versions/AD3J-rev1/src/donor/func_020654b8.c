/* compiler: 1.2/sp2p3  */
/* func_02060f20 from projets/children-of-mana/src/auto/func_02060f20.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0206e694(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02064e60();
extern s32 func_0206521c(M2C_UNK, M2C_UNK);
extern s32 func_02065320();
extern s16 data_0214d524;
extern s32 data_0214d528;
s32 func_020654b8(void) {
    s32 temp_r0;

    if (func_02065320() != 0) {
        return 3;
    }
    temp_r0 = func_0206521c(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02064e60();
    func_0206e694(0xA, 0);
    data_0214d528 = 0;
    data_0214d524 = 0;
    return 0;
}
