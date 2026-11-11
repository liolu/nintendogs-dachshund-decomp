/* compiler: 1.2/sp2p3  */
/* func_020ecd4c from projets/nintendogs-dachshund/src/auto/func_020ecd4c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0207d0e0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_0213f304;
extern M2C_UNK data_0213f314;
void func_020b9e2c(s32 arg0) {
    func_0207d0e0(0x1F, 0, (*(s32 *) ((s8 *) (arg0) + (0xC))), 0xE0);
    func_0207d0e0((*(s32 *) ((s8 *) (&data_0213f304) + (8))), 0, (*(s32 *) ((s8 *) (arg0) + (8))), 0x4000);
    func_0207d0e0((*(s32 *) ((s8 *) (&data_0213f314) + (8))), 0, (*(s32 *) ((s8 *) (arg0) + (0x18))), 0x800);
    (*(s32 *) ((s8 *) (arg0) + (0))) = 0;
}
