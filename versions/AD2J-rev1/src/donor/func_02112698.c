/* compiler: 1.2/sp2p3  */
/* func_020b2748 from projets/nintendogs-dachshund/src/auto/func_020b2748.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02044644();
extern M2C_UNK func_020ec2a0();
extern M2C_UNK func_0210835c();
extern M2C_UNK func_0210843c();
extern M2C_UNK func_0210fd98();
extern M2C_UNK func_0210fdc8();
extern s32 func_02092d80();
extern void *data_02156080;
void func_02112698(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02044644(0);
    func_0210843c(arg0, arg0 + 0xBC, arg1);
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
