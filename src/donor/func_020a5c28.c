/* compiler: 1.2/sp2p3  */
/* func_020d8280 from projets/nintendogs-dachshund/src/auto/func_020d8280.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020af728(M2C_UNK);
extern void func_020bdb00(M2C_UNK);
extern void *data_02153740;
void func_020a5c28(void) {
    void *temp_r4;

    if ((*(s32 *) ((s8 *) (data_02153740) + (0xB8))) != 6) {
        return;
    }
    temp_r4 = data_02153740 + 0xC4;
    func_020bdb00((s32) (temp_r4 + 4));
    func_020bdb00((s32) (temp_r4 + 0x40));
    func_020bdb00((s32) (temp_r4 + 0x7C));
    func_020bdb00((s32) (temp_r4 + 0xB8));
    func_020bdb00((s32) (temp_r4 + 0xF4));
    func_020af728(1);
}
