/* compiler: 1.2/sp2p3  */
/* func_02088ee4 from projets/nintendogs-dachshund/src/auto/func_02088ee4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0206e124(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020f9dbc(void);
extern s32 data_02154cb4;
extern M2C_UNK data_02154cb8;
void func_020e9804(void) {
    s32 temp_r4;

    temp_r4 = data_02154cb4;
    func_0206e124(temp_r4, 0, 0x4E30);
    (*(s16 *) ((s8 *) (temp_r4) + (0x4E30)))      = 0;
    (*(s32 *) ((s8 *) (&data_02154cb8) + (0x28))) = 0;
    (*(s32 *) ((s8 *) (&data_02154cb8) + (0x2C))) = 0;
    (*(s32 *) ((s8 *) (&data_02154cb8) + (0x34))) = 1;
    func_020f9dbc();
}
