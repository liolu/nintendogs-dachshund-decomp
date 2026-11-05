/* compiler: 1.2/sp2p3  */
/* func_02095800 from projets/nintendogs-dachshund/src/auto/func_02095800.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_021550f8;
void func_020f5f94(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 == 1) {
        *((M2C_UNK *) ((s8 *) &data_021550f8 + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_021550f8 + (arg0 * 4))) | arg1;
        return;
    }
    *((M2C_UNK *) ((s8 *) &data_021550f8 + (arg0 * 4))) = *((M2C_UNK *) ((s8 *) &data_021550f8 + (arg0 * 4))) ^ arg1;
}
