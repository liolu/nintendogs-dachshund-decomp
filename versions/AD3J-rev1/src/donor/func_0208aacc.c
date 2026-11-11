/* compiler: 1.2/sp2p3  */
/* func_02087354 from projets/nintendogs-dachshund/src/auto/func_02087354.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0207fcb8(M2C_UNK);
extern M2C_UNK func_0208120c(void);
extern void func_02081220(M2C_UNK);
s32 func_0208aacc(s32 arg0) {
    s32 temp_r5;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r6;

    temp_r5 = func_0208120c();
    if ((*(volatile s32 *) ((s8 *) (arg0) + (0x10))) & 8) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        var_r6 = 1;
    } else {
        var_r6 = 0;
    }
    if (var_r6 != 0) {
        if ((*(volatile s32 *) ((s8 *) (arg0) + (0x10))) & 0x10) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 != 0) {
            (*(volatile s32 *) ((s8 *) (arg0) + (0x10))) = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0x10))) | 0x40);
            do {
                func_0207fcb8(arg0 + 0xE);
                if ((*(volatile s32 *) ((s8 *) (arg0) + (0x10))) & 0x40) {
                    var_r0_3 = 1;
                } else {
                    var_r0_3 = 0;
                }
            } while (var_r0_3 != 0);
        } else {
            (*(volatile s32 *) ((s8 *) (arg0) + (0x10))) = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0x10))) | 8);
        }
    }
    func_02081220(temp_r5);
    return var_r6;
}
