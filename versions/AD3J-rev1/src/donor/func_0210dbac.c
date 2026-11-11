/* compiler: 1.2/sp2p3  */
/* func_020ad9a4 from projets/nintendogs-dachshund/src/auto/func_020ad9a4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02107c9c(void *, M2C_UNK);
extern M2C_UNK func_0210e464(M2C_UNK, void *);
extern M2C_UNK data_02148d6c;
extern M2C_UNK func_0210c068;
extern M2C_UNK func_0210c074;
extern M2C_UNK func_0210d6d0;
extern M2C_UNK func_0210d900;
void func_0210dbac(void *arg0, M2C_UNK arg1) {
    void *temp_r3;

    func_02107c9c(arg0, 0x2A);
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F4)))   = &func_0210d6d0;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F8)))   = &func_0210c074;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F0)))   = &func_0210d900;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x210)))   = &func_0210c068;
    (*(void **) ((s8 *) (arg0) + (0x214)))      = func_02003844(arg1, 0x18);
    temp_r3                                     = (*(void **) ((s8 *) (arg0) + (0x214)));
    (*(s32 *) ((s8 *) (temp_r3) + (0)))         = 0;
    (*(M2C_UNK **) ((s8 *) (temp_r3) + (0x14))) = &data_02148d6c;
    func_0210e464(0xA, arg0);
}
