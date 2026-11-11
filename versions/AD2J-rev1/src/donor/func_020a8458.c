/* compiler: 1.2/sp2p3  */
/* func_020daae8 from projets/nintendogs-dachshund/src/auto/func_020daae8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020a8934(void);
extern void func_020a8db4(M2C_UNK, M2C_UNK);
void func_020a8458(void) {
    s32 temp_r0;

    temp_r0 = func_020a8934();
    if (temp_r0 < 0) {
        return;
    }
    func_020a8db4(temp_r0, 0);
}
