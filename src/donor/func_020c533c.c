/* compiler: 1.2/sp2p3  */
/* func_020ca944 from projets/nintendogs-dachshund/src/auto/func_020ca944.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020c3ee4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020c533c(s32 arg0, s32 arg1, s32 arg2) {
    (*(s16 *) ((s8 *) (arg0) + (0x6E))) = (s16) arg2;
    (*(s32 *) ((s8 *) (arg0) + (0x78))) = func_020c3ee4(arg1, arg2, (*(s32 *) ((s8 *) (arg0) + (0x1C))) + 4);
}
