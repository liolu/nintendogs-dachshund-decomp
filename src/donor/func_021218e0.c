/* compiler: 1.2/sp2p3  */
/* func_020c1fa4 from projets/nintendogs-dachshund/src/auto/func_020c1fa4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02108160(M2C_UNK);
extern void func_02118e50(M2C_UNK);
extern void func_02118e5c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_021218e0(s32 arg0) {
    func_02118e5c(arg0, 2, -1, 0);
    func_02118e50(arg0);
    func_02108160(1);
    (*(s32 *) ((s8 *) (arg0) + (0x6C))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x64))) = 0;
}
