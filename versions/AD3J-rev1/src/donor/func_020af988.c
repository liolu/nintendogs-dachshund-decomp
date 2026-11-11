/* compiler: 1.2/sp2p3  */
/* func_020af988 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020af988.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020be13c(void *);
extern void *data_02153740;
void func_020af988(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r4;

    temp_r4 = data_02153740 + 0x3C98;
    if ((*(s32 *) ((s8 *) (data_02153740) + (0x3C98))) == 0) {
        return;
    }
    temp_r0 = (*(s32 *) ((s8 *) (temp_r4) + (0x1AC)));
    if ((temp_r0 == 0) || (temp_r0 == 1) || (temp_r0 == 4)) {
        func_020be13c(temp_r4 + 0x198);
    }
    temp_r0_2 = (*(s32 *) ((s8 *) (temp_r4) + (0x1CC)));
    if ((temp_r0_2 != 0) && (temp_r0_2 != 1) && (temp_r0_2 != 4)) {
        return;
    }
    func_020be13c(temp_r4 + 0x1B8);
}
