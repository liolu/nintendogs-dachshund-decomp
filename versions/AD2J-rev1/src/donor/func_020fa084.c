/* compiler: 1.2/sp2p3  */
/* func_020998f8 from projets/nintendogs-dachshund/src/auto/func_020998f8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02080414(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020f6c30(void);
extern M2C_UNK data_021559a0;
void func_020fa084(void) {
    s32 sp0;

    func_02080414((s32) &data_021559a0, (s32) &sp0, 0);
    if (sp0 != 0x504C4159) {
        return;
    }
    func_020f6c30();
}
