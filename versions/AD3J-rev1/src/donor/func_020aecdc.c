/* compiler: 1.2/sp2p3  */
/* func_020aecdc from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020aecdc.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_02153740;
extern void *data_02153894;
void func_020aecdc(s32 arg0) {
    (*(s32 *) ((s8 *) (data_02153740) + (0x98C))) = 2;
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xB8))) == 2) {
        (*(s32 *) ((s8 *) (data_02153894) + (0x48))) = 1;
    }
    (*(s32 *) ((s8 *) (data_02153740) + (0xFDD8))) = arg0;
}
