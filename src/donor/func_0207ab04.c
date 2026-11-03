/* compiler: 1.2/sp2p3  */
/* func_02070eec from projets/children-of-mana/src/auto/func_02070eec.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0207ac10(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0207ab04(s32 arg0, s32 arg1, s32 arg2) {
    func_0207ac10((*(s32 *) ((s8 *) (arg1) + (8))), (s32) (u16) arg2, (s32) (*(s32 *) ((s8 *) (arg1) + (0))) >> 0xC, arg0);
    (*(s32 *) ((s8 *) (arg0) + (0x10))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x10))) & ~0xC0000000);
    (*(s32 *) ((s8 *) (arg0) + (0x10))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x10))) | 0x40000000);
    (*(s32 *) ((s8 *) (arg0) + (0)))    = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) | 8);
}
