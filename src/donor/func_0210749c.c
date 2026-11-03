/* compiler: 1.2/sp2p3  */
/* func_020a7124 from projets/nintendogs-dachshund/src/auto/func_020a7124.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_0210749c(void *arg0, s32 arg1) {
    s32 (*temp_r2)(arg0);
    s32 var_r1;

    var_r1  = arg1;
    temp_r2 = (*(s32(**)())((s8 *) (arg0) + (0x210)));
    if (temp_r2 != ((void *) 0)) {
        var_r1 = temp_r2(arg0);
    }
    return var_r1;
}
