/* compiler: 1.2/sp2p3  */
/* func_0208b8ac from projets/nintendogs-dachshund/src/auto/func_0208b8ac.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020efee0(M2C_UNK *, s16, M2C_UNK, M2C_UNK, s32);
extern s32 func_020f7178();
extern M2C_UNK data_02154d90;
s32 func_020ec184(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    if (func_020f7178() == -0xB) {
        return -1;
    }
    return func_020efee0(&data_02154d90, (*(s16 *) ((s8 *) (arg0) + (0xC))), arg1, arg2, arg3);
}
