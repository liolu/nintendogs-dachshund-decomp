/* compiler: 1.2/sp2p3  */
/* func_020b88b4 from projets/nintendogs-dachshund/src/auto/func_020b88b4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02119cb0(M2C_UNK, M2C_UNK);
extern void func_02119ce4(M2C_UNK);
extern void func_0211a6a0(M2C_UNK);
extern void func_0211a6b0(M2C_UNK, M2C_UNK);
extern void func_0211a6b8(M2C_UNK);
extern M2C_UNK func_020c2224(M2C_UNK);
extern M2C_UNK data_02149088;
extern M2C_UNK data_02149094;
void func_02118190(s32 arg0, s32 arg1) {
    (*(s16 *) ((s8 *) (arg1) + (0x24))) = 1;
    (*(s16 *) ((s8 *) (arg0) + (0)))    = 0;
    func_0211a6b8(arg0 + 0x2C);
    (*(s32 *) ((s8 *) (arg0) + (0x64))) = func_020c2224((s32) &data_02149088);
    (*(s32 *) ((s8 *) (arg0) + (0x68))) = func_020c2224((s32) &data_02149094);
    func_0211a6b0(arg0 + 0x2C, (*(s32 *) ((s8 *) (arg0) + (0x64))));
    func_0211a6a0(arg0 + 0x2C);
    func_02119ce4(arg0 + 0x2C);
    func_02119cb0(arg0 + 0x2C, arg0 + 4);
    (*(s32 *) ((s8 *) (arg0) + (0x6C))) = 0;
}
