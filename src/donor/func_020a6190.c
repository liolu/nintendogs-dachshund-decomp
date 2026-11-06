/* compiler: 1.2/sp2p3  */
/* func_020a6190 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020a6190.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02003d1c(M2C_UNK);
extern M2C_UNK func_020a3c40(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK func_020ae778();
extern M2C_UNK func_020bdf44(void *);
extern M2C_UNK func_020be13c(void *);
extern M2C_UNK data_0213bf84;
extern M2C_UNK data_0213bf9c;
extern M2C_UNK data_0213bfb4;
extern M2C_UNK data_0213bfb8;
extern void *data_02153740;
void func_020a6190(s32 *arg0) {
    *arg0                                          = 0;
    (*(s32 *) ((s8 *) (data_02153740) + (0xB4A8))) = 1;
    (*(s32 *) ((s8 *) (data_02153740) + (0xB4AC))) = 1;
    func_020a3c40(0xD, &data_0213bf84, &data_0213bf9c, &data_0213bfb4, &data_0213bfb8);
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xBC))) == 3) {
        func_020be13c(((s8 *) arg0 + 0x130));
        func_020be13c(((s8 *) arg0 + 0x150));
        func_020be13c(((s8 *) arg0 + 0x170));
        func_020be13c(((s8 *) arg0 + 0x190));
        func_020be13c(((s8 *) arg0 + 0x1B0));
    } else {
        func_020bdf44(((s8 *) arg0 + 0x130));
        func_020bdf44(((s8 *) arg0 + 0x150));
        func_020bdf44(((s8 *) arg0 + 0x170));
        func_020bdf44(((s8 *) arg0 + 0x190));
        func_020bdf44(((s8 *) arg0 + 0x1B0));
    }
    func_02003d1c(0x10);
    func_020ae778();
}
