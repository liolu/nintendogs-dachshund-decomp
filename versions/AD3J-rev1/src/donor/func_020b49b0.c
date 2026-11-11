/* compiler: 1.2/sp2p3  */
/* func_020b49b0 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020b49b0.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
extern s32 func_020039d0();
extern void *data_02153740;
void func_020b49b0(void) {
    s32 temp_r0;

    temp_r0 = (*(s32 *) ((s8 *) (data_02153740) + (0xB4)));
    if (temp_r0 == 3) {
        if (func_020039d0() == 0) {
            return;
        }
        (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
        return;
    }
    if (temp_r0 == 4) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
        return;
    }
    if ((*(u16 *) ((s8 *) (data_02153740) + (0xFDD0))) == 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
    }
}
