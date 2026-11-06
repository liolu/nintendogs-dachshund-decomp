/* compiler: 1.2/sp2p3  */
/* func_020ec220 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020ec220.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020ec298();
extern M2C_UNK func_020edb54(M2C_UNK);
extern M2C_UNK data_02154dd8;
s32 func_020ec218(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_020ec298();
    if (temp_r0 != -1) {
        (*(s32 *) ((s8 *) ((arg0 + (temp_r0 * 4))) + (0x28))) = arg2;
        (*(u16 *) ((s8 *) (arg0) + (0x26)))                   = (u16) ((*(u16 *) ((s8 *) (arg0) + (0x26))) | (1 << temp_r0));
    }
    if (((*(s32 *) ((s8 *) (&data_02154dd8) + (4))) == 0) && ((*(u16 *) ((s8 *) (arg0) + (0x24))) == 0x4B) && (arg1 == 0)) {
        func_020edb54(0x7A);
    }
    return temp_r0;
}
