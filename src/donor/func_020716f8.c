/* compiler: 1.2/sp2p3  */
/* func_0205a7f8 from projets/club-house-games/src/auto/func_0205a7f8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
extern s32 data_0214f35c;
s32 func_020716f8(void) {
    s32 var_r0;
    s32 var_r3;

    var_r3 = 1;
    var_r0 = 0;
loop_1:
    if (!(data_0214f35c & var_r3)) {
        data_0214f35c |= var_r3;
        return var_r0;
    }
    var_r0 += 1;
    var_r3 *= 2;
    if (var_r0 >= 8) {
        return -1;
    }
    goto loop_1;
}
