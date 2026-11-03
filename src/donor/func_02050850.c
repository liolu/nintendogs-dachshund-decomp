/* compiler: 1.2/sp2p3  */
/* func_02050850 from projets/nintendogs-chihuahua-friends/src/auto/func_02050850.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern s32 func_0202785c(void *, s32);
extern s32 func_0202ded8(void *);
extern s32 func_020360a0();
extern s32 func_02050910(void *, s32);
extern s32 func_02050c0c(void *, s32);
s32 func_02050850(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = func_020360a0();
    if (temp_r0 == 0) {
        return 0;
    }
    if (func_0202ded8(arg0) != 0) {
        (*(s32 *) ((s8 *) (arg0) + (0x4A8))) = 1;
        return func_02050910(arg0, temp_r0);
    }
    temp_r0_2 = func_0202785c(arg0, temp_r0);
    switch (temp_r0_2) {
        case 1:
        case 2:
            (*(s32 *) ((s8 *) (arg0) + (0x4A8))) = temp_r0_2;
            return func_02050c0c(arg0, temp_r0);
        case 0:
            (*(s32 *) ((s8 *) (arg0) + (0x4A8))) = temp_r0_2;
            return func_02050910(arg0, temp_r0);
        default:
            return 0;
    }
}
