/* compiler: 1.2/sp2p3 */
/* func_020fa378 from projets/nintendogs-dachshund/src/auto/func_020fa378.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0210fe50(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *);
extern s32 func_02111cb4(u16, s32);
extern M2C_UNK func_02112638(void *, s32, s32, s32, s32, s32, s32);
extern M2C_UNK func_020dec68(void *);
extern M2C_UNK func_020ded34;
extern M2C_UNK func_020ded40;
extern M2C_UNK func_020ded5c;
extern M2C_UNK func_020ded90;
void func_020deba0(void *arg0) {
    void *temp_r3;

    temp_r3 = *(*(void ***) ((s8 *) (arg0) + (0x214)));
    func_02112638(arg0, (*(s32 *) ((s8 *) (temp_r3) + (0x48))), (*(s32 *) ((s8 *) (temp_r3) + (0x4C))),
                  (*(s32 *) ((s8 *) (temp_r3) + (0x50))), (*(s32 *) ((s8 *) (temp_r3) + (0x54))),
                  (*(s32 *) ((s8 *) (temp_r3) + (0x58))), 4);
    func_020dec68(arg0);
    func_0210fe50(arg0, (*(s32 *) ((s8 *) (arg0) + (0xF8))), arg0 + 0xFC, arg0 + 0x108,
                  func_02111cb4((*(u16 *) ((s8 *) (arg0) + (0xA0))), (*(s32 *) ((s8 *) (arg0) + (0xF8)))), &func_020ded90, 0,
                  &func_020ded5c, &func_020ded40, &func_020ded34);
}
