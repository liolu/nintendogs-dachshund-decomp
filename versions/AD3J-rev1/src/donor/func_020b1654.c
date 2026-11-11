/* compiler: 1.2/sp2p3  */
/* func_020e4378 from projets/nintendogs-dachshund/src/auto/func_020e4378.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b5024(M2C_UNK, M2C_UNK);
extern void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020b91bc(M2C_UNK, M2C_UNK);
extern void func_020b9218(M2C_UNK, M2C_UNK);
extern void func_020b93d4(M2C_UNK, M2C_UNK);
extern void func_020b9408(M2C_UNK, M2C_UNK);
extern M2C_UNK data_0213c5bc;
extern M2C_UNK data_0213c5cc;
extern M2C_UNK data_0213c5e0;
void func_020b1654(s32 arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    (*(s32 *) ((s8 *) (arg0) + (4))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0))) = 0;
    temp_r6                          = func_020b5024(0, (s32) &data_0213c5bc);
    temp_r5                          = func_020b5024(0, (s32) &data_0213c5cc);
    temp_r4                          = func_020b5024(0, (s32) &data_0213c5e0);
    func_020b93d4(0, 0);
    func_020b9408(0, temp_r6);
    func_020b9218(0, temp_r5);
    func_020b91bc(0, temp_r4);
    func_020b8b0c(0, 1, 0);
    func_020b8b0c(0, 0, 1);
}
