/* compiler: 1.2/sp2p3  */
/* func_020ca070 from projets/nintendogs-dachshund/src/auto/func_020ca070.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0200365c();
extern M2C_UNK func_02078340();
extern void *func_02078ba4();
void func_020c4a6c(s32 arg0, M2C_UNK arg1) {
    void *temp_r0;

    func_02078340();
    temp_r0 = func_02078ba4(arg0);
    func_0200365c(arg1, arg0, (temp_r0 + (*(s32 *) ((s8 *) (temp_r0) + (0x14)))) - arg0);
}
