/* compiler: 1.2/sp2p3  */
/* func_02061868 from projets/children-of-mana/src/auto/func_02061868.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_0206521c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void *func_0206533c();
extern s32 func_0206534c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_020654a0(M2C_UNK, M2C_UNK);
s32 func_02065d78(M2C_UNK arg0, void *arg1) {
    s32 temp_r0;
    s32 var_r0;
    u16 temp_r0_2;
    void *temp_r3;

    temp_r0 = func_0206521c(3, 2, 3, 5);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 == ((void *) 0)) {
        return 6;
    }
    if ((*(s32 *) ((s8 *) (arg1) + (0))) == 0) {
        return 6;
    }
    temp_r0_2 = (*(u16 *) ((s8 *) (arg1) + (4)));
    if (((u32) temp_r0_2 < 1U) || ((u32) temp_r0_2 > 0xEU)) {
        return 6;
    }
    func_020654a0(0xA, arg0);
    temp_r3                              = (*(void **) ((s8 *) (func_0206533c()) + (0xC)));
    (*(s16 *) ((s8 *) (temp_r3) + (0)))  = 0xA;
    (*(u16 *) ((s8 *) (temp_r3) + (2)))  = (u16) (*(u16 *) ((s8 *) (arg1) + (4)));
    (*(s32 *) ((s8 *) (temp_r3) + (4)))  = (s32) (*(s32 *) ((s8 *) (arg1) + (0)));
    (*(u16 *) ((s8 *) (temp_r3) + (8)))  = (u16) (*(u16 *) ((s8 *) (arg1) + (6)));
    (*(u8 *) ((s8 *) (temp_r3) + (0xA))) = (u8) (*(u8 *) ((s8 *) (arg1) + (8)));
    (*(u8 *) ((s8 *) (temp_r3) + (0xB))) = (u8) (*(u8 *) ((s8 *) (arg1) + (9)));
    (*(u8 *) ((s8 *) (temp_r3) + (0xC))) = (u8) (*(u8 *) ((s8 *) (arg1) + (0xA)));
    (*(u8 *) ((s8 *) (temp_r3) + (0xD))) = (u8) (*(u8 *) ((s8 *) (arg1) + (0xB)));
    (*(u8 *) ((s8 *) (temp_r3) + (0xE))) = (u8) (*(u8 *) ((s8 *) (arg1) + (0xC)));
    (*(u8 *) ((s8 *) (temp_r3) + (0xF))) = (u8) (*(u8 *) ((s8 *) (arg1) + (0xD)));
    var_r0                               = func_0206534c(0xA, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
