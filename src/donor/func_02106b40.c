/* compiler: 2.0/sp1p5  */
/* func_020a67c0 from projets/nintendogs-dachshund/src/auto/func_020a67c0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
extern void *data_02156080;
void func_02106b40(s32 arg0) {
    (*(s16 *) ((s8 *) (arg0) + (0x88))) = (s16) (*(s16 *) ((s8 *) (data_02156080) + (0x20)));
    (*(s32 *) ((s8 *) ((data_02156080 + ((*(s16 *) ((s8 *) (data_02156080) + (0x20))) * 4))) + (4))) = arg0;
    (*(s16 *) ((s8 *) (data_02156080) + (0x20))) = (s16) ((*(s16 *) ((s8 *) (data_02156080) + (0x20))) + 1);
}
