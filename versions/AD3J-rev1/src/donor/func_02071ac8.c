/* compiler: 1.2/sp2p3  */
/* func_0205a530 from projets/madagascar/src/auto/func_0205a530.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02074c3c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_02074c6c(M2C_UNK);
void func_02071ac8(s32 arg0) {
    (*(s8 *) ((s8 *) (arg0) + (0x2E)))  = 0;
    (*(s8 *) ((s8 *) (arg0) + (0x2D)))  = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x34))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x3E))) = 0;
    (*(s8 *) ((s8 *) (arg0) + (0x40)))  = 0x7F;
    (*(s8 *) ((s8 *) (arg0) + (0x41)))  = 0x7F;
    func_02074c6c(arg0 + 0x1C);
    func_02074c3c(arg0 + 0x1C, 0x7F00, 1);
}
