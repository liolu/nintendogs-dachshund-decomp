/* compiler: 1.2/sp2p3  */
/* func_020f79c8 from projets/nintendogs-dachshund/src/auto/func_020f79c8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s16 data_02154c8c;
extern M2C_UNK data_02154c90;
void func_020d39e8(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x20))) = (s32) ((*(s32 *) ((s8 *) (&data_02154c90) + (0))) +
                                                 (*(s32 *) ((s8 *) (*(*(void ***) ((s8 *) (arg0) + (0x18)))) + (4))));
    (*(s32 *) ((s8 *) (arg0) + (0x24))) = (s32) ((*(s32 *) ((s8 *) (&data_02154c90) + (4))) +
                                                 (*(s32 *) ((s8 *) (*(*(void ***) ((s8 *) (arg0) + (0x18)))) + (8))));
    (*(s32 *) ((s8 *) (arg0) + (0x28))) = (s32) ((*(s32 *) ((s8 *) (&data_02154c90) + (8))) +
                                                 (*(s32 *) ((s8 *) (*(*(void ***) ((s8 *) (arg0) + (0x18)))) + (0xC))));
    (*(s32 *) ((s8 *) (arg0) + (0x54))) = (s32) data_02154c8c;
    (*(s32 *) ((s8 *) (arg0) + (0x4C))) = (s32) (s16) (data_02154c8c * 6);
}
