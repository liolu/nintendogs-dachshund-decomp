/* compiler: 1.2/sp2p3  */
/* func_020c1e3c from projets/nintendogs-dachshund/src/auto/func_020c1e3c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02106144(void);
extern M2C_UNK func_02112904(M2C_UNK);
extern void func_02112df0(M2C_UNK, M2C_UNK);
extern void func_02112f54(M2C_UNK, M2C_UNK);
extern void func_02119be8(M2C_UNK, M2C_UNK);
void func_02121770(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_02112904(-1);
    if (func_02106144() == 0x11) {
        func_02112f54(arg0, temp_r4);
    } else if (func_02106144() == 0x12) {
        func_02112df0(arg0, temp_r4);
    }
    func_02119be8(arg0, arg1);
}
