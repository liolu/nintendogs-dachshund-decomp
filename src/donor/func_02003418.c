/* compiler: 2.0/sp1p5  */
/* VBlankIntr from projets/blue-dragon-awakened-shadow/src/auto/VBlankIntr.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_027c0000;
void func_02003418(void) {
    (*(s32 *) ((s8 *) (&data_027c0000) + (0x3FF8))) = (s32) ((*(s32 *) ((s8 *) (&data_027c0000) + (0x3FF8))) | 1);
}
