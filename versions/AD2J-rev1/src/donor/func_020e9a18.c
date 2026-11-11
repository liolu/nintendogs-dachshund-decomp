/* compiler: 1.2/sp2p3  */
/* func_020890f8 from projets/nintendogs-dachshund/src/auto/func_020890f8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020ed7a8(M2C_UNK, M2C_UNK);
extern void func_020ee5e0(M2C_UNK, M2C_UNK);
extern void func_020ef590(M2C_UNK, M2C_UNK);
extern void func_020f0a34(M2C_UNK);
extern M2C_UNK data_02154cb8;
extern M2C_UNK data_02154dd8;
void func_020e9a18(void) {
    func_020ee5e0((s32) (*(u16 *) ((s8 *) (&data_02154dd8) + (0x10))), 0x3C);
    func_020ed7a8(0x64, 0x3C);
    func_020ef590(0x7F, 0x3C);
    func_020f0a34(0x3C);
    (*(s32 *) ((s8 *) (&data_02154cb8) + (0x1C))) = 0;
}
