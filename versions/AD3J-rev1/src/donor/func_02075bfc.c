/* compiler: 1.2/sp2p3  */
/* func_0206baac from projets/children-of-mana/src/auto/func_0206baac.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020686f4(M2C_UNK *, M2C_UNK *);
extern M2C_UNK data_02150330;
extern M2C_UNK data_0215037c;
extern M2C_UNK data_02150430;
M2C_UNK *func_02075bfc(void) {
    if (!((*(s32 *) ((s8 *) (&data_02150330) + (0xFC))) & 8)) {
        func_020686f4(&data_0215037c, &data_02150430);
        (*(s32 *) ((s8 *) (&data_02150330) + (0xFC))) = (s32) ((*(s32 *) ((s8 *) (&data_02150330) + (0xFC))) | 8);
    }
    return &data_02150430;
}
