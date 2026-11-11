/* compiler: 1.2/sp2p3  */
/* func_020c1fa4 from projets/nintendogs-dachshund/src/auto/func_020c1fa4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02108158(M2C_UNK);
extern void func_02118e48(M2C_UNK);
extern void func_02118e54(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_021218d8(s32 arg0) {
    func_02118e54(arg0, 2, -1, 0);
    func_02118e48(arg0);
    func_02108158(1);
    (*(s32 *) ((s8 *) (arg0) + (0x6C))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x64))) = 0;
}
