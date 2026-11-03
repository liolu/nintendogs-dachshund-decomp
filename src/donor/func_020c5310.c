/* compiler: 1.2/sp2p3  */
/* func_020ca918 from projets/nintendogs-dachshund/src/auto/func_020ca918.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020c3e8c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020c5310(s32 arg0, s32 arg1, s32 arg2) {
    (*(s16 *) ((s8 *) (arg0) + (0x72))) = (s16) arg2;
    (*(s32 *) ((s8 *) (arg0) + (0x80))) = func_020c3e8c(arg1, arg2, (*(s32 *) ((s8 *) (arg0) + (0x1C))) + 4);
}
