/* compiler: 1.2/sp2p3  */
/* func_020f38bc from projets/nintendogs-dachshund/src/auto/func_020f38bc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020c9114(void);
void func_020c08b4(s32 arg0) {
    s16 var_r0;
    s32 temp_r0;

    temp_r0 = func_020c9114();
    if (temp_r0 < 0x3E8) {
        var_r0 = 0;
    } else if (temp_r0 < 0x1388) {
        var_r0 = 1;
    } else if (temp_r0 < 0x3A98) {
        var_r0 = 2;
    } else if (temp_r0 < 0xC350) {
        var_r0 = 3;
    } else {
        var_r0 = 4;
    }
    (*(s16 *) ((s8 *) (arg0) + (2))) = var_r0;
}
