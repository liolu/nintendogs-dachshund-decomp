/* compiler: 2.0/sp1p5  */
/* func_020bacbc from projets/nintendogs-dachshund/src/auto/func_020bacbc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_0211a548(s32 arg0) {
    s32 temp_r1;

    temp_r1 = (*(s32 *) ((s8 *) (arg0) + (8)));
    if (temp_r1 <= 0) {
        return 0;
    }
    (*(s32 *) ((s8 *) (arg0) + (8))) = (s32) (temp_r1 - 1);
    (*(s32 *) ((s8 *) (arg0) + (4))) = 0;
    return 1;
}
