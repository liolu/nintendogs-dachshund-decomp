/* compiler: 1.2/sp2p3  */
/* func_020edffc from projets/nintendogs-dachshund/src/auto/func_020edffc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b5024(M2C_UNK, M2C_UNK);
extern void func_020b8c1c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020b8ce8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020b91bc(M2C_UNK, M2C_UNK);
extern void func_020b9218(M2C_UNK, M2C_UNK);
extern void func_020b93d4(M2C_UNK, M2C_UNK);
extern void func_020b9408(M2C_UNK, M2C_UNK);
extern M2C_UNK data_0213fd94;
extern M2C_UNK data_0213fda8;
extern M2C_UNK data_0213fdbc;
extern M2C_UNK data_0213fdd4;
void func_020bb0c4(s32 arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;

    (*(s32 *) ((s8 *) (arg0) + (8)))    = 0;
    (*(s32 *) ((s8 *) (arg0) + (4)))    = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x10))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x14))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x18))) = 0x1000;
    temp_r5                             = func_020b5024(0x1A, (s32) &data_0213fd94);
    temp_r7                             = func_020b5024(0x1A, (s32) &data_0213fda8);
    temp_r6                             = func_020b5024(0x1A, (s32) &data_0213fdbc);
    temp_r5_2                           = func_020b5024(0x1A, (s32) &data_0213fdd4);
    func_020b93d4(0, temp_r5);
    func_020b9408(0, temp_r7);
    func_020b9218(0, temp_r6);
    func_020b91bc(0, temp_r5_2);
    func_020b8c1c(0, 1, 1);
    func_020b8c1c(0, 0, 1);
    (*(s32 *) ((s8 *) (arg0) + (4))) = 2;
    (*(s32 *) ((s8 *) (arg0) + (0))) = 2;
    func_020b8ce8(0, 0, 2, 2);
    func_020b8c1c(0, 0, 0);
    (*(s32 *) ((s8 *) (arg0) + (0xC))) = 0xA;
}
