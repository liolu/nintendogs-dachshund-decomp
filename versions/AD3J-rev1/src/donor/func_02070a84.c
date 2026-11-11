/* compiler: 1.2/sp2p3  */
/* func_0205ff48 from projets/children-of-mana/src/auto/func_0205ff48.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02070ea4(M2C_UNK, M2C_UNK);
s32 func_02070a84(s32 arg0, s32 arg1) {
    u16 var_r2;

    var_r2 = 0;
    if ((arg1 > 0) && (arg0 != 0)) {
        var_r2 = (u16) func_02070ea4(arg0, arg1);
    }
    return (s32) var_r2;
}
