/* compiler: 2.0/sp1p5  */
/* func_020a69c4 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020a69c4.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
extern void *data_02153740;
void func_020a69c4(void) {
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xB4))) == 0xB) {
        if ((*(u16 *) ((s8 *) (data_02153740) + (0xFDD0))) == 0) {
            (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
        }
        return;
    }
    (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
}
