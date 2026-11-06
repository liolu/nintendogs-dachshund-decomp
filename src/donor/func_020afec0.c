/* compiler: 1.2/sp2p3  */
/* func_020afec0 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020afec0.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020a3788(M2C_UNK, void *, s32, M2C_UNK);
extern void *data_02153740;
void func_020afec0(s32 *arg0) {
    s32 temp_r2;

    *arg0 -= 1;
    temp_r2 = *arg0;
    if (temp_r2 < 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
        return;
    }
    func_020a3788(2, ((s8 *) arg0 + 0xF0), temp_r2, 0x10);
}
