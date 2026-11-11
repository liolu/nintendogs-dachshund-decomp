/* compiler: 1.2/sp2p3  */
/* func_020606e8 from projets/children-of-mana/src/auto/func_020606e8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
s32 func_020713c8(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
loop_1:
    if ((arg0 >> var_r2) & 1) {
        return var_r2;
    }
    var_r2 += 1;
    if (var_r2 >= 0x10) {
        return -1;
    }
    goto loop_1;
}
