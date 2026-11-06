/* compiler: 1.2/sp2p3  */
/* func_02003d1c from projets/nintendogs-chihuahua-friends/src/auto/func_02003d1c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_0214a79c;
extern M2C_UNK func_02005c20;
void func_02003d1c(s16 arg0) {
    (*(s16 *) ((s8 *) (&data_0214a79c) + (0)))         = 0;
    (*(s16 *) ((s8 *) (&data_0214a79c) + (4)))         = 1;
    (*(s16 *) ((s8 *) (&data_0214a79c) + (8)))         = 0;
    (*(s16 *) ((s8 *) (&data_0214a79c) + (0xA)))       = arg0;
    (*(M2C_UNK **) ((s8 *) (&data_0214a79c) + (0x10))) = &func_02005c20;
    (*(s16 *) ((s8 *) (&data_0214a79c) + (0xE)))       = 0;
}
