/* compiler: 1.2/sp2p3  */
/* func_0209fe74 from projets/nintendogs-dachshund/src/auto/func_0209fe74.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_02100260(void *arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r3;

    temp_r2 = (*(s32 *) ((s8 *) (arg0) + (0x38)));
    var_r3  = -1;
    if ((temp_r2 == 0) || (temp_r2 == 4)) {
        temp_r1 = (*(s32 *) ((s8 *) (arg0) + (0x48))) + arg1;
        if (temp_r1 < (s32) (*(s32 *) ((s8 *) (arg0) + (0x44)))) {
            var_r3 = temp_r1;
        }
    }
    return var_r3;
}
