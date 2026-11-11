/* compiler: 1.2/sp2p3  */
/* func_020c48ec from projets/nintendogs-dachshund/src/auto/func_020c48ec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02111094(void *, M2C_UNK, M2C_UNK, s32, s32, s32);
void func_021241e8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_lr;

    temp_lr = *(*(void ***) ((s8 *) (arg0) + (0x214)));
    func_02111094(arg0, arg1, arg2, (*(s32 *) ((s8 *) (temp_lr) + (4))), (*(s32 *) ((s8 *) (temp_lr) + (0x10))), 0);
}
