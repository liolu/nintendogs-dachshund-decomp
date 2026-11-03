/* compiler: 1.2/sp2p3  */
/* func_0205d608 from projets/children-of-mana/src/auto/func_0205d608.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0206e488();
extern s32 func_0206e66c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0206e694(M2C_UNK, M2C_UNK *);
extern u16 data_0214a6a0;
extern M2C_UNK data_0214a6a4;
extern M2C_UNK func_02001908;
void func_02001878(void) {
    if (data_0214a6a0 != 0) {
        return;
    }
    data_0214a6a0 = 1;
    func_0206e488();
    (*(s16 *) ((s8 *) (&data_0214a6a4) + (0x32))) = 0;
    (*(s16 *) ((s8 *) (&data_0214a6a4) + (0x36))) = 0;
    (*(s16 *) ((s8 *) (&data_0214a6a4) + (0xC)))  = 0;
    (*(s32 *) ((s8 *) (&data_0214a6a4) + (0)))    = 0;
    (*(s32 *) ((s8 *) (&data_0214a6a4) + (0x10))) = 0;
    (*(s16 *) ((s8 *) (&data_0214a6a4) + (0x30))) = 0;
    (*(s16 *) ((s8 *) (&data_0214a6a4) + (0x34))) = 0;
    do {

    } while (func_0206e66c(6, 1) == 0);
    func_0206e694(6, &func_02001908);
}
