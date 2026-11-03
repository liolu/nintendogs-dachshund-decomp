/* compiler: 2.0/sp1p5  */
/* PM_SetLCDPower from projets/blue-dragon-awakened-shadow/src/auto/PM_SetLCDPower.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02002308(s32, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020022e8(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 != 1) {
        var_r0 = 0;
    }
    func_02002308(var_r0, 0, 0, 1);
}
