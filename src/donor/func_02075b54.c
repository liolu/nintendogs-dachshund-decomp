/* compiler: 1.2/sp2p3  */
/* func_0206b9c0 from projets/children-of-mana/src/auto/func_0206b9c0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02075b98(s32);
extern M2C_UNK data_02150330;
extern M2C_UNK data_02150460;
M2C_UNK *func_02075b54(void) {
    s32 temp_r0;

    temp_r0 = (*(s32 *) ((s8 *) (&data_02150330) + (0xFC))) & 0x80;
    if (temp_r0 == 0) {
        func_02075b98(temp_r0);
        (*(s32 *) ((s8 *) (&data_02150330) + (0xFC))) = (s32) ((*(s32 *) ((s8 *) (&data_02150330) + (0xFC))) | 0x80);
    }
    return &data_02150460;
}
