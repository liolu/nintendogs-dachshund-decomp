/* compiler: 1.2/sp2p3  */
/* func_020afb00 from projets/nintendogs-dachshund/src/auto/func_020afb00.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_01ffda04(s16);
extern M2C_UNK func_02027044(s32, M2C_UNK);
extern s32 func_021077a4(void *, M2C_UNK, s16, M2C_UNK);
s32 func_0210fccc(void *arg0) {
    if (func_021077a4(arg0, 5, (*(s16 *) ((s8 *) (arg0) + (0x98))), -1) != 0) {
        if ((*(s16 *) ((s8 *) (arg0) + (0x90))) == 8) {
            func_02027044(func_01ffda04((*(s16 *) ((s8 *) (arg0) + (0x98)))), 0x2D);
        }
        return 1;
    }
    return 0;
}
