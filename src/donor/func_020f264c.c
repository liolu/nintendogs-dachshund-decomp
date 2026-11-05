/* compiler: 1.2/sp2p3  */
/* func_02091e84 from projets/nintendogs-dachshund/src/auto/func_02091e84.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02028fc4(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_020f7178();
extern M2C_UNK data_02154cb8;
extern M2C_UNK data_02154d88;
void func_020f264c(M2C_UNK arg0) {
    s32 var_r0;

    if ((func_020f7178() != -0xB) && ((*(s32 *) ((s8 *) (&data_02154cb8) + (0x40))) == 0) &&
        ((*(s16 *) ((s8 *) (&data_02154cb8) + (0x3E))) != 1) && ((*(s16 *) ((s8 *) (&data_02154cb8) + (0x3E))) != 2) &&
        ((*(s16 *) ((s8 *) (&data_02154d88) + (6))) != 0x3E) && ((*(s16 *) ((s8 *) (&data_02154d88) + (6))) != 0x3F)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    func_02028fc4(arg0, 0x4B, 1);
}
