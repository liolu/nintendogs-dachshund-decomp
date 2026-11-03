/* compiler: 1.2/sp2p3  */
/* func_020c454c from projets/nintendogs-dachshund/src/auto/func_020c454c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0210fe50(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *);
extern s32 func_02111cb4(u16, s32);
extern M2C_UNK func_0210c96c;
extern M2C_UNK func_0210ca34;
extern M2C_UNK func_0210cac4;
extern M2C_UNK func_0210cb74;
void func_0210c230(void *arg0) {
    func_0210fe50(arg0, (*(s32 *) ((s8 *) (arg0) + (0xF8))), arg0 + 0xFC, arg0 + 0x108,
                  func_02111cb4((*(u16 *) ((s8 *) (arg0) + (0xA0))), (*(s32 *) ((s8 *) (arg0) + (0xF8)))), &func_0210cb74, 0,
                  &func_0210cac4, &func_0210ca34, &func_0210c96c);
}
