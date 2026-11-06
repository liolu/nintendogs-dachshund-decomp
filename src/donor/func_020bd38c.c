/* compiler: 1.2/sp2p3  */
/* func_020f02e8 from projets/nintendogs-dachshund/src/auto/func_020f02e8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020a43f8(void);
extern void func_020bd008(void);
void func_020bd38c(s32 arg0) {
    if (*(M2C_UNK *) arg0 == 1) {
        func_020bd008();
    }
    *(M2C_UNK *) arg0 = (s32) (*(M2C_UNK *) arg0 + 1);
    if ((s32) * (M2C_UNK *) arg0 <= 0xA) {
        return;
    }
    func_020a43f8();
}
