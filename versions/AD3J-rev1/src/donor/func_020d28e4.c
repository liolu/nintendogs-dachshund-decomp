/* compiler: 2.0/sp1p5  */
/* func_020f68cc from projets/nintendogs-dachshund/src/auto/func_020f68cc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s16 data_02154c7c;
extern M2C_UNK data_02154c80;
void func_020d28e4(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x20))) = (s32) ((*(s32 *) ((s8 *) (&data_02154c80) + (0))) +
                                                 (*(s32 *) ((s8 *) (*(*(void ***) ((s8 *) (arg0) + (0x18)))) + (4))));
    (*(s32 *) ((s8 *) (arg0) + (0x24))) = (s32) ((*(s32 *) ((s8 *) (&data_02154c80) + (4))) +
                                                 (*(s32 *) ((s8 *) (*(*(void ***) ((s8 *) (arg0) + (0x18)))) + (8))));
    (*(s32 *) ((s8 *) (arg0) + (0x28))) = (s32) ((*(s32 *) ((s8 *) (&data_02154c80) + (8))) +
                                                 (*(s32 *) ((s8 *) (*(*(void ***) ((s8 *) (arg0) + (0x18)))) + (0xC))));
    (*(s32 *) ((s8 *) (arg0) + (0x54))) = (s32) data_02154c7c;
}
