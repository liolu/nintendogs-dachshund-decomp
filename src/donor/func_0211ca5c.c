/* compiler: 2.0/sp1p5  */
/* func_020bd1d8 from projets/nintendogs-dachshund/src/auto/func_020bd1d8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_021199f0(M2C_UNK, M2C_UNK);
void func_0211ca5c(s32 arg0, s32 arg1) {
    u8 var_r1;

    var_r1 = arg1 + 2;
    if (*(M2C_UNK *) arg0 == 2) {
        var_r1 += 1;
    }
    func_021199f0(arg0 + 8, (s32) var_r1);
}
