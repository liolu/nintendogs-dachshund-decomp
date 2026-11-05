/* compiler: 1.2/sp2p3  */
/* func_02077dfc from projets/nintendogs-dachshund/src/auto/func_02077dfc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02128dc4;
s32 func_02078674(s32 arg0) {
    s32 var_r0;
    s8 temp_r1;
    u8 temp_r2;

    temp_r2 = (*(u8 *) ((s8 *) (arg0) + (0)));
    temp_r1 = ((s8 *) &data_02128dc4)[temp_r2];
    if ((s32) temp_r1 < 0) {
        return -1;
    }
    if (temp_r1 == 0) {
        if (temp_r2 == 9) {
            var_r0 = ((*(u8 *) ((s8 *) (arg0) + (2))) + 1) * 3;
        } else {
            var_r0 = -1;
        }
        return var_r0;
    }
    return (s32) temp_r1;
}
