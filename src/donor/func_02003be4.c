/* compiler: 1.2/sp2p3  */
/* func_02003b9c from projets/nintendogs-chihuahua-friends/src/auto/func_02003b9c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_0214a878;
extern M2C_UNK func_02005c20;
void func_02003be4(s16 arg0) {
    (*(s16 *) ((s8 *) (&data_0214a878) + (0)))         = 0;
    (*(s16 *) ((s8 *) (&data_0214a878) + (4)))         = 3;
    (*(s16 *) ((s8 *) (&data_0214a878) + (6)))         = 1;
    (*(s16 *) ((s8 *) (&data_0214a878) + (8)))         = 0;
    (*(s16 *) ((s8 *) (&data_0214a878) + (0xA)))       = arg0;
    (*(M2C_UNK **) ((s8 *) (&data_0214a878) + (0x10))) = &func_02005c20;
}
