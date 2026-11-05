/* compiler: 1.2/sp2p3  */
/* func_02101f3c from projets/nintendogs-dachshund/src/auto/func_02101f3c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK **func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02107ca4(void *, M2C_UNK);
extern M2C_UNK func_020deefc(M2C_UNK, void *);
extern M2C_UNK data_02145fa0;
extern M2C_UNK func_020de904;
extern M2C_UNK func_020dedb0;
extern M2C_UNK func_020deef0;
void func_020ddf0c(void *arg0, M2C_UNK arg1) {
    func_02107ca4(arg0, 0x19);
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F4)))   = &func_020dedb0;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F8)))   = &func_020de904;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F0)))   = &func_020deef0;
    (*(M2C_UNK ***) ((s8 *) (arg0) + (0x214)))  = func_02003844(arg1, 4);
    *(*(M2C_UNK ***) ((s8 *) (arg0) + (0x214))) = &data_02145fa0;
    func_020deefc(0x15, arg0);
}
