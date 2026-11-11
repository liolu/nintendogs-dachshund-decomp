/* compiler: 1.2/sp2p3  */
/* func_020d4cd8 from projets/nintendogs-dachshund/src/auto/func_020d4cd8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0206b74c(M2C_UNK, M2C_UNK);
void func_020cf44c(s32 arg0) {
    if ((*(u16 *) ((s8 *) (arg0) + (0x78))) & 1) {
        *(s32 *) 0x04000000 &= ~0xE000;
        *(s32 *) 0x0400001C = 0x01FF0000 & ((*(s16 *) ((s8 *) (arg0) + (0x92))) << 0x10);
    }
    if ((*(u16 *) ((s8 *) (arg0) + (0x78))) & 2) {
        *(s32 *) 0x04001000 &= ~0xE000;
        *(s32 *) 0x04001010 = 0x01FF0000 & ((*(s16 *) ((s8 *) (arg0) + (0x92))) << 0x10);
    }
    if ((*(s16 *) ((s8 *) (arg0) + (0x74))) != 0) {
        func_0206b74c(0x04000050, (s32) (*(s16 *) ((s8 *) (arg0) + (0x90))));
        return;
    }
    func_0206b74c(0x04001050, (s32) (*(s16 *) ((s8 *) (arg0) + (0x90))));
}
