/* compiler: 1.2/sp2p3  */
/* func_020b892c from projets/nintendogs-dachshund/src/auto/func_020b892c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0211a6a0(M2C_UNK);
extern void func_0211a6b0(M2C_UNK, M2C_UNK);
extern s32 data_02149084;
void func_02118208(s32 arg0) {
    (*(s16 *) ((s8 *) (arg0) + (0))) = 2;
    func_0211a6b0(arg0 + 0x2C, (*(s32 *) ((s8 *) (arg0) + (0x68))));
    func_0211a6a0(arg0 + 0x2C);
    (*(s32 *) ((s8 *) (arg0) + (0x6C))) = (s32) data_02149084;
}
