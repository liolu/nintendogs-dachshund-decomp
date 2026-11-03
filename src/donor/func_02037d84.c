/* compiler: 2.0/sp1p5  */
/* func_02037d84 from projets/nintendogs-chihuahua-friends/src/auto/func_02037d84.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_02037d84(void *arg0) {
    s32 temp_r1;
    s32 var_r0;

    temp_r1 = (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0x9E4)))) + (0xC)));
    if (temp_r1 < 0xCCD) {
        var_r0 = 0;
    } else if (temp_r1 <= 0x119A) {
        var_r0 = 1;
    } else {
        var_r0 = 2;
    }
    switch (var_r0) {
        case 0:
            return 0x16;
        default:
        case 1:
            return 0x15;
        case 2:
            return 0x14;
    }
}
