/* compiler: 1.2/sp2p3  */
/* func_0202f8b8 from projets/nintendogs-chihuahua-friends/src/auto/func_0202f8b8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
extern s32 data_0214b484;
s32 func_0202f8b8(void *arg0) {
    s32 var_ip;
    s32 var_r0;

    var_ip = 0;
loop_1:
    if (var_ip != (*(s8 *) ((s8 *) (arg0) + (0x88)))) {
        if ((var_ip < 0) || (var_ip >= 3)) {
            var_r0 = 0;
        } else {
            var_r0 = (*(s32 *) ((s8 *) ((data_0214b484 + (var_ip * 4))) + (0x50)));
        }
        if (var_r0 != 0) {
            return var_r0;
        }
        goto block_8;
    }
block_8:
    var_ip = (s32) (s16) (var_ip + 1);
    if (var_ip >= 3) {
        return 0;
    }
    goto loop_1;
}
