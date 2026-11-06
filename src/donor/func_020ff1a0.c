/* compiler: 1.2/sp2p3  */
/* func_020ff1a8 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020ff1a8.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020039ec();
extern M2C_UNK func_0208cd9c();
extern M2C_UNK func_02105f68();
extern void *data_02153740;
void func_020ff1a0(void) {
    if ((*(u16 *) ((s8 *) (data_02153740) + (0xFDD0))) != 0) {
        return;
    }
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xB4))) == 0x17) {
        if (func_020039ec() == 0) {
            return;
        }
        func_0208cd9c();
        func_02105f68();
        (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
        return;
    }
    (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
}
