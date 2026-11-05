/* compiler: 1.2/sp2p3  */
/* func_02087e90 from projets/nintendogs-dachshund/src/auto/func_02087e90.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208120c(void);
extern void func_02081220(M2C_UNK);
void func_0208b608(s32 arg0) {
    s32 temp_r0;
    s32 var_r1;
    void *temp_r2;

    temp_r0 = func_0208120c();
    if ((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) & 1) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        (*(volatile s32 *) ((s8 *) (arg0) + (0xC)))     = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) | 2);
        temp_r2                                         = (*(void **) ((s8 *) (arg0) + (8)));
        (*(volatile s32 *) ((s8 *) (temp_r2) + (0x10))) = (s32) ((*(volatile s32 *) ((s8 *) (temp_r2) + (0x10))) | 0x20);
    }
    func_02081220(temp_r0);
}
