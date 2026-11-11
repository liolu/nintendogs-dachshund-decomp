/* compiler: 1.2/sp2p3  */
/* func_020c2a5c from projets/nintendogs-dachshund/src/auto/func_020c2a5c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02003844(s32 *, M2C_UNK);
extern void func_02121ff0(M2C_UNK);
extern void func_02122104(s32);
extern M2C_UNK func_02107c9c();
extern M2C_UNK func_0212236c;
void func_02122390(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;

    func_02107c9c(arg0, (s16) arg2);
    (*(void (**)(s32))((s8 *) (arg0) + (0x1F4))) = func_02122104;
    (*(void (**)(s32))((s8 *) (arg0) + (0x1F8))) = func_02121ff0;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F0)))    = &func_0212236c;
    (*(s32 *) ((s8 *) (arg0) + (0x214)))         = func_02003844((s32 *) arg1, 4);
    temp_r1                                      = (*(s32 *) ((s8 *) (arg0) + (0x214)));
    if (temp_r1 != 0) {
        *(M2C_UNK *) temp_r1 = 0;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x24)))  = 0x800;
    (*(s32 *) ((s8 *) (arg0) + (0x28)))  = 0x800;
    (*(s32 *) ((s8 *) (arg0) + (0x2C)))  = 0x800;
    (*(s32 *) ((s8 *) (arg0) + (0x124))) = 0x28F;
    (*(s32 *) ((s8 *) (arg0) + (0xAC)))  = 0x4B0;
    (*(s32 *) ((s8 *) (arg0) + (0xF8)))  = 0x5EC;
    (*(s32 *) ((s8 *) (arg0) + (0x120))) = 0x5EC;
    (*(s32 *) ((s8 *) (arg0) + (0x128))) = 0x5EC;
    (*(s32 *) ((s8 *) (arg0) + (0x12C))) = 1;
}
