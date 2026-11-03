/* compiler: 1.2/sp2p3  */
/* func_020c454c from projets/nintendogs-dachshund/src/auto/func_020c454c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0210fe50(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *);
extern s32 func_02111cb4(u16, s32);
extern M2C_UNK func_020d6518;
extern M2C_UNK func_020d6524;
extern M2C_UNK func_020d6540;
extern M2C_UNK func_020d6574;
void func_020d61b0(void *arg0) {
    func_0210fe50(arg0, (*(s32 *) ((s8 *) (arg0) + (0xF8))), arg0 + 0xFC, arg0 + 0x108,
                  func_02111cb4((*(u16 *) ((s8 *) (arg0) + (0xA0))), (*(s32 *) ((s8 *) (arg0) + (0xF8)))), &func_020d6574, 0,
                  &func_020d6540, &func_020d6524, &func_020d6518);
}
