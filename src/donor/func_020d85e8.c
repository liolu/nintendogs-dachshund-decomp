/* compiler: 1.2/sp2p3  */
/* func_020fc5d8 from projets/nintendogs-dachshund/src/auto/func_020fc5d8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b1f04(s32, s32, s32, void *, s32);
extern void *data_02153700;
void func_020d85e8(void *arg0) {
    void *temp_r3;

    if ((*(s16 *) ((s8 *) (arg0) + (0x90))) != 3) {
        return;
    }
    temp_r3 = (*(void **) ((s8 *) (arg0) + (0x214)));
    func_020b1f04((*(s32 *) ((s8 *) (temp_r3) + (0x14))), (*(s32 *) ((s8 *) (temp_r3) + (0x10))),
                  (*(s32 *) ((s8 *) (data_02153700) + (0x10))), temp_r3 + 0x38, 0);
}
