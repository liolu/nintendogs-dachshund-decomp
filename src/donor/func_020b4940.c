/* compiler: 1.2/sp2p3  */
/* func_020e77dc from projets/nintendogs-dachshund/src/auto/func_020e77dc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020a8500(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020b3794(M2C_UNK);
extern s16 data_0213c928;
extern void *data_02153740;
void func_020b4940(void) {
    void *temp_r4;

    if ((*(s32 *) ((s8 *) (data_02153740) + (0xB8))) != 0x26) {
        return;
    }
    (*(s32 *) ((s8 *) (data_02153740) + (0xC4))) = 1;
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xB8))) != 0x26) {
        return;
    }
    temp_r4                                = data_02153740 + 0xC4;
    (*(s16 *) ((s8 *) (temp_r4) + (0x30))) = 0;
    data_0213c928                          = 0;
    func_020a8500(0, (*(s32 *) ((s8 *) (temp_r4) + (0x10))), 0);
    func_020b3794((s32) temp_r4);
}
