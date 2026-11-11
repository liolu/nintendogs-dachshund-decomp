/* compiler: 2.0/sp1p5  */
/* func_0206b970 from projets/children-of-mana/src/auto/func_0206b970.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
s32 func_02075ac0(u8 *arg0, void *arg1) {
    u8 temp_r0;

    temp_r0 = *arg0;
    switch (temp_r0) {
        case 0x4D:
            return (((*(u8 *) ((s8 *) (arg1) + (0x18))) * 2) + 0x1C) & ~3;
        case 0x4A:
        case 0x56:
            return (((*(u8 *) ((s8 *) (arg1) + (0x17))) * 2) + 0x1C) & ~3;
        default:
            return 0;
    }
}
