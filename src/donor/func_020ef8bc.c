/* compiler: 1.2/sp2p3  */
/* func_0208f034 from projets/nintendogs-dachshund/src/auto/func_0208f034.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020f0100(u8, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02130731;
extern M2C_UNK data_02154cb8;
s32 func_020ef8bc(M2C_UNK arg0, M2C_UNK arg1) {
    u8 temp_r0;

    temp_r0 = *((u8 *) ((s8 *) &data_02130731 + ((*(u16 *) ((s8 *) (&data_02154cb8) + (0x18))) * 6)));
    if (temp_r0 == 0xFF) {
        return -1;
    }
    return func_020f0100(temp_r0, arg0, arg1);
}
