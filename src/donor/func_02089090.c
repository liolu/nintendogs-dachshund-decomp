/* compiler: 1.2/sp2p3  */
/* func_02085918 from projets/nintendogs-dachshund/src/auto/func_02085918.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
void func_02089090(s32 arg0, s32 arg1, s32 arg2) {
    (*(s32 *) ((s8 *) (arg2) + (0))) =
        (s32) ((*(s32 *) ((s8 *) (arg2) + (0))) +
               ((s32) ((*(s16 *) ((s8 *) (arg0) + (0xC))) *
                       (((*(s32 *) ((s8 *) (arg0) + (0))) - (*(s32 *) ((s8 *) (arg1) + (0x14)))) -
                        (*(s32 *) ((s8 *) (arg1) + (0x20))))) >>
                0xC));
    (*(s32 *) ((s8 *) (arg2) + (4))) =
        (s32) ((*(s32 *) ((s8 *) (arg2) + (4))) +
               ((s32) ((*(s16 *) ((s8 *) (arg0) + (0xC))) *
                       (((*(s32 *) ((s8 *) (arg0) + (4))) - (*(s32 *) ((s8 *) (arg1) + (0x18)))) -
                        (*(s32 *) ((s8 *) (arg1) + (0x24))))) >>
                0xC));
    (*(s32 *) ((s8 *) (arg2) + (8))) =
        (s32) ((*(s32 *) ((s8 *) (arg2) + (8))) +
               ((s32) ((*(s16 *) ((s8 *) (arg0) + (0xC))) *
                       (((*(s32 *) ((s8 *) (arg0) + (8))) - (*(s32 *) ((s8 *) (arg1) + (0x1C)))) -
                        (*(s32 *) ((s8 *) (arg1) + (0x28))))) >>
                0xC));
}
