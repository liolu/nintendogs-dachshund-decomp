/* compiler: 1.2/sp2p3  */
/* func_020ab3d4 from projets/nintendogs-dachshund/src/auto/func_020ab3d4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0211c8e0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0210b74c(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = (*(void **) ((s8 *) (arg0) + (0x214)));
    if ((*(s32 *) ((s8 *) (temp_r0) + (0x1C))) == 0) {
        func_0211c8e0((s32) temp_r0, 0, arg1);
        return;
    }
    func_0211c8e0((s32) temp_r0, 3, arg1);
}
