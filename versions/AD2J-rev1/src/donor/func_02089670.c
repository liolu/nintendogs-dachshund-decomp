/* compiler: 1.2/sp2p3  */
/* func_02085ef8 from projets/nintendogs-dachshund/src/auto/func_02085ef8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020896cc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02089670(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;
    s32 var_r1;
    s32 var_r5;

    var_r1 = arg1;
    var_r5 = 0;
    sp0    = 0;
    if (var_r1 != 0) {
        do {
            var_r1 = func_020896cc(arg0, var_r1, (s32) &sp0, arg2);
            if (var_r5 < sp0) {
                var_r5 = sp0;
            }
        } while (var_r1 != 0);
    }
    return var_r5;
}
