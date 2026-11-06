/* compiler: 1.2/sp2p3  */
/* func_020c454c from projets/nintendogs-dachshund/src/auto/func_020c454c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0210fe58(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *);
extern s32 func_02111cbc(u16, s32);
extern M2C_UNK func_020d12c0;
extern M2C_UNK func_020d12e0;
extern M2C_UNK func_020d12fc;
extern M2C_UNK func_020d1364;
void func_020d0ac4(void *arg0) {
    func_0210fe58(arg0, (*(s32 *) ((s8 *) (arg0) + (0xF8))), arg0 + 0xFC, arg0 + 0x108,
                  func_02111cbc((*(u16 *) ((s8 *) (arg0) + (0xA0))), (*(s32 *) ((s8 *) (arg0) + (0xF8)))), &func_020d1364, 0,
                  &func_020d12fc, &func_020d12e0, &func_020d12c0);
}
