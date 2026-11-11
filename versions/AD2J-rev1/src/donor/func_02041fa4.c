/* compiler: 1.2/sp2p3 -O4,s */
/* func_02041fa4 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_02041fa4.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020c2608();
extern s32 data_0214b484;
void func_02041fa4(void) {
    s16 var_r5;

    var_r5 = 0;
    do {
        if ((*(s32 *) ((s8 *) ((data_0214b484 + (var_r5 * 4))) + (0x44))) != 0) {
            func_020c2608();
        }
        var_r5 += 1;
    } while ((s32) var_r5 < 3);
}
