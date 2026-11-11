/* compiler: 2.0/sp1p5 -O4,s */
/* func_0205b420 from projets/children-of-mana/src/auto/func_0205b420.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02153348;
s32 func_020800b4(void) {
    s32 var_r0;

    var_r0 = 0;
loop_1:
    if ((*(s32 *) ((s8 *) (((M2C_UNK *) ((s8 *) &data_02153348 + (var_r0 * 4)))) + (0x14))) == 0) {
        return var_r0;
    }
    var_r0 += 1;
    if (var_r0 >= 0x10) {
        return -1;
    }
    goto loop_1;
}
