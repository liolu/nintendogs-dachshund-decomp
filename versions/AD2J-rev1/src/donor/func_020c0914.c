/* compiler: 1.2/sp2p3  */
/* func_020f391c from projets/nintendogs-dachshund/src/auto/func_020f391c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02027c20(M2C_UNK);
void func_020c0914(s32 arg0) {
    s16 var_r0;
    u32 temp_r0;

    temp_r0 = (u32) func_02027c20((*(s32 *) ((s8 *) (arg0) + (4))));
    if (temp_r0 < 0x12CU) {
        var_r0 = 0;
    } else if (temp_r0 < 0x3E8U) {
        var_r0 = 1;
    } else if (temp_r0 < 0x7D0U) {
        var_r0 = 2;
    } else if (temp_r0 < 0x1388U) {
        var_r0 = 3;
    } else if (temp_r0 < 0x2710U) {
        var_r0 = 4;
    } else {
        var_r0 = 5;
    }
    (*(s16 *) ((s8 *) (arg0) + (2))) = var_r0;
}
