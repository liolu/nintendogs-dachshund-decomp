/* compiler: 1.2/sp2p3  */
/* func_020da07c from projets/nintendogs-dachshund/src/auto/func_020da07c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b5024(M2C_UNK, M2C_UNK);
extern void func_020b9218(M2C_UNK, M2C_UNK);
extern void func_020b93d4(M2C_UNK, M2C_UNK);
extern void func_020b9408(M2C_UNK, M2C_UNK);
extern M2C_UNK data_0213c1e8;
extern M2C_UNK data_0213c1fc;
extern M2C_UNK data_0213c210;
void func_020a79ec(void) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = func_020b5024(0, (s32) &data_0213c1e8);
    temp_r5 = func_020b5024(0, (s32) &data_0213c1fc);
    temp_r4 = func_020b5024(0, (s32) &data_0213c210);
    func_020b93d4(2, temp_r6);
    func_020b9408(2, temp_r5);
    func_020b9218(2, temp_r4);
}
