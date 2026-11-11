/* compiler: 1.2/sp2p3  */
/* func_020f1258 from projets/nintendogs-dachshund/src/auto/func_020f1258.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020a3a70(M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_02153894;
void func_020be2fc(void *arg0) {
    (*(s32 *) ((s8 *) (arg0) + (4))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (4))) + 1);
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (4))) <= 2) {
        return;
    }
    func_020a3a70(0, 4, 0);
    (*(s32 *) ((s8 *) (data_02153894) + (0x19C))) = 1;
}
