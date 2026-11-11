/* compiler: 1.2/sp2p3  */
/* func_020cfb38 from projets/nintendogs-dachshund/src/auto/func_020cfb38.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020c77e4(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_020c7f7c(M2C_UNK);
s32 func_020ca2e0(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r4;
    u32 var_r5;

    temp_r4 = arg0 + 0x7F8;
    var_r5  = 0;
    if ((func_020c7f7c(temp_r4) != 0) && (func_020c77e4(temp_r4, arg1, arg2) == 0) &&
        ((s32) (*(s8 *) ((s8 *) (arg0) + (0x8A))) >= 3)) {
        var_r5 = 1;
    }
    return var_r5;
}
