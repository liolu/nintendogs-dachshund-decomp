/* compiler: 1.2/sp2p3  */
/* func_0208b908 from projets/nintendogs-dachshund/src/auto/func_0208b908.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020f04a4(s16, M2C_UNK, M2C_UNK);
extern s32 func_020f7178();
s32 func_020ec1e0(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_020f7178() == -0xB) {
        return -1;
    }
    return func_020f04a4((*(s16 *) ((s8 *) (arg0) + (0xC))), arg1, arg2);
}
