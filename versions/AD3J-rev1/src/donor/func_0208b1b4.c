/* compiler: 1.2/sp2p3  */
/* func_02087a3c from projets/nintendogs-dachshund/src/auto/func_02087a3c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0207fc44(M2C_UNK);
extern M2C_UNK func_0208120c(void);
extern void func_02081220(M2C_UNK);
extern M2C_UNK func_0208a85c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0208b250(M2C_UNK);
void func_0208b1b4(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r1;
    s32 var_r5;

    var_r5  = arg0;
    temp_r4 = (*(volatile s32 *) ((s8 *) (var_r5) + (8)));
    if (var_r5 == 0) {
        return;
    }
loop_3:
    temp_r0 = func_0208120c();
    if ((*(volatile s32 *) ((s8 *) (var_r5) + (0xC))) & 4) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        func_0207fc44(var_r5 + 0x18);
        return;
    }
    (*(volatile s32 *) ((s8 *) (var_r5) + (0xC))) = (s32) ((*(volatile s32 *) ((s8 *) (var_r5) + (0xC))) | 8);
    func_02081220(temp_r0);
    if (func_0208a85c(var_r5, (*(volatile s32 *) ((s8 *) (var_r5) + (0x10)))) == 6) {
        return;
    }
    var_r5 = func_0208b250(temp_r4);
    if (var_r5 == 0) {
        return;
    }
    goto loop_3;
}
