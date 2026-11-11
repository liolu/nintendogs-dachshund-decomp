/* compiler: 1.2/sp2p3  */
/* func_020ae778 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020ae778.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020aa6e4();
extern M2C_UNK func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 func_020c9798();
extern void *data_02153740;
void func_020ae778(void) {
    if (data_02153740 == ((void *) 0)) {
        return;
    }
    func_020b8b0c(3, 0, 1);
    (*(s32 *) ((s8 *) (data_02153740) + (0xFDC8))) = func_020c9798();
    func_020aa6e4();
}
