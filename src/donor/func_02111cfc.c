/* compiler: 2.0/sp1p5  */
/* func_020b1db4 from projets/nintendogs-dachshund/src/auto/func_020b1db4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_02111cfc(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r0;

    temp_r0 = (*(s32 *) ((s8 *) (arg0) + (4)));
    if (temp_r0 >= arg1) {
        return 0;
    }
    (*(s32 *) ((s8 *) (arg2) + (4))) = (s32) ((*(s32 *) ((s8 *) (arg2) + (4))) + (arg1 - temp_r0));
    return 1;
}
