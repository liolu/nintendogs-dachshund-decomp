/* compiler: 1.2/sp2p3  */
/* func_02044388 from projets/nintendogs-chihuahua-friends/src/auto/func_02044388.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_0214b484;
s32 func_02044388(void) {
    s32 var_r0;
    s8 temp_r2;

    temp_r2 = (*(s8 *) ((s8 *) (data_0214b484) + (0xB)));
    if ((*(s8 *) ((s8 *) ((data_0214b484 + temp_r2)) + (0x16))) != 0) {
        var_r0 = (temp_r2 * 0x85C) + (s32) (data_0214b484 + 0x1A0);
    } else {
        var_r0 = 0;
    }
    return (*(s32 *) ((s8 *) (var_r0) + (0xC)));
}
