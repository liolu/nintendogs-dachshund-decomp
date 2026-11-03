/* compiler: 1.2/sp2p3  */
/* func_020b27dc from projets/nintendogs-dachshund/src/auto/func_020b27dc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02044644();
extern M2C_UNK func_020ec298();
extern M2C_UNK func_02108354();
extern M2C_UNK func_02108434();
extern s32 func_02109df8();
extern M2C_UNK func_0210fd90();
extern M2C_UNK func_0210fdc0();
extern s32 func_02092d80();
extern void *data_02156080;
void func_02112724(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02109df8();
    temp_r4 = func_02044644(0);
    func_02108434(arg0, arg0 + 0xBC, temp_r5);
    func_02108354(arg0, arg0 + 0xC8);
    if ((*(s32 *) ((s8 *) (data_02156080) + (0x24))) != 0) {
        func_0210fd90(arg0);
        return;
    }
    if (func_02092d80(temp_r4, arg0 + 0xBC, (*(s32 *) ((s8 *) (arg0) + (0x120)))) == 0) {
        return;
    }
    func_0210fdc0(arg0);
    func_020ec298(arg0 + 0x190, 5);
}
