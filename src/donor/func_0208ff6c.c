/* compiler: 1.2/sp2p3  */
/* func_021115ec from projets/nintendogs-dachshund/src/auto/func_021115ec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02090508(M2C_UNK, M2C_UNK);
extern s32 data_02153708;
void func_0208ff6c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = data_02153708;
    func_02090508(temp_r4, 0xC002);
    (*(s16 *) ((s8 *) (temp_r4) + (4))) = (s16) arg0;
    (*(s16 *) ((s8 *) (temp_r4) + (6))) = (s16) arg1;
    (*(s16 *) ((s8 *) (temp_r4) + (8))) = (s16) arg2;
}
