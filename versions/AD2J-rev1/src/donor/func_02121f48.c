/* compiler: 1.2/sp2p3  */
/* func_020c260c from projets/nintendogs-dachshund/src/auto/func_020c260c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffda04(M2C_UNK);
extern M2C_UNK func_02027c20(M2C_UNK);
extern M2C_UNK func_020defb4(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02121f48(s32 arg0) {
    s32 *temp_r4;
    s32 temp_r0;

    temp_r4 = (*(s32 **) ((s8 *) (arg0) + (0x214)));
    temp_r0 = func_01ffda04((s32) (*(s16 *) ((s8 *) (arg0) + (0x98))));
    if (*temp_r4 == 0) {
        *temp_r4 = func_020defb4(func_02027c20(temp_r0), 1, 0);
    }
    return *temp_r4;
}
