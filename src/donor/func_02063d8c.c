/* compiler: 1.2/sp2p3  */
/* func_02063928 from projets/children-of-mana/src/auto/func_02063928.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208120c(void);
extern void func_02081220(M2C_UNK);
extern u32 data_0214b9ec;
s32 func_02063d8c(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_0208120c();
    if ((u32) arg0 > (u32) data_0214b9ec) {
        if ((u32) (arg0 - data_0214b9ec) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else if ((u32) (data_0214b9ec - arg0) < 0x80000000U) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_02081220(temp_r0);
    return var_r4;
}
