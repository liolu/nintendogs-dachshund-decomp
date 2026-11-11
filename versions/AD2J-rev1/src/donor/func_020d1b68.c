/* compiler: 2.0/sp1p5  */
/* func_020f5b48 from projets/nintendogs-dachshund/src/auto/func_020f5b48.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_020d1b68(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r3;

    temp_r2 = (*(s32 *) ((s8 *) (arg0) + (0)));
    if (temp_r2 > arg1) {
        return 1;
    }
    temp_r3 = 0 - arg1;
    if (temp_r2 < temp_r3) {
        return 1;
    }
    temp_r2_2 = (*(s32 *) ((s8 *) (arg0) + (4)));
    if (temp_r2_2 > arg1) {
        return 1;
    }
    if (temp_r2_2 < temp_r3) {
        return 1;
    }
    temp_r0 = (*(s32 *) ((s8 *) (arg0) + (8)));
    if (temp_r0 > arg1) {
        return 1;
    }
    if (temp_r0 < temp_r3) {
        return 1;
    }
    return 0;
}
