/* compiler: 1.2/sp2p3  */
/* func_020e0a0c from projets/nintendogs-dachshund/src/auto/func_020e0a0c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020a43f8(void);
void func_020ae1e4(s32 arg0) {
    *(M2C_UNK *) arg0 = (s32) (*(M2C_UNK *) arg0 + 1);
    if ((s32) * (M2C_UNK *) arg0 <= 0x14) {
        return;
    }
    func_020a43f8();
}
