/* compiler: 1.2/sp2p3  */
/* func_020c9f94 from projets/nintendogs-dachshund/src/auto/func_020c9f94.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02006518(M2C_UNK);
extern void func_020c4960(M2C_UNK);
extern void func_020c4f2c(M2C_UNK, M2C_UNK);
void func_020c4990(s32 arg0, s32 arg1) {
    func_020c4f2c(arg0, 2);
    (*(void (**)(s32))((s8 *) (arg0) + (0x14))) = func_020c4960;
    (*(s32 *) ((s8 *) (arg0) + (0x18)))         = 0;
    func_02006518(arg0 + 0x1C);
    (*(s32 *) ((s8 *) (arg0) + (0x24))) = arg1;
    (*(s16 *) ((s8 *) (arg0) + (0x28))) = 0x7FFF;
    (*(s16 *) ((s8 *) (arg0) + (0x2A))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x2C))) = -0x1000;
    (*(s16 *) ((s8 *) (arg0) + (0x2E))) = 0;
}
