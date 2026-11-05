/* compiler: 1.2/sp2p3  */
/* func_020d7e48 from projets/nintendogs-dachshund/src/auto/func_020d7e48.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02003964(void);
extern void func_020a43f8(void);
void func_020a6158(s32 arg0) {
    *(M2C_UNK *) arg0 = (s32) (*(M2C_UNK *) arg0 + 1);
    if (func_02003964() == 0) {
        return;
    }
    func_020a43f8();
}
