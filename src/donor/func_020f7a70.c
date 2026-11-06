/* compiler: 1.2/sp2p3  */
/* func_020972e4 from projets/nintendogs-dachshund/src/auto/func_020972e4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern void func_020026d8(M2C_UNK);
extern s32 data_021473f8;
void func_020f7a70(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (data_021473f8 == var_r4) {
        return;
    }
    if ((u32) (u8) var_r4 > 3U) {
        var_r4 = 3;
    }
    func_020026d8(var_r4);
    data_021473f8 = var_r4;
}
