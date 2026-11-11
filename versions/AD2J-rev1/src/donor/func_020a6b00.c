/* compiler: 1.2/sp2p3  */
/* func_020a6b00 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020a6b00.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b7f88(M2C_UNK, s16, s16);
extern void *data_02153740;
void func_020a6b00(void *arg0) {
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xBC))) != 0xB) {
        return;
    }
    func_020b7f88(0x14, (*(s16 *) ((s8 *) (arg0) + (0x888))), (*(s16 *) ((s8 *) (arg0) + (0x88A))));
}
