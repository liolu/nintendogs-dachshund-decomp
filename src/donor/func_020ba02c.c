/* compiler: 1.2/sp2p3  */
/* func_020ba02c from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020ba02c.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207d0e0(M2C_UNK, M2C_UNK, s32, s32);
extern void *data_02153740;
s32 func_020ba02c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r2;

    temp_r0_2 = (*(s32 *) ((s8 *) (arg0) + (0x10)));
    if (temp_r0_2 == 0) {
        return temp_r0_2;
    }
    temp_r2 = (*(s32 *) ((s8 *) (arg0) + (0x14)));
    if (temp_r2 == 0) {
        return temp_r0_2;
    }
    temp_r0 = (*(s32 *) ((s8 *) (data_02153740) + (0x34E0))) & 1;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    func_0207d0e0(0x23, 0, temp_r2, (*(s32 *) ((s8 *) (arg0) + (0x1C))));
    func_0207d0e0(0x1E, 0, (*(s32 *) ((s8 *) (arg0) + (0x10))), 0x1C0);
    (*(s32 *) ((s8 *) (arg0) + (0))) = 0;
    return 0;
}
