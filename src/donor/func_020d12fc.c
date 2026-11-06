/* compiler: 1.2/sp2p3  */
/* func_020f52dc from projets/nintendogs-dachshund/src/auto/func_020f52dc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0211109c(void *, M2C_UNK, M2C_UNK, s32, s32, s32);
void func_020d12fc(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_lr;
    void *temp_r4;

    temp_r4 = (*(void **) ((s8 *) (arg0) + (0x214)));
    temp_lr = (*(void **) ((s8 *) (temp_r4) + (0)));
    func_0211109c(arg0, arg1, arg2, (*(s32 *) ((s8 *) (temp_lr) + (4))), (*(s32 *) ((s8 *) (temp_lr) + (0x10))), 0);
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xB4))) >= 0x148) {
        return;
    }
    (*(s32 *) ((s8 *) (temp_r4) + (0x10))) = 1;
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xD8))) >= 0xE6A) {
        (*(s32 *) ((s8 *) (temp_r4) + (0x14))) = 1;
    }
}
