/* compiler: 1.2/sp2p3  */
/* func_0200eb1c from projets/nintendogs-chihuahua-friends/src/auto/func_0200eb1c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_020286ec(void *, M2C_UNK, M2C_UNK);
extern M2C_UNK func_0202f960(void *);
extern M2C_UNK func_02036fbc(void *, s32);
extern M2C_UNK func_02038edc();
void func_0200eb1c(void *arg0) {
    (*(u16 *) ((s8 *) (arg0) + (0x116))) = (u16) ((*(u16 *) ((s8 *) (arg0) + (0x116))) + 1);
    (*(s32 *) ((s8 *) (arg0) + (0x26C))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x270))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x274))) = 0;
    func_02038edc(arg0);
    func_02036fbc(arg0, 0x392);
    if (func_020286ec(arg0, 0, 1) != 0) {
        return;
    }
    if (((*(s8 *) ((s8 *) (arg0) + (0xB9))) != 0) && ((u32) (*(u16 *) ((s8 *) (arg0) + (0x116))) <= 0x64U)) {
        return;
    }
    func_0202f960(arg0);
}
