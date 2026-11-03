/* compiler: 1.2/sp2p3  */
/* func_020c4238 from projets/nintendogs-dachshund/src/auto/func_020c4238.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 *func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02107c9c(void *, M2C_UNK);
extern M2C_UNK func_020deef4(M2C_UNK, void *);
extern s32 func_020def98(M2C_UNK);
extern M2C_UNK func_02123200;
extern M2C_UNK func_02123838;
extern M2C_UNK func_02123b30;
void func_02123b34(void *arg0, M2C_UNK arg1) {
    s32 *temp_r4;

    func_02107c9c(arg0, 0x20);
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F4))) = &func_02123838;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F8))) = &func_02123200;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F0))) = &func_02123b30;
    (*(s32 **) ((s8 *) (arg0) + (0x214)))     = func_02003844(arg1, 0xC);
    temp_r4                                   = (*(s32 **) ((s8 *) (arg0) + (0x214)));
    *temp_r4                                  = func_020def98(0x1E);
    func_020deef4(0x1E, arg0);
}
