/* compiler: 1.2/sp2p3  */
/* func_020b2924 from projets/nintendogs-dachshund/src/auto/func_020b2924.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffda04(M2C_UNK);
extern M2C_UNK func_0202746c(M2C_UNK);
s32 func_02112874(void) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = 0;
loop_1:
    temp_r0 = func_01ffda04(var_r4);
    if ((temp_r0 != 0) && (func_0202746c(temp_r0) == 2)) {
        return var_r4;
    }
    var_r4 = (s32) (s16) (var_r4 + 1);
    if (var_r4 >= 3) {
        return -1;
    }
    goto loop_1;
}
