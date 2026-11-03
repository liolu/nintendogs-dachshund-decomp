/* compiler: 2.0/sp1p5  */
/* func_02006f5c from projets/nintendogs-chihuahua-friends/src/auto/func_02006f5c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
s32 func_02006f5c(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 <= 0) {
        return 0;
    }
    if (var_r0 >= 0x1000) {
        var_r0 = 0x1000;
    }
    return var_r0;
}
