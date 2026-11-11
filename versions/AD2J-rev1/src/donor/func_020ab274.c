/* compiler: 1.2/sp2p3  */
/* func_020dda80 from projets/nintendogs-dachshund/src/auto/func_020dda80.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020efb80(M2C_UNK);
extern void func_020f0f98(M2C_UNK, M2C_UNK);
extern void *data_02153740;
void func_020ab274(void) {
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xA8))) == 7) {
        func_020efb80(9);
        return;
    }
    func_020f0f98(0x37, 1);
}
