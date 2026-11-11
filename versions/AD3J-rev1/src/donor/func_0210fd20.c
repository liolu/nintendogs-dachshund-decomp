/* compiler: 1.2/sp2p3  */
/* func_020afb54 from projets/nintendogs-dachshund/src/auto/func_020afb54.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_01ffda04(M2C_UNK);
extern M2C_UNK func_02027044(s32, M2C_UNK);
extern s32 func_021077a4(void *, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0210fd20(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if (func_021077a4(arg0, 4, arg1, -1) != 0) {
        temp_r0 = func_01ffda04(arg1);
        if ((*(s16 *) ((s8 *) (arg0) + (0x90))) == 6) {
            func_02027044(temp_r0, 0x2A);
        } else {
            func_02027044(temp_r0, 0x25);
        }
        return 1;
    }
    return 0;
}
