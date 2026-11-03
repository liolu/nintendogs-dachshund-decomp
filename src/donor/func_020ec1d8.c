/* compiler: 1.2/sp2p3  */
/* func_0208b908 from projets/nintendogs-dachshund/src/auto/func_0208b908.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020f049c(s16, M2C_UNK, M2C_UNK);
extern s32 func_020f7170();
s32 func_020ec1d8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (func_020f7170() == -0xB) {
        return -1;
    }
    return func_020f049c((*(s16 *) ((s8 *) (arg0) + (0xC))), arg1, arg2);
}
