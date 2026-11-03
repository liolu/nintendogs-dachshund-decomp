/* compiler: 1.2/sp2p3  */
/* func_020fac14 from projets/nintendogs-dachshund/src/auto/func_020fac14.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 *func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02107c9c(void *, M2C_UNK);
extern M2C_UNK func_020deef4(M2C_UNK, void *);
extern s32 func_020def98(M2C_UNK);
extern M2C_UNK func_020d6740;
extern M2C_UNK func_020d6a48;
extern M2C_UNK func_020d6b9c;
void func_020d6c1c(void *arg0, M2C_UNK arg1) {
    s32 *temp_r4;

    func_02107c9c(arg0, 0x3A);
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F4))) = &func_020d6a48;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F8))) = &func_020d6740;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F0))) = &func_020d6b9c;
    (*(s32 **) ((s8 *) (arg0) + (0x214)))     = func_02003844(arg1, 4);
    temp_r4                                   = (*(s32 **) ((s8 *) (arg0) + (0x214)));
    *temp_r4                                  = func_020def98(0x19);
    func_020deef4(0x19, arg0);
    (*(s16 *) ((s8 *) (arg0) + (0xA6))) = 2;
}
