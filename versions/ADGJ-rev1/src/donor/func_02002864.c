/* compiler: 1.2/sp2p3  */
/* func_020118ac from projets/code-lyoko/src/auto/func_020118ac.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
extern s32 func_02002a3c();
s32 func_02002864(s32 arg0) {
    s32 var_r0;

    switch (arg0) {
        case 1:
            var_r0 = 1;
            break;
        case 3:
            var_r0 = 2;
            break;
        case 2:
            var_r0 = 3;
            break;
        default:
            var_r0 = 0;
            break;
    }
    if (var_r0 == 0) {
        return 0xFFFF;
    }
    return func_02002a3c();
}
