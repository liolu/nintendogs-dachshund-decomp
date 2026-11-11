/* compiler: 1.2/sp2p3  */
/* func_020f1c58 from projets/nintendogs-dachshund/src/auto/func_020f1c58.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020be07c(M2C_UNK);
extern void *data_02153740;
void func_020becf8(s32 arg0) {
    *(M2C_UNK *) arg0 = 0;
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xA8))) != 7) {
        return;
    }
    func_020be07c(arg0 + 0xC4);
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xA8))) != 7) {
        return;
    }
    func_020b8b0c(0, 0, 0);
}
