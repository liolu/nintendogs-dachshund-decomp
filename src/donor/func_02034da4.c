/* compiler: 1.2/sp2p3  */
/* func_02034da4 from projets/nintendogs-chihuahua-friends/src/auto/func_02034da4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02034e04();
extern s32 data_0214b484;
void func_02034da4(void) {
    s32 var_r0;
    s32 var_r6;

    var_r6 = 0;
    do {
        if ((var_r6 < 0) || (var_r6 >= 3)) {
            var_r0 = 0;
        } else {
            var_r0 = (*(s32 *) ((s8 *) ((data_0214b484 + (var_r6 * 4))) + (0x50)));
        }
        if (var_r0 != 0) {
            func_02034e04();
        }
        var_r6 = (s32) (s8) (var_r6 + 1);
    } while (var_r6 < 3);
}
