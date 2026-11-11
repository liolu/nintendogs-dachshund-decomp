/* compiler: 2.0/sp1p5  */
/* func_020d2afc from projets/nintendogs-dachshund/src/auto/func_020d2afc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0208bed8(M2C_UNK, M2C_UNK);
extern M2C_UNK data_0212d490;
extern s32 data_021440d4;
void func_020cd270(s32 arg0) {
    data_021440d4 = arg0;
    func_0208bed8(0, *((M2C_UNK *) ((s8 *) &data_0212d490 + (arg0 * 8))));
}
