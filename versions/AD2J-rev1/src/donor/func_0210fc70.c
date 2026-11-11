/* compiler: 1.2/sp2p3  */
/* func_020afa9c from projets/nintendogs-dachshund/src/auto/func_020afa9c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_01ffda04(s16);
extern M2C_UNK func_02027044(s32, M2C_UNK);
extern M2C_UNK func_020274b8(s32, M2C_UNK);
extern s32 func_021077ac(void *, M2C_UNK, s16, M2C_UNK);
s32 func_0210fc70(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    if (func_021077ac(arg0, 8, (*(s16 *) ((s8 *) (arg0) + (0x98))), -1) == 0) {
        return 0;
    }
    temp_r0 = func_01ffda04((*(s16 *) ((s8 *) (arg0) + (0x98))));
    func_02027044(temp_r0, 0x2B);
    func_020274b8(temp_r0, arg1);
    return 1;
}
