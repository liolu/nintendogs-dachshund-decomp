/* compiler: 1.2/sp2p3  */
/* func_020a796c from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020a796c.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020aeb78();
extern s32 func_020b86c0(M2C_UNK, u8, u8);
extern M2C_UNK data_0214b024;
extern void *data_02153740;
void func_020a796c(void) {
    if ((*(s32 *) ((s8 *) (data_02153740) + (0x34D0))) == 0) {
        return;
    }
    if (!((*(u16 *) ((s8 *) (&data_0214b024) + (2))) & 2)) {
        return;
    }
    if (func_020b86c0(2, (*(u8 *) ((s8 *) (&data_0214b024) + (0))), (*(u8 *) ((s8 *) (&data_0214b024) + (1)))) != 0) {
        return;
    }
    func_020aeb78();
}
