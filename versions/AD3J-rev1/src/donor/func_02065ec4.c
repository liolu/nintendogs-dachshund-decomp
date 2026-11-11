/* compiler: 2.0/sp1p5  */
/* WmCheckParentParameter from projets/blue-dragon-awakened-shadow/src/auto/WmCheckParentParameter.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
s32 func_02065ec4(void *arg0) {
    u16 temp_r0;
    u16 temp_r1;

    if ((u32) (*(u16 *) ((s8 *) (arg0) + (4))) > 0x70U) {
        return 0;
    }
    temp_r1 = (*(u16 *) ((s8 *) (arg0) + (0x18)));
    if (((u32) temp_r1 < 0xAU) || ((u32) temp_r1 > 0x3E8U)) {
        return 0;
    }
    temp_r0 = (*(u16 *) ((s8 *) (arg0) + (0x32)));
    if (((u32) temp_r0 < 1U) || ((u32) temp_r0 > 0xEU)) {
        return 0;
    }
    return 1;
}
