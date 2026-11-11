/* compiler: 1.2/sp2p3  */
/* func_020a5828 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020a5828.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02003d1c(M2C_UNK);
extern M2C_UNK func_020a3c40(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK func_020ab0e8();
extern M2C_UNK data_0213be8c;
extern M2C_UNK data_0213bea0;
extern M2C_UNK data_0213beb4;
extern M2C_UNK data_0213beb8;
extern void *data_02153740;
void func_020a5828(s32 *arg0) {
    *arg0                                          = 0;
    (*(s32 *) ((s8 *) (data_02153740) + (0xB4A8))) = 3;
    (*(s32 *) ((s8 *) (data_02153740) + (0xB4AC))) = 0;
    func_020a3c40(0x2B, &data_0213be8c, &data_0213bea0, &data_0213beb4, &data_0213beb8);
    func_020ab0e8();
    func_02003d1c(0x10);
}
