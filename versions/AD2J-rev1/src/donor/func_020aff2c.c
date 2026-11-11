/* compiler: 1.2/sp2p3  */
/* func_020e2c0c from projets/nintendogs-dachshund/src/auto/func_020e2c0c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020a3788(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020a43f8(void);
void func_020aff2c(s32 arg0) {
    s32 temp_r2;

    *(M2C_UNK *) arg0 = (s32) (*(M2C_UNK *) arg0 + 1);
    temp_r2           = *(M2C_UNK *) arg0;
    if (temp_r2 > 0x10) {
        func_020a43f8();
        return;
    }
    func_020a3788(2, arg0 + 0xF0, temp_r2, 0x10);
}
