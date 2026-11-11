/* compiler: 1.2/sp2p3  */
/* func_020abba0 from projets/eyeshield-21/src/auto/func_020abba0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffe490(s32, s32 *, M2C_UNK);
extern M2C_UNK data_02150330;
extern s32 data_02150334;
extern s32 data_0215037c;
extern s32 data_021503ac;
void func_02075dfc(void) {
    s32 sp0;
    s32 temp_r1;

    func_01ffe490(0x1610, &data_02150334, 0x11);
    func_01ffe490(0x19, &data_0215037c, 0xC);
    sp0 = 2;
    func_01ffe490(0x10, &sp0, 1);
    func_01ffe490(0x15, &data_021503ac, 0x20);
    temp_r1                                       = (*(s32 *) ((s8 *) (&data_02150330) + (0xFC))) & ~1;
    (*(s32 *) ((s8 *) (&data_02150330) + (0xFC))) = temp_r1;
    (*(s32 *) ((s8 *) (&data_02150330) + (0xFC))) = (s32) (temp_r1 | 2);
}
