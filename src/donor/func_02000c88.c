/* compiler: 2.0/sp1p5  */
/* CTRDGi_ChangeLatestAccessCycle from projets/blue-dragon-awakened-shadow/src/auto/CTRDGi_ChangeLatestAccessCycle.c (same code
 * in another game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
void func_02000c88(void *arg0) {
    (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) ((s32) (*(u16 *) 0x04000204 & 0xC) >> 2);
    (*(s32 *) ((s8 *) (arg0) + (4))) = (s32) ((s32) (*(u16 *) 0x04000204 & 0x10) >> 4);
    *(u16 *) 0x04000204              = (*(u16 *) 0x04000204 & ~0xC) | 0xC;
    *(u16 *) 0x04000204 &= ~0x10;
}
