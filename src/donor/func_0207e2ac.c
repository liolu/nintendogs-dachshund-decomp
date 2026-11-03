/* compiler: 2.0/sp1p5  */
/* GetRegionOfMBlock from projets/blue-dragon-awakened-shadow/src/auto/GetRegionOfMBlock.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
void func_0207e2ac(s32 arg0, s32 arg1) {
    (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) (arg1 - (u16) (((s32) (*(u16 *) ((s8 *) (arg1) + (2))) >> 8) & 0x7F));
    (*(s32 *) ((s8 *) (arg0) + (4))) = (s32) ((*(s32 *) ((s8 *) (arg1) + (4))) + (arg1 + 0x10));
}
