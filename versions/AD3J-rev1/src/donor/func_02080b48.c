/* compiler: 1.2/sp2p3  */
/* func_02080b48 from projets/nintendogs-chihuahua-friends/src/auto/func_02080b48.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020802e0();
extern M2C_UNK func_020808e8(M2C_UNK, s32);
extern M2C_UNK func_020808fc(M2C_UNK, s32);
extern s32 func_02080910(M2C_UNK);
extern s32 func_020809f8(M2C_UNK);
extern M2C_UNK func_02080d08(s32);
extern s32 data_02153590;
void func_02080b48(void) {
    func_020808fc(2, func_020809f8(2));
    func_020808e8(2, func_02080910(2));
    if ((data_02153590 != 0) && ((func_020802e0() & 3) != 1)) {
        return;
    }
    func_02080d08(0x0200002B);
}
