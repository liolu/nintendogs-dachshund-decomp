/* compiler: 1.2/sp2p3  */
/* func_0208b39c from projets/nintendogs-dachshund/src/auto/func_0208b39c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020ea640(void *, s16, M2C_UNK);
extern M2C_UNK func_020f9f7c(s32);
extern M2C_UNK data_02154d88;
s32 func_020ebca4(void *arg0) {
    s32 temp_r4;

    temp_r4 = (*(s32 *) ((s8 *) (&data_02154d88) + (0x10)));
    if (temp_r4 == 0) {
        return 0;
    }
    func_020ea640(arg0, (*(s16 *) ((s8 *) (arg0) + (0xC))), 7);
    func_020f9f7c(temp_r4);
    return 1;
}
