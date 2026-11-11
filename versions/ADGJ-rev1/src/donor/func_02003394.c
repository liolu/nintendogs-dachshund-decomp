/* compiler: 1.2/sp2p3  */
/* func_02003394 from projets/nintendogs-chihuahua-friends/src/auto/func_02003394.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_0214a79c;
extern M2C_UNK data_0214a878;
extern M2C_UNK data_0214b158;
extern M2C_UNK data_027c0000;
void func_02003394(void) {
    u16 temp_r4;

    temp_r4 = *(u16 *) 0x04000006;
    if ((*(M2C_UNK(**)(M2C_UNK *, u16))((s8 *) (&data_0214a878) + (0x14))) != ((void *) 0)) {
        (*(M2C_UNK(**)(M2C_UNK *, u16))((s8 *) (&data_0214a878) + (0x14)))(&data_0214a878, temp_r4);
    }
    if ((*(M2C_UNK(**)(M2C_UNK *, u16))((s8 *) (&data_0214a79c) + (0x14))) != ((void *) 0)) {
        (*(M2C_UNK(**)(M2C_UNK *, u16))((s8 *) (&data_0214a79c) + (0x14)))(&data_0214a79c, temp_r4);
    }
    if ((*(M2C_UNK(**)(M2C_UNK *, u16))((s8 *) (&data_0214b158) + (0x10))) != ((void *) 0)) {
        (*(M2C_UNK(**)(M2C_UNK *, u16))((s8 *) (&data_0214b158) + (0x10)))(&data_0214b158, temp_r4);
    }
    (*(s32 *) ((s8 *) (&data_027c0000) + (0x3FF8))) = (s32) ((*(s32 *) ((s8 *) (&data_027c0000) + (0x3FF8))) | 2);
}
