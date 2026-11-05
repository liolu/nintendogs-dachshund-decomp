/* compiler: 1.2/sp2p3  */
/* func_020f1cf4 from projets/nintendogs-dachshund/src/auto/func_020f1cf4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b8ab8(M2C_UNK, M2C_UNK *, M2C_UNK);
extern M2C_UNK func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_020be13c(void *);
extern M2C_UNK data_02140c14;
extern M2C_UNK data_02140c24;
extern void *data_02153740;
void func_020bed94(void *arg0) {
    (*(s32 *) ((s8 *) (arg0) + (0))) = 0;
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xA8))) == 7) {
        func_020be13c(arg0 + 0xC4);
        func_020be13c(arg0 + 0xE4);
        func_020be13c(arg0 + 0x104);
    }
    (*(s32 *) ((s8 *) (arg0) + (4))) = 0x3C;
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xA8))) == 7) {
        func_020b8b0c(0, 0, 1);
    }
    (*(s32 *) ((s8 *) (arg0) + (8))) = 0x4C;
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xA8))) != 7) {
        return;
    }
    func_020b8ab8(0, &data_02140c24, 1);
    func_020b8ab8(0, &data_02140c14, 0);
}
