/* compiler: 1.2/sp2p3  */
/* func_020dfa54 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020dfa54.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern s32 func_020039d0();
extern void *data_02153740;
void func_020dfa4c(void *arg0) {
    if ((*(s32 *) ((s8 *) (arg0) + (0x900))) == -1) {
        if (func_020039d0() == 0) {
            return;
        }
        (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
        return;
    }
    (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
}
