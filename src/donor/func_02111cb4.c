/* compiler: 1.2/sp2p3  */
/* func_020b1d6c from projets/nintendogs-dachshund/src/auto/func_020b1d6c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
extern void *data_02153704;
s32 func_02111cb4(s32 arg0, s32 arg1) {
    s32 var_r0;
    s32 var_r3;

    var_r0 = arg0;
    var_r3 = (*(s32 *) ((s8 *) (data_02153704) + (0xC))) + 0x1B34;
    if (arg1 < 0x800) {
        var_r3 -= 0x1000 - (arg1 * 2);
    }
    if ((u32) var_r0 > 0x3CU) {
        var_r0 = 0x3C;
    }
    return ((0x3C - var_r0) * 0x199) + var_r3;
}
