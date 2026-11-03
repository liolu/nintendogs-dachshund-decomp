/* compiler: 1.2/sp2p3  */
/* func_0205b588 from projets/madagascar/src/auto/func_0205b588.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_0208b57c(void *, s32, M2C_UNK);
extern s32 func_0208b5e8(void *, M2C_UNK, u32);
extern void *data_0214fd54;
s32 func_02072e90(u32 arg0, M2C_UNK arg1, u32 arg2, s32 arg3) {
    u32 temp_r0;
    u32 var_r5;
    void *temp_r1;
    void *temp_r2;
    void *temp_r4;

    var_r5  = arg2;
    temp_r4 = data_0214fd54;
    temp_r2 = (*(void **) ((s8 *) (temp_r4) + (0x7C)));
    if (arg0 >= (u32) (*(u32 *) ((s8 *) (temp_r2) + (8)))) {
        return -1;
    }
    temp_r1 = temp_r2 + 0xC + (arg0 * 0x10);
    temp_r0 = (*(s32 *) ((s8 *) (temp_r1) + (4))) - arg3;
    if (var_r5 > temp_r0) {
        var_r5 = temp_r0;
    }
    if (func_0208b57c(temp_r4 + 0x30, (*(s32 *) ((s8 *) (temp_r1) + (0))) + arg3, 0) == 0) {
        return -1;
    }
    return func_0208b5e8(temp_r4 + 0x30, arg1, var_r5);
}
