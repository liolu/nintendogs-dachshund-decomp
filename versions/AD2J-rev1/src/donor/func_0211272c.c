/* compiler: 1.2/sp2p3  */
/* func_020b27dc from projets/nintendogs-dachshund/src/auto/func_020b27dc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02044644();
extern M2C_UNK func_020ec2a0();
extern M2C_UNK func_0210835c();
extern M2C_UNK func_0210843c();
extern s32 func_02109e00();
extern M2C_UNK func_0210fd98();
extern M2C_UNK func_0210fdc8();
extern s32 func_02092d80();
extern void *data_02156080;
void func_0211272c(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02109e00();
    temp_r4 = func_02044644(0);
    func_0210843c(arg0, arg0 + 0xBC, temp_r5);
    func_0210835c(arg0, arg0 + 0xC8);
    if ((*(s32 *) ((s8 *) (data_02156080) + (0x24))) != 0) {
        func_0210fd98(arg0);
        return;
    }
    if (func_02092d80(temp_r4, arg0 + 0xBC, (*(s32 *) ((s8 *) (arg0) + (0x120)))) == 0) {
        return;
    }
    func_0210fdc8(arg0);
    func_020ec2a0(arg0 + 0x190, 5);
}
