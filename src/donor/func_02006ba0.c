/* compiler: 1.2/sp2p3  */
/* func_02006ba0 from projets/nintendogs-chihuahua-friends/src/auto/func_02006ba0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02074ed0(s32, u16, M2C_UNK, M2C_UNK, s32, s32, s32);
void func_02006ba0(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, u16 arg4, s32 arg5) {
    u16 temp_r5;

    temp_r5 = (*(u16 *) ((s8 *) (arg0) + (2)));
    (*(u16 *) ((s8 *) (arg0) + (2))) =
        (u16) ((*(u16 *) ((s8 *) (arg0) + (2))) + func_02074ed0((*(s32 *) ((s8 *) (arg0) + (4))) + (temp_r5 * 8),
                                                                (u16) ((*(u16 *) ((s8 *) (arg0) + (0))) - temp_r5), arg1, arg2,
                                                                arg3, (s32) arg4, arg5));
}
