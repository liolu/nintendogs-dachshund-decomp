/* compiler: 1.2/sp2p3 -O4,s */
/* func_020838d4 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020838d4.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02083868(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_02084654();
extern M2C_UNK data_02128fa0;
extern M2C_UNK data_02128fd4;
void func_020838d4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    if (arg3 != 0) {
        func_02083868(&data_02128fa0, arg0, arg1, arg2);
        func_02084654();
        return;
    }
    func_02083868(&data_02128fd4, arg0, arg1, arg2);
}
