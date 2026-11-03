/* compiler: 2.0/sp1p5  */
/* func_020ce1d4 from projets/nintendogs-dachshund/src/auto/func_020ce1d4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_0212d3e4;
s32 func_020c8a38(s32 arg0) {
    s8 temp_r1;
    void *var_r0;

    temp_r1 = (*(s8 *) ((s8 *) (arg0) + (0xF)));
    var_r0  = ((void *) 0);
    if ((s32) temp_r1 >= 0) {
        var_r0 = (M2C_UNK *) ((s8 *) &data_0212d3e4 + (temp_r1 * 4));
    }
    return (s32) var_r0;
}
