/* compiler: 1.2/sp2p3  */
/* func_020afce8 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020afce8.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b10cc();
extern M2C_UNK func_020b1108(M2C_UNK);
extern void *data_02153740;
extern s32 *data_02153894;
void func_020afce8(s32 arg0) {
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xB8))) != 2) {
        return;
    }
    if (arg0 != 0) {
        if (*data_02153894 == 0xD) {
            return;
        }
        func_020b1108(0xD);
        return;
    }
    if (*data_02153894 != 0xD) {
        return;
    }
    func_020b10cc();
}
