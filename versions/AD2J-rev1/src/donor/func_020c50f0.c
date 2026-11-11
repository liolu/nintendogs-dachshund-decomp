/* compiler: 1.2/sp2p3  */
/* func_020ca6f4 from projets/nintendogs-dachshund/src/auto/func_020ca6f4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0207d87c(M2C_UNK, M2C_UNK);
extern void func_020c4f2c(M2C_UNK, M2C_UNK);
void func_020c50f0(s32 arg0) {
    func_020c4f2c(arg0, 0);
    (*(s32 *) ((s8 *) (arg0) + (0x1C))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x20))) = 0;
    func_0207d87c(arg0 + 0x24, 0x1C);
    func_0207d87c(arg0 + 0x30, 0x1C);
    func_0207d87c(arg0 + 0x3C, 0x1C);
}
