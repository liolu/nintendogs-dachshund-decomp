/* compiler: 1.2/sp2p3  */
/* func_020f1b34 from projets/nintendogs-dachshund/src/auto/func_020f1b34.c (same code in another game of this workspace),
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
extern M2C_UNK data_02140bc4;
extern M2C_UNK data_02140bd4;
extern M2C_UNK data_02140be4;
extern M2C_UNK data_02140bfc;
void func_020bebd4(s32 arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 temp_r6;

    (*(s32 *) ((s8 *) (arg0) + (4))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0))) = 0;
    temp_r4                          = func_020b5024(0, (s32) &data_02140bc4);
    temp_r6                          = func_020b5024(0, (s32) &data_02140bd4);
    temp_r5                          = func_020b5024(0, (s32) &data_02140be4);
    temp_r4_2                        = func_020b5024(0, (s32) &data_02140bfc);
    func_020b93d4(0, temp_r4);
    func_020b9408(0, temp_r6);
    func_020b9218(0, temp_r5);
    func_020b91bc(0, temp_r4_2);
    func_020b8b0c(0, 0, 0);
    func_020b8b0c(0, 1, 0);
    func_020b8b0c(0, 2, 0);
    func_020b8b0c(0, 4, 0);
    func_020b8b0c(0, 5, 0);
    func_020b8b0c(0, 3, 1);
}
