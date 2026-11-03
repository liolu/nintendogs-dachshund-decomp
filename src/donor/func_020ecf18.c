/* compiler: 2.0/sp1p5  */
/* func_0208c660 from projets/nintendogs-dachshund/src/auto/func_0208c660.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_021471a0;
s32 func_020ecf18(s32 arg0) {
    void *temp_r0;

    temp_r0 = *((M2C_UNK *) ((s8 *) &data_021471a0 + (arg0 * 4)));
    if (temp_r0 != ((void *) 0)) {
        return (*(s32 *) ((s8 *) (temp_r0) + (4)));
    }
    return -1;
}
