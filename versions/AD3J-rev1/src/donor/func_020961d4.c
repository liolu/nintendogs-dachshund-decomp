/* compiler: 1.2/sp2p3  */
/* func_02117964 from projets/nintendogs-dachshund/src/auto/func_02117964.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02092b94(M2C_UNK);
void func_020961d4(s32 arg0) {
    if ((*(s16 *) ((s8 *) (arg0) + (0x7C))) == -1) {
        return;
    }
    if ((*(s16 *) ((s8 *) (arg0) + (0x76))) == 0) {
        (*(s16 *) ((s8 *) (arg0) + (0x76))) = 1;
        return;
    }
    func_02092b94(arg0);
}
