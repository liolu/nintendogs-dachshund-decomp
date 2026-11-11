/* compiler: 1.2/sp2p3  */
/* func_02119444 from projets/nintendogs-dachshund/src/auto/func_02119444.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_020929b4();
extern M2C_UNK func_02097d24(s32, M2C_UNK);
extern M2C_UNK func_02098064;
extern M2C_UNK func_020986a8;
void *func_02097cb4(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_02003844(arg0, 0x20);
    func_020929b4();
    (*(s16 *) ((s8 *) (temp_r4) + (0)))         = 2;
    (*(M2C_UNK **) ((s8 *) (temp_r4) + (0x10))) = &func_02098064;
    (*(M2C_UNK **) ((s8 *) (temp_r4) + (0x14))) = &func_020986a8;
    (*(s16 *) ((s8 *) (temp_r4) + (2)))         = 0xE10;
    (*(s16 *) ((s8 *) (temp_r4) + (8)))         = 0xB4;
    (*(s32 *) ((s8 *) (temp_r4) + (0x1C)))      = arg2;
    temp_r0                                     = (*(s32 *) ((s8 *) (temp_r4) + (0x1C)));
    if (temp_r0 != 0) {
        func_02097d24(temp_r0, arg1);
    }
    return temp_r4;
}
