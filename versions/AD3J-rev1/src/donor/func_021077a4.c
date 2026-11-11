/* compiler: 1.2/sp2p3  */
/* func_020a742c from projets/nintendogs-dachshund/src/auto/func_020a742c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
s32 func_021077a4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((*(s16 *) ((s8 *) (arg0) + (0x8A))) == (*(s16 *) ((s8 *) (arg0) + (0x90)))) {
        (*(s16 *) ((s8 *) (arg0) + (0x8A))) = (s16) arg1;
        (*(s16 *) ((s8 *) (arg0) + (0x8C))) = (s16) arg2;
        (*(s16 *) ((s8 *) (arg0) + (0x8E))) = (s16) arg3;
        return 1;
    }
    return 0;
}
