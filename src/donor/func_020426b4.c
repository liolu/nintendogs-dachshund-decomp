/* compiler: 1.2/sp2p3  */
/* func_020426b4 from projets/nintendogs-chihuahua-friends/src/auto/func_020426b4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_0214b484;
s32 func_020426b4(void) {
    s32 var_r0;

    var_r0 = 0;
    if ((*(s8 *) ((s8 *) (data_0214b484) + (0xE))) == -1) {
        return 0;
    }
    if ((*(s32 *) ((s8 *) (data_0214b484) + (0x40))) == 1) {
        var_r0 = 1;
    }
    return var_r0;
}
