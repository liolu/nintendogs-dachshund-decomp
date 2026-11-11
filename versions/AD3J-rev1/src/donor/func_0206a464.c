/* compiler: 1.2/sp2p3  */
/* func_02056b34 from projets/children-of-mana/src/auto/func_02056b34.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0206b1dc(u16);
extern u16 data_0214e9b0;
u16 func_0206a464(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_0214e9b0 |= temp_r4;
    func_0206b1dc(temp_r4);
    return temp_r4;
}
