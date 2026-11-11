/* compiler: 2.0/sp1p5  */
/* func_02030d20 from projets/blue-dragon-awakened-shadow/src/auto/func_02030d20.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
void func_0207c688(void *arg0, void *arg1) {
    (*(s32 *) ((s8 *) (arg0) + (0)))    = (s32) (*(s32 *) ((s8 *) (arg1) + (0x18)));
    (*(s32 *) ((s8 *) (arg0) + (0x14))) = (s32) (*(s32 *) ((s8 *) (arg1) + (0x1C)));
    (*(s32 *) ((s8 *) (arg0) + (4)))    = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x30))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x34))) =
        (s32) ((0 - (*(u16 *) ((s8 *) (arg1) + (0x2E)))) * ((*(s32 *) ((s8 *) (arg1) + (0x1C))) - 0x1000) * 0x10);
    (*(s32 *) ((s8 *) (arg0) + (0x10))) = 0;
}
