/* compiler: 1.2/sp2p3  */
/* func_020ba0a8 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020ba0a8.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207d0e0(M2C_UNK, s32, s32, s32);
extern void *data_02153740;
void func_020ba0a8(void *arg0) {
    if (!((*(s32 *) ((s8 *) (data_02153740) + (0x34E0))) & 0x10000000)) {
        return;
    }
    func_0207d0e0(0x23, (*(s32 *) ((s8 *) (data_02153740) + (0x34B8))), (*(s32 *) ((s8 *) (arg0) + (0x14))),
                  (*(s32 *) ((s8 *) (arg0) + (0x1C))));
    func_0207d0e0(0x1E, 0x1C0, (*(s32 *) ((s8 *) (arg0) + (0x10))), 0x40);
    (*(s32 *) ((s8 *) (arg0) + (0))) = 0;
}
