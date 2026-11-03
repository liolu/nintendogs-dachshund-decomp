/* compiler: 1.2/sp2p3  */
/* func_02113b8c from projets/nintendogs-dachshund/src/auto/func_02113b8c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02004274(M2C_UNK);
extern s32 *data_02153714;
void func_0209241c(void) {
    func_02004274(*data_02153714);
    *(u16 *) 0x04000060 = (*(u16 *) 0x04000060 & 0xFFFFCFFD) | 2;
}
