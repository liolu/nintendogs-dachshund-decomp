/* compiler: 1.2/sp2p3  */
/* func_020c7b00 from projets/nintendogs-dachshund/src/auto/func_020c7b00.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffeaf8();
extern s32 func_020037ec();
extern M2C_UNK func_0208b5f8();
extern s32 func_0208b744();
extern M2C_UNK func_020c1d00();
s32 func_020c2558(void *arg0, s16 arg1, s16 arg2) {
    u8 sp0[64];
    s32 temp_r0;
    s32 temp_r8;
    s32 var_r7;

    var_r7 = 0;
    func_020c1d00(sp0, 0x40, arg1, arg2);
    if (func_0208b744(arg0 + 4, sp0) != 0) {
        temp_r8 = (*(s32 *) ((s8 *) (arg0) + (0x28))) - (*(s32 *) ((s8 *) (arg0) + (0x24)));
        temp_r0 = func_020037ec((*(s32 *) ((s8 *) (arg0) + (0x6C))), ((temp_r8 + 0xF) & ~0xF) + 0x60, 0x10);
        func_0208b5f8(arg0 + 4, temp_r0 + 0x60, temp_r8);
        (*(s32 *) ((s8 *) (arg0) + (0x84))) = temp_r0;
        (*(s16 *) ((s8 *) (arg0) + (0x7A))) = arg1;
        (*(s16 *) ((s8 *) (arg0) + (0x7C))) = arg2;
        (*(s16 *) ((s8 *) (arg0) + (0)))    = 1;
        func_01ffeaf8(arg0, 0, 0);
        var_r7 = 1;
    }
    return var_r7;
}
