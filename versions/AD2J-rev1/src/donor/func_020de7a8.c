/* compiler: 1.2/sp2p3  */
/* func_021027d8 from projets/nintendogs-dachshund/src/auto/func_021027d8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK **func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02107ca4(void *, M2C_UNK);
extern M2C_UNK func_020deefc(M2C_UNK, void *);
extern M2C_UNK data_021459b8;
extern M2C_UNK func_020de904;
extern M2C_UNK func_020dedb0;
extern M2C_UNK func_020deef0;
void func_020de7a8(void *arg0, M2C_UNK arg1) {
    func_02107ca4(arg0, 0xB);
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F4)))   = &func_020dedb0;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F8)))   = &func_020de904;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F0)))   = &func_020deef0;
    (*(M2C_UNK ***) ((s8 *) (arg0) + (0x214)))  = func_02003844(arg1, 4);
    *(*(M2C_UNK ***) ((s8 *) (arg0) + (0x214))) = &data_021459b8;
    func_020deefc(7, arg0);
}
