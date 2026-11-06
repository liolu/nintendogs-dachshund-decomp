/* compiler: 1.2/sp2p3  */
/* func_020af24c from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020af24c.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020a5240(M2C_UNK);
extern void *data_02153740;
void func_020af24c(void) {
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xA8))) != 7) {
        return;
    }
    func_020a5240(2);
    (*(s32 *) ((s8 *) (data_02153740) + (0x984))) = 0x11;
}
