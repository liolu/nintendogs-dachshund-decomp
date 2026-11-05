/* compiler: 1.2/sp2p3  */
/* func_0211a8b8 from projets/nintendogs-dachshund/src/auto/func_0211a8b8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffda04();
extern s32 func_02028144();
extern M2C_UNK func_020ae914();
s32 func_02099128(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (arg0 == 0x30002) {
        func_020ae914();
        func_01ffda04();
        var_r2 = func_02028144() + 0x78;
    }
    return var_r2;
}
