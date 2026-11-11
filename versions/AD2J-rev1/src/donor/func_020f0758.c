/* compiler: 1.2/sp2p3  */
/* func_0208ff28 from projets/nintendogs-dachshund/src/auto/func_0208ff28.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020722b0(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020ee5e0(M2C_UNK, M2C_UNK);
extern M2C_UNK data_02154cb8;
extern M2C_UNK data_02154dd8;
void func_020f0758(s32 arg0, s32 arg1) {
    if ((arg0 == 0x43) && ((*(u16 *) ((s8 *) (&data_02154cb8) + (0x18))) == 0x1E)) {
        func_020ee5e0(0x64, 0x3C);
        (*(s16 *) ((s8 *) (&data_02154dd8) + (0x10))) = 0x64;
    }
    func_020722b0(0x13, arg0, arg1);
}
