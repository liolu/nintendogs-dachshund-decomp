/* compiler: 1.2/sp2p3  */
/* func_0210557c from projets/nintendogs-dachshund/src/auto/func_0210557c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02107ca4(void *, M2C_UNK);
extern M2C_UNK func_020d91e4;
extern M2C_UNK func_020d9324;
extern M2C_UNK func_020e0fd4;
void func_020e14b0(void *arg0, M2C_UNK arg1) {
    func_02107ca4(arg0, 3);
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F4))) = &func_020d91e4;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F8))) = &func_020e0fd4;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F0))) = &func_020d9324;
    (*(s32 *) ((s8 *) (arg0) + (0x214)))      = func_02003844(arg1, 2);
    (*(s32 *) ((s8 *) (arg0) + (0xF8)))       = 0x802;
    (*(s32 *) ((s8 *) (arg0) + (0x120)))      = 0x802;
    (*(s32 *) ((s8 *) (arg0) + (0x128)))      = 0x802;
    (*(s32 *) ((s8 *) (arg0) + (0x124)))      = 0x333;
    (*(s32 *) ((s8 *) (arg0) + (0x12C)))      = 1;
    (*(s32 *) ((s8 *) (arg0) + (0xAC)))       = 0x2BC;
    (*(u16 *) ((s8 *) (arg0) + (0x20)))       = (u16) ((*(u16 *) ((s8 *) (arg0) + (0x20))) | 8);
    (*(s16 *) ((s8 *) (arg0) + (0x84)))       = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x86)))       = 0;
}
