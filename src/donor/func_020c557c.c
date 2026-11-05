/* compiler: 1.2/sp2p3  */
/* func_020cab80 from projets/nintendogs-dachshund/src/auto/func_020cab80.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
s32 func_020c557c(u16 *arg0) {
    s32 var_r2;
    u16 *var_r0;
    u16 var_r1;

    var_r0 = arg0;
    var_r1 = *var_r0;
    var_r2 = 0;
    if ((var_r1 == 0x20) || (var_r1 == 0x3000)) {
        var_r2 = 1;
        if (var_r1 != 0) {
        loop_3:
            if ((var_r1 != 0x20) && (var_r1 != 0x3000)) {
                var_r2 = 0;
            } else {
                var_r0 = (u16 *) ((s8 *) var_r0 + 2);
                var_r1 = *var_r0;
                if (var_r1 != 0) {
                    goto loop_3;
                }
            }
        }
    }
    return var_r2;
}
