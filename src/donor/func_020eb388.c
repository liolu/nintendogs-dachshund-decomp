/* compiler: 2.0/sp1p5  */
/* func_0208aa80 from projets/nintendogs-dachshund/src/auto/func_0208aa80.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void func_020eb388(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r1;

    temp_r1                                = arg0 + (arg1 * 4);
    (*(s32 *) ((s8 *) (temp_r1) + (0x50))) = arg2;
    (*(s32 *) ((s8 *) (temp_r1) + (0x68))) = 0x7FFFFFFF;
    (*(s32 *) ((s8 *) (temp_r1) + (0x74))) = arg3;
}
