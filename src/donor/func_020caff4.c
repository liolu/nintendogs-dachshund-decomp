/* compiler: 1.2/sp2p3  */
/* func_020d084c from projets/nintendogs-dachshund/src/auto/func_020d084c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020cc16c(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_020cd04c(M2C_UNK);
void func_020caff4(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = (void *) func_020cd04c(arg0);
    if ((*(s32 *) ((s8 *) (temp_r0) + (0x10))) == 0) {
        return;
    }
    func_020cc16c((s32) temp_r0, arg2, 0);
}
