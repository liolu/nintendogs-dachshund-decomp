/* compiler: 1.2/sp2p3  */
/* func_020e93a8 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020e93a8.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_ov003_02157d50();
void func_020e93a8(void *arg0) {
    s32 *temp_r1;

    temp_r1 = (*(s32 **) ((s8 *) (arg0) + (0x214)));
    if (*temp_r1 != 0) {
        return;
    }
    *temp_r1 = 1;
    func_ov003_02157d50();
}
