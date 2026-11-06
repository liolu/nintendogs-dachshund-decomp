/* compiler: 1.2/sp2p3  */
/* func_020af8cc from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020af8cc.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020bdfe0(void *);
extern void *data_02153740;
void func_020af8cc(void) {
    void *temp_r4;

    temp_r4 = data_02153740 + 0x3C98;
    if ((*(s32 *) ((s8 *) (data_02153740) + (0x3C98))) == 0) {
        return;
    }
    func_020bdfe0(temp_r4 + 0x198);
    func_020bdfe0(temp_r4 + 0x1B8);
}
