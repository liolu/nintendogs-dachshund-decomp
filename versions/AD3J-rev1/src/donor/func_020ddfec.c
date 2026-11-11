/* compiler: 1.2/sp2p3  */
/* func_02102024 from projets/nintendogs-dachshund/src/auto/func_02102024.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK **func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02107c9c(void *, M2C_UNK);
extern M2C_UNK func_020deef4(M2C_UNK, void *);
extern M2C_UNK data_02145ec8;
extern M2C_UNK func_020de8fc;
extern M2C_UNK func_020deda8;
extern M2C_UNK func_020deee8;
void func_020ddfec(void *arg0, M2C_UNK arg1) {
    func_02107c9c(arg0, 0x17);
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F4)))   = &func_020deda8;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F8)))   = &func_020de8fc;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F0)))   = &func_020deee8;
    (*(M2C_UNK ***) ((s8 *) (arg0) + (0x214)))  = func_02003844(arg1, 4);
    *(*(M2C_UNK ***) ((s8 *) (arg0) + (0x214))) = &data_02145ec8;
    func_020deef4(0x13, arg0);
}
