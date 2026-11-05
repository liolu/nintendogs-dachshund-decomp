/* compiler: 1.2/sp2p3  */
/* func_020b8708 from projets/nintendogs-dachshund/src/auto/func_020b8708.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_021199f0();
extern M2C_UNK func_02119ca4();
extern M2C_UNK func_0211a528();
void func_02117fec(void *arg0) {
    func_02119ca4(arg0 + 0x2C, func_021199f0(arg0 + 0x3C));
    if (((*(s32 *) ((s8 *) (arg0) + (0x2C))) != 0) && ((*(u16 *) ((s8 *) (arg0) + (0))) == 1)) {
        func_0211a528(arg0 + 0x2C);
    }
    if ((*(s32 *) ((s8 *) (arg0) + (0x2C))) == 0) {
        return;
    }
    if ((*(u16 *) ((s8 *) (arg0) + (0))) != 2) {
        return;
    }
    func_0211a528(arg0 + 0x2C);
}
