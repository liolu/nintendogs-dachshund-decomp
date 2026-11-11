/* compiler: 1.2/sp2p3  */
/* func_02117b10 from projets/nintendogs-dachshund/src/auto/func_02117b10.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_01ffda04(s32);
extern s32 func_020280c8();
extern s32 func_02028144();
extern s32 func_020c55c4(s32, M2C_UNK);
s32 func_02096380(s32 arg0, M2C_UNK arg1) {
    s32 var_r4;

    var_r4 = 0;
    switch (arg0) {
        case 0x30002:
            if (func_01ffda04(0) != 0) {
                var_r4 = func_02028144() + 0x78;
            }
            break;
        case 0x30005:
            if (func_01ffda04(0) != 0) {
                var_r4 = func_020c55c4(func_020280c8(), arg1);
            }
            break;
    }
    return var_r4;
}
