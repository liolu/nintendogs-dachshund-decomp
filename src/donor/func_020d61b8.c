/* compiler: 1.2/sp2p3  */
/* func_020c454c from projets/nintendogs-dachshund/src/auto/func_020c454c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0210fe58(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *);
extern s32 func_02111cbc(u16, s32);
extern M2C_UNK func_020d6520;
extern M2C_UNK func_020d652c;
extern M2C_UNK func_020d6548;
extern M2C_UNK func_020d657c;
void func_020d61b8(void *arg0) {
    func_0210fe58(arg0, (*(s32 *) ((s8 *) (arg0) + (0xF8))), arg0 + 0xFC, arg0 + 0x108,
                  func_02111cbc((*(u16 *) ((s8 *) (arg0) + (0xA0))), (*(s32 *) ((s8 *) (arg0) + (0xF8)))), &func_020d657c, 0,
                  &func_020d6548, &func_020d652c, &func_020d6520);
}
