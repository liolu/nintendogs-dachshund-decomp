/* compiler: 1.2/sp2p3  */
/* func_02062f4c from projets/children-of-mana/src/auto/func_02062f4c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0206521c(M2C_UNK, M2C_UNK);
extern void *func_0206533c();
extern s32 func_0206534c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_020654a0(M2C_UNK, M2C_UNK);
s32 func_02066510(M2C_UNK arg0, s16 arg1, s16 arg2, s16 arg3, u16 arg4) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r3;
    void *temp_r4;

    temp_r4 = func_0206533c();
    temp_r0 = func_0206521c(1, 2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020654a0(0x1E, arg0);
    temp_r3                             = (*(void **) ((s8 *) (temp_r4) + (0xC)));
    (*(s16 *) ((s8 *) (temp_r3) + (0))) = 0x1E;
    (*(s16 *) ((s8 *) (temp_r3) + (2))) = arg1;
    (*(s16 *) ((s8 *) (temp_r3) + (4))) = arg2;
    (*(s16 *) ((s8 *) (temp_r3) + (6))) = arg3;
    (*(u16 *) ((s8 *) (temp_r3) + (8))) = arg4;
    var_r0                              = func_0206534c(0x1E, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
