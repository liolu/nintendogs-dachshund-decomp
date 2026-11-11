/* compiler: 1.2/sp2p3  */
/* func_02099984 from projets/nintendogs-dachshund/src/auto/func_02099984.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02080414(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_021559b4;
s32 func_020fa108(void) {
    s32 sp0;

    func_02080414((s32) &data_021559b4, (s32) &sp0, 0);
    if ((sp0 & ~0xFF000000) == 0x46494E) {
        return sp0 & 0xF0000000;
    }
    return 0;
}
