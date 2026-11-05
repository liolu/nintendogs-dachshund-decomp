/* compiler: 1.2/sp2p3  */
/* func_02039764 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_02039764.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern s32 func_021060d4();
extern void *data_0214b484;
s32 func_02039764(void *arg0) {
    s32 var_r5;
    s8 temp_r4;

    temp_r4 = (*(s8 *) ((s8 *) (arg0) + (0x88)));
    var_r5  = 1;
    if ((temp_r4 != func_021060d4()) && (temp_r4 != (*(s8 *) ((s8 *) (data_0214b484) + (0xC))))) {
        var_r5 = 0;
    }
    return var_r5;
}
