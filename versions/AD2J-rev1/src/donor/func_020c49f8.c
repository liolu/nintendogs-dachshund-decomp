/* compiler: 1.2/sp2p3  */
/* func_020c9ffc from projets/nintendogs-dachshund/src/auto/func_020c9ffc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02006518(void *);
extern M2C_UNK func_020c4f2c(void *, M2C_UNK);
extern M2C_UNK func_020c4960;
void *func_020c49f8(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = func_02003844(arg0, 0x30);
    func_020c4f2c(temp_r0, 2);
    (*(M2C_UNK **) ((s8 *) (temp_r0) + (0x14))) = &func_020c4960;
    (*(s32 *) ((s8 *) (temp_r0) + (0x18)))      = 0;
    func_02006518(temp_r0 + 0x1C);
    (*(s32 *) ((s8 *) (temp_r0) + (0x24))) = arg1;
    (*(s16 *) ((s8 *) (temp_r0) + (0x28))) = 0x7FFF;
    (*(s16 *) ((s8 *) (temp_r0) + (0x2A))) = 0;
    (*(s16 *) ((s8 *) (temp_r0) + (0x2C))) = -0x1000;
    (*(s16 *) ((s8 *) (temp_r0) + (0x2E))) = 0;
    return temp_r0;
}
