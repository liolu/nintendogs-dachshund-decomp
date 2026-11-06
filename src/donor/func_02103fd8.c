/* compiler: 1.2/sp2p3  */
/* func_020a3c0c from projets/nintendogs-dachshund/src/auto/func_020a3c0c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_02103fd8(s32 arg0, s32 arg1) {
    s32 var_r3;

    var_r3 = 0;
    switch (arg1) {
        case 2:
            (*(s32 *) ((s8 *) (arg0) + (0xC))) = 2;
            var_r3                             = 1;
            break;
        case 0:
            (*(s32 *) ((s8 *) (arg0) + (0xC))) = 0;
            var_r3                             = 1;
            break;
        case 1:
            var_r3                             = 1;
            (*(s32 *) ((s8 *) (arg0) + (0xC))) = 1;
            break;
    }
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0xC))) >= (s32) (*(s32 *) ((s8 *) (arg0) + (4)))) {
        var_r3                             = 0;
        (*(s32 *) ((s8 *) (arg0) + (0xC))) = -1;
    }
    return var_r3;
}
