/* compiler: 1.2/sp2p3  */
/* func_020c0e70 from projets/nintendogs-dachshund/src/auto/func_020c0e70.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
extern s32 func_0211cf40();
extern s32 func_0211e8ec();
extern u8 func_021207f8(u8);
extern u8 func_021208ac(u8);
u8 func_021207a8(void) {
    s32 temp_r0;
    u8 var_r4;

    var_r4  = func_0211cf40() + 5;
    temp_r0 = func_0211e8ec();
    switch (temp_r0) {
        case 2:
            var_r4 = func_021208ac(var_r4);
            break;
        case 3:
            var_r4 = func_021207f8(var_r4);
            break;
    }
    return var_r4;
}
