/* compiler: 1.2/sp2p3  */
/* func_020a72bc from projets/nintendogs-dachshund/src/auto/func_020a72bc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020280f8();
extern M2C_UNK data_021332dc;
s32 func_0210763c(s32 arg0, void *arg1) {
    if (func_020280f8() > (s32) * ((s16 *) ((s8 *) &data_021332dc + ((*(s16 *) ((s8 *) (arg1) + (0x94))) * 2)))) {
        return 1;
    }
    return 0;
}
