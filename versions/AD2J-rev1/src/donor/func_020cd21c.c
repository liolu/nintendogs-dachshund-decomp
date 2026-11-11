/* compiler: 1.2/sp2p3  */
/* func_020d2aa8 from projets/nintendogs-dachshund/src/auto/func_020d2aa8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0208be84(M2C_UNK, M2C_UNK);
extern M2C_UNK data_0212d490;
extern s32 data_021440d4;
void func_020cd21c(void) {
    if (data_021440d4 == -1) {
        return;
    }
    func_0208be84(0, *((M2C_UNK *) ((s8 *) &data_0212d490 + (data_021440d4 * 8))));
    data_021440d4 = -1;
}
