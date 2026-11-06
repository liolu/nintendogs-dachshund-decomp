/* compiler: 1.2/sp2p3  */
/* func_020a3b78 from projets/nintendogs-dachshund/src/auto/func_020a3b78.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_02103f44(s32 arg0, s32 arg1) {
    s32 var_r3;

    var_r3 = 0;
    switch (arg1) {
        default:
            break;
        case 3:
            (*(s32 *) ((s8 *) (arg0) + (0x10))) = 0;
            var_r3                              = 1;
            break;
        case 4:
            var_r3                              = 1;
            (*(s32 *) ((s8 *) (arg0) + (0x10))) = 1;
            break;
        case 5:
            (*(s32 *) ((s8 *) (arg0) + (0x10))) = 2;
            var_r3                              = 1;
            break;
        case 6:
            (*(s32 *) ((s8 *) (arg0) + (0x10))) = 3;
            var_r3                              = 1;
            break;
        case 7:
            (*(s32 *) ((s8 *) (arg0) + (0x10))) = 4;
            var_r3                              = 1;
            break;
    }
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0x10))) >= (s32) (*(s32 *) ((s8 *) (arg0) + (8)))) {
        var_r3                              = 0;
        (*(s32 *) ((s8 *) (arg0) + (0x10))) = -1;
    }
    return var_r3;
}
