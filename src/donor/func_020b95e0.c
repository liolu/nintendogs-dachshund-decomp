/* compiler: 1.2/sp2p3  */
/* func_020ec500 from projets/nintendogs-dachshund/src/auto/func_020ec500.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207d0e0(M2C_UNK, M2C_UNK, s32, s32);
extern M2C_UNK func_020a3a70(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020b95e0(void *arg0) {
    func_020a3a70(0, 4, 1);
    if ((*(s32 *) ((s8 *) (arg0) + (8))) == 0) {
        return;
    }
    if ((*(s32 *) ((s8 *) (arg0) + (0x10))) == 0) {
        return;
    }
    *(u16 *) 0x0400000C = (*(u16 *) 0x0400000C & ~3) | (*(s32 *) ((s8 *) (arg0) + (0x20)));
    *(u16 *) 0x0400000C &= ~0x40;
    *(u16 *) 0x0400000C = (*(u16 *) 0x0400000C & 0x43) | 0x80C;
    func_0207d0e0(6, 0, (*(s32 *) ((s8 *) (arg0) + (8))), (*(s32 *) ((s8 *) (arg0) + (4))));
    func_0207d0e0(0xF, 0, (*(s32 *) ((s8 *) (arg0) + (0xC))), 0x1C0);
    func_0207d0e0(0xA, 0, (*(s32 *) ((s8 *) (arg0) + (0x10))), 0x800);
    (*(s32 *) ((s8 *) (arg0) + (0))) = 0;
}
