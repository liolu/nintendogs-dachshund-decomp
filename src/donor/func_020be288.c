/* compiler: 1.2/sp2p3  */
/* func_020f11e4 from projets/nintendogs-dachshund/src/auto/func_020f11e4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b8f2c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_020b8f58(M2C_UNK, M2C_UNK);
void func_020be288(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5, u16 arg6) {
    (*(s32 *) ((s8 *) (arg0) + (0)))    = arg1;
    (*(s32 *) ((s8 *) (arg0) + (4)))    = arg2;
    (*(s16 *) ((s8 *) (arg0) + (8)))    = (s16) arg3;
    (*(s16 *) ((s8 *) (arg0) + (0xA)))  = arg4;
    (*(s16 *) ((s8 *) (arg0) + (0xC)))  = arg5;
    (*(u16 *) ((s8 *) (arg0) + (0xE)))  = arg6;
    (*(u16 *) ((s8 *) (arg0) + (0x10))) = 0U;
    (*(s32 *) ((s8 *) (arg0) + (0x14))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x1C))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x18))) = (s16) func_020b8f58(arg1, arg3);
    (*(s16 *) ((s8 *) (arg0) + (0x1A))) = (s16) func_020b8f2c(arg1, arg3);
    (*(u16 *) ((s8 *) (arg0) + (0x1E))) = (u16) (*(u16 *) ((s8 *) (arg0) + (0x10)));
}
