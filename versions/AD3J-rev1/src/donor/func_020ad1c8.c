/* compiler: 1.2/sp2p3  */
/* func_020ad1c8 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020ad1c8.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020a3c40(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *);
extern s32 func_020b5024(M2C_UNK, M2C_UNK *);
extern M2C_UNK func_020b91bc(M2C_UNK, s32);
extern M2C_UNK func_020b9218(M2C_UNK, s32);
extern M2C_UNK func_020b93d4(M2C_UNK, s32);
extern M2C_UNK func_020b9408(M2C_UNK, s32);
extern M2C_UNK data_0213c2d8;
extern M2C_UNK data_0213c2e8;
extern M2C_UNK data_0213c2f8;
extern M2C_UNK data_0213c30c;
extern M2C_UNK data_0213c31c;
extern M2C_UNK data_0213c32c;
extern M2C_UNK data_0213c33c;
extern M2C_UNK data_0213c340;
extern void *data_02153740;
void func_020ad1c8(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r7;

    (*(s32 *) ((s8 *) (data_02153740) + (0x34AC))) = 0;
    temp_r5                                        = func_020b5024(0, &data_0213c2d8);
    temp_r7                                        = func_020b5024(0, &data_0213c2e8);
    temp_r6                                        = func_020b5024(0, &data_0213c2f8);
    temp_r5_2                                      = func_020b5024(0, &data_0213c30c);
    func_020b93d4(0, temp_r5);
    func_020b9408(0, temp_r7);
    func_020b9218(0, temp_r6);
    func_020b91bc(0, temp_r5_2);
    (*(s32 *) ((s8 *) (arg0) + (0)))    = 0;
    (*(s32 *) ((s8 *) (arg0) + (4)))    = 0;
    (*(s32 *) ((s8 *) (arg0) + (8)))    = 0;
    (*(s32 *) ((s8 *) (arg0) + (0xC)))  = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x10))) = 0;
    func_020a3c40(0, &data_0213c31c, &data_0213c32c, &data_0213c33c, &data_0213c340);
}
