/* compiler: 1.2/sp2p3  */
/* func_020bf87c from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020bf87c.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_02153740;
void func_020bf87c(void *arg0) {
    (*(s32 *) ((s8 *) (arg0) + (0x28))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x28))) + 1);
    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0x28))) > 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
    }
}
