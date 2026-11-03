/* compiler: 2.0/sp1p5  */
/* func_02007290 from projets/nintendogs-chihuahua-friends/src/auto/func_02007290.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
s32 func_02007290(void *arg0) {
    u32 temp_r0;
    u32 temp_r1;

    if ((u32) (*(u32 *) ((s8 *) (arg0) + (0))) >= 0x64U) {
        return 0;
    }
    temp_r1 = (*(u32 *) ((s8 *) (arg0) + (4)));
    if ((temp_r1 < 1U) || (temp_r1 > 0xCU)) {
        return 0;
    }
    temp_r0 = (*(u32 *) ((s8 *) (arg0) + (8)));
    if ((temp_r0 < 1U) || (temp_r0 > 0x1FU)) {
        return 0;
    }
    return 1;
}
